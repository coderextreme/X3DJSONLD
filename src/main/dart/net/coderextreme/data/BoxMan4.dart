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
              content_ : SFString('BoxMan.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('James Smith - james@vapourtech.com')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman and Matt Beitler')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('1 March 2001')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('19 October 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('8 January 2023')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('../Legacy/originals/boxman.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BoxMan.js')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Skin mesh is split across multiple shapes within a Group, should that be allowed?')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('What does the original animation script accomplish? It is not hooked up, script source contains errors...')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManViewInclined.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManViewFront.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManViewRight.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManViewLeft.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('BoxManViewTop.png')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BoxManAnimationPanel.x3d')),

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
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d')),

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
              title_ : SFString('BoxMan - A Seamless VRML Human')),

            Background(
              groundColor_ : MFColor([SFColor(0.6), SFColor(0.6), SFColor(0.6)]),
              skyColor_ : MFColor([SFColor(0.75), SFColor(0.75), SFColor(0.75)])),
          /*When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet*/

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
                      DEF_ : SFString('Right_View'),
                      description_ : SFString('Right-side View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                      position_ : SFVec3f([SFDouble(-3), SFDouble(1), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('Left_View'),
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
                  USE_ : SFString('boxman_l_ankle')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_ankle')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_hip')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_hip')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_knee')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_knee')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('boxman_l_wrist')),

                HAnimJoint(
                  USE_ : SFString('boxman_r_wrist')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('boxman_l5')),

                HAnimSegment(
                  USE_ : SFString('boxman_sacrum')),

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

            ExternProtoDeclare(
              name_ : SFString('LOA1_WalkAnimation'),
              url_ : MFString([SFString("LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), SFString("http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation"), SFString("LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), SFString("http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation")]),
              field_ : [
                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('cycleInterval'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('loop'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('startTime'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('stopTime'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('fraction_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('HumanoidRoot_translation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('HumanoidRoot_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_hip_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_knee_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_ankle_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_midtarsal_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_hip_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_knee_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_ankle_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_midtarsal_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('vl5_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('skullbase_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_shoulder_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_elbow_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('l_wrist_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_shoulder_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_elbow_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('r_wrist_rotation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('isActive'),
                  accessType_ : SFString("outputOnly"))]),

            ProtoInstance(
              name_ : SFString('LOA1_WalkAnimation'),
              DEF_ : SFString('ANIMATOR')),
          /*Animation ROUTEs*/

            ROUTE(
              fromField_ : SFString('HumanoidRoot_translation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('HumanoidRoot_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_humanoid_root')),

            ROUTE(
              fromField_ : SFString('l_hip_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_hip')),

            ROUTE(
              fromField_ : SFString('l_knee_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_knee')),

            ROUTE(
              fromField_ : SFString('l_ankle_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_ankle')),

            ROUTE(
              fromField_ : SFString('l_midtarsal_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_midtarsal')),

            ROUTE(
              fromField_ : SFString('r_hip_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_hip')),

            ROUTE(
              fromField_ : SFString('r_knee_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_knee')),

            ROUTE(
              fromField_ : SFString('r_ankle_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_ankle')),

            ROUTE(
              fromField_ : SFString('r_midtarsal_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_midtarsal')),

            ROUTE(
              fromField_ : SFString('vl5_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_vl5')),

            ROUTE(
              fromField_ : SFString('skullbase_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_skullbase')),

            ROUTE(
              fromField_ : SFString('l_shoulder_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_shoulder')),

            ROUTE(
              fromField_ : SFString('l_elbow_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_elbow')),

            ROUTE(
              fromField_ : SFString('l_wrist_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_l_wrist')),

            ROUTE(
              fromField_ : SFString('r_shoulder_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_shoulder')),

            ROUTE(
              fromField_ : SFString('r_elbow_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_elbow')),

            ROUTE(
              fromField_ : SFString('r_wrist_rotation_changed'),
              fromNode_ : SFString('ANIMATOR'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('boxman_r_wrist')),

            Script(
              DEF_ : SFString('ENGINE'),
              directOutput_ : true,
              url_ : MFString([SFString("BoxMan.js"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js")]),
              field_ : [
                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('update'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('humanoid'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('boxman_Humanoid'))]),

                field(
                  type_ : SFString("MFVec3f"),
                  name_ : SFString('coordList'),
                  accessType_ : SFString("initializeOnly")),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('joint'),
                  accessType_ : SFString("initializeOnly"),
                  /*initialization node (if any) goes here*/),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('translation'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('0 0 0')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('rotation'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('1 0 0 0')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('scale'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('1 1 1'))]),
          /*Trigger calculation after each animation change*/
          /*<ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/>*/]));
void main() { exit(0); }
