// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Text'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Grouping'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Shape'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Rendering'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('Joe'),
              content_ : SFString('20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM')),

            meta(
              name_ : SFString('converter'),
              content_ : SFString('x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy')),

            meta(
              name_ : SFString('converted'),
              content_ : SFString('Wed, 12 Jul 2023 08:05:49 GMT'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              DEF_ : SFString('JoeTest_WorldInfo'),
              title_ : SFString('JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108')),

            NavigationInfo(
              speed_ : 0.75,
              headlight_ : false),

            Group(
              DEF_ : SFString('IllustrationGeometry'),
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(2), SFDouble(2), SFDouble(2)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('jointbox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                              shininess_ : 0.7)),
                      geometry_ : 
                        IndexedFaceSet(
                          creaseAngle_ : 0.1,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))))]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.2), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(2), SFDouble(2), SFDouble(2)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('sitebox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.5,
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              shininess_ : 0.7)),
                      geometry_ : 
                        IndexedFaceSet(
                          creaseAngle_ : 0.1,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))))]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.3), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(2), SFDouble(2), SFDouble(2)]),
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('SegmentLine'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.2,0,0])]))))]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2.4), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(2), SFDouble(2), SFDouble(2)]),
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('SiteParentLine'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.2,0,0])]))))])]),

            Group(
              DEF_ : SFString('SpecHumanoid'),
              children_ : [
                HAnimHumanoid(
                  DEF_ : SFString('humanoid'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('HumanoidRoot'),
                      DEF_ : SFString('hanim_HumanoidRoot'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'),
                          DEF_ : SFString('hanim_sacrum'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('jointbox'))]),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('SegmentLine')),
                              geometry_ : 
                                IndexedLineSet(
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0028,1.0568,-0.0776])]))))]),

                        HAnimJoint(
                          name_ : SFString('sacroiliac'),
                          DEF_ : SFString('hanim_sacroiliac'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                          skinCoordIndex_ : MFInt32([SFInt32(17), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(26), SFInt32(27), SFInt32(73), SFInt32(82), SFInt32(89), SFInt32(91), SFInt32(93)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.35), SFFloat(0.35), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('pelvis'),
                              DEF_ : SFString('hanim_pelvis'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('jointbox'))]),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SegmentLine')),
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([-0.095,0.9171,0.0029])])))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SiteParentLine')),
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(9), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.1525,1.0628,0.0035]),SFVec3f([-0.1689,0.8419,0.0352]),SFVec3f([0.1612,1.0537,0.0008]),SFVec3f([0.1677,0.8336,0.0303]),SFVec3f([-0.0887,1.0021,0.1112]),SFVec3f([0.0925,0.9983,0.1052]),SFVec3f([-0.0716,1.019,-0.1138]),SFVec3f([0.0774,1.019,-0.1151]),SFVec3f([0.0034,0.8266,0.0257])])))),

                                HAnimSite(
                                  name_ : SFString('r_iliocristale'),
                                  DEF_ : SFString('hanim_r_iliocristale'),
                                  translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('r_trochanterion'),
                                  DEF_ : SFString('hanim_r_trochanterion'),
                                  translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('l_iliocristale'),
                                  DEF_ : SFString('hanim_l_iliocristale'),
                                  translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('l_trochanterion'),
                                  DEF_ : SFString('hanim_l_trochanterion'),
                                  translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('r_asis'),
                                  DEF_ : SFString('hanim_r_asis'),
                                  translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('l_asis'),
                                  DEF_ : SFString('hanim_l_asis'),
                                  translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('r_psis'),
                                  DEF_ : SFString('hanim_r_psis'),
                                  translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('l_psis'),
                                  DEF_ : SFString('hanim_l_psis'),
                                  translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('crotch'),
                                  DEF_ : SFString('hanim_crotch'),
                                  translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))])]),

                            HAnimJoint(
                              name_ : SFString('l_hip'),
                              DEF_ : SFString('hanim_l_hip'),
                              center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                              skinCoordIndex_ : MFInt32([SFInt32(89), SFInt32(90), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_thigh'),
                                  DEF_ : SFString('hanim_l_thigh'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('jointbox'))]),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SiteParentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.1598,0.4967,0.0297]),SFVec3f([0.0398,0.4946,0.0303])])))),

                                    HAnimSite(
                                      name_ : SFString('l_knee_crease'),
                                      DEF_ : SFString('hanim_l_knee_crease'),
                                      translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_femoral_lateral_epicn'),
                                      DEF_ : SFString('hanim_l_femoral_lateral_epicn'),
                                      translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('l_femoral_medial_epicn'),
                                      DEF_ : SFString('hanim_l_femoral_medial_epicn'),
                                      translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_knee'),
                                  DEF_ : SFString('hanim_l_knee'),
                                  center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(334), SFInt32(335), SFInt32(336), SFInt32(337), SFInt32(338), SFInt32(339), SFInt32(340), SFInt32(341)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_calf'),
                                      DEF_ : SFString('hanim_l_calf'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))]),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('l_ankle'),
                                      DEF_ : SFString('hanim_l_ankle'),
                                      center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(342), SFInt32(343), SFInt32(344), SFInt32(345)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_hindfoot'),
                                          DEF_ : SFString('hanim_l_hindfoot'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))]),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1086,0.0001,-0.0368])])))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SiteParentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1308,0.0597,-0.1032]),SFVec3f([0.089,0.0716,-0.0881]),SFVec3f([0.089,0.0575,-0.0943]),SFVec3f([0.0974,0.0259,-0.1171])])))),

                                            HAnimSite(
                                              name_ : SFString('l_lateral_malleolus'),
                                              DEF_ : SFString('hanim_l_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_medial_malleolus'),
                                              DEF_ : SFString('hanim_l_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_sphyrion'),
                                              DEF_ : SFString('hanim_l_sphyrion'),
                                              translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_calcaneous_post'),
                                              DEF_ : SFString('hanim_l_calcaneous_post'),
                                              translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_subtalar'),
                                          DEF_ : SFString('hanim_l_subtalar'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(346), SFInt32(347), SFInt32(348), SFInt32(71)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_midproximal'),
                                              DEF_ : SFString('hanim_l_l_midproximal'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1086,0.0001,-0.0368]),SFVec3f([0.1086,0.0001,0.0368])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_midtarsal'),
                                              DEF_ : SFString('hanim_l_midtarsal'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(349), SFInt32(350), SFInt32(351), SFInt32(352)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_middistal'),
                                                  DEF_ : SFString('hanim_l_middistal'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))]),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0.0001,0.0368]),SFVec3f([0.1086,0,0.0762])])))),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SiteParentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0.0001,-0.0368]),SFVec3f([0.0816,0.0232,0.0106])])))),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_pha1'),
                                                      DEF_ : SFString('hanim_l_metatarsal_pha1'),
                                                      translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('sitebox'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsal'),
                                                  DEF_ : SFString('hanim_l_metatarsal'),
                                                  center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(353), SFInt32(354), SFInt32(355), SFInt32(356), SFInt32(357), SFInt32(358), SFInt32(359), SFInt32(360), SFInt32(361)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_forefoot'),
                                                      DEF_ : SFString('hanim_l_forefoot'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))]),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1354,0.0016,0.1476])])))),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SiteParentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1354,0.0016,0.1476]),SFVec3f([0.1825,0.007,0.0928]),SFVec3f([0.1195,0.0079,0.1433])])))),

                                                        HAnimSite(
                                                          name_ : SFString('l_forefoot_tip'),
                                                          DEF_ : SFString('hanim_l_forefoot_tip'),
                                                          translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))]),

                                                        HAnimSite(
                                                          name_ : SFString('l_metatarsal_pha5'),
                                                          DEF_ : SFString('hanim_l_metatarsal_pha5'),
                                                          translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))]),

                                                        HAnimSite(
                                                          name_ : SFString('l_digit2'),
                                                          DEF_ : SFString('hanim_l_digit2'),
                                                          translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])])])])])])])]),

                            HAnimJoint(
                              name_ : SFString('r_hip'),
                              DEF_ : SFString('hanim_r_hip'),
                              center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                              skinCoordIndex_ : MFInt32([SFInt32(91), SFInt32(92), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101), SFInt32(362), SFInt32(363)]),
                              skinCoordWeight_ : MFFloat([SFFloat(0.65), SFFloat(1), SFFloat(0.8), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.4), SFFloat(0.8)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_thigh'),
                                  DEF_ : SFString('hanim_r_thigh'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('jointbox'))]),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([-0.0867,0.4913,0.0318])])))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SiteParentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([-0.0825,0.4932,-0.0326]),SFVec3f([-0.1421,0.4992,0.031]),SFVec3f([-0.0221,0.5014,0.0289])])))),

                                    HAnimSite(
                                      name_ : SFString('r_knee_crease'),
                                      DEF_ : SFString('hanim_r_knee_crease'),
                                      translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_femoral_lateral_epicn'),
                                      DEF_ : SFString('hanim_r_femoral_lateral_epicn'),
                                      translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))]),

                                    HAnimSite(
                                      name_ : SFString('r_femoral_medial_epicn'),
                                      DEF_ : SFString('hanim_r_femoral_medial_epicn'),
                                      translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('sitebox'))])]),

                                HAnimJoint(
                                  name_ : SFString('r_knee'),
                                  DEF_ : SFString('hanim_r_knee'),
                                  center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                  skinCoordIndex_ : MFInt32([SFInt32(362), SFInt32(363), SFInt32(364), SFInt32(365), SFInt32(366), SFInt32(367), SFInt32(368), SFInt32(369), SFInt32(98)]),
                                  skinCoordWeight_ : MFFloat([SFFloat(0.6), SFFloat(0.2), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.2)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_calf'),
                                      DEF_ : SFString('hanim_r_calf'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))]),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0867,0.4913,0.0318]),SFVec3f([-0.0801,0.0712,-0.0766])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_ankle'),
                                      DEF_ : SFString('hanim_r_ankle'),
                                      center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(370), SFInt32(371), SFInt32(372), SFInt32(373)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_hindfoot'),
                                          DEF_ : SFString('hanim_r_hindfoot'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))]),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-0.0801,0,-0.0368])])))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SiteParentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-0.1006,0.0658,-0.1075]),SFVec3f([-0.0591,0.076,-0.0928]),SFVec3f([-0.0603,0.061,-0.1002]),SFVec3f([-0.0692,0.0297,-0.1221])])))),

                                            HAnimSite(
                                              name_ : SFString('r_lateral_malleolus'),
                                              DEF_ : SFString('hanim_r_lateral_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('r_medial_malleolus'),
                                              DEF_ : SFString('hanim_r_medial_malleolus'),
                                              translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('r_sphyrion'),
                                              DEF_ : SFString('hanim_r_sphyrion'),
                                              translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('r_calcaneous_post'),
                                              DEF_ : SFString('hanim_r_calcaneous_post'),
                                              translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('r_subtalar'),
                                          DEF_ : SFString('hanim_r_subtalar'),
                                          center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(-0.0368)]),
                                          skinCoordIndex_ : MFInt32([SFInt32(374), SFInt32(375), SFInt32(376)]),
                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_midproximal'),
                                              DEF_ : SFString('hanim_r_midproximal'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(-0.0368)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.0801,0,-0.0368]),SFVec3f([-0.0801,0,0.0368])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_midtarsal'),
                                              DEF_ : SFString('hanim_r_midtarsal'),
                                              center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                              skinCoordIndex_ : MFInt32([SFInt32(377), SFInt32(378), SFInt32(379), SFInt32(380)]),
                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_middistal'),
                                                  DEF_ : SFString('hanim_r_middistal'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))]),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.0801,0,-0.0368]),SFVec3f([-0.0801,0.0039,0.0732])])))),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SiteParentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.0801,0,0.0368]),SFVec3f([-0.0521,0.026,0.0127])])))),

                                                    HAnimSite(
                                                      name_ : SFString('r_metatarsal_pha1'),
                                                      DEF_ : SFString('hanim_r_metatarsal_pha1'),
                                                      translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('sitebox'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsal'),
                                                  DEF_ : SFString('hanim_r_metatarsal'),
                                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0039), SFDouble(0.0732)]),
                                                  skinCoordIndex_ : MFInt32([SFInt32(381), SFInt32(382), SFInt32(383), SFInt32(384), SFInt32(385), SFInt32(386), SFInt32(387), SFInt32(388), SFInt32(389)]),
                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_forefoot'),
                                                      DEF_ : SFString('hanim_r_forefoot'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0039), SFDouble(0.0732)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))]),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0039,0.0732]),SFVec3f([-0.1043,-0.0227,0.145])])))),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SiteParentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0039,0.0732]),SFVec3f([-0.1043,-0.0227,0.145]),SFVec3f([-0.1523,0.0166,0.0895]),SFVec3f([-0.0883,0.0134,0.1383])])))),

                                                        HAnimSite(
                                                          name_ : SFString('r_forefoot_tip'),
                                                          DEF_ : SFString('hanim_r_forefoot_tip'),
                                                          translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(-0.0227), SFDouble(0.145)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))]),

                                                        HAnimSite(
                                                          name_ : SFString('r_metatarsal_pha5'),
                                                          DEF_ : SFString('hanim_r_metatarsal_pha5'),
                                                          translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))]),

                                                        HAnimSite(
                                                          name_ : SFString('r_digit2'),
                                                          DEF_ : SFString('hanim_r_digit2'),
                                                          translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('sitebox'))])])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('vl5'),
                          DEF_ : SFString('hanim_vl5'),
                          center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                          skinCoordIndex_ : MFInt32([SFInt32(28), SFInt32(76)]),
                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l5'),
                              DEF_ : SFString('hanim_l5'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('jointbox'))]),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SegmentLine')),
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])])))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('SiteParentLine')),
                                  geometry_ : 
                                    IndexedLineSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([0.0069,1.0966,0.1017])])))),

                                HAnimSite(
                                  name_ : SFString('waist_preferred_post'),
                                  DEF_ : SFString('hanim_waist_preferred_post'),
                                  translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.0915), SFDouble(-0.1091)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))]),

                                HAnimSite(
                                  name_ : SFString('navel'),
                                  DEF_ : SFString('hanim_navel'),
                                  translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('sitebox'))])]),

                            HAnimJoint(
                              name_ : SFString('vl4'),
                              DEF_ : SFString('hanim_vl4'),
                              center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l4'),
                                  DEF_ : SFString('hanim_l4'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('jointbox'))]),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          USE_ : SFString('SegmentLine')),
                                      geometry_ : 
                                        IndexedLineSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])]))))]),

                                HAnimJoint(
                                  name_ : SFString('vl3'),
                                  DEF_ : SFString('hanim_vl3'),
                                  center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l3'),
                                      DEF_ : SFString('hanim_l3'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('jointbox'))]),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              USE_ : SFString('SegmentLine')),
                                          geometry_ : 
                                            IndexedLineSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('vl2'),
                                      DEF_ : SFString('hanim_vl2'),
                                      center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                      skinCoordIndex_ : MFInt32([SFInt32(16), SFInt32(18), SFInt32(25), SFInt32(83), SFInt32(84), SFInt32(85), SFInt32(86), SFInt32(87), SFInt32(88)]),
                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.7), SFFloat(1), SFFloat(0.8)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l2'),
                                          DEF_ : SFString('hanim_l2'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('jointbox'))]),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SegmentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])])))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('SiteParentLine')),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([-0.0711,1.1941,0.1016]),SFVec3f([0.0871,1.1925,0.0992]),SFVec3f([0.0049,1.1908,-0.1113])])))),

                                            HAnimSite(
                                              name_ : SFString('r_rib10'),
                                              DEF_ : SFString('hanim_r_rib10'),
                                              translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('l_rib10'),
                                              DEF_ : SFString('hanim_l_rib10'),
                                              translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))]),

                                            HAnimSite(
                                              name_ : SFString('rib10_midspine'),
                                              DEF_ : SFString('hanim_rib10_midspine'),
                                              translation_ : SFVec3f([SFDouble(0.0049), SFDouble(1.1908), SFDouble(-0.1113)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('sitebox'))])]),

                                        HAnimJoint(
                                          name_ : SFString('vl1'),
                                          DEF_ : SFString('hanim_vl1'),
                                          center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l1'),
                                              DEF_ : SFString('hanim_l1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('jointbox'))]),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      USE_ : SFString('SegmentLine')),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('vt12'),
                                              DEF_ : SFString('hanim_vt12'),
                                              center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('t12'),
                                                  DEF_ : SFString('hanim_t12'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('jointbox'))]),

                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('SegmentLine')),
                                                      geometry_ : 
                                                        IndexedLineSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('vt11'),
                                                  DEF_ : SFString('hanim_vt11'),
                                                  center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t11'),
                                                      DEF_ : SFString('hanim_t11'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('jointbox'))]),

                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              USE_ : SFString('SegmentLine')),
                                                          geometry_ : 
                                                            IndexedLineSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])]))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt10'),
                                                      DEF_ : SFString('hanim_vt10'),
                                                      center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                      skinCoordIndex_ : MFInt32([SFInt32(15)]),
                                                      skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t10'),
                                                          DEF_ : SFString('hanim_t10'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('jointbox'))]),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SegmentLine')),
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])))),

                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('SiteParentLine')),
                                                              geometry_ : 
                                                                IndexedLineSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0085,1.2995,0.1147])])))),

                                                            HAnimSite(
                                                              name_ : SFString('substernale'),
                                                              DEF_ : SFString('hanim_substernale'),
                                                              translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('sitebox'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt9'),
                                                          DEF_ : SFString('hanim_vt9'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                          skinCoordIndex_ : MFInt32([SFInt32(13), SFInt32(14)]),
                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t9'),
                                                              DEF_ : SFString('hanim_t9'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('jointbox'))]),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      USE_ : SFString('SegmentLine')),
                                                                  geometry_ : 
                                                                    IndexedLineSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])])))),

                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      USE_ : SFString('SiteParentLine')),
                                                                  geometry_ : 
                                                                    IndexedLineSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([-0.0736,1.3385,0.1217]),SFVec3f([0.0918,1.3382,0.1192]),SFVec3f([0.0057,1.3382,-0.0845])])))),

                                                                HAnimSite(
                                                                  name_ : SFString('r_thelion'),
                                                                  DEF_ : SFString('hanim_r_thelion'),
                                                                  translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('sitebox'))]),

                                                                HAnimSite(
                                                                  name_ : SFString('l_thelion'),
                                                                  DEF_ : SFString('hanim_l_thelion'),
                                                                  translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('sitebox'))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt8'),
                                                              DEF_ : SFString('hanim_vt8'),
                                                              center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t8'),
                                                                  DEF_ : SFString('hanim_t8'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('jointbox'))]),

                                                                    Shape(
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          USE_ : SFString('SegmentLine')),
                                                                      geometry_ : 
                                                                        IndexedLineSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])]))))]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt7'),
                                                                  DEF_ : SFString('hanim_vt7'),
                                                                  center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t7'),
                                                                      DEF_ : SFString('hanim_t7'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                          children_ : [
                                                                            Shape(
                                                                              USE_ : SFString('jointbox'))]),

                                                                        Shape(
                                                                          appearance_ : 
                                                                            Appearance(
                                                                              USE_ : SFString('SegmentLine')),
                                                                          geometry_ : 
                                                                            IndexedLineSet(
                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])]))))]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt6'),
                                                                      DEF_ : SFString('hanim_vt6'),
                                                                      center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t6'),
                                                                          DEF_ : SFString('hanim_t6'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                              children_ : [
                                                                                Shape(
                                                                                  USE_ : SFString('jointbox'))]),

                                                                            Shape(
                                                                              appearance_ : 
                                                                                Appearance(
                                                                                  USE_ : SFString('SegmentLine')),
                                                                              geometry_ : 
                                                                                IndexedLineSet(
                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])]))))]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt5'),
                                                                          DEF_ : SFString('hanim_vt5'),
                                                                          center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t5'),
                                                                              DEF_ : SFString('hanim_t5'),
                                                                              children_ : [
                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      USE_ : SFString('jointbox'))]),

                                                                                Shape(
                                                                                  appearance_ : 
                                                                                    Appearance(
                                                                                      USE_ : SFString('SegmentLine')),
                                                                                  geometry_ : 
                                                                                    IndexedLineSet(
                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])]))))]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt4'),
                                                                              DEF_ : SFString('hanim_vt4'),
                                                                              center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                              skinCoordIndex_ : MFInt32([SFInt32(81)]),
                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t4'),
                                                                                  DEF_ : SFString('hanim_t4'),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          USE_ : SFString('jointbox'))]),

                                                                                    Shape(
                                                                                      appearance_ : 
                                                                                        Appearance(
                                                                                          USE_ : SFString('SegmentLine')),
                                                                                      geometry_ : 
                                                                                        IndexedLineSet(
                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])]))))]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt3'),
                                                                                  DEF_ : SFString('hanim_vt3'),
                                                                                  center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t3'),
                                                                                      DEF_ : SFString('hanim_t3'),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              USE_ : SFString('jointbox'))]),

                                                                                        Shape(
                                                                                          appearance_ : 
                                                                                            Appearance(
                                                                                              USE_ : SFString('SegmentLine')),
                                                                                          geometry_ : 
                                                                                            IndexedLineSet(
                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])]))))]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt2'),
                                                                                      DEF_ : SFString('hanim_vt2'),
                                                                                      center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t2'),
                                                                                          DEF_ : SFString('hanim_t2'),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                            Shape(
                                                                                              appearance_ : 
                                                                                                Appearance(
                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                              geometry_ : 
                                                                                                IndexedLineSet(
                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])]))))]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vt1'),
                                                                                          DEF_ : SFString('hanim_vt1'),
                                                                                          center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                          skinCoordIndex_ : MFInt32([SFInt32(11), SFInt32(24)]),
                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('t1'),
                                                                                              DEF_ : SFString('hanim_t1'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                Shape(
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                  geometry_ : 
                                                                                                    IndexedLineSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([-0.0694,1.46,-0.033])])))),

                                                                                                Shape(
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                  geometry_ : 
                                                                                                    IndexedLineSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0084,1.4714,0.0551]),SFVec3f([0.0064,1.52,-0.0815])])))),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('suprasternale'),
                                                                                                  DEF_ : SFString('hanim_suprasternale'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('cervicale'),
                                                                                                  DEF_ : SFString('hanim_cervicale'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc7'),
                                                                                              DEF_ : SFString('hanim_vc7'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(74), SFInt32(75)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('c7'),
                                                                                                  DEF_ : SFString('hanim_c7'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])])))),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([-0.0419,1.5149,-0.022]),SFVec3f([0.0646,1.5141,-0.038])])))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_neck_base'),
                                                                                                      DEF_ : SFString('hanim_r_neck_base'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_neck_base'),
                                                                                                      DEF_ : SFString('hanim_l_neck_base'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc6'),
                                                                                                  DEF_ : SFString('hanim_vc6'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c6'),
                                                                                                      DEF_ : SFString('hanim_c6'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          DEF_ : SFString('cordsysvc6'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                          scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
                                                                                                          children_ : [
                                                                                                            Inline(
                                                                                                              global_ : true,
                                                                                                              url_ : MFString([SFString("JointCoordinateAxes.x3dv")]))]),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc5'),
                                                                                                      DEF_ : SFString('hanim_vc5'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c5'),
                                                                                                          DEF_ : SFString('hanim_c5'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc4'),
                                                                                                          DEF_ : SFString('hanim_vc4'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c4'),
                                                                                                              DEF_ : SFString('hanim_c4'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc3'),
                                                                                                              DEF_ : SFString('hanim_vc3'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c3'),
                                                                                                                  DEF_ : SFString('hanim_c3'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.5928,-0.0103])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc2'),
                                                                                                                  DEF_ : SFString('hanim_vc2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c2'),
                                                                                                                      DEF_ : SFString('hanim_c2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('vc1'),
                                                                                                                      DEF_ : SFString('hanim_vc1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('c1'),
                                                                                                                          DEF_ : SFString('hanim_c1'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('skullbase'),
                                                                                                                          DEF_ : SFString('hanim_skullbase'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('skull'),
                                                                                                                              DEF_ : SFString('hanim_skull'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.6332,0.0502]),SFVec3f([-0.0236,1.6331,0.051])])))),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(10), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.005,1.7504,0.0055]),SFVec3f([0.0058,1.6316,0.0852]),SFVec3f([-0.0237,1.6171,0.0752]),SFVec3f([0.0341,1.6171,0.0752]),SFVec3f([0.0061,1.541,0.0805]),SFVec3f([-0.0646,1.6347,0.0302]),SFVec3f([-0.052,1.5529,0.0347]),SFVec3f([0.0739,1.6348,0.0282]),SFVec3f([0.0631,1.553,0.033]),SFVec3f([0.0039,1.5972,-0.0796])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('skull_tip'),
                                                                                                                                  DEF_ : SFString('hanim_skull_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('sellion'),
                                                                                                                                  DEF_ : SFString('hanim_sellion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_infraorbitale'),
                                                                                                                                  DEF_ : SFString('hanim_r_infraorbitale'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_infraorbitale'),
                                                                                                                                  DEF_ : SFString('hanim_l_infraorbitale'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('supramenton'),
                                                                                                                                  DEF_ : SFString('hanim_supramenton'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_tragion'),
                                                                                                                                  DEF_ : SFString('hanim_r_tragion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_gonion'),
                                                                                                                                  DEF_ : SFString('hanim_r_gonion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_tragion'),
                                                                                                                                  DEF_ : SFString('hanim_l_tragion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_gonion'),
                                                                                                                                  DEF_ : SFString('hanim_l_gonion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('nuchale'),
                                                                                                                                  DEF_ : SFString('hanim_nuchale'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_eyeball_joint'),
                                                                                                                              DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_eyeball'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.0336,1.6332,0.0502]),SFVec3f([0.0336,1.6332,0.0702])]))))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_eyeball_joint'),
                                                                                                                              DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.0236), SFDouble(1.6331), SFDouble(0.051)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_eyeball'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0236), SFDouble(1.6331), SFDouble(0.051)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.0236,1.6331,0.051]),SFVec3f([-0.0236,1.6331,0.071])]))))])])])])])])])])])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_sternoclavicular'),
                                                                                              DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(12)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('l_clavicle'),
                                                                                                  DEF_ : SFString('hanim_l_clavicle'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])))),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0271,1.4943,0.0394]),SFVec3f([0.2032,1.476,-0.049]),SFVec3f([0.1777,1.4065,-0.0075]),SFVec3f([0.1706,1.4072,-0.0875])])))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_clavicale'),
                                                                                                      DEF_ : SFString('hanim_l_clavicale'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_acromion'),
                                                                                                      DEF_ : SFString('hanim_l_acromion'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_axilla_ant'),
                                                                                                      DEF_ : SFString('hanim_l_axilla_ant'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_axilla_post'),
                                                                                                      DEF_ : SFString('hanim_l_axilla_post'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_acromioclavicular'),
                                                                                                  DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(79)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_scapula'),
                                                                                                      DEF_ : SFString('hanim_l_scapula'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_shoulder'),
                                                                                                      DEF_ : SFString('hanim_l_shoulder'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(41), SFInt32(42), SFInt32(44), SFInt32(80), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_upperarm'),
                                                                                                          DEF_ : SFString('hanim_l_upperarm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])))),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SiteParentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.228,1.1482,-0.11])])))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_humeral_lateral_epicn'),
                                                                                                              DEF_ : SFString('hanim_l_humeral_lateral_epicn'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_elbow'),
                                                                                                          DEF_ : SFString('hanim_l_elbow'),
                                                                                                          center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_forearm'),
                                                                                                              DEF_ : SFString('hanim_l_forearm'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])))),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.1962,1.1375,-0.1123]),SFVec3f([0.1735,1.1272,-0.1113]),SFVec3f([0.2182,1.1212,-0.1167])])))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_radial_styloid'),
                                                                                                                  DEF_ : SFString('hanim_l_radial_styloid'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_olecranon'),
                                                                                                                  DEF_ : SFString('hanim_l_olecranon'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_humeral_medial_epicn'),
                                                                                                                  DEF_ : SFString('hanim_l_humeral_medial_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_radiale'),
                                                                                                                  DEF_ : SFString('hanim_l_radiale'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_wrist'),
                                                                                                              DEF_ : SFString('hanim_l_wrist'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(126)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_hand'),
                                                                                                                  DEF_ : SFString('hanim_l_hand'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1925,0.8066,-0.1036])])))),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122])])))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_pha2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_pha2'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_ulnar_styloid'),
                                                                                                                      DEF_ : SFString('hanim_l_ulnar_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_pha5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_pha5'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_thumb1'),
                                                                                                                  DEF_ : SFString('hanim_l_thumb1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(127), SFInt32(128)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_thumb_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_l_thumb_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_thumb2'),
                                                                                                                      DEF_ : SFString('hanim_l_thumb2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(141), SFInt32(142), SFInt32(143)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_thumb_proximal'),
                                                                                                                          DEF_ : SFString('hanim_l_thumb_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_thumb3'),
                                                                                                                          DEF_ : SFString('hanim_l_thumb3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(147), SFInt32(148), SFInt32(149), SFInt32(150), SFInt32(151), SFInt32(152)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_thumb_distal'),
                                                                                                                              DEF_ : SFString('hanim_l_thumb_distal'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1955,0.8159,0.0464]),SFVec3f([0.1982,0.8061,0.0759])])))),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1955,0.8159,0.0464]),SFVec3f([0.1982,0.8061,0.0759])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_thumb_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_thumb_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_index0'),
                                                                                                                  DEF_ : SFString('hanim_l_index0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(129), SFInt32(130)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_index_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_l_index_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_index1'),
                                                                                                                      DEF_ : SFString('hanim_l_index1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(138), SFInt32(139), SFInt32(140), SFInt32(153), SFInt32(154), SFInt32(155), SFInt32(163)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_index_proximal'),
                                                                                                                          DEF_ : SFString('hanim_l_index_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_index2'),
                                                                                                                          DEF_ : SFString('hanim_l_index2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(166), SFInt32(167), SFInt32(168), SFInt32(169)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_index_middle'),
                                                                                                                              DEF_ : SFString('hanim_l_index_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_index3'),
                                                                                                                              DEF_ : SFString('hanim_l_index3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(170), SFInt32(171), SFInt32(172), SFInt32(173), SFInt32(174), SFInt32(175), SFInt32(176), SFInt32(177), SFInt32(178)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_index_distal'),
                                                                                                                                  DEF_ : SFString('hanim_l_index_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2089,0.6858,-0.0245])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2089,0.6858,-0.0245]),SFVec3f([0.2056,0.6743,-0.0482])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_index_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_l_index_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_dactylion'),
                                                                                                                                      DEF_ : SFString('hanim_l_dactylion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_middle0'),
                                                                                                                  DEF_ : SFString('hanim_l_middle0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(131), SFInt32(132)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_middle_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_l_middle_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_middle1'),
                                                                                                                      DEF_ : SFString('hanim_l_middle1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(156), SFInt32(157), SFInt32(163), SFInt32(164)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_middle_proximal'),
                                                                                                                          DEF_ : SFString('hanim_l_middle_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_middle2'),
                                                                                                                          DEF_ : SFString('hanim_l_middle2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(179), SFInt32(180), SFInt32(181), SFInt32(182)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_middle_middle'),
                                                                                                                              DEF_ : SFString('hanim_l_middle_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_middle3'),
                                                                                                                              DEF_ : SFString('hanim_l_middle3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(183), SFInt32(184), SFInt32(185), SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(191)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_middle_distal'),
                                                                                                                                  DEF_ : SFString('hanim_l_middle_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2026,0.7011,-0.0494]),SFVec3f([0.208,0.6731,-0.0491])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.2026,0.7011,-0.0494]),SFVec3f([0.208,0.6731,-0.0491])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_middle_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_l_middle_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_ring0'),
                                                                                                                  DEF_ : SFString('hanim_l_ring0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(133), SFInt32(134)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_ring_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_l_ring_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_ring1'),
                                                                                                                      DEF_ : SFString('hanim_l_ring1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(158), SFInt32(159), SFInt32(164), SFInt32(165)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_ring_proximal'),
                                                                                                                          DEF_ : SFString('hanim_l_ring_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_ring2'),
                                                                                                                          DEF_ : SFString('hanim_l_ring2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(192), SFInt32(193), SFInt32(194), SFInt32(195)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_ring_middle'),
                                                                                                                              DEF_ : SFString('hanim_l_ring_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_ring3'),
                                                                                                                              DEF_ : SFString('hanim_l_ring3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(196), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(200), SFInt32(201), SFInt32(202), SFInt32(203), SFInt32(204)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_ring_distal'),
                                                                                                                                  DEF_ : SFString('hanim_l_ring_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1983,0.7045,-0.0767]),SFVec3f([0.2035,0.675,-0.0756])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1983,0.7045,-0.0767]),SFVec3f([0.2035,0.675,-0.0756])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_ring_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_l_ring_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_pinky0'),
                                                                                                                  DEF_ : SFString('hanim_l_pinky0'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(135), SFInt32(136), SFInt32(137), SFInt32(165)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_pinky_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_l_pinky_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_pinky1'),
                                                                                                                      DEF_ : SFString('hanim_l_pinky1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(160), SFInt32(161), SFInt32(162)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_pinky_proximal'),
                                                                                                                          DEF_ : SFString('hanim_l_pinky_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_pinky2'),
                                                                                                                          DEF_ : SFString('hanim_l_pinky2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(205), SFInt32(206), SFInt32(207), SFInt32(208)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_pinky_middle'),
                                                                                                                              DEF_ : SFString('hanim_l_pinky_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_pinky3'),
                                                                                                                              DEF_ : SFString('hanim_l_pinky3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(209), SFInt32(210), SFInt32(211), SFInt32(212), SFInt32(213), SFInt32(214), SFInt32(215), SFInt32(216), SFInt32(217)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('l_pinky_distal'),
                                                                                                                                  DEF_ : SFString('hanim_l_pinky_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1948,0.7277,-0.1017]),SFVec3f([0.2014,0.7009,-0.1012])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([0.1948,0.7277,-0.1017]),SFVec3f([0.2014,0.7009,-0.1012])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('l_pinky_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_l_pinky_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])])])])])])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_sternoclavicular'),
                                                                                              DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                              skinCoordIndex_ : MFInt32([SFInt32(10)]),
                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_clavicle'),
                                                                                                  DEF_ : SFString('hanim_r_clavicle'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0694,1.46,-0.033]),SFVec3f([-0.0836,1.4281,-0.0401])])))),

                                                                                                    Shape(
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                      geometry_ : 
                                                                                                        IndexedLineSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0694,1.46,-0.033]),SFVec3f([-0.0115,1.4943,0.04]),SFVec3f([-0.1905,1.4791,-0.0431]),SFVec3f([-0.1626,1.4072,-0.0031]),SFVec3f([-0.1603,1.4098,-0.0826])])))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_clavicale'),
                                                                                                      DEF_ : SFString('hanim_r_clavicale'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_acromion'),
                                                                                                      DEF_ : SFString('hanim_r_acromion'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_axilla_ant'),
                                                                                                      DEF_ : SFString('hanim_r_axilla_ant'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_axilla_post'),
                                                                                                      DEF_ : SFString('hanim_r_axilla_post'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_acromioclavicular'),
                                                                                                  DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(77), SFInt32(29)]),
                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(0.9)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_scapula'),
                                                                                                      DEF_ : SFString('hanim_r_scapula'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                        Shape(
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                          geometry_ : 
                                                                                                            IndexedLineSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.0836,1.4281,-0.0401]),SFVec3f([-0.1907,1.4407,-0.0325])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_shoulder'),
                                                                                                      DEF_ : SFString('hanim_r_shoulder'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(78), SFInt32(218), SFInt32(219), SFInt32(220), SFInt32(221), SFInt32(86), SFInt32(88)]),
                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.3), SFFloat(0.2)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_upperarm'),
                                                                                                          DEF_ : SFString('hanim_r_upperarm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1907,1.4407,-0.0325]),SFVec3f([-0.1949,1.1388,-0.062])])))),

                                                                                                            Shape(
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  USE_ : SFString('SiteParentLine')),
                                                                                                              geometry_ : 
                                                                                                                IndexedLineSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1907,1.4407,-0.0325]),SFVec3f([-0.2224,1.1517,-0.1033])])))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_humeral_lateral_epicn'),
                                                                                                              DEF_ : SFString('hanim_r_humeral_lateral_epicn'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('sitebox'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_elbow'),
                                                                                                          DEF_ : SFString('hanim_r_elbow'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(225), SFInt32(226), SFInt32(227), SFInt32(228), SFInt32(229), SFInt32(231), SFInt32(232), SFInt32(233), SFInt32(234)]),
                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_forearm'),
                                                                                                              DEF_ : SFString('hanim_r_forearm'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1949,1.1388,-0.062]),SFVec3f([-0.1959,0.8694,-0.0521])])))),

                                                                                                                Shape(
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                                  geometry_ : 
                                                                                                                    IndexedLineSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1949,1.1388,-0.062]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.1907,1.1405,-0.1065]),SFVec3f([-0.168,1.1298,-0.1062]),SFVec3f([-0.213,1.1305,-0.1091])])))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_radial_styloid'),
                                                                                                                  DEF_ : SFString('hanim_r_radial_styloid'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_olecranon'),
                                                                                                                  DEF_ : SFString('hanim_r_olecranon'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_humeral_medial_epicn'),
                                                                                                                  DEF_ : SFString('hanim_r_humeral_medial_epicn'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_radiale'),
                                                                                                                  DEF_ : SFString('hanim_r_radiale'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('sitebox'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_wrist'),
                                                                                                              DEF_ : SFString('hanim_r_wrist'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(235), SFInt32(236), SFInt32(237), SFInt32(238), SFInt32(239), SFInt32(240), SFInt32(241), SFInt32(242)]),
                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_hand'),
                                                                                                                  DEF_ : SFString('hanim_r_hand'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1899,0.8502,-0.0473]),SFVec3f([-0.1961,0.8055,-0.0218]),SFVec3f([-0.1972,0.806,-0.0468]),SFVec3f([-0.1951,0.8049,-0.0732]),SFVec3f([-0.1926,0.8096,-0.0975])])))),

                                                                                                                    Shape(
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                      geometry_ : 
                                                                                                                        IndexedLineSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064])])))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_pha2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_pha2'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_ulnar_styloid'),
                                                                                                                      DEF_ : SFString('hanim_r_ulnar_styloid'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_pha5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_pha5'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('sitebox'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_thumb1'),
                                                                                                                  DEF_ : SFString('hanim_r_thumb1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(243), SFInt32(244)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_thumb_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_r_thumb_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1899,0.8502,-0.0473]),SFVec3f([-0.1874,0.8256,0.0306])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_thumb2'),
                                                                                                                      DEF_ : SFString('hanim_r_thumb2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(257), SFInt32(258), SFInt32(259)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_thumb_proximal'),
                                                                                                                          DEF_ : SFString('hanim_r_thumb_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1874,0.8256,0.0306]),SFVec3f([-0.1864,0.819,0.0506])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_thumb3'),
                                                                                                                          DEF_ : SFString('hanim_r_thumb3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(260), SFInt32(261), SFInt32(262), SFInt32(263), SFInt32(264), SFInt32(265), SFInt32(266), SFInt32(267), SFInt32(268)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_thumb_distal'),
                                                                                                                              DEF_ : SFString('hanim_r_thumb_distal'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1864,0.819,0.0506]),SFVec3f([-0.1869,0.809,0.082])])))),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SiteParentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1864,0.819,0.0506]),SFVec3f([-0.1869,0.809,0.082])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_thumb_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_thumb_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1869), SFDouble(0.809), SFDouble(0.082)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('sitebox'))])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_index0'),
                                                                                                                  DEF_ : SFString('hanim_r_index0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(245), SFInt32(246)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_index_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_r_index_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1961,0.8055,-0.0218]),SFVec3f([-0.1961,0.7846,-0.0218])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_index1'),
                                                                                                                      DEF_ : SFString('hanim_r_index1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(254), SFInt32(255), SFInt32(256), SFInt32(269), SFInt32(270), SFInt32(271), SFInt32(279)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(0.5), SFFloat(0.5), SFFloat(0.5), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_index_proximal'),
                                                                                                                          DEF_ : SFString('hanim_r_index_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1961,0.7846,-0.0218]),SFVec3f([-0.1945,0.7169,-0.0173])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_index2'),
                                                                                                                          DEF_ : SFString('hanim_r_index2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(282), SFInt32(283), SFInt32(284), SFInt32(285)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_index_middle'),
                                                                                                                              DEF_ : SFString('hanim_r_index_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1954,0.7393,-0.0185]),SFVec3f([-0.1945,0.7169,-0.0173])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_index3'),
                                                                                                                              DEF_ : SFString('hanim_r_index3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(286), SFInt32(287), SFInt32(288), SFInt32(289), SFInt32(290), SFInt32(291), SFInt32(292), SFInt32(293), SFInt32(294)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_index_distal'),
                                                                                                                                  DEF_ : SFString('hanim_r_index_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1945,0.7169,-0.0173]),SFVec3f([-0.198,0.6883,-0.018])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1945,0.7169,-0.0173]),SFVec3f([-0.198,0.6883,-0.018]),SFVec3f([-0.1941,0.6772,-0.0423])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_index_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_r_index_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.198), SFDouble(0.6883), SFDouble(-0.018)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))]),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_dactylion'),
                                                                                                                                      DEF_ : SFString('hanim_r_dactylion'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_middle0'),
                                                                                                                  DEF_ : SFString('hanim_r_middle0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(247), SFInt32(248)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_middle_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_r_middle_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1972,0.806,-0.0468]),SFVec3f([-0.1972,0.7849,-0.0468])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_middle1'),
                                                                                                                      DEF_ : SFString('hanim_r_middle1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(272), SFInt32(273), SFInt32(279), SFInt32(280)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_middle_proximal'),
                                                                                                                          DEF_ : SFString('hanim_r_middle_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1972,0.7849,-0.0468]),SFVec3f([-0.195,0.7304,-0.0441])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_middle2'),
                                                                                                                          DEF_ : SFString('hanim_r_middle2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(295), SFInt32(296), SFInt32(297), SFInt32(298)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_middle_middle'),
                                                                                                                              DEF_ : SFString('hanim_r_middle_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.195,0.7304,-0.0441]),SFVec3f([-0.1939,0.7042,-0.0432])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_middle3'),
                                                                                                                              DEF_ : SFString('hanim_r_middle3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(299), SFInt32(300), SFInt32(301), SFInt32(302), SFInt32(303), SFInt32(304), SFInt32(305), SFInt32(306), SFInt32(307)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_middle_distal'),
                                                                                                                                  DEF_ : SFString('hanim_r_middle_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1939,0.7042,-0.0432]),SFVec3f([-0.1969,0.6758,-0.0427])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1939,0.7042,-0.0432]),SFVec3f([-0.1969,0.6758,-0.0427])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_middle_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_r_middle_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_ring0'),
                                                                                                                  DEF_ : SFString('hanim_r_ring0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(249), SFInt32(250)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_ring_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_r_ring_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.8049,-0.0732]),SFVec3f([-0.1951,0.7845,-0.0732])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_ring1'),
                                                                                                                      DEF_ : SFString('hanim_r_ring1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(274), SFInt32(275), SFInt32(280), SFInt32(281)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(0.5), SFFloat(0.5)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_ring_proximal'),
                                                                                                                          DEF_ : SFString('hanim_r_ring_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1951,0.7845,-0.0732]),SFVec3f([-0.192,0.7318,-0.0716])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_ring2'),
                                                                                                                          DEF_ : SFString('hanim_r_ring2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(308), SFInt32(309), SFInt32(310), SFInt32(311)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_ring_middle'),
                                                                                                                              DEF_ : SFString('hanim_r_ring_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.192,0.7318,-0.0716]),SFVec3f([-0.1908,0.7077,-0.07063])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_ring3'),
                                                                                                                              DEF_ : SFString('hanim_r_ring3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(312), SFInt32(313), SFInt32(314), SFInt32(315), SFInt32(316), SFInt32(317), SFInt32(318), SFInt32(319), SFInt32(320)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_ring_distal'),
                                                                                                                                  DEF_ : SFString('hanim_r_ring_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1908,0.7077,-0.0706]),SFVec3f([-0.1934,0.6778,-0.0693])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1908,0.7077,-0.0706]),SFVec3f([-0.1934,0.6778,-0.0693])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_ring_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_r_ring_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1934), SFDouble(0.6778), SFDouble(-0.0693)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_pinky0'),
                                                                                                                  DEF_ : SFString('hanim_r_pinky0'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                  skinCoordIndex_ : MFInt32([SFInt32(251), SFInt32(252), SFInt32(253), SFInt32(281)]),
                                                                                                                  skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(0.5)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_pinky_metacarpal'),
                                                                                                                      DEF_ : SFString('hanim_r_pinky_metacarpal'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('jointbox'))]),

                                                                                                                        Shape(
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              USE_ : SFString('SegmentLine')),
                                                                                                                          geometry_ : 
                                                                                                                            IndexedLineSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1926,0.8096,-0.0975]),SFVec3f([-0.1926,0.7896,-0.0975])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_pinky1'),
                                                                                                                      DEF_ : SFString('hanim_r_pinky1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                      skinCoordIndex_ : MFInt32([SFInt32(276), SFInt32(277), SFInt32(278)]),
                                                                                                                      skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_pinky_proximal'),
                                                                                                                          DEF_ : SFString('hanim_r_pinky_proximal'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('jointbox'))]),

                                                                                                                            Shape(
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  USE_ : SFString('SegmentLine')),
                                                                                                                              geometry_ : 
                                                                                                                                IndexedLineSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1926,0.7896,-0.0975]),SFVec3f([-0.1902,0.7483,-0.0963])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_pinky2'),
                                                                                                                          DEF_ : SFString('hanim_r_pinky2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                          skinCoordIndex_ : MFInt32([SFInt32(321), SFInt32(322), SFInt32(323), SFInt32(324)]),
                                                                                                                          skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_pinky_middle'),
                                                                                                                              DEF_ : SFString('hanim_r_pinky_middle'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('jointbox'))]),

                                                                                                                                Shape(
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      USE_ : SFString('SegmentLine')),
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedLineSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1902,0.7483,-0.0963]),SFVec3f([-0.1908,0.754,-0.096])]))))]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_pinky3'),
                                                                                                                              DEF_ : SFString('hanim_r_pinky3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]),
                                                                                                                              skinCoordIndex_ : MFInt32([SFInt32(325), SFInt32(326), SFInt32(327), SFInt32(328), SFInt32(329), SFInt32(330), SFInt32(331), SFInt32(332), SFInt32(333)]),
                                                                                                                              skinCoordWeight_ : MFFloat([SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1), SFFloat(1)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('r_pinky_distal'),
                                                                                                                                  DEF_ : SFString('hanim_r_pinky_distal'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('jointbox'))]),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SegmentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1908,0.754,-0.096]),SFVec3f([-0.1938,0.7035,-0.0949])])))),

                                                                                                                                    Shape(
                                                                                                                                      appearance_ : 
                                                                                                                                        Appearance(
                                                                                                                                          USE_ : SFString('SiteParentLine')),
                                                                                                                                      geometry_ : 
                                                                                                                                        IndexedLineSet(
                                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                                                                                                                          coord_ : 
                                                                                                                                            Coordinate(
                                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1908,0.754,-0.096]),SFVec3f([-0.1938,0.7035,-0.0949])])))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('r_pinky_distal_tip'),
                                                                                                                                      DEF_ : SFString('hanim_r_pinky_distal_tip'),
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7035), SFDouble(-0.0949)]),
                                                                                                                                      children_ : [
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('sitebox'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
                  skinCoord_ : 
                    Coordinate(
                      DEF_ : SFString('JoeSkinCoord'),
                      point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.0034,0.8266,0.0257]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.07225,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.78,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.255,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])]))],
                  skin_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.9,
                              diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0), SFDouble(0.5)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                              emissiveColor_ : SFColor([SFDouble(0.13), SFDouble(0.55), SFDouble(0.13)]),
                              shininess_ : 0.9,
                              transparency_ : 0.4),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("cbodytexture28.png")]))),
                      geometry_ : 
                        IndexedFaceSet(
                          creaseAngle_ : 3.1,
                          colorPerVertex_ : false,
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('JoeSkinCoord')))))]),

            Group(
              DEF_ : SFString('SceneViewpoints'),
              children_ : [
                Viewpoint(
                  DEF_ : SFString('hanim_InclinedView'),
                  description_ : SFString('hanim_Inclined View'),
                  position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                  orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IFrontView_1'),
                  description_ : SFString('hanim_Front View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(2.57665)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_ISideView_1'),
                  description_ : SFString('hanim_Side View'),
                  position_ : SFVec3f([SFDouble(2.5929), SFDouble(0.854), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_ITopView'),
                  description_ : SFString('hanim_Top View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IRightHandFront'),
                  description_ : SFString('hanim_RightHandFront View'),
                  position_ : SFVec3f([SFDouble(-0.3), SFDouble(0.75), SFDouble(0.45)]),
                  centerOfRotation_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)])),

                Viewpoint(
                  DEF_ : SFString('hanim_ILeftHandFront'),
                  description_ : SFString('hanim_LeftHandFront View'),
                  position_ : SFVec3f([SFDouble(0.3), SFDouble(0.75), SFDouble(0.45)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0.1959), SFDouble(0.8694), SFDouble(-0.0521)])),

                Viewpoint(
                  DEF_ : SFString('hanim_InclinedView2'),
                  description_ : SFString('hanim_Inclined View2'),
                  position_ : SFVec3f([SFDouble(-1.62), SFDouble(1.05), SFDouble(2.06)]),
                  orientation_ : SFRotation([SFDouble(-0.113), SFDouble(-0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IFrontView'),
                  description_ : SFString('hanim_Front View2'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(1.575)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_ISideView'),
                  description_ : SFString('hanim_Side View2'),
                  position_ : SFVec3f([SFDouble(1.5929), SFDouble(0.854), SFDouble(0)]),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IHeadFront'),
                  description_ : SFString('hanim_HeadFront View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(1)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IChestFront'),
                  description_ : SFString('hanim_ChestFront View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IPelvisFront'),
                  description_ : SFString('hanim_PelvisFront View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(1)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)])),

                Viewpoint(
                  DEF_ : SFString('hanim_IKneesFront'),
                  description_ : SFString('hanim_KneesFront View'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(1)]),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]))]),

            Group(
              DEF_ : SFString('StandAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('StandTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.015), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.17), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.025), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_eyeballRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.45), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_eyeballRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.45), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Stand_whole_bodyTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index1Roll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index2Roll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.32), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stand_r_index3Roll'),
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
                  DEF_ : SFString('Pitch_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.55), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitches_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Pitches_whole_bodyTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.625), SFFloat(0.75), SFFloat(0.875), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,-0.7,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,0,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,-0.7,0]),SFVec3f([0,-0.15,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Pitch_r_thumb1Pitch'),
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
                  DEF_ : SFString('Yaw_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaws_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Yaws_whole_bodyTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Yaw_r_thumb1Pitch'),
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
                  DEF_ : SFString('Roll_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(1.25), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Rolls_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Rolls_whole_bodyTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.625), SFFloat(0.75), SFFloat(0.875), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,-0.8,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,0,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,-0.8,0]),SFVec3f([0,-0.25,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Roll_r_thumb1Pitch'),
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
                  DEF_ : SFString('Walk_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3533), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1072), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2612), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1268), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.01793), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05824), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2398), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3322), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8926), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2475), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9911), SFRotation(-0.03541), SFRotation(-0.1286), SFRotation(0.5419), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(-0.4306), SFRotation(-0.07962), SFRotation(-0.899), SFRotation(0.07038), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2152), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3184), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4717), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2912), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1222), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1556), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08678), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.131), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3942), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-0.7018), SFRotation(-0.03223), SFRotation(-0.7117), SFRotation(0.1289), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.09018), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346), SFRotation(0.1533), SFRotation(-0.9878), SFRotation(0.02582), SFRotation(0.3902), SFRotation(-0.5701), SFRotation(0.7604), SFRotation(-0.311), SFRotation(0.366), SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0925011), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.572568), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3197), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1564), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076), SFRotation(-0.330195), SFRotation(-0.927451), SFRotation(0.175516), SFRotation(0.538852), SFRotation(0.0327774), SFRotation(-0.999314), SFRotation(-0.0172185), SFRotation(0.492033), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.488383), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0177536), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1861), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3357), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.4167), SFFloat(0.5), SFFloat(0.5833), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.8333), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1825), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1505), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1053), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.04391), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.03119), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.07936), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1616), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.155), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826), SFRotation(-0.01972), SFRotation(-0.5974), SFRotation(0.8017), SFRotation(0.08231), SFRotation(0.009296), SFRotation(-0.9648), SFRotation(0.2627), SFRotation(0.1734), SFRotation(-0.01238), SFRotation(0.9549), SFRotation(-0.2968), SFRotation(0.08732), SFRotation(-0.008125), SFRotation(0.9691), SFRotation(-0.2463), SFRotation(0.158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Walk_whole_bodyTranInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Walk_r_thumb1Pitch'),
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
                  DEF_ : SFString('Run_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_hipRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.99), SFRotation(0.033), SFRotation(0.04), SFRotation(1.42), SFRotation(-0.99), SFRotation(0.1328), SFRotation(0.067), SFRotation(0.42), SFRotation(0.99), SFRotation(0.014), SFRotation(0.009), SFRotation(0.9), SFRotation(-0.99), SFRotation(0.0703), SFRotation(0.05), SFRotation(0.7), SFRotation(-0.99), SFRotation(0.033), SFRotation(0.04), SFRotation(1.42)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_kneeRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.426), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_ankleRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.3), SFFloat(0.4), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0374), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1037), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4328), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1929), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03574)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_hipRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.99), SFRotation(-0.014), SFRotation(0.009), SFRotation(0.9), SFRotation(-0.99), SFRotation(-0.0703), SFRotation(-0.05), SFRotation(0.7), SFRotation(-0.99), SFRotation(-0.033), SFRotation(0.04), SFRotation(1.42), SFRotation(-0.99), SFRotation(-0.1328), SFRotation(-0.067), SFRotation(0.42), SFRotation(0.99), SFRotation(-0.014), SFRotation(0.009), SFRotation(0.9)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_kneeRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.01), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.426), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.705)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_ankleRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.4), SFFloat(0.71), SFFloat(0.8), SFFloat(0.82), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07843), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.32), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.374), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3478), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_shoulderRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.99), SFRotation(-0.074), SFRotation(0.25), SFRotation(1.5), SFRotation(0.99), SFRotation(-0.092), SFRotation(0.44), SFRotation(0.3), SFRotation(-0.99), SFRotation(0.136), SFRotation(0.25), SFRotation(0.85), SFRotation(0.99), SFRotation(-0.081), SFRotation(0.38), SFRotation(0.4), SFRotation(0.99), SFRotation(-0.074), SFRotation(0.25), SFRotation(1.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_elbowRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85), SFRotation(-0.99), SFRotation(-0.19), SFRotation(0.18), SFRotation(1.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975), SFRotation(-0.99), SFRotation(-0.09), SFRotation(-0.02), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_wristRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.25), SFRotation(-1), SFRotation(0.08), SFRotation(0.14), SFRotation(0.25), SFRotation(1), SFRotation(0.08), SFRotation(0.14), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.25), SFRotation(1), SFRotation(0.08), SFRotation(-0.14), SFRotation(-0.25), SFRotation(1), SFRotation(0.08), SFRotation(0.14)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_shoulderRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.99), SFRotation(-0.136), SFRotation(-0.25), SFRotation(0.85), SFRotation(0.99), SFRotation(0.081), SFRotation(-0.38), SFRotation(0.4), SFRotation(0.99), SFRotation(0.074), SFRotation(-0.25), SFRotation(1.5), SFRotation(0.99), SFRotation(0.081), SFRotation(-0.38), SFRotation(0.4), SFRotation(-0.99), SFRotation(-0.136), SFRotation(-0.25), SFRotation(0.85)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_elbowRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975), SFRotation(-0.99), SFRotation(0.09), SFRotation(0.02), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.85), SFRotation(-0.99), SFRotation(0.19), SFRotation(-0.18), SFRotation(1.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.975)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_wristRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273), SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_lower_bodyRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.125), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.125)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_headRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.12), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_neckRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7091), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.7), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(-0.7), SFRotation(-0.7), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(-0.7), SFRotation(0.7), SFRotation(0), SFRotation(0.4), SFRotation(0.7), SFRotation(0), SFRotation(0), SFRotation(0.4)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_upper_bodyRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7636), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.97), SFRotation(0.65), SFRotation(0.086), SFRotation(0.5), SFRotation(0.9), SFRotation(0.003), SFRotation(-0.02), SFRotation(0.38), SFRotation(0.95), SFRotation(-0.68), SFRotation(-0.086), SFRotation(0.5), SFRotation(0.9), SFRotation(0.004), SFRotation(-0.025), SFRotation(0.4), SFRotation(0.97), SFRotation(0.65), SFRotation(0.086), SFRotation(0.5)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_whole_bodyRotInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.167), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.168), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06)])),

                PositionInterpolator(
                  DEF_ : SFString('Run_whole_bodyTranInterp_Run'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.3), SFFloat(0.31), SFFloat(0.5), SFFloat(0.69), SFFloat(0.7), SFFloat(0.78), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,-0.01,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.049,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.01,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.049,0]),SFVec3f([0,-0.037,0]),SFVec3f([0,-0.01,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.25), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.27), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Run_r_thumb1Pitch'),
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
                  DEF_ : SFString('Jump_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.15), SFFloat(0.25), SFFloat(0.28), SFFloat(0.32), SFFloat(0.35), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3527), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3038), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.3), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2087), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3756), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3279), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1193), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.25), SFFloat(0.3), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9507), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5845), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9054), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.18), SFFloat(0.24), SFFloat(0.26), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.63), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.55), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.8943), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3698), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4963), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3829), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5169), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3364), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2742), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05078), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6667), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2108), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.375), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3146), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1174), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.566), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5913), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9235), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.615), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9136), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3614), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7869), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3918), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5433), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.00222418), SFRotation(0.99801), SFRotation(-0.0630095), SFRotation(1.46072), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.497349), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5855), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5852), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.48), SFFloat(0.52), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.00364942), SFRotation(0.999901), SFRotation(0.0135896), SFRotation(4.5822), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.655922), SFRotation(-0.00050618), SFRotation(-0.999999), SFRotation(0.0012782), SFRotation(1.28397), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.58), SFFloat(0.72), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.13), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.7), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(1), SFRotation(0.0004113), SFRotation(0.003055), SFRotation(4.114), SFRotation(-0.8413), SFRotation(0.3238), SFRotation(0.4329), SFRotation(1.453), SFRotation(-0.877), SFRotation(0.4198), SFRotation(0.2337), SFRotation(0.6009), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_headRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3216), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06503), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.22), SFFloat(0.28), SFFloat(0.34), SFFloat(0.71), SFFloat(0.88), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.05), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.051), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.257), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2171), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3465), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Jump_whole_bodyTranInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.04), SFFloat(0.07), SFFloat(0.11), SFFloat(0.15), SFFloat(0.19), SFFloat(0.22), SFFloat(0.25), SFFloat(0.27), SFFloat(0.31), SFFloat(0.33), SFFloat(0.35), SFFloat(0.38), SFFloat(0.53), SFFloat(0.544), SFFloat(0.76), SFFloat(0.8), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.01264,-0.01289]),SFVec3f([0,-0.04712,-0.03738]),SFVec3f([-0.0003345,-0.1049,-0.05353]),SFVec3f([-0.0005712,-0.1892,-0.06561]),SFVec3f([-0.0008233,-0.286,-0.06276]),SFVec3f([-0.0009591,-0.3795,-0.05148]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.001122,-0.25,-0.1499]),SFVec3f([-0.0008616,-0.05,-0.06358]),SFVec3f([-0.0005128,0.15,-0.05488]),SFVec3f([0.0004779,0.55,0.02732]),SFVec3f([0.0001728,1.385,0.006873]),SFVec3f([0.00017,1.395,0.0069]),SFVec3f([0,0.35,0.02148]),SFVec3f([0,-0.01299,-0.01057]),SFVec3f([0,-0.06932,-0.01064]),SFVec3f([0.0001365,-0.1037,-0.005059]),SFVec3f([0.0001279,-0.07198,-0.007596]),SFVec3f([0.000141,-0.01626,-0.004935]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.8), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.8), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Jump_r_thumb1Pitch'),
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
                  DEF_ : SFString('Kick_l_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_shoulderRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.76), SFRotation(-0.25), SFRotation(0), SFRotation(1), SFRotation(1.76), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.256), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_ForeArmPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.55), SFRotation(-1), SFRotation(0.25), SFRotation(0), SFRotation(2.55), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_wristRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.55), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_sternoclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.22), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_acromioclavicularRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_shoulderRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.76), SFRotation(0.25), SFRotation(0), SFRotation(1), SFRotation(-1.76), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.256), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.05), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_ForeArmPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.55), SFRotation(1), SFRotation(0.25), SFRotation(0), SFRotation(-2.55), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_wristRoll'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.55), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_thumb1Pitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.1), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_hipPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.3), SFFloat(0.5), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(2.25), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_kneePitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.95), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.28), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_hipPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.3), SFFloat(0.5), SFFloat(0.6), SFFloat(0.9), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_l_kneePitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_anklePitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.95), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_r_metatarsalPitch'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.7), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.75), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_sacroiliacYaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0.24), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.4), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_vl5Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_vc6Yaw'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_lower_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_upper_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_whole_bodyRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                PositionInterpolator(
                  DEF_ : SFString('Kick_whole_bodyTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Kick_neckRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.55), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('StopAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('StopTimer'),
                  cycleInterval_ : 5.73,
                  loop_ : true),

                PositionInterpolator(
                  DEF_ : SFString('Stop_HumanoidRootTransInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_HumanoidRootRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_sacroiliacRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_subtalarRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_midtarsalRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_metatarsalRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_hipRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_kneeRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ankleRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_subtalarRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_midtarsalRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_metatarsalRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl5RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl4RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vl1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt12RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt11RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt10RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt9RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt8RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt7RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt6RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt5RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt4RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vt1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc7RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc6RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc5RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc4RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_vc1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_skullbaseRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_eyeball_jointRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_eyeball_jointRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_sternoclavicularRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_acromioclavicularRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_thumb3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_index3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_middle3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_ring3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_l_pinky3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_sternoclavicularRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_acromioclavicularRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_shoulderRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_elbowRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_wristRotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_thumb3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_index3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_middle3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_ring3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky0RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky1RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky2RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Stop_r_pinky3RotInterp'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]))]),

            Group(
              DEF_ : SFString('Interface'),
              children_ : [
                Transform(
                  DEF_ : SFString('cordsysfloor'),
                  scale_ : SFVec3f([SFDouble(0.175), SFDouble(0.175), SFDouble(0.175)]),
                  children_ : [
                    Inline(
                      global_ : true,
                      url_ : MFString([SFString("JointCoordinateAxes.x3dv")]))]),

                ProximitySensor(
                  DEF_ : SFString('HudProx'),
                  size_ : SFVec3f([SFDouble(50), SFDouble(50), SFDouble(50)])),

                Transform(
                  DEF_ : SFString('HudXform'),
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.15), SFDouble(-0.7)]),
                      scale_ : SFVec3f([SFDouble(0.02), SFDouble(0.02), SFDouble(0.02)]),
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
                                      specularColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]),
                                      emissiveColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]))),
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
                                  USE_ : SFString('Backing')))])])])]),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_eyeballRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_eyeballRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_whole_bodyTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_index1Roll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_index2Roll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StandTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stand_r_index3Roll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc7'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_eyeballRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_eyeballRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_whole_bodyTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index1Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index1Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index1Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index1Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_r_index2Roll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitches_whole_bodyTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PitchTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Pitch_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitches_whole_bodyTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Pitch_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Pitch_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaws_whole_bodyTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('YawTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Yaw_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaws_whole_bodyTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Yaw_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Yaw_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rolls_whole_bodyTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RollTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Roll_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rolls_whole_bodyTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Roll_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Roll_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_whole_bodyTranInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('WalkTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Walk_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_whole_bodyTranInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Walk_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_ankleRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_kneeRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_hipRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_ankleRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_kneeRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_hipRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_lower_bodyRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_wristRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_elbowRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_shoulderRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_wristRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_elbowRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_shoulderRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_headRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_neckRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_upper_bodyRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_whole_bodyRotInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_whole_bodyTranInterp_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RunTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Run_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_r_ankleRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_kneeRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_hipRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_ankleRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_kneeRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_hipRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_wristRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_elbowRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_shoulderRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_wristRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_elbowRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_shoulderRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_lower_bodyRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_headRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_neckRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_upper_bodyRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_whole_bodyRotInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_whole_bodyTranInterp_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Run_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Run_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_headRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_whole_bodyTranInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('JumpTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Jump_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_headRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_whole_bodyTranInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Jump_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_shoulderRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_ForeArmPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_wristRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_sternoclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_acromioclavicularRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_shoulderRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_ForeArmPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_wristRoll'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_thumb1Pitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_hipPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_kneePitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_hipPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_l_kneePitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_anklePitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_r_metatarsalPitch'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_sacroiliacYaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_vl5Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_vc6Yaw'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_lower_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_upper_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_whole_bodyRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_whole_bodyTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('KickTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Kick_neckRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Kick_l_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_shoulderRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_ForeArmPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_wristRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_sternoclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_acromioclavicularRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_shoulderRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_ForeArmPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_wristRoll'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_thumb1Pitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_hipPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_kneePitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_anklePitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_hipPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_l_kneePitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_anklePitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_r_metatarsalPitch'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_sacroiliacYaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_vl5Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_vc6Yaw'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_upper_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_lower_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_whole_bodyRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Kick_whole_bodyTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Kick_neckRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_HumanoidRootTransInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_HumanoidRootRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_sacroiliacRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_subtalarRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_midtarsalRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_metatarsalRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_hipRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_kneeRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_ankleRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_subtalarRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_midtarsalRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_metatarsalRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vl5RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vl4RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vl3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vl2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vl1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt12RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt11RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt10RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt9RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt8RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt7RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt6RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt5RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt4RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vt1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc7RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc6RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc5RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc4RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_vc1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_skullbaseRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_eyeball_jointRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_eyeball_jointRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_sternoclavicularRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_acromioclavicularRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_thumb1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_thumb2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_thumb3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_index0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_index1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_index2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_index3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_middle0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_middle1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_middle2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_middle3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_ring0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_ring1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_ring2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_ring3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_pinky0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_pinky1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_pinky2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_l_pinky3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_sternoclavicularRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_acromioclavicularRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_shoulderRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_elbowRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_wristRotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_thumb1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_thumb2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_thumb3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_index0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_index1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_index2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_index3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_middle0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_middle1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_middle2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_middle3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_ring0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_ring1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_ring2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_ring3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_pinky0RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_pinky1RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_pinky2RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('StopTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Stop_r_pinky3RotInterp'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stop_HumanoidRootTransInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Stop_HumanoidRootRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_HumanoidRoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_sacroiliacRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_subtalarRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_subtalar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_midtarsalRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_midtarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_metatarsalRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_hipRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_kneeRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_ankleRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_subtalarRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_subtalar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_midtarsalRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_midtarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_metatarsalRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_metatarsal'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vl5RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vl4RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vl3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vl2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vl1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt12RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt12'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt11RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt11'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt10RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt10'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt9RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt9'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt8RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt8'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt7RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt7'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt6RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt5RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt4RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vt1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vt1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc7RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc7'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc6RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc6'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc5RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc4RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_vc1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_skullbaseRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_eyeball_jointRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_eyeball_jointRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_eyeball_joint'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_sternoclavicularRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_acromioclavicularRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_thumb1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_thumb2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_thumb3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_thumb3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_index0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_index0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_index1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_index1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_index2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_index2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_index3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_index3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_middle0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_middle0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_middle1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_middle1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_middle2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_middle2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_middle3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_middle3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_ring0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ring0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_ring1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ring1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_ring2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ring2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_ring3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ring3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_pinky0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_pinky0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_pinky1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_pinky1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_pinky2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_pinky2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_l_pinky3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_pinky3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_sternoclavicularRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_sternoclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_acromioclavicularRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_acromioclavicular'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_shoulderRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_elbowRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_wristRotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_thumb1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_thumb2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_thumb3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_thumb3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_index0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_index1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_index2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_index3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_index3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_middle0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_middle1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_middle2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_middle3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_middle3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_ring0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_ring1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_ring2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_ring3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ring3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_pinky0RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky0'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_pinky1RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_pinky2RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky2'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stop_r_pinky3RotInterp'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_pinky3'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('HudProx'),
              fromField_ : SFString('position_changed'),
              toNode_ : SFString('HudXform'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('HudProx'),
              fromField_ : SFString('orientation_changed'),
              toNode_ : SFString('HudXform'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Pitch_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Yaw_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Roll_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Kick_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StandTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('PitchTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('YawTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RollTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('WalkTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('RunTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('JumpTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('KickTimer'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stop_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('StopTimer'),
              toField_ : SFString('set_startTime'))]));
void main() { exit(0); }
