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
              content_ : SFString('JoeSkinTexcoordDisplacerKick.x3d')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('15 January 2004')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('12 January 2017')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 January 2023')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D Williams')),

            meta(
              name_ : SFString('translators'),
              content_ : SFString('Roy Walmsley and Don Brutzman')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('translated from .x3dv to .xml for web3d archive')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('modified to correct root and vc7 hierarchies')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('BS studio translation from .x3dv by Joe using BS Contact')),

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
              info_ : MFString([SFString("X3D Humanoid V1 LOA3 skeleton"), SFString("skin from hanim sites, surface features, and some added points"), SFString("390 points")]),
              title_ : SFString('X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe')),

            NavigationInfo(
              DEF_ : SFString('Start_NavigationInfo'),
              headlight_ : false,
              speed_ : 2.5),

            Background(
              DEF_ : SFString('blue_Background')),

            SpotLight(
              DEF_ : SFString('light1'),
              ambientIntensity_ : 0.7,
              beamWidth_ : 1.5,
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              cutOffAngle_ : 0.6,
              direction_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
              location_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(3)]),
              radius_ : 10),

            PointLight(
              DEF_ : SFString('light2'),
              ambientIntensity_ : 0.7,
              color_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(1)]),
              location_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(-7)])),
          /*External from the Humanoid viewpoints*/

            Viewpoint(
              DEF_ : SFString('Scene_InclinedView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(0)]),
              description_ : SFString('Scene_Inclined View'),
              orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
              position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(3.06)])),

            Viewpoint(
              DEF_ : SFString('Scene_FrontView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene Front View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2.58)])),

            Viewpoint(
              DEF_ : SFString('Scene_SideView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(0)]),
              description_ : SFString('Scene Side View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(2.6), SFDouble(0.5), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_BackView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene Back View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(-3)])),

            Viewpoint(
              DEF_ : SFString('Scene_TopView'),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              description_ : SFString('Scene Top View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)])),

            Group(
              DEF_ : SFString('Joe_Humanoid'),
              children_ : [
                HAnimHumanoid(
                  name_ : SFString('Human'),
                  DEF_ : SFString('Joe_Human'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      DEF_ : SFString('Joe_HumanoidRoot'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.875), SFDouble(0)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      metadata_ : [
                        MetadataSet(
                          name_ : SFString('warnings'),
                          reference_ : SFString('HAnim'),
                          /*TODO experimental*/
                          value_ : 
                            MetadataString(
                              name_ : SFString('SymmetricalLeftRight'),
                              reference_ : SFString('correction options: ignore, warn, average, left, right, largest, smallest'),
                              value_ : MFString([SFString("ignore")]))),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'),
                          DEF_ : SFString('Joe_sacrum'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('RootFront_view'),
                              DEF_ : SFString('Joe_RootFront_view'),
                              children_ : [
                                Transform(
                                  DEF_ : SFString('hanimcordsys'),
                                  scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
                                  children_ : [
                                    Viewpoint(
                                      DEF_ : SFString('ViewBodyRootAxes'),
                                      description_ : SFString('Joe_HAnim Root HAnimSite Coordinate Axes View')),

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
                                              color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))])])]),

                        HAnimJoint(
                          name_ : SFString('sacroiliac'),
                          DEF_ : SFString('Joe_sacroiliac'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.92), SFDouble(0)]),
                          skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.35), SFFloat(0.35), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('l_hip'),
                              DEF_ : SFString('Joe_l_hip'),
                              center_ : SFVec3f([SFDouble(0.1), SFDouble(0.92), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(89), SFInt32(90), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('l_knee'),
                                  DEF_ : SFString('Joe_l_knee'),
                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.466), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_ankle'),
                                      DEF_ : SFString('Joe_l_ankle'),
                                      center_ : SFVec3f([SFDouble(0.115), SFDouble(0.069), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_subtalar'),
                                          DEF_ : SFString('Joe_l_subtalar'),
                                          center_ : SFVec3f([SFDouble(0.115), SFDouble(0.031), SFDouble(0.03)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_midtarsal'),
                                              DEF_ : SFString('Joe_l_midtarsal'),
                                              center_ : SFVec3f([SFDouble(0.115), SFDouble(0.037), SFDouble(0.09)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsal'),
                                                  DEF_ : SFString('Joe_l_metatarsal'),
                                                  center_ : SFVec3f([SFDouble(0.115), SFDouble(0.02), SFDouble(0.122)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                            HAnimJoint(
                              name_ : SFString('r_hip'),
                              DEF_ : SFString('Joe_r_hip'),
                              center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.92), SFDouble(0)]),
                              skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101), SFInt32(362), SFInt32(363)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(0.8), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.4), SFFloat(0.8)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('r_knee'),
                                  DEF_ : SFString('Joe_r_knee'),
                                  center_ : SFVec3f([SFDouble(-0.05), SFDouble(0.466), SFDouble(0)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369), SFInt32(98)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.6), SFFloat(0.2), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.2)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('r_ankle'),
                                      DEF_ : SFString('Joe_r_ankle'),
                                      center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.069), SFDouble(0)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_subtalar'),
                                          DEF_ : SFString('Joe_r_subtalar'),
                                          center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.015), SFDouble(-0.01)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_midtarsal'),
                                              DEF_ : SFString('Joe_r_midtarsal'),
                                              center_ : SFVec3f([SFDouble(-0.115), SFDouble(0.037), SFDouble(0.09)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsal'),
                                                  DEF_ : SFString('Joe_r_metatarsal'),
                                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.01), SFDouble(0.14)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])]),

                        HAnimJoint(
                          name_ : SFString('vl5'),
                          DEF_ : SFString('Joe_vl5'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.045), SFDouble(-0.095)]),
                          skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('vl4'),
                              DEF_ : SFString('Joe_vl4'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.068), SFDouble(-0.085)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('vl3'),
                                  DEF_ : SFString('Joe_vl3'),
                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.092), SFDouble(-0.0725)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('vl2'),
                                      DEF_ : SFString('Joe_vl2'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.12), SFDouble(-0.065)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.7), SFFloat(1), SFFloat(0.8)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('vl1'),
                                          DEF_ : SFString('Joe_vl1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.1459), SFDouble(-0.0625)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('vt12'),
                                              DEF_ : SFString('Joe_vt12'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.179), SFDouble(-0.068)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('vt11'),
                                                  DEF_ : SFString('Joe_vt11'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.2679), SFDouble(-0.081)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('vt10'),
                                                      DEF_ : SFString('Joe_vt10'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.242), SFDouble(-0.09)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('vt9'),
                                                          DEF_ : SFString('Joe_vt9'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.268), SFDouble(-0.1)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimJoint(
                                                              name_ : SFString('vt8'),
                                                              DEF_ : SFString('Joe_vt8'),
                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.294), SFDouble(-0.11)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  name_ : SFString('vt7'),
                                                                  DEF_ : SFString('Joe_vt7'),
                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.323), SFDouble(-0.1155)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      name_ : SFString('vt6'),
                                                                      DEF_ : SFString('Joe_vt6'),
                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.352), SFDouble(-0.12)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          name_ : SFString('vt5'),
                                                                          DEF_ : SFString('Joe_vt5'),
                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.381), SFDouble(-0.1235)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              name_ : SFString('vt4'),
                                                                              DEF_ : SFString('Joe_vt4'),
                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.41), SFDouble(-0.1235)]),
                                                                              skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt3'),
                                                                                  DEF_ : SFString('Joe_vt3'),
                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.438), SFDouble(-0.12)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt2'),
                                                                                      DEF_ : SFString('Joe_vt2'),
                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.468), SFDouble(-0.105)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt1'),
                                                                                          DEF_ : SFString('Joe_vt1'),
                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.497), SFDouble(-0.09)]),
                                                                                          skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc7'),
                                                                                              DEF_ : SFString('Joe_vc7'),
                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.525), SFDouble(-0.072)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc6'),
                                                                                                  DEF_ : SFString('Joe_vc6'),
                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.05)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc5'),
                                                                                                      DEF_ : SFString('Joe_vc5'),
                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.552), SFDouble(-0.035)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc4'),
                                                                                                          DEF_ : SFString('Joe_vc4'),
                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.5675), SFDouble(-0.0256)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc3'),
                                                                                                              DEF_ : SFString('Joe_vc3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.58225), SFDouble(-0.0185)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc2'),
                                                                                                                  DEF_ : SFString('Joe_vc2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1.595), SFDouble(-0.0175)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc1'),
                                                                                                                      DEF_ : SFString('Joe_vc1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.61), SFDouble(-0.015)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('skullbase'),
                                                                                                                          DEF_ : SFString('Joe_skullbase'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(-0.01)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          displacers_ : 
                                                                                                                            HAnimDisplacer(
                                                                                                                              name_ : SFString('skull_tip_raiser_action'),
                                                                                                                              DEF_ : SFString('Joe_skull_tip_raiser_action'),
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                              displacements_ : MFVec3f([SFVec3f([0,0.15,0]),SFVec3f([0,0,0.15]),SFVec3f([-0.1,0,0.15]),SFVec3f([0.1,0,0.05]),SFVec3f([0,-0.02,0.05]),SFVec3f([-0.15,0,0]),SFVec3f([-0.05,0,0]),SFVec3f([0.15,0,0]),SFVec3f([0.05,0,0]),SFVec3f([0,0,-0.15])])),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_eyelid_joint'),
                                                                                                                              DEF_ : SFString('Joe_l_eyelid_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_eyeball_joint'),
                                                                                                                              DEF_ : SFString('Joe_l_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_eyebrow_joint'),
                                                                                                                              DEF_ : SFString('Joe_l_eyebrow_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_eyelid_joint'),
                                                                                                                              DEF_ : SFString('Joe_r_eyelid_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_eyeball_joint'),
                                                                                                                              DEF_ : SFString('Joe_r_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_eyebrow_joint'),
                                                                                                                              DEF_ : SFString('Joe_r_eyebrow_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('temporomandibular'),
                                                                                                                              DEF_ : SFString('Joe_temporomandibular'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.034), SFDouble(1.659), SFDouble(0.06)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_sternoclavicular'),
                                                                                              DEF_ : SFString('Joe_l_sternoclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_acromioclavicular'),
                                                                                                  DEF_ : SFString('Joe_l_acromioclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_shoulder'),
                                                                                                      DEF_ : SFString('Joe_l_shoulder'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_elbow'),
                                                                                                          DEF_ : SFString('Joe_l_elbow'),
                                                                                                          center_ : SFVec3f([SFDouble(0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_wrist'),
                                                                                                              DEF_ : SFString('Joe_l_wrist'),
                                                                                                              center_ : SFVec3f([SFDouble(0.2), SFDouble(0.87), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_thumb1'),
                                                                                                                  DEF_ : SFString('Joe_l_thumb1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_thumb2'),
                                                                                                                      DEF_ : SFString('Joe_l_thumb2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_thumb3'),
                                                                                                                          DEF_ : SFString('Joe_l_thumb3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_index0'),
                                                                                                                  DEF_ : SFString('Joe_l_index0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_index1'),
                                                                                                                      DEF_ : SFString('Joe_l_index1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_index2'),
                                                                                                                          DEF_ : SFString('Joe_l_index2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_index3'),
                                                                                                                              DEF_ : SFString('Joe_l_index3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_middle0'),
                                                                                                                  DEF_ : SFString('Joe_l_middle0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_middle1'),
                                                                                                                      DEF_ : SFString('Joe_l_middle1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_middle2'),
                                                                                                                          DEF_ : SFString('Joe_l_middle2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_middle3'),
                                                                                                                              DEF_ : SFString('Joe_l_middle3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_ring0'),
                                                                                                                  DEF_ : SFString('Joe_l_ring0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_ring1'),
                                                                                                                      DEF_ : SFString('Joe_l_ring1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_ring2'),
                                                                                                                          DEF_ : SFString('Joe_l_ring2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_ring3'),
                                                                                                                              DEF_ : SFString('Joe_l_ring3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_pinky0'),
                                                                                                                  DEF_ : SFString('Joe_l_pinky0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_pinky1'),
                                                                                                                      DEF_ : SFString('Joe_l_pinky1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_pinky2'),
                                                                                                                          DEF_ : SFString('Joe_l_pinky2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_pinky3'),
                                                                                                                              DEF_ : SFString('Joe_l_pinky3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_sternoclavicular'),
                                                                                              DEF_ : SFString('Joe_r_sternoclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.03), SFDouble(1.46), SFDouble(0)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_acromioclavicular'),
                                                                                                  DEF_ : SFString('Joe_r_acromioclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.09), SFDouble(1.41), SFDouble(-0.11)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.9)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_shoulder'),
                                                                                                      DEF_ : SFString('Joe_r_shoulder'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.44), SFDouble(-0.04)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.3), SFFloat(0.2)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_elbow'),
                                                                                                          DEF_ : SFString('Joe_r_elbow'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(1.1388), SFDouble(-0.04)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_wrist'),
                                                                                                              DEF_ : SFString('Joe_r_wrist'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.89), SFDouble(-0.04)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_thumb1'),
                                                                                                                  DEF_ : SFString('Joe_r_thumb1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(0)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_thumb2'),
                                                                                                                      DEF_ : SFString('Joe_r_thumb2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.82), SFDouble(0.03)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_thumb3'),
                                                                                                                          DEF_ : SFString('Joe_r_thumb3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.8), SFDouble(0.05)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_index0'),
                                                                                                                  DEF_ : SFString('Joe_r_index0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.015)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_index1'),
                                                                                                                      DEF_ : SFString('Joe_r_index1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.015)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_index2'),
                                                                                                                          DEF_ : SFString('Joe_r_index2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.745), SFDouble(-0.015)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_index3'),
                                                                                                                              DEF_ : SFString('Joe_r_index3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.72), SFDouble(-0.015)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_middle0'),
                                                                                                                  DEF_ : SFString('Joe_r_middle0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.04)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_middle1'),
                                                                                                                      DEF_ : SFString('Joe_r_middle1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.788), SFDouble(-0.04)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_middle2'),
                                                                                                                          DEF_ : SFString('Joe_r_middle2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.04)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_middle3'),
                                                                                                                              DEF_ : SFString('Joe_r_middle3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7142), SFDouble(-0.04)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_ring0'),
                                                                                                                  DEF_ : SFString('Joe_r_ring0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.835), SFDouble(-0.065)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_ring1'),
                                                                                                                      DEF_ : SFString('Joe_r_ring1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.793), SFDouble(-0.065)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_ring2'),
                                                                                                                          DEF_ : SFString('Joe_r_ring2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.74), SFDouble(-0.065)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_ring3'),
                                                                                                                              DEF_ : SFString('Joe_r_ring3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7177), SFDouble(-0.065)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_pinky0'),
                                                                                                                  DEF_ : SFString('Joe_r_pinky0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.84), SFDouble(-0.085)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_pinky1'),
                                                                                                                      DEF_ : SFString('Joe_r_pinky1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.79), SFDouble(-0.085)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_pinky2'),
                                                                                                                          DEF_ : SFString('Joe_r_pinky2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.755), SFDouble(-0.085)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_pinky3'),
                                                                                                                              DEF_ : SFString('Joe_r_pinky3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.735), SFDouble(-0.09)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])])])])])])])])])])])])])])])])])])]),
                  skin_ : 
                    Shape(
                      DEF_ : SFString('Joe_Shape'),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('Joe_skin_Appearance'),
                          material_ : 
                            Material(
                              DEF_ : SFString('Joe_skin_Material'),
                              diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.6)]),
                              emissiveColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.6)])),
                          texture_ : 
                            ImageTexture(
                              DEF_ : SFString('JoeSkinImageTexture'),
                              url_ : MFString([SFString("JoeBodyTexture29.png"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png")])),
                          textureTransform_ : 
                            TextureTransform(
                              DEF_ : SFString('KickTextureTransform'))),
                      geometry_ : 
                        IndexedFaceSet(
                          DEF_ : SFString('Joe_skin_IndexedFaceSet'),
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                          creaseAngle_ : 3.14,
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('Joe_SkinCoord'),
                              point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0,0.875,0]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.07225,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.87,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.255,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])])),
                          texCoord_ : 
                            TextureCoordinate(
                              point_ : MFVec2f([SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5]),SFVec2f([0.5,0]),SFVec2f([0,0.5]),SFVec2f([0,0]),SFVec2f([0.5,0.5])]))))],
                  skinCoord_ : 
                    Coordinate(
                      USE_ : SFString('Joe_SkinCoord')),

                    HAnimJoint(
                      USE_ : SFString('Joe_HumanoidRoot')),

                    HAnimJoint(
                      USE_ : SFString('Joe_sacroiliac')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vl5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vl4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vl3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vl2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vl1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt12')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt11')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt10')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt9')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt8')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt7')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt6')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vt1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc7')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc6')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc5')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc4')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_vc1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_skullbase')),

                    HAnimJoint(
                      USE_ : SFString('Joe_temporomandibular')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_acromioclavicular')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_acromioclavicular')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_ankle')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_ankle')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_elbow')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_elbow')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_eyeball_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_eyeball_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_eyebrow_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_eyebrow_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_eyelid_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_eyelid_joint')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_hip')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_hip')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_index0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_index0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_index1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_index1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_index2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_index2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_index3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_index3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_knee')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_knee')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_metatarsal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_metatarsal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_middle0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_middle0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_middle1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_middle1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_middle2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_middle2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_middle3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_middle3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_midtarsal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_midtarsal')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_pinky0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_pinky0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_pinky1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_pinky1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_pinky2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_pinky2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_pinky3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_pinky3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_ring0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_ring0')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_ring1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_ring1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_ring2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_ring2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_ring3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_ring3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_shoulder')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_shoulder')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_sternoclavicular')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_sternoclavicular')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_subtalar')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_subtalar')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_thumb1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_thumb1')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_thumb2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_thumb2')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_thumb3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_thumb3')),

                    HAnimJoint(
                      USE_ : SFString('Joe_l_wrist')),

                    HAnimJoint(
                      USE_ : SFString('Joe_r_wrist')),
                  segments_ : [
                    HAnimSegment(
                      USE_ : SFString('Joe_sacrum')),
                  viewpoints_ : 
                    HAnimSite(
                      USE_ : SFString('Joe_RootFront_view'))])]),

            Group(
              children_ : [
                TimeSensor(
                  DEF_ : SFString('KickTimer'),
                  cycleInterval_ : 3.73,
                  loop_ : true),
              /*Interpolators*/

                OrientationInterpolator(
                  DEF_ : SFString('HumanoidRoot_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.4), SFFloat(0.6), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5)])),

                PositionInterpolator(
                  DEF_ : SFString('HumanoidRoot_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.6), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([1,0.3,-1]),SFVec3f([0.4,-0.04,-0.4]),SFVec3f([-0.18,0.1,0]),SFVec3f([-0.2,0.15,0.15])])),

                OrientationInterpolator(
                  DEF_ : SFString('sacroiliac_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.3), SFFloat(0.45), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.35), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.4)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_subtalar_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_midtarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_metatarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_hip_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_knee_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_ankle_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_subtalar_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_midtarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_metatarsal_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vl5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vl4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vl3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vl2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vl1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt12_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt11_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt10_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt9_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt8_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt7_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt6_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vt1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc7_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc6_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc5_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc4_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.3), SFFloat(0.4), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.25), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.35), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('vc1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('skullbase_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.35)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_eyelid_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_eyeball_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_eyebrow_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_eyelid_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_eyeball_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_eyebrow_joint_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('temporomandibular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_sternoclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_acromioclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(-1), SFRotation(0), SFRotation(1), SFRotation(1.75)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(3), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(-1), SFRotation(0), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.3), SFRotation(0), SFRotation(-0.5), SFRotation(1), SFRotation(1.3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_thumb1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_thumb2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_thumb3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_index0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_index1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_index2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_index3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_middle0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_middle1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_middle2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_middle3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_ring0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_ring1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_ring2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_ring3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_pinky0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_pinky1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_pinky2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('l_pinky3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_sternoclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_acromioclavicular_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_shoulder_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(2.5), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.75)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_elbow_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(3), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(-1), SFRotation(0), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_wrist_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.3)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_thumb1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_thumb2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_thumb3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_index0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_index1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_index2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_index3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_middle0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_middle1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_middle2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_middle3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_ring0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_ring1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_ring2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_ring3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_pinky0_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_pinky1_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_pinky2_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('r_pinky3_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),
          /*TimeSensor to Interpolators*/

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('HumanoidRoot_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('HumanoidRoot_TranslationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('sacroiliac_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_subtalar_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_midtarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_metatarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_hip_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_knee_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ankle_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_subtalar_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_midtarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_metatarsal_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vl5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vl4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vl3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vl2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vl1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt12_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt11_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt10_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt9_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt8_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt7_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt6_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vt1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc7_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc6_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc5_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc4_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('vc1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('skullbase_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_eyelid_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_eyeball_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_eyebrow_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_eyelid_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_eyeball_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_eyebrow_joint_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('temporomandibular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_sternoclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_acromioclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_thumb1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_thumb2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_thumb3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_index0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_index1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_index2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_index3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_middle0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_middle1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_middle2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_middle3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ring0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ring1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ring2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ring3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_pinky0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_pinky1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_pinky2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_pinky3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_sternoclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_acromioclavicular_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_shoulder_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_elbow_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_wrist_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_thumb1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_thumb2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_thumb3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_index0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_index1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_index2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_index3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_middle0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_middle1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_middle2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_middle3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ring0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ring1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ring2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ring3_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_pinky0_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_pinky1_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_pinky2_RotationInterpolator')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('KickTimer'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_pinky3_RotationInterpolator')),
          /*Routes from Interpolators to Joe_ model Joints*/

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('HumanoidRoot_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_HumanoidRoot')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('Joe_HumanoidRoot')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('sacroiliac_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_sacroiliac')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_subtalar_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_subtalar')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_midtarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_metatarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_metatarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_hip_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_knee_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ankle_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_subtalar_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_subtalar')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_midtarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_midtarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_metatarsal_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_metatarsal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vl5_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vl4_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vl3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vl2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vl1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vl1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt12_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt12')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt11_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt11')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt10_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt10')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt9_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt9')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt8_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt8')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt7_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt7')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt6_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt6')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt5_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt4_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vt1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vt1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc7_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc7')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc6_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc6')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc5_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc4_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('vc1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_vc1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('skullbase_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_eyelid_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_eyelid_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_eyeball_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_eyeball_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_eyebrow_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_eyebrow_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_eyelid_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_eyelid_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_eyeball_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_eyeball_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_eyebrow_joint_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_eyebrow_joint')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('temporomandibular_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_temporomandibular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_sternoclavicular_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_sternoclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_acromioclavicular_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_acromioclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_thumb1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_thumb1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_thumb2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_thumb2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_thumb3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_thumb3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_index0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_index0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_index1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_index1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_index2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_index2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_index3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_index3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_middle0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_middle0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_middle1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_middle1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_middle2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_middle2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_middle3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_middle3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ring0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ring0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ring1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ring1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ring2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ring2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ring3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_ring3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_pinky0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_pinky0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_pinky1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_pinky1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_pinky2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_pinky2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_pinky3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_l_pinky3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_sternoclavicular_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_sternoclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_acromioclavicular_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_acromioclavicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_shoulder_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_elbow_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_wrist_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_thumb3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_thumb3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_index3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_index3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_middle3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_middle3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ring3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_ring3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky0_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky0')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky1_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky2_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_pinky3_RotationInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('Joe_r_pinky3')),

            Group(
              DEF_ : SFString('DisplacersAnimationGroup'),
              /*TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor*/
              children_ : [
                ScalarInterpolator(
                  DEF_ : SFString('skull_tipInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.35), SFFloat(0.6), SFFloat(0.7), SFFloat(0.85), SFFloat(0.88), SFFloat(0.94), SFFloat(0.97), SFFloat(1)]),
                  keyValue_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0), SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(1), SFFloat(0), SFFloat(1), SFFloat(0.4), SFFloat(0)])),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KickTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('skull_tipInterpolator')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('skull_tipInterpolator'),
                  toField_ : SFString('weight'),
                  toNode_ : SFString('Joe_skull_tip_raiser_action'))]),

            Group(
              DEF_ : SFString('SkinTextureTransformAnimationGroup'),
              children_ : [
                ScalarInterpolator(
                  DEF_ : SFString('SkinTextureTransformInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0), SFFloat(0), SFFloat(0), SFFloat(1), SFFloat(2), SFFloat(0)])),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KickTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('SkinTextureTransformInterpolator')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('SkinTextureTransformInterpolator'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('KickTextureTransform'))]),

            Group(
              children_ : [
                Transform(
                  DEF_ : SFString('SBall'),
                  rotation_ : SFRotation([SFDouble(0.7), SFDouble(0), SFDouble(0.7), SFDouble(0.1)]),
                  scale_ : SFVec3f([SFDouble(0.23), SFDouble(0.23), SFDouble(0.23)]),
                  translation_ : SFVec3f([SFDouble(-0.916), SFDouble(0.37), SFDouble(-0.92)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('ball_Shape'),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('ball_Appearance'),
                          material_ : 
                            Material(
                              DEF_ : SFString('ball_Material'),
                              diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(1)]),
                              emissiveColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.33)])),
                          texture_ : 
                            ImageTexture(
                              USE_ : SFString('JoeSkinImageTexture'))),
                      geometry_ : 
                        IndexedFaceSet(
                          DEF_ : SFString('ball_IndexedFaceSet'),
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(0), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(0), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(1), SFInt32(14), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(2), SFInt32(15), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(3), SFInt32(16), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(4), SFInt32(17), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(5), SFInt32(18), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(6), SFInt32(19), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(7), SFInt32(20), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(8), SFInt32(21), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(9), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(10), SFInt32(23), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(11), SFInt32(24), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(24), SFInt32(13), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(1), SFInt32(-1), SFInt32(13), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(13), SFInt32(26), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(14), SFInt32(27), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(15), SFInt32(28), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(16), SFInt32(29), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(17), SFInt32(30), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(18), SFInt32(31), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(19), SFInt32(32), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(20), SFInt32(33), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(21), SFInt32(34), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(22), SFInt32(35), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(23), SFInt32(36), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(25), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(13), SFInt32(-1), SFInt32(25), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(25), SFInt32(38), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(26), SFInt32(39), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(27), SFInt32(40), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(28), SFInt32(41), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(29), SFInt32(42), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(43), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(31), SFInt32(44), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(32), SFInt32(45), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(33), SFInt32(46), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(34), SFInt32(47), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(47), SFInt32(48), SFInt32(-1), SFInt32(35), SFInt32(48), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(48), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(25), SFInt32(-1), SFInt32(37), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(37), SFInt32(50), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(38), SFInt32(51), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(51), SFInt32(52), SFInt32(-1), SFInt32(39), SFInt32(52), SFInt32(40), SFInt32(-1), SFInt32(40), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(40), SFInt32(53), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(41), SFInt32(54), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(54), SFInt32(55), SFInt32(-1), SFInt32(42), SFInt32(55), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(55), SFInt32(56), SFInt32(-1), SFInt32(43), SFInt32(56), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(44), SFInt32(57), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(57), SFInt32(58), SFInt32(-1), SFInt32(45), SFInt32(58), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(46), SFInt32(59), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(47), SFInt32(60), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(60), SFInt32(49), SFInt32(-1), SFInt32(48), SFInt32(49), SFInt32(37), SFInt32(-1), SFInt32(61), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(61), SFInt32(51), SFInt32(50), SFInt32(-1), SFInt32(61), SFInt32(52), SFInt32(51), SFInt32(-1), SFInt32(61), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(61), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(61), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(61), SFInt32(56), SFInt32(55), SFInt32(-1), SFInt32(61), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(61), SFInt32(58), SFInt32(57), SFInt32(-1), SFInt32(61), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(61), SFInt32(60), SFInt32(59), SFInt32(-1), SFInt32(61), SFInt32(49), SFInt32(60), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('Ball_Coordinates'),
                              point_ : MFVec3f([SFVec3f([0,0.4675,0]),SFVec3f([0,0.4049,-0.2338]),SFVec3f([-0.1169,0.4049,-0.2024]),SFVec3f([-0.2024,0.4049,-0.1169]),SFVec3f([-0.2338,0.4049,0]),SFVec3f([-0.2024,0.4049,0.1169]),SFVec3f([-0.1169,0.4049,0.2024]),SFVec3f([0,0.4049,0.2338]),SFVec3f([0.1169,0.4049,0.2024]),SFVec3f([0.2024,0.4049,0.1169]),SFVec3f([0.2338,0.4049,0]),SFVec3f([0.2024,0.4049,-0.1169]),SFVec3f([0.1169,0.4049,-0.2024]),SFVec3f([0,0.2338,-0.4049]),SFVec3f([-0.2024,0.2338,-0.3506]),SFVec3f([-0.3506,0.2338,-0.2024]),SFVec3f([-0.4049,0.2338,0]),SFVec3f([-0.3506,0.2338,0.2024]),SFVec3f([-0.2024,0.2338,0.3506]),SFVec3f([0,0.2338,0.4049]),SFVec3f([0.2024,0.2338,0.3506]),SFVec3f([0.3506,0.2338,0.2024]),SFVec3f([0.4049,0.2338,0]),SFVec3f([0.3506,0.2338,-0.2024]),SFVec3f([0.2024,0.2338,-0.3506]),SFVec3f([0,0,-0.4675]),SFVec3f([-0.2338,0,-0.4049]),SFVec3f([-0.4049,0,-0.2338]),SFVec3f([-0.4675,0,0]),SFVec3f([-0.4049,0,0.2338]),SFVec3f([-0.2338,0,0.4049]),SFVec3f([0,0,0.4675]),SFVec3f([0.2338,0,0.4049]),SFVec3f([0.4049,0,0.2338]),SFVec3f([0.4675,0,0]),SFVec3f([0.4049,0,-0.2338]),SFVec3f([0.2338,0,-0.4049]),SFVec3f([0,-0.2338,-0.4049]),SFVec3f([-0.2024,-0.2338,-0.3506]),SFVec3f([-0.3506,-0.2338,-0.2024]),SFVec3f([-0.4049,-0.2338,0]),SFVec3f([-0.3506,-0.2338,0.2024]),SFVec3f([-0.2024,-0.2338,0.3506]),SFVec3f([0,-0.2338,0.4049]),SFVec3f([0.2024,-0.2338,0.3506]),SFVec3f([0.3506,-0.2338,0.2024]),SFVec3f([0.4049,-0.2338,0]),SFVec3f([0.3506,-0.2338,-0.2024]),SFVec3f([0.2024,-0.2338,-0.3506]),SFVec3f([0,-0.4049,-0.2338]),SFVec3f([-0.1169,-0.4049,-0.2024]),SFVec3f([-0.2024,-0.4049,-0.1169]),SFVec3f([-0.2338,-0.4049,0]),SFVec3f([-0.2024,-0.4049,0.1169]),SFVec3f([-0.1169,-0.4049,0.2024]),SFVec3f([0,-0.4049,0.2338]),SFVec3f([0.1169,-0.4049,0.2024]),SFVec3f([0.2024,-0.4049,0.1169]),SFVec3f([0.2338,-0.4049,0]),SFVec3f([0.2024,-0.4049,-0.1169]),SFVec3f([0.1169,-0.4049,-0.2024]),SFVec3f([0,-0.4675,0])])))),

                    Viewpoint(
                      DEF_ : SFString('ballView_1'),
                      description_ : SFString('Ball View'))]),
              /*Ball Animation interpolators*/

                PositionInterpolator(
                  DEF_ : SFString('ball_TranslationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.409), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([-1,0.4,-1]),SFVec3f([0,0.07,0]),SFVec3f([0.05,0.06,0.05]),SFVec3f([2,4,10])])),

                OrientationInterpolator(
                  DEF_ : SFString('ball_RotationInterpolator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.41), SFFloat(0.71), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.25), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(1.35), SFRotation(-1), SFRotation(1), SFRotation(-1), SFRotation(3.35), SFRotation(-1), SFRotation(0.2), SFRotation(-1), SFRotation(3), SFRotation(-1), SFRotation(0.2), SFRotation(-1), SFRotation(3)])),
              /*Ball Animation Routes*/

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KickTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('ball_TranslationInterpolator')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('ball_TranslationInterpolator'),
                  toField_ : SFString('set_translation'),
                  toNode_ : SFString('SBall')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KickTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('ball_RotationInterpolator')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('ball_RotationInterpolator'),
                  toField_ : SFString('set_rotation'),
                  toNode_ : SFString('SBall'))]),

            Group(
              children_ : [
                Transform(
                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                  children_ : [
                    Shape(
                      USE_ : SFString('AxisLinesShape'))]),

                Transform(
                  DEF_ : SFString('Circle0'),
                  scale_ : SFVec3f([SFDouble(1.175), SFDouble(1), SFDouble(1.175)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('circle_Shape'),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('circle0_Appearance'),
                          material_ : 
                            Material(
                              DEF_ : SFString('circle0_Material'),
                              ambientIntensity_ : 0.9,
                              diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                              emissiveColor_ : SFColor([SFDouble(0.425), SFDouble(0.486), SFDouble(1)]))),
                      geometry_ : 
                        IndexedLineSet(
                          DEF_ : SFString('Orbit1'),
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('circle_Coordinates'),
                              point_ : MFVec3f([SFVec3f([1,0,0]),SFVec3f([0.995,0,-0.105]),SFVec3f([0.979,0,-0.208]),SFVec3f([0.951,0,-0.309]),SFVec3f([0.914,0,-0.407]),SFVec3f([0.866,0,-0.5]),SFVec3f([0.809,0,-0.588]),SFVec3f([0.743,0,-0.669]),SFVec3f([0.669,0,-0.743]),SFVec3f([0.588,0,-0.809]),SFVec3f([0.5,0,-0.866]),SFVec3f([0.407,0,-0.914]),SFVec3f([0.309,0,-0.951]),SFVec3f([0.208,0,-0.978]),SFVec3f([0.105,0,-0.995]),SFVec3f([0,0,-1]),SFVec3f([-0.105,0,-0.994522]),SFVec3f([-0.208,0,-0.978]),SFVec3f([-0.309,0,-0.951]),SFVec3f([-0.407,0,-0.914]),SFVec3f([-0.5,0,-0.866]),SFVec3f([-0.588,0,-0.809]),SFVec3f([-0.669,0,-0.743]),SFVec3f([-0.743,0,-0.669]),SFVec3f([-0.809,0,-0.588]),SFVec3f([-0.866,0,-0.5]),SFVec3f([-0.914,0,-0.407]),SFVec3f([-0.951,0,-0.309]),SFVec3f([-0.978,0,-0.208]),SFVec3f([-0.995,0,-0.105]),SFVec3f([-1,0,0]),SFVec3f([-0.995,0,0.105]),SFVec3f([-0.978,0,0.208]),SFVec3f([-0.951,0,0.309]),SFVec3f([-0.914,0,0.407]),SFVec3f([-0.866,0,0.5]),SFVec3f([-0.809,0,0.588]),SFVec3f([-0.743,0,0.669]),SFVec3f([-0.669,0,0.743]),SFVec3f([-0.588,0,0.809]),SFVec3f([-0.5,0,0.866]),SFVec3f([-0.407,0,0.914]),SFVec3f([-0.309,0,0.951]),SFVec3f([-0.208,0,0.978]),SFVec3f([-0.105,0,0.995]),SFVec3f([0,0,1]),SFVec3f([0.105,0,0.995]),SFVec3f([0.208,0,0.978]),SFVec3f([0.309,0,0.951]),SFVec3f([0.407,0,0.914]),SFVec3f([0.5,0,0.866]),SFVec3f([0.588,0,0.809]),SFVec3f([0.669,0,0.743]),SFVec3f([0.743,0,0.669]),SFVec3f([0.809,0,0.588]),SFVec3f([0.866,0,0.5]),SFVec3f([0.914,0,0.407]),SFVec3f([0.951,0,0.309]),SFVec3f([0.978,0,0.208]),SFVec3f([0.995,0,0.104]),SFVec3f([1,0,0])]))))]),

                Transform(
                  DEF_ : SFString('Circle1'),
                  scale_ : SFVec3f([SFDouble(0.5), SFDouble(1), SFDouble(0.5)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('circle1_Shape'),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('circle1_Appearance'),
                          material_ : 
                            Material(
                              DEF_ : SFString('circle1_Material'),
                              diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                              emissiveColor_ : SFColor([SFDouble(0.424956), SFDouble(0.483976), SFDouble(1)]))),
                      geometry_ : 
                        IndexedLineSet(
                          USE_ : SFString('Orbit1')))]),

                Transform(
                  DEF_ : SFString('Circle2'),
                  scale_ : SFVec3f([SFDouble(0.25), SFDouble(1), SFDouble(0.25)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('circle2_Shape'),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('circle2_Appearance'),
                          material_ : 
                            Material(
                              DEF_ : SFString('circle2_Material'),
                              diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0), SFDouble(0.7)]),
                              emissiveColor_ : SFColor([SFDouble(0.424956), SFDouble(0.483976), SFDouble(1)]))),
                      geometry_ : 
                        IndexedLineSet(
                          USE_ : SFString('Orbit1')))])])]));
void main() { exit(0); }
