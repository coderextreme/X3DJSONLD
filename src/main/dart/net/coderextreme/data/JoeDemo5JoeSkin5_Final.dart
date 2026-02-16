// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.1'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('JoeDemo5JoeSkin5.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('joe kick into std anims'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('JoeDemo5JoeSkin.x3d, Only Skin')),

            NavigationInfo(
              headlight_ : false),

            Background(
              DEF_ : SFString('Background1'),
              skyColor_ : MFColor([SFColor(0.4), SFColor(0.4), SFColor(0.4)]),
              groundColor_ : MFColor([SFColor(0.5), SFColor(0.5), SFColor(0.5)])),

            DirectionalLight(
              global_ : true),

            DirectionalLight(
              direction_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
              global_ : true,
              intensity_ : 0.75),

            DirectionalLight(
              direction_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
              global_ : true),

            Group(
              DEF_ : SFString('SceneViewpoints'),
              children_ : [
                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                  description_ : SFString('JinLOA4'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Front'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(4)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Front Close'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Front Closer'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Front Face'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(1)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Right Side'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                  position_ : SFVec3f([SFDouble(2.6), SFDouble(0.8), SFDouble(0)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Right Side Close'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.2)]),
                  position_ : SFVec3f([SFDouble(1), SFDouble(0.8), SFDouble(0.5)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Left Side Close'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.2)]),
                  position_ : SFVec3f([SFDouble(-1), SFDouble(0.8), SFDouble(0.5)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Left Side'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3f([SFDouble(-2.6), SFDouble(0.8), SFDouble(0)])),

                Viewpoint(
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0.0016)]),
                  description_ : SFString('JinLOA4 Top'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]))]),

            Transform(
              DEF_ : SFString('HostCoordSys'),
              scale_ : SFVec3f([SFDouble(0.17), SFDouble(0.17), SFDouble(0.17)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("JointCoordinateAxes.x3dv")])),

                Viewpoint(
                  DEF_ : SFString('HostCoordSysView'),
                  description_ : SFString('Host 0 0 0 View'))]),

            Group(
              DEF_ : SFString('Joe_Humanoid'),
              children_ : [
                HAnimHumanoid(
                  DEF_ : SFString('JoeHuman'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      DEF_ : SFString('hanim_humanoid_root'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('RootFront'),
                          DEF_ : SFString('Joe_RootView1'),
                          children_ : [
                            Transform(
                              DEF_ : SFString('HAnimCoordSys'),
                              scale_ : SFVec3f([SFDouble(0.17), SFDouble(0.17), SFDouble(0.17)]),
                              children_ : [
                                Inline(
                                  url_ : MFString([SFString("JointCoordinateAxes.x3dv")])),

                                Viewpoint(
                                  DEF_ : SFString('HAnimCoordSysView'),
                                  description_ : SFString('HAnim 0 0 0 View'))])]),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('sacroiliac'),
                          DEF_ : SFString('Joe_sacroiliac'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.920000016689301), SFDouble(0)]),
                          skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.349999994039536), SFFloat(0.349999994039536), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('l_hip'),
                              DEF_ : SFString('hanim_l_hip'),
                              center_ : SFVec3f([SFDouble(0.100000001490116), SFDouble(0.920000016689301), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(89), SFInt32(90), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.649999976158142), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('l_knee'),
                                  DEF_ : SFString('hanim_l_knee'),
                                  center_ : SFVec3f([SFDouble(0.115000002086163), SFDouble(0.465999990701675), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_talocrural'),
                                      DEF_ : SFString('hanim_l_talocrural'),
                                      center_ : SFVec3f([SFDouble(0.115000002086163), SFDouble(0.0689999982714653), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_tarsometatarsal_2'),
                                          DEF_ : SFString('Joe_l_tarsometatarsal_2'),
                                          center_ : SFVec3f([SFDouble(0.115000002086163), SFDouble(0.0309999994933605), SFDouble(0.0299999993294477)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_metatarsophalangeal_2'),
                                              DEF_ : SFString('Joe_l_metatarsophalangeal_2'),
                                              center_ : SFVec3f([SFDouble(0.115000002086163), SFDouble(0.0370000004768372), SFDouble(0.0900000035762787)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsal_2'),
                                                  DEF_ : SFString('Joe_l_metatarsal_2'),
                                                  center_ : SFVec3f([SFDouble(0.115000002086163), SFDouble(0.0199999995529652), SFDouble(0.122000001370907)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                            HAnimJoint(
                              name_ : SFString('r_hip'),
                              DEF_ : SFString('hanim_r_hip'),
                              center_ : SFVec3f([SFDouble(-0.100000001490116), SFDouble(0.920000016689301), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101), SFInt32(362), SFInt32(363)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.649999976158142), SFFloat(1), SFFloat(0.800000011920929), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.400000005960464), SFFloat(0.800000011920929)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('r_knee'),
                                  DEF_ : SFString('hanim_r_knee'),
                                  center_ : SFVec3f([SFDouble(-0.0500000007450581), SFDouble(0.465999990701675), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369), SFInt32(98)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.600000023841858), SFFloat(0.200000002980232), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.200000002980232)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('r_talocrural'),
                                      DEF_ : SFString('hanim_r_talocrural'),
                                      center_ : SFVec3f([SFDouble(-0.115000002086163), SFDouble(0.0689999982714653), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_tarsometatarsal_2'),
                                          DEF_ : SFString('Joe_r_tarsometatarsal_2'),
                                          center_ : SFVec3f([SFDouble(-0.100000001490116), SFDouble(0.0149999996647239), SFDouble(-0.00999999977648258)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_metatarsophalangeal_2'),
                                              DEF_ : SFString('Joe_r_metatarsophalangeal_2'),
                                              center_ : SFVec3f([SFDouble(-0.115000002086163), SFDouble(0.0370000004768372), SFDouble(0.0900000035762787)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                  DEF_ : SFString('Joe_r_tarsal_distal_interphalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.100000001490116), SFDouble(0.00999999977648258), SFDouble(0.140000000596046)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])]),

                        HAnimJoint(
                          name_ : SFString('vl5'),
                          DEF_ : SFString('hanim_vl5'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.04499995708466), SFDouble(-0.0949999988079071)]),
                          skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('vl4'),
                              DEF_ : SFString('hanim_vl4'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.067999958992), SFDouble(-0.0850000008940697)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('vl3'),
                                  DEF_ : SFString('hanim_vl3'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.09200000762939), SFDouble(-0.0724999979138374)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('vl2'),
                                      DEF_ : SFString('hanim_vl2'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.12000000476837), SFDouble(-0.0649999976158142)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.699999988079071), SFFloat(1), SFFloat(0.800000011920929)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('vl1'),
                                          DEF_ : SFString('hanim_vl1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.14590001106262), SFDouble(-0.0625)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('vt12'),
                                              DEF_ : SFString('hanim_vt12'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.17900002002716), SFDouble(-0.068000003695488)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('vt11'),
                                                  DEF_ : SFString('hanim_vt11'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.26789999008179), SFDouble(-0.0810000002384186)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('vt10'),
                                                      DEF_ : SFString('hanim_vt10'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.24199998378754), SFDouble(-0.0900000035762787)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('vt9'),
                                                          DEF_ : SFString('hanim_vt9'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.26800000667572), SFDouble(-0.100000001490116)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimJoint(
                                                              name_ : SFString('vt8'),
                                                              DEF_ : SFString('hanim_vt8'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.2940000295639), SFDouble(-0.109999999403954)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  name_ : SFString('vt7'),
                                                                  DEF_ : SFString('hanim_vt7'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.32299995422363), SFDouble(-0.115500003099442)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      name_ : SFString('vt6'),
                                                                      DEF_ : SFString('hanim_vt6'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.35199999809265), SFDouble(-0.119999997317791)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          name_ : SFString('vt5'),
                                                                          DEF_ : SFString('hanim_vt5'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.38100004196167), SFDouble(-0.123499996960163)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              name_ : SFString('vt4'),
                                                                              DEF_ : SFString('hanim_vt4'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.4099999666214), SFDouble(-0.123499996960163)]),
                                                                              skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt3'),
                                                                                  DEF_ : SFString('hanim_vt3'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.43799996376038), SFDouble(-0.119999997317791)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt2'),
                                                                                      DEF_ : SFString('hanim_vt2'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.46800005435944), SFDouble(-0.104999996721745)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt1'),
                                                                                          DEF_ : SFString('hanim_vt1'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.49699997901917), SFDouble(-0.0900000035762787)]),
                                                                                          skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc7'),
                                                                                              DEF_ : SFString('hanim_vc7'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.52499997615814), SFDouble(-0.0719999969005585)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc6'),
                                                                                                  DEF_ : SFString('hanim_vc6'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.53999996185303), SFDouble(-0.0500000007450581)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc5'),
                                                                                                      DEF_ : SFString('hanim_vc5'),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.55200004577637), SFDouble(-0.0350000001490116)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc4'),
                                                                                                          DEF_ : SFString('hanim_vc4'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.56749999523163), SFDouble(-0.0255999993532896)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc3'),
                                                                                                              DEF_ : SFString('hanim_vc3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.58224999904633), SFDouble(-0.0185000002384186)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc2'),
                                                                                                                  DEF_ : SFString('hanim_vc2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.59500002861023), SFDouble(-0.0175000000745058)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc1'),
                                                                                                                      DEF_ : SFString('hanim_vc1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.61000001430511), SFDouble(-0.0149999996647239)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('skullbase'),
                                                                                                                          DEF_ : SFString('hanim_skullbase'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.62999999523163), SFDouble(-0.00999999977648258)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_eyeball_joint'),
                                                                                                                              DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.034000001847744), SFDouble(1.65900003910065), SFDouble(0.0599999986588955)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_eyeball_joint'),
                                                                                                                              DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.034000001847744), SFDouble(1.65900003910065), SFDouble(0.0599999986588955)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_sternoclavicular'),
                                                                                                  DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0820000022649765), SFDouble(1.44879996776581), SFDouble(-0.035300001502037)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_acromioclavicular'),
                                                                                                      DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0961999967694283), SFDouble(1.42690002918243), SFDouble(-0.0423999987542629)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_shoulder'),
                                                                                                          DEF_ : SFString('hanim_l_shoulder'),
                                                                                                          center_ : SFVec3f([SFDouble(0.200000002980232), SFDouble(1.44000005722046), SFDouble(-0.0399999991059303)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_elbow'),
                                                                                                              DEF_ : SFString('hanim_l_elbow'),
                                                                                                              center_ : SFVec3f([SFDouble(0.200000002980232), SFDouble(1.13880002498627), SFDouble(-0.0399999991059303)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_radiocarpal'),
                                                                                                                  DEF_ : SFString('Joe_l_radiocarpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.200000002980232), SFDouble(0.870000004768372), SFDouble(-0.0399999991059303)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_1'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.192399993538857), SFDouble(0.847199976444244), SFDouble(-0.0533999986946583)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.195099994540215), SFDouble(0.82260000705719), SFDouble(0.0245999991893768)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_interphalangeal_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.195500001311302), SFDouble(0.815900027751923), SFDouble(0.046399999409914)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_2'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.198300004005432), SFDouble(0.80239999294281), SFDouble(-0.0280000008642673)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.198300004005432), SFDouble(0.781499981880188), SFDouble(-0.0280000008642673)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.201700001955032), SFDouble(0.736299991607666), SFDouble(-0.0248000007122755)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.202800005674362), SFDouble(0.713900029659271), SFDouble(-0.0236000008881092)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_3'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.198699995875359), SFDouble(0.802900016307831), SFDouble(-0.0529999993741512)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.198699995875359), SFDouble(0.781799972057343), SFDouble(-0.0529999993741512)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.201299995183945), SFDouble(0.727299988269806), SFDouble(-0.0502999983727932)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.202600002288818), SFDouble(0.701099991798401), SFDouble(-0.0494000017642975)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_4'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.195600003004074), SFDouble(0.801900029182434), SFDouble(-0.0794000029563904)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.195600003004074), SFDouble(0.781499981880188), SFDouble(-0.0794000029563904)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.197300001978874), SFDouble(0.72869998216629), SFDouble(-0.0776999965310097)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.198300004005432), SFDouble(0.704500019550323), SFDouble(-0.0767000019550323)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpometacarpal_5'),
                                                                                                                      DEF_ : SFString('Joe_l_carpometacarpal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.192499995231628), SFDouble(0.806599974632263), SFDouble(-0.10360000282526)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                          DEF_ : SFString('Joe_l_metacarpophalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.192499995231628), SFDouble(0.78659999370575), SFDouble(-0.10360000282526)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('Joe_l_carpal_proximal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.193800002336502), SFDouble(0.745199978351593), SFDouble(-0.102399997413158)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                                  DEF_ : SFString('Joe_l_carpal_distal_interphalangeal_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.19480000436306), SFDouble(0.727699995040894), SFDouble(-0.101700000464916)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_sternoclavicular'),
                                                                                                  DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.0299999993294477), SFDouble(1.46000003814697), SFDouble(0)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_acromioclavicular'),
                                                                                                      DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.0900000035762787), SFDouble(1.4099999666214), SFDouble(-0.109999999403954)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.899999976158142)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_shoulder'),
                                                                                                          DEF_ : SFString('hanim_r_shoulder'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(1.44000005722046), SFDouble(-0.0399999991059303)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.100000001490116), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.300000011920929), SFFloat(0.200000002980232)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_elbow'),
                                                                                                              DEF_ : SFString('hanim_r_elbow'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(1.13880002498627), SFDouble(-0.0399999991059303)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_radiocarpal'),
                                                                                                                  DEF_ : SFString('Joe_r_radiocarpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.889999985694885), SFDouble(-0.0399999991059303)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_1'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.850000023841858), SFDouble(0)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.819999992847443), SFDouble(0.0299999993294477)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_interphalangeal_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.800000011920929), SFDouble(0.0500000007450581)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_2'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.839999973773956), SFDouble(-0.0149999996647239)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.792999982833862), SFDouble(-0.0149999996647239)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.745000004768372), SFDouble(-0.0149999996647239)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.720000028610229), SFDouble(-0.0149999996647239)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_3'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.834999978542328), SFDouble(-0.0399999991059303)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.787999987602234), SFDouble(-0.0399999991059303)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.740000009536743), SFDouble(-0.0399999991059303)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.714200019836426), SFDouble(-0.0399999991059303)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_4'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.834999978542328), SFDouble(-0.0649999976158142)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.792999982833862), SFDouble(-0.0649999976158142)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.740000009536743), SFDouble(-0.0649999976158142)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.717700004577637), SFDouble(-0.0649999976158142)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpometacarpal_5'),
                                                                                                                      DEF_ : SFString('Joe_r_carpometacarpal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.839999973773956), SFDouble(-0.0850000008940697)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                          DEF_ : SFString('Joe_r_metacarpophalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.790000021457672), SFDouble(-0.0850000008940697)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('Joe_r_carpal_proximal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.754999995231628), SFDouble(-0.0850000008940697)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                                  DEF_ : SFString('Joe_r_carpal_distal_interphalangeal_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.200000002980232), SFDouble(0.735000014305115), SFDouble(-0.0900000035762787)]),
                                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])])])])])])])])])])])])])])])])])])])]),

                    HAnimJoint(
                      USE_ : SFString('Joe_sacroiliac')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_hip')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_knee')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_talocrural')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_tarsometatarsal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metatarsophalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metatarsal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_hip')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_knee')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_talocrural')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_tarsometatarsal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metatarsophalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_tarsal_distal_interphalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vl5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vl4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vl3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vl2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vl1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt12')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt11')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt10')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt9')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt8')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt7')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt6')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vt1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc7')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc6')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_vc1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_skullbase')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_eyeball_joint')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_eyeball_joint')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_sternoclavicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_acromioclavicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_shoulder')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_elbow')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_radiocarpal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpometacarpal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metacarpophalangeal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_interphalangeal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpometacarpal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metacarpophalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_distal_interphalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpometacarpal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metacarpophalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_distal_interphalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpometacarpal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metacarpophalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_distal_interphalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpometacarpal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metacarpophalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_proximal_interphalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_carpal_distal_interphalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_sternoclavicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_acromioclavicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_shoulder')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_elbow')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_radiocarpal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpometacarpal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metacarpophalangeal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_interphalangeal_1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpometacarpal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metacarpophalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_distal_interphalangeal_2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpometacarpal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metacarpophalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_distal_interphalangeal_3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpometacarpal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metacarpophalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_distal_interphalangeal_4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpometacarpal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metacarpophalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_proximal_interphalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_carpal_distal_interphalangeal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_humanoid_root')),
                  skin_ : 
                    Shape(
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                          creaseAngle_ : 3.09999990463257,
                          colorPerVertex_ : false,
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('JoeSkinCoord'),
                              point_ : MFVec3f([SFVec3f([0,1.76999998092651,0]),SFVec3f([0,1.66499996185303,0.0900000035762787]),SFVec3f([-0.0329999998211861,1.62000000476837,0.0869999974966049]),SFVec3f([0.0329999998211861,1.62000000476837,0.0869999974966049]),SFVec3f([0,1.54999995231628,0.0970000028610229]),SFVec3f([-0.0769999995827675,1.63999998569489,-0.00999999977648258]),SFVec3f([-0.0527000017464161,1.58000004291534,0.0149999996647239]),SFVec3f([0.0769999995827675,1.63999998569489,-0.00999999977648258]),SFVec3f([0.0527000017464161,1.58000004291534,0.0149999996647239]),SFVec3f([0,1.625,-0.0925000011920929]),SFVec3f([-0.0299999993294477,1.46000003814697,0.0350000001490116]),SFVec3f([0,1.44000005722046,0.0299999993294477]),SFVec3f([0.0299999993294477,1.46000003814697,0.0350000001490116]),SFVec3f([-0.113499999046326,1.317999958992,0.0949999988079071]),SFVec3f([0.113499999046326,1.317999958992,0.0949999988079071]),SFVec3f([0,1.25,0.112999998033047]),SFVec3f([-0.0869999974966049,1.19000005722046,0.0900000035762787]),SFVec3f([-0.0935000032186508,1.02999997138977,0.0750000029802322]),SFVec3f([0.0869999974966049,1.19000005722046,0.0900000035762787]),SFVec3f([0.0935000032186508,1.02999997138977,0.0750000029802322]),SFVec3f([-0.142499998211861,1.06500005722046,0.00329999998211861]),SFVec3f([-0.150000005960464,0.899999976158142,-0.00999999977648258]),SFVec3f([0.142499998211861,1.06500005722046,0.00329999998211861]),SFVec3f([0.150000005960464,0.899999976158142,-0.00999999977648258]),SFVec3f([0,1.52999997138977,-0.0839999988675117]),SFVec3f([0.00490000005811453,1.19079995155334,-0.111299999058247]),SFVec3f([-0.0772999972105026,1.01900005340576,-0.119999997317791]),SFVec3f([0.0772999972105026,1.01900005340576,-0.119999997317791]),SFVec3f([0.00499999988824129,1.09150004386902,-0.109099999070168]),SFVec3f([-0.178000003099442,1.48249995708466,-0.0625]),SFVec3f([-0.170000001788139,1.37999999523163,0.00700000021606684]),SFVec3f([-0.188400000333786,0.86760002374649,-0.0359999984502792]),SFVec3f([-0.159999996423721,1.37999999523163,-0.127000004053116]),SFVec3f([-0.200000002980232,1.13880002498627,-0.0799999982118607]),SFVec3f([-0.244000002741814,1.13880002498627,-0.0399999991059303]),SFVec3f([-0.165000006556511,1.13880002498627,-0.0399999991059303]),SFVec3f([-0.230000004172325,1.13300001621246,-0.0549999997019768]),SFVec3f([-0.197699993848801,0.816900014877319,-0.0176999997347593]),SFVec3f([-0.194100007414818,0.677200019359589,-0.0423000007867813]),SFVec3f([-0.21170000731945,0.856199979782104,-0.0584000013768673]),SFVec3f([-0.192900002002716,0.788999974727631,-0.10639999806881]),SFVec3f([0.174999997019768,1.48249995708466,-0.0599999986588955]),SFVec3f([0.170000001788139,1.37999999523163,0.00700000021606684]),SFVec3f([0.190099999308586,0.864499986171722,-0.0414999984204769]),SFVec3f([0.159999996423721,1.37999999523163,-0.125]),SFVec3f([0.200000002980232,1.13880002498627,-0.0799999982118607]),SFVec3f([0.165000006556511,1.13880002498627,-0.0399999991059303]),SFVec3f([0.244000002741814,1.13880002498627,-0.0399999991059303]),SFVec3f([0.230000004172325,1.13300001621246,-0.0549999997019768]),SFVec3f([0.200900003314018,0.813899993896484,-0.023700000718236]),SFVec3f([0.205599993467331,0.674300014972687,-0.048200000077486]),SFVec3f([0.214200004935265,0.85290002822876,-0.064800001680851]),SFVec3f([0.192900002002716,0.78600001335144,-0.112199999392033]),SFVec3f([-0.100000001490116,0.491299986839294,-0.0299999993294477]),SFVec3f([-0.170000001788139,0.465999990701675,0]),SFVec3f([-0.0500000007450581,0.465999990701675,0]),SFVec3f([-0.165000006556511,0.00999999977648258,0.119999997317791]),SFVec3f([-0.150000005960464,0.0700000002980232,0]),SFVec3f([-0.0850000008940697,0.0860000029206276,0.0125000001862645]),SFVec3f([-0.0900000035762787,0.0560000017285347,0.0125000001862645]),SFVec3f([-0.115000002086163,0.0199999995529652,0.122000001370907]),SFVec3f([-0.115000002086163,0.0399999991059303,-0.0549999997019768]),SFVec3f([-0.109999999403954,0.0109999999403954,0.189999997615814]),SFVec3f([0.0992999970912933,0.488099992275238,-0.0308999996632338]),SFVec3f([0.170000001788139,0.465999990701675,0]),SFVec3f([0.0500000007450581,0.486699998378754,0]),SFVec3f([0.165000006556511,0.00999999977648258,0.119999997317791]),SFVec3f([0.150000005960464,0.0700000002980232,0]),SFVec3f([0.0850000008940697,0.0860000029206276,0.0125000001862645]),SFVec3f([0.0900000035762787,0.0560000017285347,0.0125000001862645]),SFVec3f([0.115000002086163,0.0199999995529652,0.122000001370907]),SFVec3f([0.115000002086163,0.0399999991059303,-0.0549999997019768]),SFVec3f([0.109999999403954,0.0109999999403954,0.189999997615814]),SFVec3f([0,0.875,0]),SFVec3f([-0.0645999982953072,1.51489996910095,-0.0379999987781048]),SFVec3f([0.0645999982953072,1.51489996910095,-0.0379999987781048]),SFVec3f([0,1.07225000858307,0.0900000035762787]),SFVec3f([-0.109999999403954,1.42700004577637,-0.137500002980232]),SFVec3f([-0.234999999403954,1.41999995708466,-0.0625]),SFVec3f([0.109999999403954,1.42700004577637,-0.137500002980232]),SFVec3f([0.234999999403954,1.41999995708466,-0.0625]),SFVec3f([0,1.4099999666214,-0.144999995827675]),SFVec3f([0,0.925000011920929,0.0799999982118607]),SFVec3f([-0.0869999974966049,1.19000005722046,-0.0900000035762787]),SFVec3f([0.0869999974966049,1.19000005722046,-0.0900000035762787]),SFVec3f([0.172000005841255,1.32000005245209,-0.0299999993294477]),SFVec3f([-0.172000005841255,1.32000005245209,-0.0300000011920929]),SFVec3f([0.150000005960464,1.23000001907349,-0.0149999996647239]),SFVec3f([-0.150000005960464,1.23000001907349,-0.0150000005960464]),SFVec3f([0.0790000036358833,0.919999957084656,-0.140000000596046]),SFVec3f([0.100000001490116,0.899999976158142,0.0769999995827675]),SFVec3f([-0.0790000036358833,0.919999957084656,-0.140000000596046]),SFVec3f([-0.100000001490116,0.899999976158142,0.0750000029802322]),SFVec3f([0,0.870000004768372,0]),SFVec3f([0.171000003814697,0.649999976158142,0]),SFVec3f([0.0199999995529652,0.649999976158142,0]),SFVec3f([0.100000001490116,0.649999976158142,-0.0799999982118607]),SFVec3f([0.100000001490116,0.649999976158142,0.0700000002980232]),SFVec3f([-0.171000003814697,0.649999976158142,0]),SFVec3f([-0.0199999995529652,0.649999976158142,0]),SFVec3f([-0.100000001490116,0.649999976158142,-0.0799999982118607]),SFVec3f([-0.100000001490116,0.649999976158142,0.0700000002980232]),SFVec3f([0.25,1.26999998092651,-0.0399999991059303]),SFVec3f([0.170000001788139,1.26999998092651,-0.0399999991059303]),SFVec3f([0.200000002980232,1.26999998092651,-0.0900000035762787]),SFVec3f([0.200000002980232,1.26999998092651,0.0199999995529652]),SFVec3f([0.244000002741814,1.13880002498627,-0.0399999991059303]),SFVec3f([0.165000006556511,1.13880002498627,-0.0399999991059303]),SFVec3f([0.200000002980232,1.13880002498627,-0.0799999982118607]),SFVec3f([0.200000002980232,1.13880002498627,-0.0130000002682209]),SFVec3f([0.224999994039536,1,-0.00999999977648258]),SFVec3f([0.224999994039536,1,-0.0700000002980232]),SFVec3f([0.185000002384186,1,-0.00999999977648258]),SFVec3f([0.185000002384186,1,-0.0700000002980232]),SFVec3f([0.200000002980232,1.13880002498627,-0.0399999991059303]),SFVec3f([0.224999994039536,0.920000016689301,-0.0399999991059303]),SFVec3f([0.174999997019768,0.920000016689301,-0.0399999991059303]),SFVec3f([0.200000002980232,0.920000016689301,-0.0649999976158142]),SFVec3f([0.200000002980232,0.920000016689301,-0.0149999996647239]),SFVec3f([0.224999994039536,0.889999985694885,-0.0399999991059303]),SFVec3f([0.174999997019768,0.889999985694885,-0.0399999991059303]),SFVec3f([0.200000002980232,0.889999985694885,-0.0649999976158142]),SFVec3f([0.200000002980232,0.889999985694885,-0.0149999996647239]),SFVec3f([0.217999994754791,0.860000014305115,-0.0399999991059303]),SFVec3f([0.184000000357628,0.860000014305115,-0.0399999991059303]),SFVec3f([0.200000002980232,0.870000004768372,-0.0700000002980232]),SFVec3f([0.200000002980232,0.870000004768372,0]),SFVec3f([0.209999993443489,0.850000023841858,0]),SFVec3f([0.185399994254112,0.850000023841858,0]),SFVec3f([0.211999997496605,0.839999973773956,-0.0149999996647239]),SFVec3f([0.18299999833107,0.839999973773956,-0.0149999996647239]),SFVec3f([0.212999999523163,0.834999978542328,-0.0399999991059303]),SFVec3f([0.189999997615814,0.834999978542328,-0.0399999991059303]),SFVec3f([0.210999995470047,0.834999978542328,-0.0649999976158142]),SFVec3f([0.19200000166893,0.834999978542328,-0.0649999976158142]),SFVec3f([0.208000004291534,0.839999973773956,-0.0850000008940697]),SFVec3f([0.189999997615814,0.839999973773956,-0.0850000008940697]),SFVec3f([0.200000002980232,0.839999973773956,-0.0949999988079071]),SFVec3f([0.215000003576279,0.819999992847443,0]),SFVec3f([0.193000003695488,0.814999997615814,0.00499999988824129]),SFVec3f([0.197999998927116,0.800000011920929,0.0120000001043081]),SFVec3f([0.209999993443489,0.819999992847443,0.0299999993294477]),SFVec3f([0.189999997615814,0.819999992847443,0.0299999993294477]),SFVec3f([0.200000002980232,0.834999978542328,0.0390000008046627]),SFVec3f([0.211999997496605,0.800000011920929,0.0500000007450581]),SFVec3f([0.187999993562698,0.800000011920929,0.0500000007450581]),SFVec3f([0.200000002980232,0.806999981403351,0.0570000000298023]),SFVec3f([0.200000002980232,0.792999982833862,0.0350000001490116]),SFVec3f([0.200000002980232,0.773999989032745,0.0759999975562096]),SFVec3f([0.211999997496605,0.779999971389771,0.0700000002980232]),SFVec3f([0.187999993562698,0.779999971389771,0.0700000002980232]),SFVec3f([0.200000002980232,0.785000026226044,0.0750000029802322]),SFVec3f([0.200000002980232,0.769999980926514,0.061999998986721]),SFVec3f([0.215000003576279,0.792999982833862,-0.0149999996647239]),SFVec3f([0.187000006437302,0.792999982833862,-0.0149999996647239]),SFVec3f([0.200000002980232,0.792999982833862,-0.00499999988824129]),SFVec3f([0.215000003576279,0.787999987602234,-0.0399999991059303]),SFVec3f([0.187000006437302,0.787999987602234,-0.0399999991059303]),SFVec3f([0.215000003576279,0.792999982833862,-0.0649999976158142]),SFVec3f([0.187000006437302,0.792999982833862,-0.0649999976158142]),SFVec3f([0.209999993443489,0.790000021457672,-0.0850000008940697]),SFVec3f([0.189999997615814,0.790000021457672,-0.0850000008940697]),SFVec3f([0.200000002980232,0.790000021457672,-0.0949999988079071]),SFVec3f([0.189999997615814,0.769999980926514,-0.0274999998509884]),SFVec3f([0.189999997615814,0.769999980926514,-0.0524999983608723]),SFVec3f([0.189999997615814,0.779999971389771,-0.0775000005960464]),SFVec3f([0.211999997496605,0.745000004768372,-0.0149999996647239]),SFVec3f([0.187999993562698,0.745000004768372,-0.0199999995529652]),SFVec3f([0.200000002980232,0.745000004768372,-0.0254999995231628]),SFVec3f([0.200000002980232,0.745000004768372,-0.0044999998062849]),SFVec3f([0.210999995470047,0.720000028610229,-0.0149999996647239]),SFVec3f([0.188999995589256,0.720000028610229,-0.0149999996647239]),SFVec3f([0.200000002980232,0.720000028610229,-0.0252000000327826]),SFVec3f([0.200000002980232,0.720000028610229,-0.00480000022798777]),SFVec3f([0.209999993443489,0.694999992847443,-0.0149999996647239]),SFVec3f([0.189999997615814,0.694999992847443,-0.0149999996647239]),SFVec3f([0.200000002980232,0.694999992847443,-0.025000000372529]),SFVec3f([0.200000002980232,0.694999992847443,-0.00499999988824129]),SFVec3f([0.200000002980232,0.685000002384186,-0.0149999996647239]),SFVec3f([0.215000003576279,0.740000009536743,-0.0399999991059303]),SFVec3f([0.185000002384186,0.740000009536743,-0.0399999991059303]),SFVec3f([0.200000002980232,0.740000009536743,-0.0549999997019768]),SFVec3f([0.200000002980232,0.740000009536743,-0.025000000372529]),SFVec3f([0.209999993443489,0.714200019836426,-0.0399999991059303]),SFVec3f([0.189999997615814,0.714200019836426,-0.0399999991059303]),SFVec3f([0.200000002980232,0.714200019836426,-0.0529999993741512]),SFVec3f([0.200000002980232,0.714200019836426,-0.0270000007003546]),SFVec3f([0.209999993443489,0.680000007152557,-0.0399999991059303]),SFVec3f([0.189999997615814,0.680000007152557,-0.0399999991059303]),SFVec3f([0.200000002980232,0.680000007152557,-0.0500000007450581]),SFVec3f([0.200000002980232,0.680000007152557,-0.0299999993294477]),SFVec3f([0.200000002980232,0.670000016689301,-0.0399999991059303]),SFVec3f([0.211999997496605,0.740000009536743,-0.0649999976158142]),SFVec3f([0.187999993562698,0.740000009536743,-0.0649999976158142]),SFVec3f([0.200000002980232,0.740000009536743,-0.0755999982357025]),SFVec3f([0.200000002980232,0.740000009536743,-0.0542000010609627]),SFVec3f([0.209999993443489,0.717700004577637,-0.0649999976158142]),SFVec3f([0.189999997615814,0.717700004577637,-0.0649999976158142]),SFVec3f([0.200000002980232,0.717700004577637,-0.0750999972224236]),SFVec3f([0.200000002980232,0.717700004577637,-0.0549000017344952]),SFVec3f([0.209999993443489,0.694999992847443,-0.0649999976158142]),SFVec3f([0.189999997615814,0.694999992847443,-0.0649999976158142]),SFVec3f([0.200000002980232,0.694999992847443,-0.0750000029802322]),SFVec3f([0.200000002980232,0.694999992847443,-0.0549999997019768]),SFVec3f([0.200000002980232,0.685000002384186,-0.0649999976158142]),SFVec3f([0.210999995470047,0.754999995231628,-0.0850000008940697]),SFVec3f([0.188999995589256,0.754999995231628,-0.0850000008940697]),SFVec3f([0.200000002980232,0.754999995231628,-0.0952000021934509]),SFVec3f([0.200000002980232,0.754999995231628,-0.0747999995946884]),SFVec3f([0.209999993443489,0.735000014305115,-0.0850000008940697]),SFVec3f([0.189999997615814,0.735000014305115,-0.0850000008940697]),SFVec3f([0.200000002980232,0.735000014305115,-0.095100000500679]),SFVec3f([0.200000002980232,0.735000014305115,-0.0749000012874603]),SFVec3f([0.209999993443489,0.720000028610229,-0.0850000008940697]),SFVec3f([0.189999997615814,0.720000028610229,-0.0850000008940697]),SFVec3f([0.200000002980232,0.720000028610229,-0.0949999988079071]),SFVec3f([0.200000002980232,0.720000028610229,-0.0750000029802322]),SFVec3f([0.200000002980232,0.709999978542328,-0.0850000008940697]),SFVec3f([-0.230000004172325,1.23000001907349,-0.0399999991059303]),SFVec3f([-0.159999996423721,1.23000001907349,-0.0399999991059303]),SFVec3f([-0.200000002980232,1.23500001430511,-0.104999996721745]),SFVec3f([-0.200000002980232,1.25499999523163,0.0199999995529652]),SFVec3f([-0.244000002741814,1.13880002498627,-0.0399999991059303]),SFVec3f([-0.165000006556511,1.13880002498627,-0.0399999991059303]),SFVec3f([-0.200000002980232,1.13880002498627,-0.0799999982118607]),SFVec3f([-0.200000002980232,1.13880002498627,0.0130000002682209]),SFVec3f([-0.224999994039536,1,-0.00999999977648258]),SFVec3f([-0.224999994039536,1,-0.0700000002980232]),SFVec3f([-0.185000002384186,1,-0.00999999977648258]),SFVec3f([-0.185000002384186,1,-0.0700000002980232]),SFVec3f([-0.200000002980232,1.13880002498627,-0.0399999991059303]),SFVec3f([-0.224999994039536,0.920000016689301,-0.0399999991059303]),SFVec3f([-0.174999997019768,0.920000016689301,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.920000016689301,-0.0649999976158142]),SFVec3f([-0.200000002980232,0.920000016689301,-0.0149999996647239]),SFVec3f([-0.224999994039536,0.889999985694885,-0.0399999991059303]),SFVec3f([-0.174999997019768,0.889999985694885,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.889999985694885,-0.0649999976158142]),SFVec3f([-0.200000002980232,0.889999985694885,-0.0149999996647239]),SFVec3f([-0.217999994754791,0.860000014305115,-0.0399999991059303]),SFVec3f([-0.184000000357628,0.860000014305115,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.870000004768372,-0.0700000002980232]),SFVec3f([-0.200000002980232,0.870000004768372,0]),SFVec3f([-0.209999993443489,0.850000023841858,0]),SFVec3f([-0.185399994254112,0.850000023841858,0]),SFVec3f([-0.211999997496605,0.839999973773956,-0.0149999996647239]),SFVec3f([-0.18299999833107,0.839999973773956,-0.0149999996647239]),SFVec3f([-0.212999999523163,0.834999978542328,-0.0399999991059303]),SFVec3f([-0.189999997615814,0.834999978542328,-0.0399999991059303]),SFVec3f([-0.210999995470047,0.834999978542328,-0.0649999976158142]),SFVec3f([-0.19200000166893,0.834999978542328,-0.0649999976158142]),SFVec3f([-0.208000004291534,0.839999973773956,-0.0850000008940697]),SFVec3f([-0.189999997615814,0.839999973773956,-0.0850000008940697]),SFVec3f([-0.200000002980232,0.839999973773956,-0.0949999988079071]),SFVec3f([-0.215000003576279,0.819999992847443,0]),SFVec3f([-0.193000003695488,0.814999997615814,0.00499999988824129]),SFVec3f([-0.197999998927116,0.800000011920929,0.0120000001043081]),SFVec3f([-0.209999993443489,0.819999992847443,0.0299999993294477]),SFVec3f([-0.189999997615814,0.819999992847443,0.0299999993294477]),SFVec3f([-0.200000002980232,0.834999978542328,0.0390000008046627]),SFVec3f([-0.211999997496605,0.800000011920929,0.0500000007450581]),SFVec3f([-0.187999993562698,0.800000011920929,0.0500000007450581]),SFVec3f([-0.200000002980232,0.806999981403351,0.0570000000298023]),SFVec3f([-0.200000002980232,0.792999982833862,0.0350000001490116]),SFVec3f([-0.200000002980232,0.773999989032745,0.0759999975562096]),SFVec3f([-0.211999997496605,0.779999971389771,0.0700000002980232]),SFVec3f([-0.187999993562698,0.779999971389771,0.0700000002980232]),SFVec3f([-0.200000002980232,0.785000026226044,0.0750000029802322]),SFVec3f([-0.200000002980232,0.769999980926514,0.061999998986721]),SFVec3f([-0.215000003576279,0.792999982833862,-0.0149999996647239]),SFVec3f([-0.187000006437302,0.792999982833862,-0.0149999996647239]),SFVec3f([-0.200000002980232,0.792999982833862,-0.00499999988824129]),SFVec3f([-0.215000003576279,0.787999987602234,-0.0399999991059303]),SFVec3f([-0.187000006437302,0.787999987602234,-0.0399999991059303]),SFVec3f([-0.215000003576279,0.792999982833862,-0.0649999976158142]),SFVec3f([-0.187000006437302,0.792999982833862,-0.0649999976158142]),SFVec3f([-0.209999993443489,0.790000021457672,-0.0850000008940697]),SFVec3f([-0.189999997615814,0.790000021457672,-0.0850000008940697]),SFVec3f([-0.200000002980232,0.790000021457672,-0.0949999988079071]),SFVec3f([-0.189999997615814,0.769999980926514,-0.0274999998509884]),SFVec3f([-0.189999997615814,0.769999980926514,-0.0524999983608723]),SFVec3f([-0.189999997615814,0.779999971389771,-0.0775000005960464]),SFVec3f([-0.211999997496605,0.745000004768372,-0.0149999996647239]),SFVec3f([-0.187999993562698,0.745000004768372,-0.0199999995529652]),SFVec3f([-0.200000002980232,0.745000004768372,-0.0254999995231628]),SFVec3f([-0.200000002980232,0.745000004768372,-0.0044999998062849]),SFVec3f([-0.210999995470047,0.720000028610229,-0.0149999996647239]),SFVec3f([-0.188999995589256,0.720000028610229,-0.0149999996647239]),SFVec3f([-0.200000002980232,0.720000028610229,-0.0252000000327826]),SFVec3f([-0.200000002980232,0.720000028610229,-0.00480000022798777]),SFVec3f([-0.209999993443489,0.694999992847443,-0.0149999996647239]),SFVec3f([-0.189999997615814,0.694999992847443,-0.0149999996647239]),SFVec3f([-0.200000002980232,0.694999992847443,-0.025000000372529]),SFVec3f([-0.200000002980232,0.694999992847443,-0.00499999988824129]),SFVec3f([-0.200000002980232,0.685000002384186,-0.0149999996647239]),SFVec3f([-0.215000003576279,0.740000009536743,-0.0399999991059303]),SFVec3f([-0.185000002384186,0.740000009536743,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.740000009536743,-0.0549999997019768]),SFVec3f([-0.200000002980232,0.740000009536743,-0.025000000372529]),SFVec3f([-0.209999993443489,0.714200019836426,-0.0399999991059303]),SFVec3f([-0.189999997615814,0.714200019836426,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.714200019836426,-0.0529999993741512]),SFVec3f([-0.200000002980232,0.714200019836426,-0.0270000007003546]),SFVec3f([-0.209999993443489,0.680000007152557,-0.0399999991059303]),SFVec3f([-0.189999997615814,0.680000007152557,-0.0399999991059303]),SFVec3f([-0.200000002980232,0.680000007152557,-0.0500000007450581]),SFVec3f([-0.200000002980232,0.680000007152557,-0.0299999993294477]),SFVec3f([-0.200000002980232,0.670000016689301,-0.0399999991059303]),SFVec3f([-0.211999997496605,0.740000009536743,-0.0649999976158142]),SFVec3f([-0.187999993562698,0.740000009536743,-0.0649999976158142]),SFVec3f([-0.200000002980232,0.740000009536743,-0.0755999982357025]),SFVec3f([-0.200000002980232,0.740000009536743,-0.0542000010609627]),SFVec3f([-0.209999993443489,0.717700004577637,-0.0649999976158142]),SFVec3f([-0.189999997615814,0.717700004577637,-0.0649999976158142]),SFVec3f([-0.200000002980232,0.717700004577637,-0.0750999972224236]),SFVec3f([-0.200000002980232,0.717700004577637,-0.0549000017344952]),SFVec3f([-0.209999993443489,0.694999992847443,-0.0649999976158142]),SFVec3f([-0.189999997615814,0.694999992847443,-0.0649999976158142]),SFVec3f([-0.200000002980232,0.694999992847443,-0.0750000029802322]),SFVec3f([-0.200000002980232,0.694999992847443,-0.0549999997019768]),SFVec3f([-0.200000002980232,0.685000002384186,-0.0649999976158142]),SFVec3f([-0.210999995470047,0.754999995231628,-0.0850000008940697]),SFVec3f([-0.188999995589256,0.754999995231628,-0.0850000008940697]),SFVec3f([-0.200000002980232,0.754999995231628,-0.0952000021934509]),SFVec3f([-0.200000002980232,0.754999995231628,-0.0747999995946884]),SFVec3f([-0.209999993443489,0.735000014305115,-0.0850000008940697]),SFVec3f([-0.189999997615814,0.735000014305115,-0.0850000008940697]),SFVec3f([-0.200000002980232,0.735000014305115,-0.095100000500679]),SFVec3f([-0.200000002980232,0.735000014305115,-0.0749000012874603]),SFVec3f([-0.209999993443489,0.720000028610229,-0.0850000008940697]),SFVec3f([-0.189999997615814,0.720000028610229,-0.0850000008940697]),SFVec3f([-0.200000002980232,0.720000028610229,-0.0949999988079071]),SFVec3f([-0.200000002980232,0.720000028610229,-0.0750000029802322]),SFVec3f([-0.200000002980232,0.709999978542328,-0.0850000008940697]),SFVec3f([0.115000002086163,0.465999990701675,0.0599999986588955]),SFVec3f([0.115000002086163,0.465999990701675,-0.0549999997019768]),SFVec3f([0.150000005960464,0.465999990701675,0]),SFVec3f([0.0500000007450581,0.465999990701675,0]),SFVec3f([0.170000001788139,0.300000011920929,0]),SFVec3f([0.0599999986588955,0.300000011920929,0]),SFVec3f([0.100000001490116,0.300000011920929,-0.0500000007450581]),SFVec3f([0.100000001490116,0.300000011920929,0.0500000007450581]),SFVec3f([0.150000005960464,0.0700000002980232,0]),SFVec3f([0.0850000008940697,0.0860000029206276,0.0125000001862645]),SFVec3f([0.115000002086163,0.0689999982714653,-0.0450000017881393]),SFVec3f([0.116999998688698,0.0974999964237213,0.0615000016987324]),SFVec3f([0.137500002980232,0.00600000005215406,-0.0299999993294477]),SFVec3f([0.0949999988079071,0.00600000005215406,-0.0299999993294477]),SFVec3f([0.115000002086163,0.0149999996647239,-0.0450000017881393]),SFVec3f([0.115000002086163,0.0599999986588955,0.100000001490116]),SFVec3f([0.115000002086163,0,0.0700000002980232]),SFVec3f([0.165000006556511,0,0.0700000002980232]),SFVec3f([0.0949999988079071,0,0.0700000002980232]),SFVec3f([0.115000002086163,0.0399999991059303,0.129999995231628]),SFVec3f([0.125,0,0.119999997317791]),SFVec3f([0.165000006556511,0,0.119999997317791]),SFVec3f([0.0869999974966049,0,0.122000001370907]),SFVec3f([0.0900000035762787,0.0120000001043081,0.187999993562698]),SFVec3f([0.109999999403954,0.0109999999403954,0.189999997615814]),SFVec3f([0.128000006079674,0.0109999999403954,0.185000002384186]),SFVec3f([0.142000004649162,0.0109999999403954,0.178000003099442]),SFVec3f([0.153999999165535,0.00999999977648258,0.167999997735024]),SFVec3f([-0.115000009536743,0.465999990701675,0.0600000023841858]),SFVec3f([-0.115000002086163,0.465999990701675,-0.0549999997019768]),SFVec3f([-0.170000001788139,0.465999990701675,0]),SFVec3f([-0.0500000007450581,0.465999990701675,0]),SFVec3f([-0.170000001788139,0.300000011920929,0]),SFVec3f([-0.0599999986588955,0.300000011920929,0]),SFVec3f([-0.100000001490116,0.300000011920929,-0.0500000007450581]),SFVec3f([-0.100000001490116,0.300000011920929,0.0500000007450581]),SFVec3f([-0.150000005960464,0.0700000002980232,0]),SFVec3f([-0.0850000008940697,0.0860000029206276,0.0125000001862645]),SFVec3f([-0.115000002086163,0.0689999982714653,-0.0450000017881393]),SFVec3f([-0.116999998688698,0.0974999964237213,0.0615000016987324]),SFVec3f([-0.137500002980232,0.00600000005215406,-0.0299999993294477]),SFVec3f([-0.0949999988079071,0.00600000005215406,-0.0299999993294477]),SFVec3f([-0.0949999988079071,0.00600000005215406,-0.0299999993294477]),SFVec3f([-0.115000002086163,0.0599999986588955,0.100000001490116]),SFVec3f([-0.115000002086163,0,0.0700000002980232]),SFVec3f([-0.165000006556511,0,0.0700000002980232]),SFVec3f([-0.0949999988079071,0,0.0700000002980232]),SFVec3f([-0.115000002086163,0.0399999991059303,0.129999995231628]),SFVec3f([-0.125,0,0.119999997317791]),SFVec3f([-0.165000006556511,0,0.119999997317791]),SFVec3f([-0.0869999974966049,0,0.122000001370907]),SFVec3f([-0.0900000035762787,0.0120000001043081,0.187999993562698]),SFVec3f([-0.109999999403954,0.0109999999403954,0.189999997615814]),SFVec3f([-0.128000006079674,0.0109999999403954,0.185000002384186]),SFVec3f([-0.142000004649162,0.0109999999403954,0.178000003099442]),SFVec3f([-0.153999999165535,0.00999999977648258,0.167999997735024])]))),
                      appearance_ : 
                        Appearance(
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("bodytexture28.png")])),
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.699999988079071,
                              shininess_ : 0.600000023841858,
                              diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0), SFDouble(0.5)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                              emissiveColor_ : SFColor([SFDouble(0.129999995231628), SFDouble(0.349999994039536), SFDouble(0.129999995231628)]))))],
                  skinCoord_ : 
                    Coordinate(
                      USE_ : SFString('JoeSkinCoord')))]),

            Transform(
              DEF_ : SFString('SBall'),
              translation_ : SFVec3f([SFDouble(-0.42091), SFDouble(0.2089), SFDouble(-0.42091)]),
              rotation_ : SFRotation([SFDouble(-0.70711), SFDouble(0), SFDouble(-0.70711), SFDouble(0.67654)]),
              scale_ : SFVec3f([SFDouble(0.23), SFDouble(0.23), SFDouble(0.23)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.8353), SFDouble(0)]),
                          specularColor_ : SFColor([SFDouble(0), SFDouble(0.6849), SFDouble(0)]),
                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])),
                      texture_ : 
                        ImageTexture(
                          url_ : MFString([SFString("bodytexture28.png")]))),
                  geometry_ : 
                    IndexedFaceSet(
                      DEF_ : SFString('ball'),
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(0), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(0), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(1), SFInt32(14), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(2), SFInt32(15), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(3), SFInt32(16), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(4), SFInt32(17), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(5), SFInt32(18), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(6), SFInt32(19), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(7), SFInt32(20), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(8), SFInt32(21), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(9), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(10), SFInt32(23), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(11), SFInt32(24), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(24), SFInt32(13), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(1), SFInt32(-1), SFInt32(13), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(13), SFInt32(26), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(14), SFInt32(27), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(15), SFInt32(28), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(16), SFInt32(29), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(17), SFInt32(30), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(18), SFInt32(31), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(19), SFInt32(32), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(20), SFInt32(33), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(21), SFInt32(34), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(22), SFInt32(35), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(23), SFInt32(36), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(25), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(13), SFInt32(-1), SFInt32(25), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(25), SFInt32(38), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(26), SFInt32(39), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(27), SFInt32(40), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(28), SFInt32(41), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(29), SFInt32(42), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(43), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(31), SFInt32(44), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(32), SFInt32(45), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(33), SFInt32(46), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(34), SFInt32(47), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(47), SFInt32(48), SFInt32(-1), SFInt32(35), SFInt32(48), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(48), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(25), SFInt32(-1), SFInt32(37), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(37), SFInt32(50), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(38), SFInt32(51), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(51), SFInt32(52), SFInt32(-1), SFInt32(39), SFInt32(52), SFInt32(40), SFInt32(-1), SFInt32(40), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(40), SFInt32(53), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(41), SFInt32(54), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(54), SFInt32(55), SFInt32(-1), SFInt32(42), SFInt32(55), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(55), SFInt32(56), SFInt32(-1), SFInt32(43), SFInt32(56), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(44), SFInt32(57), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(57), SFInt32(58), SFInt32(-1), SFInt32(45), SFInt32(58), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(46), SFInt32(59), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(47), SFInt32(60), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(60), SFInt32(49), SFInt32(-1), SFInt32(48), SFInt32(49), SFInt32(37), SFInt32(-1), SFInt32(61), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(61), SFInt32(51), SFInt32(50), SFInt32(-1), SFInt32(61), SFInt32(52), SFInt32(51), SFInt32(-1), SFInt32(61), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(61), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(61), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(61), SFInt32(56), SFInt32(55), SFInt32(-1), SFInt32(61), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(61), SFInt32(58), SFInt32(57), SFInt32(-1), SFInt32(61), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(61), SFInt32(60), SFInt32(59), SFInt32(-1), SFInt32(61), SFInt32(49), SFInt32(60), SFInt32(-1)]),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0.4675,0]),SFVec3f([0,0.4049,-0.2338]),SFVec3f([-0.1169,0.4049,-0.2024]),SFVec3f([-0.2024,0.4049,-0.1169]),SFVec3f([-0.2338,0.4049,0]),SFVec3f([-0.2024,0.4049,0.1169]),SFVec3f([-0.1169,0.4049,0.2024]),SFVec3f([0,0.4049,0.2338]),SFVec3f([0.1169,0.4049,0.2024]),SFVec3f([0.2024,0.4049,0.1169]),SFVec3f([0.2338,0.4049,0]),SFVec3f([0.2024,0.4049,-0.1169]),SFVec3f([0.1169,0.4049,-0.2024]),SFVec3f([0,0.2338,-0.4049]),SFVec3f([-0.2024,0.2338,-0.3506]),SFVec3f([-0.3506,0.2338,-0.2024]),SFVec3f([-0.4049,0.2338,0]),SFVec3f([-0.3506,0.2338,0.2024]),SFVec3f([-0.2024,0.2338,0.3506]),SFVec3f([0,0.2338,0.4049]),SFVec3f([0.2024,0.2338,0.3506]),SFVec3f([0.3506,0.2338,0.2024]),SFVec3f([0.4049,0.2338,0]),SFVec3f([0.3506,0.2338,-0.2024]),SFVec3f([0.2024,0.2338,-0.3506]),SFVec3f([0,0,-0.4675]),SFVec3f([-0.2338,0,-0.4049]),SFVec3f([-0.4049,0,-0.2338]),SFVec3f([-0.4675,0,0]),SFVec3f([-0.4049,0,0.2338]),SFVec3f([-0.2338,0,0.4049]),SFVec3f([0,0,0.4675]),SFVec3f([0.2338,0,0.4049]),SFVec3f([0.4049,0,0.2338]),SFVec3f([0.4675,0,0]),SFVec3f([0.4049,0,-0.2338]),SFVec3f([0.2338,0,-0.4049]),SFVec3f([0,-0.2338,-0.4049]),SFVec3f([-0.2024,-0.2338,-0.3506]),SFVec3f([-0.3506,-0.2338,-0.2024]),SFVec3f([-0.4049,-0.2338,0]),SFVec3f([-0.3506,-0.2338,0.2024]),SFVec3f([-0.2024,-0.2338,0.3506]),SFVec3f([0,-0.2338,0.4049]),SFVec3f([0.2024,-0.2338,0.3506]),SFVec3f([0.3506,-0.2338,0.2024]),SFVec3f([0.4049,-0.2338,0]),SFVec3f([0.3506,-0.2338,-0.2024]),SFVec3f([0.2024,-0.2338,-0.3506]),SFVec3f([0,-0.4049,-0.2338]),SFVec3f([-0.1169,-0.4049,-0.2024]),SFVec3f([-0.2024,-0.4049,-0.1169]),SFVec3f([-0.2338,-0.4049,0]),SFVec3f([-0.2024,-0.4049,0.1169]),SFVec3f([-0.1169,-0.4049,0.2024]),SFVec3f([0,-0.4049,0.2338]),SFVec3f([0.1169,-0.4049,0.2024]),SFVec3f([0.2024,-0.4049,0.1169]),SFVec3f([0.2338,-0.4049,0]),SFVec3f([0.2024,-0.4049,-0.1169]),SFVec3f([0.1169,-0.4049,-0.2024]),SFVec3f([0,-0.4675,0])])))),
              children_ : [
                Viewpoint(
                  DEF_ : SFString('ballView'),
                  description_ : SFString('ball View'))]),

            Transform(
              DEF_ : SFString('scenecordsys'),
              scale_ : SFVec3f([SFDouble(0.275), SFDouble(0.275), SFDouble(0.275)]),
              children_ : [
                Inline(
                  global_ : true,
                  url_ : MFString([SFString("JointCoordinateAxes.x3dv")]))]),

            Transform(
              DEF_ : SFString('Circle0'),
              scale_ : SFVec3f([SFDouble(1.175), SFDouble(1), SFDouble(1.175)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                          emissiveColor_ : SFColor([SFDouble(0.42496), SFDouble(0.48398), SFDouble(1)]))),
                  geometry_ : 
                    IndexedLineSet(
                      DEF_ : SFString('Orbit1'),
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1)]),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([1,0,0]),SFVec3f([0.995,0,-0.105]),SFVec3f([0.979,0,-0.208]),SFVec3f([0.951,0,-0.309]),SFVec3f([0.914,0,-0.407]),SFVec3f([0.866,0,-0.5]),SFVec3f([0.809,0,-0.588]),SFVec3f([0.743,0,-0.669]),SFVec3f([0.669,0,-0.743]),SFVec3f([0.588,0,-0.809]),SFVec3f([0.5,0,-0.866]),SFVec3f([0.407,0,-0.914]),SFVec3f([0.309,0,-0.951]),SFVec3f([0.208,0,-0.978]),SFVec3f([0.105,0,-0.995]),SFVec3f([0,0,-1]),SFVec3f([-0.105,0,-0.99452]),SFVec3f([-0.208,0,-0.978]),SFVec3f([-0.309,0,-0.951]),SFVec3f([-0.407,0,-0.914]),SFVec3f([-0.5,0,-0.866]),SFVec3f([-0.588,0,-0.809]),SFVec3f([-0.669,0,-0.743]),SFVec3f([-0.743,0,-0.669]),SFVec3f([-0.809,0,-0.588]),SFVec3f([-0.866,0,-0.5]),SFVec3f([-0.914,0,-0.407]),SFVec3f([-0.951,0,-0.309]),SFVec3f([-0.978,0,-0.208]),SFVec3f([-0.995,0,-0.105]),SFVec3f([-1,0,0]),SFVec3f([-0.995,0,0.105]),SFVec3f([-0.978,0,0.208]),SFVec3f([-0.951,0,0.309]),SFVec3f([-0.914,0,0.407]),SFVec3f([-0.866,0,0.5]),SFVec3f([-0.809,0,0.588]),SFVec3f([-0.743,0,0.669]),SFVec3f([-0.669,0,0.743]),SFVec3f([-0.588,0,0.809]),SFVec3f([-0.5,0,0.866]),SFVec3f([-0.407,0,0.914]),SFVec3f([-0.309,0,0.951]),SFVec3f([-0.208,0,0.978]),SFVec3f([-0.105,0,0.995]),SFVec3f([0,0,1]),SFVec3f([0.105,0,0.995]),SFVec3f([0.208,0,0.978]),SFVec3f([0.309,0,0.951]),SFVec3f([0.407,0,0.914]),SFVec3f([0.5,0,0.866]),SFVec3f([0.588,0,0.809]),SFVec3f([0.669,0,0.743]),SFVec3f([0.743,0,0.669]),SFVec3f([0.809,0,0.588]),SFVec3f([0.866,0,0.5]),SFVec3f([0.914,0,0.407]),SFVec3f([0.951,0,0.309]),SFVec3f([0.978,0,0.208]),SFVec3f([0.995,0,0.104]),SFVec3f([1,0,0])]))))),

            Transform(
              DEF_ : SFString('Circle1'),
              scale_ : SFVec3f([SFDouble(0.5), SFDouble(1), SFDouble(0.5)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                          emissiveColor_ : SFColor([SFDouble(0.42496), SFDouble(0.48398), SFDouble(1)]))),
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
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                          emissiveColor_ : SFColor([SFDouble(0.42496), SFDouble(0.48398), SFDouble(1)]))),
                  geometry_ : 
                    IndexedLineSet(
                      USE_ : SFString('Orbit1'))))]));
void main() { exit(0); }
