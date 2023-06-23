// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('H-Anim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('BoxMan3AnimationPanel.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe Williams and James Smith - james@vapourtech.com')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe Williams and Don Brutzman')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('.x3d to .x3d translation used BS Contact Geo 8.203')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('1 March 2001')),

            meta(
              name_ : SFString('revision'),
              content_ : SFString('12 January 2017')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('14 January 2017')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('6 January 2023')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManAnimationPanelInclined.png')),

            meta(
              name_ : SFString('MovingImage'),
              content_ : SFString('BoxManAnimationPanel.mp4')),

            meta(
              name_ : SFString('MovingImage'),
              content_ : SFString('https://www.youtube.com/watch?v=8tI83Rtg_DU')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://twitter.com/Web3DConsortium/status/820638047523913728')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://twitter.com/Web3DConsortium/status/820642726009978881')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/boxman.wrl')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BoxMan3.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models/HAnim2001/boxman')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.vapourtech.com/team/james/boxman.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim2001')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Nodes')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/X3dToVrml97.xslt')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('(C) 2000 James Smith - james@vapourtech.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.vapourtech.com')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('BoxMan HAnim 2.0')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3AnimationPanel.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("(C) 2000 James Smith - james@vapourtech.com"), SFString("http://www.vapourtech.com/team/james/boxman.wrl"), SFString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")]),
              title_ : SFString('BoxMan3 - A Seamless VRML Human')),

            Background(
              groundColor_ : MFColor([SFColor(0.6), SFColor(0.6), SFColor(0.6)]),
              skyColor_ : MFColor([SFColor(0.75), SFColor(0.75), SFColor(0.75)])),

            HAnimHumanoid(
              name_ : SFString('Humanoid'),
              DEF_ : SFString('boxman_Humanoid'),
              info_ : MFString([SFString("authorName=James Smith"), SFString("authorEmail=james@vapourtech.com"), SFString("copyright=(C) 2000 James Smith - james@vapourtech.com"), SFString("humanoidVersion=1.0")]),
              version_ : SFString('1.0'),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('boxman_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.9723), SFDouble(-0.0728)]),
                  skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(11)]),
                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  children_ : [
                    HAnimSegment(
                      name_ : SFString('sacrum'),
                      DEF_ : SFString('boxman_sacrum'),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.9723), SFDouble(-0.0728)]),
                          children_ : [
                            Shape(
                              DEF_ : SFString('SphereYellow'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.02))])]),

                    HAnimJoint(
                      name_ : SFString('l_hip'),
                      DEF_ : SFString('boxman_l_hip'),
                      center_ : SFVec3f([SFDouble(0.0956), SFDouble(0.9364), SFDouble(0)]),
                      skinCoordIndex_ : MFInt32([SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43)]),
                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l_thigh'),
                          DEF_ : SFString('boxman_l_thigh'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0956), SFDouble(0.9364), SFDouble(0)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('SphereYellow'))])]),

                        HAnimJoint(
                          name_ : SFString('l_knee'),
                          DEF_ : SFString('boxman_l_knee'),
                          center_ : SFVec3f([SFDouble(0.0956), SFDouble(0.5095), SFDouble(-0.0036)]),
                          skinCoordIndex_ : MFInt32([SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(61), SFInt32(62), SFInt32(63)]),
                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_calf'),
                              DEF_ : SFString('boxman_l_calf'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0956), SFDouble(0.5095), SFDouble(-0.0036)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))])]),

                            HAnimJoint(
                              name_ : SFString('l_ankle'),
                              DEF_ : SFString('boxman_l_ankle'),
                              center_ : SFVec3f([SFDouble(0.0946), SFDouble(0.0762), SFDouble(-0.0261)]),
                              skinCoordIndex_ : MFInt32([SFInt32(64), SFInt32(65), SFInt32(66), SFInt32(67), SFInt32(68), SFInt32(69), SFInt32(70), SFInt32(71)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_hindfoot'),
                                  DEF_ : SFString('boxman_l_hindfoot'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0946), SFDouble(0.0762), SFDouble(-0.0261)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('SphereYellow'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_midtarsal'),
                                  DEF_ : SFString('boxman_l_midtarsal'),
                                  center_ : SFVec3f([SFDouble(0.1079), SFDouble(0.0317), SFDouble(0.067)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(72), SFInt32(73), SFInt32(74), SFInt32(75), SFInt32(76), SFInt32(77), SFInt32(78), SFInt32(79)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_middistal'),
                                      DEF_ : SFString('boxman_l_middistal'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1079), SFDouble(0.0317), SFDouble(0.067)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereYellow'))]),

                                        HAnimSite(
                                          name_ : SFString('l_middistal_tip'),
                                          DEF_ : SFString('boxman_l_middistal_tip'),
                                          translation_ : SFVec3f([SFDouble(0.095), SFDouble(0.0005), SFDouble(0.1924)]),
                                          children_ : [
                                            Shape(
                                              DEF_ : SFString('SphereRed'),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                                              geometry_ : 
                                                Sphere(
                                                  radius_ : 0.02))])])])])])]),

                    HAnimJoint(
                      name_ : SFString('r_hip'),
                      DEF_ : SFString('boxman_r_hip'),
                      center_ : SFVec3f([SFDouble(-0.0956), SFDouble(0.9364), SFDouble(0)]),
                      skinCoordIndex_ : MFInt32([SFInt32(80), SFInt32(81), SFInt32(82), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88), SFInt32(89), SFInt32(90), SFInt32(91), SFInt32(92), SFInt32(93), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105), SFInt32(106), SFInt32(107), SFInt32(108), SFInt32(109), SFInt32(110), SFInt32(111)]),
                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('r_thigh'),
                          DEF_ : SFString('boxman_r_thigh'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(-0.0956), SFDouble(0.9364), SFDouble(0)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('SphereYellow'))])]),

                        HAnimJoint(
                          name_ : SFString('r_knee'),
                          DEF_ : SFString('boxman_r_knee'),
                          center_ : SFVec3f([SFDouble(-0.0956), SFDouble(0.5095), SFDouble(-0.0036)]),
                          skinCoordIndex_ : MFInt32([SFInt32(104), SFInt32(105), SFInt32(106), SFInt32(107), SFInt32(108), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(114), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118), SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126), SFInt32(127), SFInt32(128), SFInt32(129), SFInt32(130), SFInt32(131)]),
                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_calf'),
                              DEF_ : SFString('boxman_r_calf'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.0956), SFDouble(0.5095), SFDouble(-0.0036)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))])]),

                            HAnimJoint(
                              name_ : SFString('r_ankle'),
                              DEF_ : SFString('boxman_r_ankle'),
                              center_ : SFVec3f([SFDouble(-0.0946), SFDouble(0.0762), SFDouble(-0.0261)]),
                              skinCoordIndex_ : MFInt32([SFInt32(132), SFInt32(133), SFInt32(134), SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(138), SFInt32(139)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_hindfoot'),
                                  DEF_ : SFString('boxman_r_hindfoot'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0946), SFDouble(0.0762), SFDouble(-0.0261)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('SphereYellow'))])]),

                                HAnimJoint(
                                  name_ : SFString('r_midtarsal'),
                                  DEF_ : SFString('boxman_r_midtarsal'),
                                  center_ : SFVec3f([SFDouble(-0.1079), SFDouble(0.0317), SFDouble(0.067)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143), SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_middistal'),
                                      DEF_ : SFString('boxman_r_middistal'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1079), SFDouble(0.0317), SFDouble(0.067)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereYellow'))]),

                                        HAnimSite(
                                          name_ : SFString('r_middistal_tip'),
                                          DEF_ : SFString('boxman_r_middistal_tip'),
                                          translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.0005), SFDouble(0.1924)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereRed'))])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('boxman_vl5'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(1.0817), SFDouble(-0.0728)]),
                      skinCoordIndex_ : MFInt32([SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(156), SFInt32(157), SFInt32(158), SFInt32(159), SFInt32(160), SFInt32(161), SFInt32(162), SFInt32(163), SFInt32(164), SFInt32(165), SFInt32(166), SFInt32(167)]),
                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l5'),
                          DEF_ : SFString('boxman_l5'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.0817), SFDouble(-0.0728)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('SphereYellow'))])]),

                        HAnimJoint(
                          name_ : SFString('skullbase'),
                          DEF_ : SFString('boxman_skullbase'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.644), SFDouble(0.036)]),
                          skinCoordIndex_ : MFInt32([SFInt32(168), SFInt32(169), SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('skull'),
                              DEF_ : SFString('boxman_skull'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.644), SFDouble(0.036)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))]),

                                HAnimSite(
                                  name_ : SFString('skull_tip'),
                                  DEF_ : SFString('boxman_skull_tip'),
                                  translation_ : SFVec3f([SFDouble(-0.0029), SFDouble(1.7771), SFDouble(0.0274)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))])])]),

                        HAnimJoint(
                          name_ : SFString('l_shoulder'),
                          DEF_ : SFString('boxman_l_shoulder'),
                          center_ : SFVec3f([SFDouble(0.1968), SFDouble(1.4642), SFDouble(-0.0265)]),
                          skinCoordIndex_ : MFInt32([SFInt32(176), SFInt32(177), SFInt32(178), SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182), SFInt32(183)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_upperarm'),
                              DEF_ : SFString('boxman_l_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.1968), SFDouble(1.4642), SFDouble(-0.0265)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))])]),

                            HAnimJoint(
                              name_ : SFString('l_elbow'),
                              DEF_ : SFString('boxman_l_elbow'),
                              center_ : SFVec3f([SFDouble(0.1982), SFDouble(1.1622), SFDouble(-0.0557)]),
                              skinCoordIndex_ : MFInt32([SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_forearm'),
                                  DEF_ : SFString('boxman_l_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.1982), SFDouble(1.1622), SFDouble(-0.0557)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('SphereYellow'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_wrist'),
                                  DEF_ : SFString('boxman_l_wrist'),
                                  center_ : SFVec3f([SFDouble(0.1972), SFDouble(0.8929), SFDouble(-0.069)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195), SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_hand'),
                                      DEF_ : SFString('boxman_l_hand'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1972), SFDouble(0.8929), SFDouble(-0.069)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereYellow'))]),

                                        HAnimSite(
                                          name_ : SFString('l_hand_tip'),
                                          DEF_ : SFString('boxman_l_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(0.1912), SFDouble(0.6976), SFDouble(-0.071)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereRed'))])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_shoulder'),
                          DEF_ : SFString('boxman_r_shoulder'),
                          center_ : SFVec3f([SFDouble(-0.1968), SFDouble(1.4642), SFDouble(-0.0265)]),
                          skinCoordIndex_ : MFInt32([SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204), SFInt32(205), SFInt32(206), SFInt32(207)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_upperarm'),
                              DEF_ : SFString('boxman_r_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.1968), SFDouble(1.4642), SFDouble(-0.0265)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('SphereYellow'))])]),

                            HAnimJoint(
                              name_ : SFString('r_elbow'),
                              DEF_ : SFString('boxman_r_elbow'),
                              center_ : SFVec3f([SFDouble(-0.1982), SFDouble(1.1622), SFDouble(-0.0557)]),
                              skinCoordIndex_ : MFInt32([SFInt32(208), SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215)]),
                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_forearm'),
                                  DEF_ : SFString('boxman_r_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.1982), SFDouble(1.1622), SFDouble(-0.0557)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('SphereYellow'))])]),

                                HAnimJoint(
                                  name_ : SFString('r_wrist'),
                                  DEF_ : SFString('boxman_r_wrist'),
                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.8929), SFDouble(-0.069)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(216), SFInt32(217), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(222), SFInt32(223)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_hand'),
                                      DEF_ : SFString('boxman_r_hand'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.8929), SFDouble(-0.069)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereYellow'))]),

                                        HAnimSite(
                                          name_ : SFString('r_hand_tip'),
                                          DEF_ : SFString('boxman_r_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(-0.1912), SFDouble(0.6976), SFDouble(-0.071)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('SphereRed'))])])])])])])]),
              /*# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)*/
              /*Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/*/
              /*top-level joint references*/
              /*top-level segment references*/
              /*top-level site references*/
              skinCoord_ : 
                Coordinate(
                  DEF_ : SFString('SKINCOORD'),
                  point_ : MFVec3f([SFVec3f([-0.05,1,0.05]),SFVec3f([0.05,1,0.05]),SFVec3f([0.03,0.97,-0.1]),SFVec3f([-0.03,0.97,-0.1]),SFVec3f([0.03,0.94,-0.075]),SFVec3f([-0.03,0.94,-0.075]),SFVec3f([0,0.92,0]),SFVec3f([0,0.94,0.03]),SFVec3f([-0.12,1.06,0.05]),SFVec3f([0.12,1.06,0.05]),SFVec3f([0.12,1.06,-0.1]),SFVec3f([-0.12,1.06,-0.1]),SFVec3f([0.0456,0.9364,0.05]),SFVec3f([0.1456,0.9364,0.05]),SFVec3f([0.1456,0.9364,-0.05]),SFVec3f([0.0456,0.9364,-0.05]),SFVec3f([0.0456,0.9,0.05]),SFVec3f([0.1456,0.9,0.05]),SFVec3f([0.1456,0.9,-0.05]),SFVec3f([0.0456,0.9,-0.05]),SFVec3f([0.0456,0.8,0.05]),SFVec3f([0.1456,0.8,0.05]),SFVec3f([0.1456,0.8,-0.05]),SFVec3f([0.0456,0.8,-0.05]),SFVec3f([0.0456,0.7,0.05]),SFVec3f([0.1456,0.7,0.05]),SFVec3f([0.1456,0.7,-0.05]),SFVec3f([0.0456,0.7,-0.05]),SFVec3f([0.0456,0.6,0.05]),SFVec3f([0.1456,0.6,0.05]),SFVec3f([0.1456,0.6,-0.05]),SFVec3f([0.0456,0.6,-0.05]),SFVec3f([0.0456,0.55,0.05]),SFVec3f([0.1456,0.55,0.05]),SFVec3f([0.1456,0.55,-0.05]),SFVec3f([0.0456,0.55,-0.05]),SFVec3f([0.0456,0.52,0.05]),SFVec3f([0.1456,0.52,0.05]),SFVec3f([0.1456,0.52,-0.05]),SFVec3f([0.0456,0.52,-0.05]),SFVec3f([0.0456,0.5,0.05]),SFVec3f([0.1456,0.5,0.05]),SFVec3f([0.1456,0.5,-0.05]),SFVec3f([0.0456,0.5,-0.05]),SFVec3f([0.0454,0.43,0.045]),SFVec3f([0.1454,0.43,0.045]),SFVec3f([0.1454,0.43,-0.055]),SFVec3f([0.0454,0.43,-0.055]),SFVec3f([0.0452,0.36,0.04]),SFVec3f([0.1452,0.36,0.04]),SFVec3f([0.1452,0.36,-0.06]),SFVec3f([0.0452,0.36,-0.06]),SFVec3f([0.045,0.29,0.035]),SFVec3f([0.145,0.29,0.035]),SFVec3f([0.145,0.29,-0.065]),SFVec3f([0.045,0.29,-0.065]),SFVec3f([0.0448,0.21,0.03]),SFVec3f([0.1448,0.21,0.03]),SFVec3f([0.1448,0.21,-0.07]),SFVec3f([0.0448,0.21,-0.07]),SFVec3f([0.0446,0.1262,0.025]),SFVec3f([0.1446,0.1262,0.025]),SFVec3f([0.1446,0.1262,-0.075]),SFVec3f([0.0446,0.1262,-0.075]),SFVec3f([0.0446,0.0762,0.025]),SFVec3f([0.1446,0.0762,0.025]),SFVec3f([0.1446,0,-0.075]),SFVec3f([0.0446,0,-0.075]),SFVec3f([0.0446,0.0562,0.057]),SFVec3f([0.1446,0.0562,0.057]),SFVec3f([0.1446,0,0.057]),SFVec3f([0.0446,0,0.057]),SFVec3f([0.0446,0.0562,0.087]),SFVec3f([0.1446,0.0562,0.087]),SFVec3f([0.1446,0,0.087]),SFVec3f([0.0446,0,0.087]),SFVec3f([0.0446,0.0562,0.1924]),SFVec3f([0.1446,0.0562,0.1924]),SFVec3f([0.1446,0,0.1924]),SFVec3f([0.0446,0,0.1924]),SFVec3f([-0.0456,0.9364,0.05]),SFVec3f([-0.1456,0.9364,0.05]),SFVec3f([-0.1456,0.9364,-0.05]),SFVec3f([-0.0456,0.9364,-0.05]),SFVec3f([-0.0456,0.9,0.05]),SFVec3f([-0.1456,0.9,0.05]),SFVec3f([-0.1456,0.9,-0.05]),SFVec3f([-0.0456,0.9,-0.05]),SFVec3f([-0.0456,0.8,0.05]),SFVec3f([-0.1456,0.8,0.05]),SFVec3f([-0.1456,0.8,-0.05]),SFVec3f([-0.0456,0.8,-0.05]),SFVec3f([-0.0456,0.7,0.05]),SFVec3f([-0.1456,0.7,0.05]),SFVec3f([-0.1456,0.7,-0.05]),SFVec3f([-0.0456,0.7,-0.05]),SFVec3f([-0.0456,0.6,0.05]),SFVec3f([-0.1456,0.6,0.05]),SFVec3f([-0.1456,0.6,-0.05]),SFVec3f([-0.0456,0.6,-0.05]),SFVec3f([-0.0456,0.55,0.05]),SFVec3f([-0.1456,0.55,0.05]),SFVec3f([-0.1456,0.55,-0.05]),SFVec3f([-0.0456,0.55,-0.05]),SFVec3f([-0.0456,0.52,0.05]),SFVec3f([-0.1456,0.52,0.05]),SFVec3f([-0.1456,0.52,-0.05]),SFVec3f([-0.0456,0.52,-0.05]),SFVec3f([-0.0456,0.5,0.05]),SFVec3f([-0.1456,0.5,0.05]),SFVec3f([-0.1456,0.5,-0.05]),SFVec3f([-0.0456,0.5,-0.05]),SFVec3f([-0.0454,0.43,0.045]),SFVec3f([-0.1454,0.43,0.045]),SFVec3f([-0.1454,0.43,-0.055]),SFVec3f([-0.0454,0.43,-0.055]),SFVec3f([-0.0452,0.36,0.04]),SFVec3f([-0.1452,0.36,0.04]),SFVec3f([-0.1452,0.36,-0.06]),SFVec3f([-0.0452,0.36,-0.06]),SFVec3f([-0.045,0.29,0.035]),SFVec3f([-0.145,0.29,0.035]),SFVec3f([-0.145,0.29,-0.065]),SFVec3f([-0.045,0.29,-0.065]),SFVec3f([-0.0448,0.21,0.03]),SFVec3f([-0.1448,0.21,0.03]),SFVec3f([-0.1448,0.21,-0.07]),SFVec3f([-0.0448,0.21,-0.07]),SFVec3f([-0.0446,0.1262,0.025]),SFVec3f([-0.1446,0.1262,0.025]),SFVec3f([-0.1446,0.1262,-0.075]),SFVec3f([-0.0446,0.1262,-0.075]),SFVec3f([-0.0446,0.0762,0.025]),SFVec3f([-0.1446,0.0762,0.025]),SFVec3f([-0.1446,0,-0.075]),SFVec3f([-0.0446,0,-0.075]),SFVec3f([-0.0446,0.0562,0.057]),SFVec3f([-0.1446,0.0562,0.057]),SFVec3f([-0.1446,0,0.057]),SFVec3f([-0.0446,0,0.057]),SFVec3f([-0.0446,0.0562,0.087]),SFVec3f([-0.1446,0.0562,0.087]),SFVec3f([-0.1446,0,0.087]),SFVec3f([-0.0446,0,0.087]),SFVec3f([-0.0446,0.0562,0.1924]),SFVec3f([-0.1446,0.0562,0.1924]),SFVec3f([-0.1446,0,0.1924]),SFVec3f([-0.0446,0,0.1924]),SFVec3f([-0.12,1.1,0.05]),SFVec3f([0.12,1.1,0.05]),SFVec3f([0.12,1.1,-0.1]),SFVec3f([-0.12,1.1,-0.1]),SFVec3f([-0.14,1.42,0.045]),SFVec3f([0.14,1.42,0.045]),SFVec3f([0.14,1.42,-0.09]),SFVec3f([-0.14,1.42,-0.09]),SFVec3f([-0.24,1.52,0.035]),SFVec3f([0.24,1.52,0.035]),SFVec3f([0.24,1.52,-0.09]),SFVec3f([-0.24,1.52,-0.09]),SFVec3f([-0.05,1.56,0.03]),SFVec3f([0.05,1.56,0.03]),SFVec3f([0.05,1.56,-0.06]),SFVec3f([-0.05,1.56,-0.06]),SFVec3f([-0.05,1.6,0.06]),SFVec3f([0.05,1.6,0.06]),SFVec3f([0.05,1.62,-0.03]),SFVec3f([-0.05,1.62,-0.03]),SFVec3f([-0.07,1.777,0.13]),SFVec3f([0.07,1.777,0.13]),SFVec3f([0.07,1.777,-0.03]),SFVec3f([-0.07,1.777,-0.03]),SFVec3f([-0.07,1.6,0.13]),SFVec3f([0.07,1.6,0.13]),SFVec3f([0.07,1.66,-0.03]),SFVec3f([-0.07,1.66,-0.03]),SFVec3f([0.16,1.42,0.015]),SFVec3f([0.24,1.5,0.015]),SFVec3f([0.24,1.5,-0.075]),SFVec3f([0.16,1.42,-0.075]),SFVec3f([0.17,1.18,-0.025]),SFVec3f([0.23,1.18,-0.025]),SFVec3f([0.23,1.18,-0.085]),SFVec3f([0.17,1.18,-0.085]),SFVec3f([0.17,1.14,-0.025]),SFVec3f([0.23,1.14,-0.025]),SFVec3f([0.23,1.14,-0.085]),SFVec3f([0.17,1.14,-0.085]),SFVec3f([0.18,0.91,-0.05]),SFVec3f([0.22,0.91,-0.05]),SFVec3f([0.22,0.91,-0.09]),SFVec3f([0.18,0.91,-0.09]),SFVec3f([0.18,0.87,-0.02]),SFVec3f([0.22,0.87,-0.02]),SFVec3f([0.22,0.87,-0.1]),SFVec3f([0.18,0.87,-0.1]),SFVec3f([0.18,0.6976,-0.02]),SFVec3f([0.22,0.6976,-0.02]),SFVec3f([0.22,0.6976,-0.1]),SFVec3f([0.18,0.6976,-0.1]),SFVec3f([-0.16,1.42,0.015]),SFVec3f([-0.24,1.5,0.015]),SFVec3f([-0.24,1.5,-0.075]),SFVec3f([-0.16,1.42,-0.075]),SFVec3f([-0.17,1.18,-0.025]),SFVec3f([-0.23,1.18,-0.025]),SFVec3f([-0.23,1.18,-0.085]),SFVec3f([-0.17,1.18,-0.085]),SFVec3f([-0.17,1.14,-0.025]),SFVec3f([-0.23,1.14,-0.025]),SFVec3f([-0.23,1.14,-0.085]),SFVec3f([-0.17,1.14,-0.085]),SFVec3f([-0.18,0.91,-0.05]),SFVec3f([-0.22,0.91,-0.05]),SFVec3f([-0.22,0.91,-0.09]),SFVec3f([-0.18,0.91,-0.09]),SFVec3f([-0.18,0.87,-0.02]),SFVec3f([-0.22,0.87,-0.02]),SFVec3f([-0.22,0.87,-0.1]),SFVec3f([-0.18,0.87,-0.1]),SFVec3f([-0.18,0.6976,-0.02]),SFVec3f([-0.22,0.6976,-0.02]),SFVec3f([-0.22,0.6976,-0.1]),SFVec3f([-0.18,0.6976,-0.1])]))],
              skin_ : 
                Group(
                  children_ : [
                    Shape(
                      DEF_ : SFString('TrouserSkin'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]),
                              transparency_ : 0.5)),
                      /*# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)*/
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(8), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(2), SFInt32(10), SFInt32(-1), SFInt32(12), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(15), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(6), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(2), SFInt32(15), SFInt32(-1), SFInt32(0), SFInt32(80), SFInt32(7), SFInt32(-1), SFInt32(81), SFInt32(80), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(81), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(11), SFInt32(82), SFInt32(-1), SFInt32(83), SFInt32(82), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(3), SFInt32(83), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(80), SFInt32(-1), SFInt32(80), SFInt32(83), SFInt32(6), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(83), SFInt32(-1), SFInt32(83), SFInt32(3), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(12), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(17), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(23), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(23), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(20), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(26), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(27), SFInt32(31), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(24), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(29), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(28), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(34), SFInt32(33), SFInt32(-1), SFInt32(34), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(35), SFInt32(39), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(32), SFInt32(35), SFInt32(-1), SFInt32(36), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(37), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(38), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(43), SFInt32(40), SFInt32(-1), SFInt32(40), SFInt32(36), SFInt32(39), SFInt32(-1), SFInt32(40), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(41), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(42), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(40), SFInt32(43), SFInt32(-1), SFInt32(44), SFInt32(48), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(45), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(51), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(44), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(49), SFInt32(48), SFInt32(-1), SFInt32(49), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(50), SFInt32(54), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(51), SFInt32(50), SFInt32(-1), SFInt32(51), SFInt32(55), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(48), SFInt32(51), SFInt32(-1), SFInt32(52), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(57), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(53), SFInt32(57), SFInt32(58), SFInt32(-1), SFInt32(58), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(54), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(59), SFInt32(56), SFInt32(-1), SFInt32(56), SFInt32(52), SFInt32(55), SFInt32(-1), SFInt32(56), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(61), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(57), SFInt32(61), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(58), SFInt32(57), SFInt32(-1), SFInt32(58), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(63), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(59), SFInt32(63), SFInt32(60), SFInt32(-1), SFInt32(60), SFInt32(56), SFInt32(59), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(84), SFInt32(-1), SFInt32(84), SFInt32(80), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(86), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(81), SFInt32(82), SFInt32(-1), SFInt32(83), SFInt32(87), SFInt32(86), SFInt32(-1), SFInt32(86), SFInt32(82), SFInt32(83), SFInt32(-1), SFInt32(80), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(83), SFInt32(80), SFInt32(-1), SFInt32(85), SFInt32(89), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(86), SFInt32(90), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(85), SFInt32(86), SFInt32(-1), SFInt32(87), SFInt32(91), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(86), SFInt32(87), SFInt32(-1), SFInt32(84), SFInt32(88), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(87), SFInt32(84), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(88), SFInt32(89), SFInt32(-1), SFInt32(90), SFInt32(94), SFInt32(93), SFInt32(-1), SFInt32(93), SFInt32(89), SFInt32(90), SFInt32(-1), SFInt32(91), SFInt32(95), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(90), SFInt32(91), SFInt32(-1), SFInt32(88), SFInt32(92), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(91), SFInt32(88), SFInt32(-1), SFInt32(93), SFInt32(97), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(92), SFInt32(93), SFInt32(-1), SFInt32(94), SFInt32(98), SFInt32(97), SFInt32(-1), SFInt32(97), SFInt32(93), SFInt32(94), SFInt32(-1), SFInt32(95), SFInt32(99), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(94), SFInt32(95), SFInt32(-1), SFInt32(92), SFInt32(96), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(95), SFInt32(92), SFInt32(-1), SFInt32(97), SFInt32(101), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(98), SFInt32(102), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(97), SFInt32(98), SFInt32(-1), SFInt32(99), SFInt32(103), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(96), SFInt32(100), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(99), SFInt32(96), SFInt32(-1), SFInt32(101), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(100), SFInt32(101), SFInt32(-1), SFInt32(102), SFInt32(106), SFInt32(105), SFInt32(-1), SFInt32(105), SFInt32(101), SFInt32(102), SFInt32(-1), SFInt32(103), SFInt32(107), SFInt32(106), SFInt32(-1), SFInt32(106), SFInt32(102), SFInt32(103), SFInt32(-1), SFInt32(100), SFInt32(104), SFInt32(107), SFInt32(-1), SFInt32(107), SFInt32(103), SFInt32(100), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(108), SFInt32(104), SFInt32(105), SFInt32(-1), SFInt32(106), SFInt32(110), SFInt32(109), SFInt32(-1), SFInt32(109), SFInt32(105), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(111), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(106), SFInt32(107), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(109), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(108), SFInt32(109), SFInt32(-1), SFInt32(110), SFInt32(114), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(109), SFInt32(110), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(114), SFInt32(-1), SFInt32(114), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(108), SFInt32(112), SFInt32(115), SFInt32(-1), SFInt32(115), SFInt32(111), SFInt32(108), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(116), SFInt32(112), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(118), SFInt32(117), SFInt32(-1), SFInt32(117), SFInt32(113), SFInt32(114), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(118), SFInt32(-1), SFInt32(118), SFInt32(114), SFInt32(115), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(115), SFInt32(112), SFInt32(-1), SFInt32(117), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(116), SFInt32(117), SFInt32(-1), SFInt32(118), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(121), SFInt32(117), SFInt32(118), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(116), SFInt32(120), SFInt32(123), SFInt32(-1), SFInt32(123), SFInt32(119), SFInt32(116), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(124), SFInt32(120), SFInt32(121), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(125), SFInt32(-1), SFInt32(125), SFInt32(121), SFInt32(122), SFInt32(-1), SFInt32(123), SFInt32(127), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(122), SFInt32(123), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(127), SFInt32(-1), SFInt32(127), SFInt32(123), SFInt32(120), SFInt32(-1), SFInt32(125), SFInt32(129), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(125), SFInt32(-1), SFInt32(126), SFInt32(130), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(125), SFInt32(126), SFInt32(-1), SFInt32(127), SFInt32(131), SFInt32(130), SFInt32(-1), SFInt32(130), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(124), SFInt32(128), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(127), SFInt32(124), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('SKINCOORD')))),

                    Shape(
                      DEF_ : SFString('ShoeSkin'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              transparency_ : 0.5)),
                      /*# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)*/
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(60), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(61), SFInt32(60), SFInt32(-1), SFInt32(61), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(66), SFInt32(62), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(67), SFInt32(63), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(67), SFInt32(64), SFInt32(-1), SFInt32(64), SFInt32(60), SFInt32(63), SFInt32(-1), SFInt32(64), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(69), SFInt32(65), SFInt32(64), SFInt32(-1), SFInt32(65), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(70), SFInt32(66), SFInt32(65), SFInt32(-1), SFInt32(66), SFInt32(70), SFInt32(71), SFInt32(-1), SFInt32(71), SFInt32(67), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(71), SFInt32(68), SFInt32(-1), SFInt32(68), SFInt32(64), SFInt32(67), SFInt32(-1), SFInt32(68), SFInt32(72), SFInt32(73), SFInt32(-1), SFInt32(73), SFInt32(69), SFInt32(68), SFInt32(-1), SFInt32(69), SFInt32(73), SFInt32(74), SFInt32(-1), SFInt32(74), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(70), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(75), SFInt32(71), SFInt32(70), SFInt32(-1), SFInt32(71), SFInt32(75), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(68), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(76), SFInt32(77), SFInt32(-1), SFInt32(77), SFInt32(73), SFInt32(72), SFInt32(-1), SFInt32(73), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(78), SFInt32(74), SFInt32(73), SFInt32(-1), SFInt32(74), SFInt32(78), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(75), SFInt32(74), SFInt32(-1), SFInt32(75), SFInt32(79), SFInt32(76), SFInt32(-1), SFInt32(76), SFInt32(72), SFInt32(75), SFInt32(-1), SFInt32(76), SFInt32(79), SFInt32(78), SFInt32(-1), SFInt32(78), SFInt32(77), SFInt32(76), SFInt32(-1), SFInt32(129), SFInt32(133), SFInt32(132), SFInt32(-1), SFInt32(132), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(130), SFInt32(134), SFInt32(133), SFInt32(-1), SFInt32(133), SFInt32(129), SFInt32(130), SFInt32(-1), SFInt32(131), SFInt32(135), SFInt32(134), SFInt32(-1), SFInt32(134), SFInt32(130), SFInt32(131), SFInt32(-1), SFInt32(128), SFInt32(132), SFInt32(135), SFInt32(-1), SFInt32(135), SFInt32(131), SFInt32(128), SFInt32(-1), SFInt32(133), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(136), SFInt32(132), SFInt32(133), SFInt32(-1), SFInt32(134), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(137), SFInt32(133), SFInt32(134), SFInt32(-1), SFInt32(135), SFInt32(139), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(134), SFInt32(135), SFInt32(-1), SFInt32(132), SFInt32(136), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(135), SFInt32(132), SFInt32(-1), SFInt32(137), SFInt32(141), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(136), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(142), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(137), SFInt32(138), SFInt32(-1), SFInt32(139), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(142), SFInt32(138), SFInt32(139), SFInt32(-1), SFInt32(136), SFInt32(140), SFInt32(143), SFInt32(-1), SFInt32(143), SFInt32(139), SFInt32(136), SFInt32(-1), SFInt32(141), SFInt32(145), SFInt32(144), SFInt32(-1), SFInt32(144), SFInt32(140), SFInt32(141), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(141), SFInt32(142), SFInt32(-1), SFInt32(143), SFInt32(147), SFInt32(146), SFInt32(-1), SFInt32(146), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(140), SFInt32(144), SFInt32(147), SFInt32(-1), SFInt32(147), SFInt32(143), SFInt32(140), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(145), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('SKINCOORD')))),

                    Shape(
                      DEF_ : SFString('ShirtSkin'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                              transparency_ : 0.5)),
                      /*# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)*/
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(148), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(149), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(150), SFInt32(149), SFInt32(-1), SFInt32(150), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(151), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(148), SFInt32(151), SFInt32(-1), SFInt32(152), SFInt32(148), SFInt32(149), SFInt32(-1), SFInt32(149), SFInt32(153), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(149), SFInt32(150), SFInt32(-1), SFInt32(150), SFInt32(154), SFInt32(153), SFInt32(-1), SFInt32(154), SFInt32(150), SFInt32(151), SFInt32(-1), SFInt32(151), SFInt32(155), SFInt32(154), SFInt32(-1), SFInt32(155), SFInt32(151), SFInt32(148), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(155), SFInt32(-1), SFInt32(156), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(153), SFInt32(157), SFInt32(156), SFInt32(-1), SFInt32(158), SFInt32(154), SFInt32(155), SFInt32(-1), SFInt32(155), SFInt32(159), SFInt32(158), SFInt32(-1), SFInt32(160), SFInt32(156), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(161), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(157), SFInt32(158), SFInt32(-1), SFInt32(158), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(162), SFInt32(158), SFInt32(159), SFInt32(-1), SFInt32(159), SFInt32(163), SFInt32(162), SFInt32(-1), SFInt32(163), SFInt32(159), SFInt32(156), SFInt32(-1), SFInt32(156), SFInt32(160), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(160), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(164), SFInt32(-1), SFInt32(165), SFInt32(161), SFInt32(162), SFInt32(-1), SFInt32(162), SFInt32(166), SFInt32(165), SFInt32(-1), SFInt32(166), SFInt32(162), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(167), SFInt32(166), SFInt32(-1), SFInt32(167), SFInt32(163), SFInt32(160), SFInt32(-1), SFInt32(160), SFInt32(164), SFInt32(167), SFInt32(-1), SFInt32(153), SFInt32(176), SFInt32(177), SFInt32(-1), SFInt32(177), SFInt32(157), SFInt32(153), SFInt32(-1), SFInt32(157), SFInt32(177), SFInt32(178), SFInt32(-1), SFInt32(178), SFInt32(158), SFInt32(157), SFInt32(-1), SFInt32(158), SFInt32(178), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(154), SFInt32(158), SFInt32(-1), SFInt32(154), SFInt32(179), SFInt32(176), SFInt32(-1), SFInt32(176), SFInt32(153), SFInt32(154), SFInt32(-1), SFInt32(176), SFInt32(180), SFInt32(181), SFInt32(-1), SFInt32(181), SFInt32(177), SFInt32(176), SFInt32(-1), SFInt32(177), SFInt32(181), SFInt32(182), SFInt32(-1), SFInt32(182), SFInt32(178), SFInt32(177), SFInt32(-1), SFInt32(178), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(179), SFInt32(178), SFInt32(-1), SFInt32(179), SFInt32(183), SFInt32(180), SFInt32(-1), SFInt32(180), SFInt32(176), SFInt32(179), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(185), SFInt32(-1), SFInt32(185), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(186), SFInt32(-1), SFInt32(186), SFInt32(182), SFInt32(181), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(187), SFInt32(183), SFInt32(182), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(184), SFInt32(-1), SFInt32(184), SFInt32(180), SFInt32(183), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(189), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(190), SFInt32(-1), SFInt32(190), SFInt32(186), SFInt32(185), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(191), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(186), SFInt32(-1), SFInt32(187), SFInt32(191), SFInt32(188), SFInt32(-1), SFInt32(188), SFInt32(184), SFInt32(187), SFInt32(-1), SFInt32(152), SFInt32(156), SFInt32(201), SFInt32(-1), SFInt32(201), SFInt32(200), SFInt32(152), SFInt32(-1), SFInt32(156), SFInt32(159), SFInt32(202), SFInt32(-1), SFInt32(202), SFInt32(201), SFInt32(156), SFInt32(-1), SFInt32(159), SFInt32(155), SFInt32(203), SFInt32(-1), SFInt32(203), SFInt32(202), SFInt32(159), SFInt32(-1), SFInt32(155), SFInt32(152), SFInt32(200), SFInt32(-1), SFInt32(200), SFInt32(203), SFInt32(155), SFInt32(-1), SFInt32(201), SFInt32(205), SFInt32(204), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(201), SFInt32(-1), SFInt32(202), SFInt32(206), SFInt32(205), SFInt32(-1), SFInt32(205), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(203), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(206), SFInt32(202), SFInt32(203), SFInt32(-1), SFInt32(200), SFInt32(204), SFInt32(207), SFInt32(-1), SFInt32(207), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(208), SFInt32(-1), SFInt32(208), SFInt32(204), SFInt32(205), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(209), SFInt32(-1), SFInt32(209), SFInt32(205), SFInt32(206), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(210), SFInt32(206), SFInt32(207), SFInt32(-1), SFInt32(204), SFInt32(208), SFInt32(211), SFInt32(-1), SFInt32(211), SFInt32(207), SFInt32(204), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(212), SFInt32(-1), SFInt32(212), SFInt32(208), SFInt32(209), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(213), SFInt32(-1), SFInt32(213), SFInt32(209), SFInt32(210), SFInt32(-1), SFInt32(211), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(214), SFInt32(210), SFInt32(211), SFInt32(-1), SFInt32(208), SFInt32(212), SFInt32(215), SFInt32(-1), SFInt32(215), SFInt32(211), SFInt32(208), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('SKINCOORD')))),

                    Shape(
                      DEF_ : SFString('HeadHandsFleshToneSkin'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.75), SFDouble(0.75)]),
                              transparency_ : 0.5)),
                      /*# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)*/
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(172), SFInt32(164), SFInt32(165), SFInt32(-1), SFInt32(165), SFInt32(173), SFInt32(172), SFInt32(-1), SFInt32(173), SFInt32(165), SFInt32(166), SFInt32(-1), SFInt32(166), SFInt32(174), SFInt32(173), SFInt32(-1), SFInt32(174), SFInt32(166), SFInt32(167), SFInt32(-1), SFInt32(167), SFInt32(175), SFInt32(174), SFInt32(-1), SFInt32(175), SFInt32(167), SFInt32(164), SFInt32(-1), SFInt32(164), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(173), SFInt32(-1), SFInt32(173), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(174), SFInt32(170), SFInt32(169), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(175), SFInt32(-1), SFInt32(175), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(171), SFInt32(175), SFInt32(172), SFInt32(-1), SFInt32(172), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(171), SFInt32(168), SFInt32(169), SFInt32(-1), SFInt32(169), SFInt32(170), SFInt32(171), SFInt32(-1), SFInt32(188), SFInt32(192), SFInt32(193), SFInt32(-1), SFInt32(193), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(189), SFInt32(193), SFInt32(194), SFInt32(-1), SFInt32(194), SFInt32(190), SFInt32(189), SFInt32(-1), SFInt32(190), SFInt32(194), SFInt32(195), SFInt32(-1), SFInt32(195), SFInt32(191), SFInt32(190), SFInt32(-1), SFInt32(191), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(192), SFInt32(188), SFInt32(191), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(197), SFInt32(-1), SFInt32(197), SFInt32(193), SFInt32(192), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(198), SFInt32(-1), SFInt32(198), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(194), SFInt32(198), SFInt32(199), SFInt32(-1), SFInt32(199), SFInt32(195), SFInt32(194), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(192), SFInt32(195), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(198), SFInt32(-1), SFInt32(198), SFInt32(197), SFInt32(196), SFInt32(-1), SFInt32(213), SFInt32(217), SFInt32(216), SFInt32(-1), SFInt32(216), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(214), SFInt32(218), SFInt32(217), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(214), SFInt32(-1), SFInt32(215), SFInt32(219), SFInt32(218), SFInt32(-1), SFInt32(218), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(215), SFInt32(212), SFInt32(-1), SFInt32(217), SFInt32(221), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(216), SFInt32(217), SFInt32(-1), SFInt32(218), SFInt32(222), SFInt32(221), SFInt32(-1), SFInt32(221), SFInt32(217), SFInt32(218), SFInt32(-1), SFInt32(219), SFInt32(223), SFInt32(222), SFInt32(-1), SFInt32(222), SFInt32(218), SFInt32(219), SFInt32(-1), SFInt32(216), SFInt32(220), SFInt32(223), SFInt32(-1), SFInt32(223), SFInt32(219), SFInt32(216), SFInt32(-1), SFInt32(221), SFInt32(222), SFInt32(223), SFInt32(-1), SFInt32(223), SFInt32(220), SFInt32(221), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('SKINCOORD')))),

                    Shape(
                      DEF_ : SFString('SkinLines'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]))),
                      /*Combined set of prior IFS coordIndex values*/
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(8), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(2), SFInt32(10), SFInt32(-1), SFInt32(12), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(15), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(6), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(2), SFInt32(15), SFInt32(-1), SFInt32(0), SFInt32(80), SFInt32(7), SFInt32(-1), SFInt32(81), SFInt32(80), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(81), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(11), SFInt32(82), SFInt32(-1), SFInt32(83), SFInt32(82), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(3), SFInt32(83), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(80), SFInt32(-1), SFInt32(80), SFInt32(83), SFInt32(6), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(83), SFInt32(-1), SFInt32(83), SFInt32(3), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(12), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(17), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(23), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(23), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(20), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(26), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(27), SFInt32(31), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(24), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(29), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(28), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(34), SFInt32(33), SFInt32(-1), SFInt32(34), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(35), SFInt32(39), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(32), SFInt32(35), SFInt32(-1), SFInt32(36), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(37), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(38), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(43), SFInt32(40), SFInt32(-1), SFInt32(40), SFInt32(36), SFInt32(39), SFInt32(-1), SFInt32(40), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(41), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(42), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(40), SFInt32(43), SFInt32(-1), SFInt32(44), SFInt32(48), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(45), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(51), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(44), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(49), SFInt32(48), SFInt32(-1), SFInt32(49), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(50), SFInt32(54), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(51), SFInt32(50), SFInt32(-1), SFInt32(51), SFInt32(55), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(48), SFInt32(51), SFInt32(-1), SFInt32(52), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(57), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(53), SFInt32(57), SFInt32(58), SFInt32(-1), SFInt32(58), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(54), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(59), SFInt32(56), SFInt32(-1), SFInt32(56), SFInt32(52), SFInt32(55), SFInt32(-1), SFInt32(56), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(61), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(57), SFInt32(61), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(58), SFInt32(57), SFInt32(-1), SFInt32(58), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(63), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(59), SFInt32(63), SFInt32(60), SFInt32(-1), SFInt32(60), SFInt32(56), SFInt32(59), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(84), SFInt32(-1), SFInt32(84), SFInt32(80), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(86), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(81), SFInt32(82), SFInt32(-1), SFInt32(83), SFInt32(87), SFInt32(86), SFInt32(-1), SFInt32(86), SFInt32(82), SFInt32(83), SFInt32(-1), SFInt32(80), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(83), SFInt32(80), SFInt32(-1), SFInt32(85), SFInt32(89), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(86), SFInt32(90), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(85), SFInt32(86), SFInt32(-1), SFInt32(87), SFInt32(91), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(86), SFInt32(87), SFInt32(-1), SFInt32(84), SFInt32(88), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(87), SFInt32(84), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(88), SFInt32(89), SFInt32(-1), SFInt32(90), SFInt32(94), SFInt32(93), SFInt32(-1), SFInt32(93), SFInt32(89), SFInt32(90), SFInt32(-1), SFInt32(91), SFInt32(95), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(90), SFInt32(91), SFInt32(-1), SFInt32(88), SFInt32(92), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(91), SFInt32(88), SFInt32(-1), SFInt32(93), SFInt32(97), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(92), SFInt32(93), SFInt32(-1), SFInt32(94), SFInt32(98), SFInt32(97), SFInt32(-1), SFInt32(97), SFInt32(93), SFInt32(94), SFInt32(-1), SFInt32(95), SFInt32(99), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(94), SFInt32(95), SFInt32(-1), SFInt32(92), SFInt32(96), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(95), SFInt32(92), SFInt32(-1), SFInt32(97), SFInt32(101), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(98), SFInt32(102), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(97), SFInt32(98), SFInt32(-1), SFInt32(99), SFInt32(103), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(96), SFInt32(100), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(99), SFInt32(96), SFInt32(-1), SFInt32(101), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(100), SFInt32(101), SFInt32(-1), SFInt32(102), SFInt32(106), SFInt32(105), SFInt32(-1), SFInt32(105), SFInt32(101), SFInt32(102), SFInt32(-1), SFInt32(103), SFInt32(107), SFInt32(106), SFInt32(-1), SFInt32(106), SFInt32(102), SFInt32(103), SFInt32(-1), SFInt32(100), SFInt32(104), SFInt32(107), SFInt32(-1), SFInt32(107), SFInt32(103), SFInt32(100), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(108), SFInt32(104), SFInt32(105), SFInt32(-1), SFInt32(106), SFInt32(110), SFInt32(109), SFInt32(-1), SFInt32(109), SFInt32(105), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(111), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(106), SFInt32(107), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(109), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(108), SFInt32(109), SFInt32(-1), SFInt32(110), SFInt32(114), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(109), SFInt32(110), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(114), SFInt32(-1), SFInt32(114), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(108), SFInt32(112), SFInt32(115), SFInt32(-1), SFInt32(115), SFInt32(111), SFInt32(108), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(116), SFInt32(112), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(118), SFInt32(117), SFInt32(-1), SFInt32(117), SFInt32(113), SFInt32(114), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(118), SFInt32(-1), SFInt32(118), SFInt32(114), SFInt32(115), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(115), SFInt32(112), SFInt32(-1), SFInt32(117), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(116), SFInt32(117), SFInt32(-1), SFInt32(118), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(121), SFInt32(117), SFInt32(118), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(116), SFInt32(120), SFInt32(123), SFInt32(-1), SFInt32(123), SFInt32(119), SFInt32(116), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(124), SFInt32(120), SFInt32(121), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(125), SFInt32(-1), SFInt32(125), SFInt32(121), SFInt32(122), SFInt32(-1), SFInt32(123), SFInt32(127), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(122), SFInt32(123), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(127), SFInt32(-1), SFInt32(127), SFInt32(123), SFInt32(120), SFInt32(-1), SFInt32(125), SFInt32(129), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(125), SFInt32(-1), SFInt32(126), SFInt32(130), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(125), SFInt32(126), SFInt32(-1), SFInt32(127), SFInt32(131), SFInt32(130), SFInt32(-1), SFInt32(130), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(124), SFInt32(128), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(127), SFInt32(124), SFInt32(-1), SFInt32(60), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(61), SFInt32(60), SFInt32(-1), SFInt32(61), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(66), SFInt32(62), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(67), SFInt32(63), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(67), SFInt32(64), SFInt32(-1), SFInt32(64), SFInt32(60), SFInt32(63), SFInt32(-1), SFInt32(64), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(69), SFInt32(65), SFInt32(64), SFInt32(-1), SFInt32(65), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(70), SFInt32(66), SFInt32(65), SFInt32(-1), SFInt32(66), SFInt32(70), SFInt32(71), SFInt32(-1), SFInt32(71), SFInt32(67), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(71), SFInt32(68), SFInt32(-1), SFInt32(68), SFInt32(64), SFInt32(67), SFInt32(-1), SFInt32(68), SFInt32(72), SFInt32(73), SFInt32(-1), SFInt32(73), SFInt32(69), SFInt32(68), SFInt32(-1), SFInt32(69), SFInt32(73), SFInt32(74), SFInt32(-1), SFInt32(74), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(70), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(75), SFInt32(71), SFInt32(70), SFInt32(-1), SFInt32(71), SFInt32(75), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(68), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(76), SFInt32(77), SFInt32(-1), SFInt32(77), SFInt32(73), SFInt32(72), SFInt32(-1), SFInt32(73), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(78), SFInt32(74), SFInt32(73), SFInt32(-1), SFInt32(74), SFInt32(78), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(75), SFInt32(74), SFInt32(-1), SFInt32(75), SFInt32(79), SFInt32(76), SFInt32(-1), SFInt32(76), SFInt32(72), SFInt32(75), SFInt32(-1), SFInt32(76), SFInt32(79), SFInt32(78), SFInt32(-1), SFInt32(78), SFInt32(77), SFInt32(76), SFInt32(-1), SFInt32(129), SFInt32(133), SFInt32(132), SFInt32(-1), SFInt32(132), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(130), SFInt32(134), SFInt32(133), SFInt32(-1), SFInt32(133), SFInt32(129), SFInt32(130), SFInt32(-1), SFInt32(131), SFInt32(135), SFInt32(134), SFInt32(-1), SFInt32(134), SFInt32(130), SFInt32(131), SFInt32(-1), SFInt32(128), SFInt32(132), SFInt32(135), SFInt32(-1), SFInt32(135), SFInt32(131), SFInt32(128), SFInt32(-1), SFInt32(133), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(136), SFInt32(132), SFInt32(133), SFInt32(-1), SFInt32(134), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(137), SFInt32(133), SFInt32(134), SFInt32(-1), SFInt32(135), SFInt32(139), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(134), SFInt32(135), SFInt32(-1), SFInt32(132), SFInt32(136), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(135), SFInt32(132), SFInt32(-1), SFInt32(137), SFInt32(141), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(136), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(142), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(137), SFInt32(138), SFInt32(-1), SFInt32(139), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(142), SFInt32(138), SFInt32(139), SFInt32(-1), SFInt32(136), SFInt32(140), SFInt32(143), SFInt32(-1), SFInt32(143), SFInt32(139), SFInt32(136), SFInt32(-1), SFInt32(141), SFInt32(145), SFInt32(144), SFInt32(-1), SFInt32(144), SFInt32(140), SFInt32(141), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(141), SFInt32(142), SFInt32(-1), SFInt32(143), SFInt32(147), SFInt32(146), SFInt32(-1), SFInt32(146), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(140), SFInt32(144), SFInt32(147), SFInt32(-1), SFInt32(147), SFInt32(143), SFInt32(140), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(145), SFInt32(-1), SFInt32(148), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(149), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(150), SFInt32(149), SFInt32(-1), SFInt32(150), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(151), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(148), SFInt32(151), SFInt32(-1), SFInt32(152), SFInt32(148), SFInt32(149), SFInt32(-1), SFInt32(149), SFInt32(153), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(149), SFInt32(150), SFInt32(-1), SFInt32(150), SFInt32(154), SFInt32(153), SFInt32(-1), SFInt32(154), SFInt32(150), SFInt32(151), SFInt32(-1), SFInt32(151), SFInt32(155), SFInt32(154), SFInt32(-1), SFInt32(155), SFInt32(151), SFInt32(148), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(155), SFInt32(-1), SFInt32(156), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(153), SFInt32(157), SFInt32(156), SFInt32(-1), SFInt32(158), SFInt32(154), SFInt32(155), SFInt32(-1), SFInt32(155), SFInt32(159), SFInt32(158), SFInt32(-1), SFInt32(160), SFInt32(156), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(161), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(157), SFInt32(158), SFInt32(-1), SFInt32(158), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(162), SFInt32(158), SFInt32(159), SFInt32(-1), SFInt32(159), SFInt32(163), SFInt32(162), SFInt32(-1), SFInt32(163), SFInt32(159), SFInt32(156), SFInt32(-1), SFInt32(156), SFInt32(160), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(160), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(164), SFInt32(-1), SFInt32(165), SFInt32(161), SFInt32(162), SFInt32(-1), SFInt32(162), SFInt32(166), SFInt32(165), SFInt32(-1), SFInt32(166), SFInt32(162), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(167), SFInt32(166), SFInt32(-1), SFInt32(167), SFInt32(163), SFInt32(160), SFInt32(-1), SFInt32(160), SFInt32(164), SFInt32(167), SFInt32(-1), SFInt32(153), SFInt32(176), SFInt32(177), SFInt32(-1), SFInt32(177), SFInt32(157), SFInt32(153), SFInt32(-1), SFInt32(157), SFInt32(177), SFInt32(178), SFInt32(-1), SFInt32(178), SFInt32(158), SFInt32(157), SFInt32(-1), SFInt32(158), SFInt32(178), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(154), SFInt32(158), SFInt32(-1), SFInt32(154), SFInt32(179), SFInt32(176), SFInt32(-1), SFInt32(176), SFInt32(153), SFInt32(154), SFInt32(-1), SFInt32(176), SFInt32(180), SFInt32(181), SFInt32(-1), SFInt32(181), SFInt32(177), SFInt32(176), SFInt32(-1), SFInt32(177), SFInt32(181), SFInt32(182), SFInt32(-1), SFInt32(182), SFInt32(178), SFInt32(177), SFInt32(-1), SFInt32(178), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(179), SFInt32(178), SFInt32(-1), SFInt32(179), SFInt32(183), SFInt32(180), SFInt32(-1), SFInt32(180), SFInt32(176), SFInt32(179), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(185), SFInt32(-1), SFInt32(185), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(186), SFInt32(-1), SFInt32(186), SFInt32(182), SFInt32(181), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(187), SFInt32(183), SFInt32(182), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(184), SFInt32(-1), SFInt32(184), SFInt32(180), SFInt32(183), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(189), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(190), SFInt32(-1), SFInt32(190), SFInt32(186), SFInt32(185), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(191), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(186), SFInt32(-1), SFInt32(187), SFInt32(191), SFInt32(188), SFInt32(-1), SFInt32(188), SFInt32(184), SFInt32(187), SFInt32(-1), SFInt32(152), SFInt32(156), SFInt32(201), SFInt32(-1), SFInt32(201), SFInt32(200), SFInt32(152), SFInt32(-1), SFInt32(156), SFInt32(159), SFInt32(202), SFInt32(-1), SFInt32(202), SFInt32(201), SFInt32(156), SFInt32(-1), SFInt32(159), SFInt32(155), SFInt32(203), SFInt32(-1), SFInt32(203), SFInt32(202), SFInt32(159), SFInt32(-1), SFInt32(155), SFInt32(152), SFInt32(200), SFInt32(-1), SFInt32(200), SFInt32(203), SFInt32(155), SFInt32(-1), SFInt32(201), SFInt32(205), SFInt32(204), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(201), SFInt32(-1), SFInt32(202), SFInt32(206), SFInt32(205), SFInt32(-1), SFInt32(205), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(203), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(206), SFInt32(202), SFInt32(203), SFInt32(-1), SFInt32(200), SFInt32(204), SFInt32(207), SFInt32(-1), SFInt32(207), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(208), SFInt32(-1), SFInt32(208), SFInt32(204), SFInt32(205), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(209), SFInt32(-1), SFInt32(209), SFInt32(205), SFInt32(206), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(210), SFInt32(206), SFInt32(207), SFInt32(-1), SFInt32(204), SFInt32(208), SFInt32(211), SFInt32(-1), SFInt32(211), SFInt32(207), SFInt32(204), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(212), SFInt32(-1), SFInt32(212), SFInt32(208), SFInt32(209), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(213), SFInt32(-1), SFInt32(213), SFInt32(209), SFInt32(210), SFInt32(-1), SFInt32(211), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(214), SFInt32(210), SFInt32(211), SFInt32(-1), SFInt32(208), SFInt32(212), SFInt32(215), SFInt32(-1), SFInt32(215), SFInt32(211), SFInt32(208), SFInt32(-1), SFInt32(172), SFInt32(164), SFInt32(165), SFInt32(-1), SFInt32(165), SFInt32(173), SFInt32(172), SFInt32(-1), SFInt32(173), SFInt32(165), SFInt32(166), SFInt32(-1), SFInt32(166), SFInt32(174), SFInt32(173), SFInt32(-1), SFInt32(174), SFInt32(166), SFInt32(167), SFInt32(-1), SFInt32(167), SFInt32(175), SFInt32(174), SFInt32(-1), SFInt32(175), SFInt32(167), SFInt32(164), SFInt32(-1), SFInt32(164), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(173), SFInt32(-1), SFInt32(173), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(174), SFInt32(170), SFInt32(169), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(175), SFInt32(-1), SFInt32(175), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(171), SFInt32(175), SFInt32(172), SFInt32(-1), SFInt32(172), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(171), SFInt32(168), SFInt32(169), SFInt32(-1), SFInt32(169), SFInt32(170), SFInt32(171), SFInt32(-1), SFInt32(188), SFInt32(192), SFInt32(193), SFInt32(-1), SFInt32(193), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(189), SFInt32(193), SFInt32(194), SFInt32(-1), SFInt32(194), SFInt32(190), SFInt32(189), SFInt32(-1), SFInt32(190), SFInt32(194), SFInt32(195), SFInt32(-1), SFInt32(195), SFInt32(191), SFInt32(190), SFInt32(-1), SFInt32(191), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(192), SFInt32(188), SFInt32(191), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(197), SFInt32(-1), SFInt32(197), SFInt32(193), SFInt32(192), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(198), SFInt32(-1), SFInt32(198), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(194), SFInt32(198), SFInt32(199), SFInt32(-1), SFInt32(199), SFInt32(195), SFInt32(194), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(192), SFInt32(195), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(198), SFInt32(-1), SFInt32(198), SFInt32(197), SFInt32(196), SFInt32(-1), SFInt32(213), SFInt32(217), SFInt32(216), SFInt32(-1), SFInt32(216), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(214), SFInt32(218), SFInt32(217), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(214), SFInt32(-1), SFInt32(215), SFInt32(219), SFInt32(218), SFInt32(-1), SFInt32(218), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(215), SFInt32(212), SFInt32(-1), SFInt32(217), SFInt32(221), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(216), SFInt32(217), SFInt32(-1), SFInt32(218), SFInt32(222), SFInt32(221), SFInt32(-1), SFInt32(221), SFInt32(217), SFInt32(218), SFInt32(-1), SFInt32(219), SFInt32(223), SFInt32(222), SFInt32(-1), SFInt32(222), SFInt32(218), SFInt32(219), SFInt32(-1), SFInt32(216), SFInt32(220), SFInt32(223), SFInt32(-1), SFInt32(223), SFInt32(219), SFInt32(216), SFInt32(-1), SFInt32(221), SFInt32(222), SFInt32(223), SFInt32(-1), SFInt32(223), SFInt32(220), SFInt32(221), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('SKINCOORD'))))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('BoxMan_view'),
                  DEF_ : SFString('boxman_BoxMan_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('Inclined_View'),
                      description_ : SFString('Inclined View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.78)]),
                      position_ : SFVec3f([SFDouble(2), SFDouble(0.9), SFDouble(2)])),

                    Viewpoint(
                      DEF_ : SFString('Front_View'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

                    Viewpoint(
                      DEF_ : SFString('Best_View'),
                      description_ : SFString('Right-side View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                      position_ : SFVec3f([SFDouble(-3), SFDouble(1), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('Side_View'),
                      description_ : SFString('Left-side View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                      position_ : SFVec3f([SFDouble(3), SFDouble(1), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('Top_View'),
                      description_ : SFString('Top View'),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(0)]))]),

                HAnimJoint(
                  USE_ : SFString('boxman_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('boxman_skullbase')),

                HAnimJoint(
                  USE_ : SFString('boxman_vl5')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_ankle')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_ankle')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_hip')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_hip')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_knee')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_knee')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_wrist')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_wrist')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('boxman_sacrum')),

                HAnimSegment(
                  USE_ : SFString('boxman_l5')),

                HAnimSegment(
                  USE_ : SFString('boxman_skull')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_calf')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_calf')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_hand')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_hand')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_middistal')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_middistal')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('boxman_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('boxman_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('boxman_skull_tip'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('boxman_l_hand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('boxman_r_hand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('boxman_l_middistal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('boxman_r_middistal_tip'))),

            Group(
              DEF_ : SFString('StopAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('StopTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                PositionInterpolator(
                  DEF_ : SFString('Stop_humanoid_root_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_humanoid_root_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_sacroiliac_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_subtalar_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_midtarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_metatarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_subtalar_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_midtarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_metatarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt12_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt11_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt10_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt9_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt8_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt7_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt6_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc7_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc6_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_skullbase_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_eyeball_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_eyeball_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_sternoclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_acromioclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_sternoclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_acromioclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('StandAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('StandTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.015), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.17), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.025), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_eyeball_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.45), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_eyeball_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.45), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Stand_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index1_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index2_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.32), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index3_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.35), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('PitchesAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('PitchTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.55), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Pitches_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.625), SFFloat(0.75), SFFloat(0.875), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,-0.7,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,0,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,-0.7,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('YawsAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('YawTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Yaws_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('RollsAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('RollTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Rolls_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.625), SFFloat(0.75), SFFloat(0.875), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,-0.8,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,0,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,-0.8,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('WalkAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('WalkTimer'),
                  cycleInterval_ : 1.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3533), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1072), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2612), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1268), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.01793), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05824), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2398), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3322), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8926), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2475), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9911), SFRotation(-0.03541), SFRotation(-0.1286), SFRotation(0.5419), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(-0.4306), SFRotation(-0.07962), SFRotation(-0.899), SFRotation(0.07038), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2152), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3184), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4717), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2912), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1222), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1556), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08678), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.131), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3942), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-0.7018), SFRotation(-0.03223), SFRotation(-0.7117), SFRotation(0.1289), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.09018), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346), SFRotation(0.1533), SFRotation(-0.9878), SFRotation(0.02582), SFRotation(0.3902), SFRotation(-0.5701), SFRotation(0.7604), SFRotation(-0.311), SFRotation(0.366), SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0925011), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.572568), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3197), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1564), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076), SFRotation(-0.330195), SFRotation(-0.927451), SFRotation(0.175516), SFRotation(0.538852), SFRotation(0.0327774), SFRotation(-0.999314), SFRotation(-0.0172185), SFRotation(0.492033), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.488383), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0177536), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1861), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3357), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.4167), SFFloat(0.5), SFFloat(0.5833), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.8333), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1825), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1505), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1053), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.04391), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.03119), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.07936), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1616), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.155), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826), SFRotation(-0.01972), SFRotation(-0.5974), SFRotation(0.8017), SFRotation(0.08231), SFRotation(0.009296), SFRotation(-0.9648), SFRotation(0.2627), SFRotation(0.1734), SFRotation(-0.01238), SFRotation(0.9549), SFRotation(-0.2968), SFRotation(0.08732), SFRotation(-0.008125), SFRotation(0.9691), SFRotation(-0.2463), SFRotation(0.158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Walk_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('RunAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('RunTimer'),
                  cycleInterval_ : 0.9,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_hip_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.99), SFRotation(0.033), SFRotation(0.04), SFRotation(1.42), SFRotation(-0.99), SFRotation(0.1328), SFRotation(0.067), SFRotation(0.42), SFRotation(0.99), SFRotation(0.014), SFRotation(0.009), SFRotation(0.9), SFRotation(-0.99), SFRotation(0.0703), SFRotation(0.05), SFRotation(0.7), SFRotation(-0.99), SFRotation(0.033), SFRotation(0.04), SFRotation(1.42)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_knee_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.426), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_ankle_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.3), SFFloat(0.4), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0374), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1037), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4328), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1929), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03574)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_hip_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.99), SFRotation(-0.014), SFRotation(0.009), SFRotation(0.9), SFRotation(-0.99), SFRotation(-0.0703), SFRotation(-0.05), SFRotation(0.7), SFRotation(-0.99), SFRotation(-0.033), SFRotation(0.04), SFRotation(1.42), SFRotation(-0.99), SFRotation(-0.1328), SFRotation(-0.067), SFRotation(0.42), SFRotation(0.99), SFRotation(-0.014), SFRotation(0.009), SFRotation(0.9)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_knee_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.426), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_ankle_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.71), SFFloat(0.8), SFFloat(0.82), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07843), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.32), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.374), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3478), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_shoulder_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.99), SFRotation(-0.074), SFRotation(0.25), SFRotation(1.5), SFRotation(0.99), SFRotation(-0.092), SFRotation(0.44), SFRotation(0.3), SFRotation(-0.99), SFRotation(0.136), SFRotation(0.25), SFRotation(0.85), SFRotation(0.99), SFRotation(-0.081), SFRotation(0.38), SFRotation(0.4), SFRotation(0.99), SFRotation(-0.074), SFRotation(0.25), SFRotation(1.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_elbow_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85), SFRotation(-0.99), SFRotation(-0.19), SFRotation(0.18), SFRotation(1.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975), SFRotation(-0.99), SFRotation(-0.09), SFRotation(-0.02), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_wrist_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.25), SFRotation(-1), SFRotation(0.08), SFRotation(0.14), SFRotation(0.25), SFRotation(1), SFRotation(0.08), SFRotation(0.14), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.25), SFRotation(1), SFRotation(0.08), SFRotation(-0.14), SFRotation(-0.25), SFRotation(1), SFRotation(0.08), SFRotation(0.14)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_shoulder_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.99), SFRotation(-0.136), SFRotation(-0.25), SFRotation(0.85), SFRotation(0.99), SFRotation(0.081), SFRotation(-0.38), SFRotation(0.4), SFRotation(0.99), SFRotation(0.074), SFRotation(-0.25), SFRotation(1.5), SFRotation(0.99), SFRotation(0.081), SFRotation(-0.38), SFRotation(0.4), SFRotation(-0.99), SFRotation(-0.136), SFRotation(-0.25), SFRotation(0.85)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_elbow_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975), SFRotation(-0.99), SFRotation(0.09), SFRotation(0.02), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85), SFRotation(-0.99), SFRotation(0.19), SFRotation(-0.18), SFRotation(1.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_wrist_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273), SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_lower_body_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.125)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_head_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.12), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_neck_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.7), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(-0.7), SFRotation(-0.7), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(-0.7), SFRotation(0.7), SFRotation(0), SFRotation(0.4), SFRotation(0.7), SFRotation(0), SFRotation(0), SFRotation(0.4)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_upper_body_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7636), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.97), SFRotation(0.65), SFRotation(0.086), SFRotation(0.5), SFRotation(0.9), SFRotation(0.003), SFRotation(-0.02), SFRotation(0.38), SFRotation(0.95), SFRotation(-0.68), SFRotation(-0.086), SFRotation(0.5), SFRotation(0.9), SFRotation(0.004), SFRotation(-0.025), SFRotation(0.4), SFRotation(0.97), SFRotation(0.65), SFRotation(0.086), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_whole_body_RotationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.168), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06)])),

                PositionInterpolator(
                  DEF_ : SFString('Run_whole_body_TranslationInterpolator_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.3), SFFloat(0.31), SFFloat(0.5), SFFloat(0.69), SFFloat(0.7), SFFloat(0.78), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.01,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.049,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.01,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.049,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.01,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('JumpAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('JumpTimer'),
                  cycleInterval_ : 3.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.15), SFFloat(0.25), SFFloat(0.28), SFFloat(0.32), SFFloat(0.35), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3527), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3038), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2087), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3756), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3279), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1193), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.25), SFFloat(0.3), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9507), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5845), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9054), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.18), SFFloat(0.24), SFFloat(0.26), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.63), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.8943), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3698), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4963), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3829), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5169), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3364), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2742), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05078), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6667), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2108), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.375), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3146), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1174), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.566), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5913), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9235), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.615), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9136), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3614), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7869), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3918), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5433), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.00222418), SFRotation(0.99801), SFRotation(-0.0630095), SFRotation(1.46072), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.497349), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5855), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5852), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.48), SFFloat(0.52), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.00364942), SFRotation(0.999901), SFRotation(0.0135896), SFRotation(4.5822), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.655922), SFRotation(-0.00050618), SFRotation(-0.999999), SFRotation(0.0012782), SFRotation(1.28397), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.58), SFFloat(0.72), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.13), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(1), SFRotation(0.0004113), SFRotation(0.003055), SFRotation(4.114), SFRotation(-0.8413), SFRotation(0.3238), SFRotation(0.4329), SFRotation(1.453), SFRotation(-0.877), SFRotation(0.4198), SFRotation(0.2337), SFRotation(0.6009), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_head_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3216), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06503), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.28), SFFloat(0.34), SFFloat(0.71), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.05), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.051), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.257), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2171), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3465), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Jump_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.04), SFFloat(0.07), SFFloat(0.11), SFFloat(0.15), SFFloat(0.19), SFFloat(0.22), SFFloat(0.25), SFFloat(0.27), SFFloat(0.31), SFFloat(0.33), SFFloat(0.35), SFFloat(0.38), SFFloat(0.53), SFFloat(0.544), SFFloat(0.76), SFFloat(0.8), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.01264,-0.01289]),SFVec3f([0,-0.04712,-0.03738]),SFVec3f([-0.0003345,-0.1049,-0.05353]),SFVec3f([-0.0005712,-0.1892,-0.06561]),SFVec3f([-0.0008233,-0.286,-0.06276]),SFVec3f([-0.0009591,-0.3795,-0.05148]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.001122,-0.25,-0.1499]),SFVec3f([-0.0008616,-0.05,-0.06358]),SFVec3f([-0.0005128,0.15,-0.05488]),SFVec3f([0.0004779,0.55,0.02732]),SFVec3f([0.0001728,1.385,0.006873]),SFVec3f([0.00017,1.395,0.0069]),SFVec3f([0,0.35,0.02148]),SFVec3f([0,-0.01299,-0.01057]),SFVec3f([0,-0.06932,-0.01064]),SFVec3f([0.0001365,-0.1037,-0.005059]),SFVec3f([0.0001279,-0.07198,-0.007596]),SFVec3f([0.000141,-0.01626,-0.004935]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.8), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.8), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('KickAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('KickTimer'),
                  cycleInterval_ : 3.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_shoulder_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.76), SFRotation(-0.25), SFRotation(0), SFRotation(1), SFRotation(1.76), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.256), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_ForeArm_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.55), SFRotation(-1), SFRotation(0.25), SFRotation(0), SFRotation(2.55), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_wrist_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.55), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_sternoclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_acromioclavicular_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_shoulder_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.76), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(-1.76), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.256), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_ForeArm_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.55), SFRotation(1), SFRotation(0.25), SFRotation(0), SFRotation(-2.55), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_wrist_RollInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.55), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_thumb1_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_hip_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.3), SFFloat(0.5), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(2.25), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_knee_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.95), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.28), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_hip_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.3), SFFloat(0.5), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_knee_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_ankle_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.95), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_metatarsal_PitchInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_sacroiliac_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_vl5_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_vc6_YawInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_lower_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_upper_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_whole_body_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Kick_whole_body_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_neck_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.55), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('Interface'),
              children_ : [
                Transform(
                  DEF_ : SFString('CoordinateSystemFloor'),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('AxisLinesShape'),
                      /*RGB lines showing XYZ axes*/
                      geometry_ : 
                        IndexedLineSet(
                          colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                          colorPerVertex_ : false,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([1,0,0]),SFVec3f([0,1,0]),SFVec3f([0,0,1])])),
                          color_ : 
                            Color(
                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))]),

                ProximitySensor(
                  DEF_ : SFString('HudProx'),
                  size_ : SFVec3f([SFDouble(50), SFDouble(50), SFDouble(50)])),

                Transform(
                  DEF_ : SFString('HudXform'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.78)]),
                  translation_ : SFVec3f([SFDouble(2), SFDouble(1), SFDouble(2)]),
                  children_ : [
                    Transform(
                      scale_ : SFVec3f([SFDouble(0.02), SFDouble(0.02), SFDouble(0.02)]),
                      translation_ : SFVec3f([SFDouble(-0.4), SFDouble(-0.01), SFDouble(-0.75)]),
                      children_ : [
                        Transform(
                          DEF_ : SFString('Stand_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.9), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Stand_Touch')),

                            Shape(
                              DEF_ : SFString('StandText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('text_color'),
                                      ambientIntensity_ : 1,
                                      diffuseColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]),
                                      emissiveColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]),
                                      specularColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Stand")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Stand_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('Clear'),
                                      ambientIntensity_ : 1,
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
                                      emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                IndexedFaceSet(
                                  DEF_ : SFString('Backing'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([-0.2,-0.25,-0.01]),SFVec3f([3,-0.25,-0.01]),SFVec3f([3,1,-0.01]),SFVec3f([-0.2,1,-0.01])]))))]),

                        Transform(
                          DEF_ : SFString('Pitch_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-2.4), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Pitch_Touch')),

                            Shape(
                              DEF_ : SFString('PitchText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Pitch")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Pitch_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Yaw_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-3.8), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Yaw_Touch')),

                            Shape(
                              DEF_ : SFString('YawText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Yaw")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Yaw_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Roll_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-5.2), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Roll_Touch')),

                            Shape(
                              DEF_ : SFString('RollText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Roll")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Roll_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Walk_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-6.6), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Walk_Touch')),

                            Shape(
                              DEF_ : SFString('WalkText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Walk")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Walk_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Run_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-8), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Run_Touch')),

                            Shape(
                              DEF_ : SFString('RunText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Run")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Run_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Jump_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-9.4), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Jump_Touch')),

                            Shape(
                              DEF_ : SFString('JumpText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Jump")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Jump_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Kick_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-10.8), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Kick_Touch')),

                            Shape(
                              DEF_ : SFString('KickText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Kick")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Kick_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('Stop_Text'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('Stop_Touch')),

                            Shape(
                              DEF_ : SFString('StopText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Default")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")])))),

                            Shape(
                              DEF_ : SFString('Stop_Back'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Clear'))),
                              geometry_ : 
                                IndexedFaceSet(
                                  USE_ : SFString('Backing')))]),

                        Transform(
                          DEF_ : SFString('SceneLabel'),
                          translation_ : SFVec3f([SFDouble(1.3), SFDouble(3), SFDouble(0)]),
                          children_ : [
                            Shape(
                              DEF_ : SFString('SceneLabelText'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('text_color'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("BoxMan3"), SFString("Animation")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))])])])]),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_humanoid_root_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_humanoid_root_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_sacroiliac_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_subtalar_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_midtarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_metatarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_subtalar_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_midtarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_metatarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vl5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vl4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vl3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vl2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vl1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt12_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt11_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt10_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt9_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt8_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt7_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt6_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vt1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc7_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc6_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_vc1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_skullbase_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_eyeball_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_eyeball_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_sternoclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_acromioclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_thumb1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_thumb2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_thumb3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_index0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_index1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_index2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_index3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_middle0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_middle1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_middle2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_middle3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_ring0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_ring1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_ring2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_ring3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_pinky0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_pinky1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_pinky2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_l_pinky3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_sternoclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_acromioclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_thumb1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_thumb2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_thumb3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_index0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_index1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_index2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_index3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_middle0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_middle1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_middle2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_middle3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_ring0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_ring1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_ring2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_ring3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_pinky0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_pinky1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_pinky2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StopTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stop_r_pinky3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_humanoid_root_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_humanoid_root_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_midtarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_midtarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_vl5_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_skullbase_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stop_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_eyeball_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_eyeball_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_index1_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_index2_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('StandTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Stand_r_index3_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Stand_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitches_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Pitch_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitches_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Pitch_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaws_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('YawTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Yaw_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaws_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Yaw_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Rolls_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RollTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Roll_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Rolls_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Roll_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Walk_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Walk_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_ankle_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_knee_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_hip_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_ankle_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_knee_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_hip_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_lower_body_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_wrist_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_elbow_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_shoulder_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_wrist_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_elbow_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_shoulder_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_head_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_neck_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_upper_body_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_whole_body_RotationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_whole_body_TranslationInterpolator_Run')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RunTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Run_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_ankle_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_knee_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_hip_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_ankle_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_knee_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_hip_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_wrist_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_elbow_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_r_shoulder_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_wrist_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_elbow_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_l_shoulder_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_head_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_whole_body_RotationInterpolator_Run'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_whole_body_TranslationInterpolator_Run'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Run_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_head_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Jump_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_head_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Jump_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_shoulder_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_ForeArm_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_wrist_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_sternoclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_acromioclavicular_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_shoulder_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_ForeArm_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_wrist_RollInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_thumb1_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_hip_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_knee_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_hip_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_l_knee_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_ankle_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_r_metatarsal_PitchInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_sacroiliac_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_vl5_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_vc6_YawInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_lower_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_upper_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_whole_body_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_whole_body_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Kick_neck_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_l_shoulder_RollInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_l_ForeArm_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_l_wrist_RollInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_shoulder_RollInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_ForeArm_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_wrist_RollInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_hip_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_knee_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_ankle_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_l_hip_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_l_knee_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_r_ankle_PitchInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_vl5_YawInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_whole_body_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Kick_whole_body_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('position_changed'),
              fromNode_ : SFString('HudProx'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('HudXform')),

            ROUTE(
              fromField_ : SFString('orientation_changed'),
              fromNode_ : SFString('HudProx'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('HudXform')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stand_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Pitch_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Yaw_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Walk_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Roll_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Run_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Jump_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StopTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Kick_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('StandTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('PitchTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('YawTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RollTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('WalkTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('RunTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('JumpTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_stopTime'),
              toNode_ : SFString('KickTimer')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Stop_Touch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('StopTimer'))]));
void main() { exit(0); }
