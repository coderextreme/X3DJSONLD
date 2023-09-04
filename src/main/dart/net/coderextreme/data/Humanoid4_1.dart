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
              content_ : SFString('Humanoid4_1.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('An attempt at a standard LOA-4 skeleton')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('h2.pl')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 Jan 2023')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 November 2020')),
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1)]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              child_ : 
                Shape(
                  DEF_ : SFString('AxisLinesShape'),
                  geometry_ : 
                    IndexedLineSet(
                      colorPerVertex_ : false,
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)])),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0,0.1])]))))),

            Group(
              children_ : [
                Transform(
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimRootShape'),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimRootMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0), SFDouble(0)]),
                                  transparency_ : 0.3)),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimJointShape'),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimJointMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                  transparency_ : 0.3)),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.05), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimSegmentLine'),
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSegmentLineColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([-0.05,0,0]),SFVec3f([0.05,0,0])]))))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimSiteShape'),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                                  transparency_ : 0.3)),
                          geometry_ : 
                            IndexedFaceSet(
                              DEF_ : SFString('DiamondIFS'),
                              solid_ : false,
                              creaseAngle_ : 0.5,
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSiteColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))))])]),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('default')),

            HAnimHumanoid(
              DEF_ : SFString('hanim_HAnim'),
              version_ : SFString('2.0'),
              name_ : SFString('HAnim'),
              info_ : MFString([SFString("humanoidVersion=2.0")]),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  children_ : [
                    HAnimSegment(
                      DEF_ : SFString('hanim_sacrum'),
                      name_ : SFString('sacrum'),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                          children_ : [
                            Transform(
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape')))]),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016])])))),

                        HAnimSite(
                          DEF_ : SFString('hanim_buttocks_standing_wall_contact_point_pt'),
                          name_ : SFString('buttocks_standing_wall_contact_point_pt'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite buttocks_standing_wall_contact_point_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_crotch_pt'),
                          name_ : SFString('crotch_pt'),
                          translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite crotch_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_l_asis_pt'),
                          name_ : SFString('l_asis_pt'),
                          translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_asis_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_l_iliocristale_pt'),
                          name_ : SFString('l_iliocristale_pt'),
                          translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_iliocristale_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_l_psis_pt'),
                          name_ : SFString('l_psis_pt'),
                          translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_psis_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_l_trochanterion_pt'),
                          name_ : SFString('l_trochanterion_pt'),
                          translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_trochanterion_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_r_asis_pt'),
                          name_ : SFString('r_asis_pt'),
                          translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_asis_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_r_iliocristale_pt'),
                          name_ : SFString('r_iliocristale_pt'),
                          translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_iliocristale_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_r_psis_pt'),
                          name_ : SFString('r_psis_pt'),
                          translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_psis_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_r_trochanterion_pt'),
                          name_ : SFString('r_trochanterion_pt'),
                          translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_trochanterion_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0.0028,1.0568,-0.0776])])))),

                        HAnimSite(
                          DEF_ : SFString('hanim_navel_pt'),
                          name_ : SFString('navel_pt'),
                          translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite navel_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_waist_preferred_anterior_pt'),
                          name_ : SFString('waist_preferred_anterior_pt'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite waist_preferred_anterior_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          DEF_ : SFString('hanim_waist_preferred_posterior_pt'),
                          name_ : SFString('waist_preferred_posterior_pt'),
                          translation_ : SFVec3f([SFDouble(0.29), SFDouble(1.0915), SFDouble(-0.1091)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite waist_preferred_posterior_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              children_ : [
                                Transform(
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape')))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001])])))),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_femoral_lateral_epicondyles_pt'),
                              name_ : SFString('l_femoral_lateral_epicondyles_pt'),
                              translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_femoral_lateral_epicondyles_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_femoral_medial_epicondyles_pt'),
                              name_ : SFString('l_femoral_medial_epicondyles_pt'),
                              translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_femoral_medial_epicondyles_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_knee_crease_pt'),
                              name_ : SFString('l_knee_crease_pt'),
                              translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_knee_crease_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_suprapatella_pt'),
                              name_ : SFString('l_suprapatella_pt'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_suprapatella_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.095,0.9171,0.0029])])))),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_femoral_lateral_epicondyles_pt'),
                              name_ : SFString('r_femoral_lateral_epicondyles_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_femoral_lateral_epicondyles_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_femoral_medial_epicondyles_pt'),
                              name_ : SFString('r_femoral_medial_epicondyles_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_femoral_medial_epicondyles_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_knee_crease_pt'),
                              name_ : SFString('r_knee_crease_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_knee_crease_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_suprapatella_pt'),
                              name_ : SFString('r_suprapatella_pt'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_suprapatella_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_hip'),
                          name_ : SFString('l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_thigh'),
                              name_ : SFString('l_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Transform(
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                  name_ : SFString('l_lateral_malleolus_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_lateral_malleolus_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                  name_ : SFString('l_medial_malleolus_pt'),
                                  translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_medial_malleolus_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_tibiale_pt'),
                                  name_ : SFString('l_tibiale_pt'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_tibiale_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_knee'),
                              name_ : SFString('l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_calf'),
                                  name_ : SFString('l_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Transform(
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])])))),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                      name_ : SFString('l_calcaneus_posterior_pt'),
                                      translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_calcaneus_posterior_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_sphyrion_pt'),
                                      name_ : SFString('l_sphyrion_pt'),
                                      translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_sphyrion_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  name_ : SFString('l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_talus'),
                                      name_ : SFString('l_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.08), SFDouble(0.06), SFDouble(-0.025)]),
                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                                          scale_ : SFVec3f([SFDouble(0.15), SFDouble(0.15), SFDouble(0.15)]),
                                          children_ : [
                                            Transform(
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([3.4715,0.0374,0.6807])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([3.9515,0.0653,-0.6895])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                                      name_ : SFString('l_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(3.4715), SFDouble(0.0374), SFDouble(0.6807)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_navicular'),
                                          name_ : SFString('l_navicular'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(3.4715), SFDouble(0.0374), SFDouble(0.6807)]),
                                              children_ : [
                                                Transform(
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([3.4715,0.0374,0.6807]),SFVec3f([2.9855,0.0311,1.2819])])))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([3.4715,0.0374,0.6807]),SFVec3f([3.6105,0.033,1.4168])])))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([3.4715,0.0374,0.6807]),SFVec3f([4.1235,0.0328,1.3453])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_cuneonavicular_1'),
                                          name_ : SFString('l_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(2.9855), SFDouble(0.0311), SFDouble(1.2819)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_cuneiform_1'),
                                              name_ : SFString('l_cuneiform_1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(2.9855), SFDouble(0.0311), SFDouble(1.2819)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([2.9855,0.0311,1.2819]),SFVec3f([2.8635,0.0194,2.4285])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                              name_ : SFString('l_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(2.8635), SFDouble(0.0194), SFDouble(2.4285)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_metatarsal_1'),
                                                  name_ : SFString('l_metatarsal_1'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(2.8635), SFDouble(0.0194), SFDouble(2.4285)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([2.8635,0.0194,2.4285]),SFVec3f([2.7525,0.0077,4.6255])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                      name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_phalanx_1_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                                  name_ : SFString('l_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(2.7525), SFDouble(0.0077), SFDouble(4.6255)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_1'),
                                                      name_ : SFString('l_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(2.7525), SFDouble(0.0077), SFDouble(4.6255)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([2.7525,0.0077,4.6255]),SFVec3f([2.7525,0.0077,4.6255])])))),

                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip'),
                                                          name_ : SFString('l_tarsal_distal_phalanx_1_tip'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_1_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'),
                                                      name_ : SFString('l_tarsal_interphalangeal_1'))])])]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_cuneonavicular_2'),
                                          name_ : SFString('l_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(3.6105), SFDouble(0.033), SFDouble(1.4168)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_cuneiform_2'),
                                              name_ : SFString('l_cuneiform_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(3.6105), SFDouble(0.033), SFDouble(1.4168)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([3.6105,0.033,1.4168]),SFVec3f([3.5555,0.0232,2.2895])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(3.5555), SFDouble(0.0232), SFDouble(2.2895)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_metatarsal_2'),
                                                  name_ : SFString('l_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(3.5555), SFDouble(0.0232), SFDouble(2.2895)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([3.5555,0.0232,2.2895]),SFVec3f([3.6595,0.0085,4.8125])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(3.6595), SFDouble(0.0085), SFDouble(4.8125)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                                      name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(3.6595), SFDouble(0.0085), SFDouble(4.8125)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([3.6595,0.0085,4.8125]),SFVec3f([3.7385,0.0054,5.5315])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_1'),
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(3.7385), SFDouble(0.0054), SFDouble(5.5315)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_1'),
                                                          name_ : SFString('l_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(3.7385), SFDouble(0.0054), SFDouble(5.5315)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([3.7385,0.0054,5.5315]),SFVec3f([3.7385,0.0017,5.9505])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip'),
                                                              name_ : SFString('l_tarsal_distal_phalanx_2_tip'),
                                                              translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_2_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_1'),
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(3.7385), SFDouble(0.0017), SFDouble(5.9505)]))])])])]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_cuneonavicular_3'),
                                          name_ : SFString('l_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(4.1235), SFDouble(0.0328), SFDouble(1.3453)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_cuneiform_3'),
                                              name_ : SFString('l_cuneiform_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(4.1235), SFDouble(0.0328), SFDouble(1.3453)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([4.1235,0.0328,1.3453]),SFVec3f([3.7385,0.0017,5.9505])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3 '),
                                              name_ : SFString('l_tarsometatarsal_3 '),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_metatarsal_3'),
                                                  name_ : SFString('l_metatarsal_3'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(4.1235), SFDouble(0.0328), SFDouble(1.3453)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([4.2795,0.0086,4.7055])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                                  name_ : SFString('l_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(4.2795), SFDouble(0.0086), SFDouble(4.7055)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_3'),
                                                      name_ : SFString('l_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(4.2795), SFDouble(0.0086), SFDouble(4.7055)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([4.2795,0.0086,4.7055]),SFVec3f([4.3855,0.0044,5.3745])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(4.3855), SFDouble(0.0044), SFDouble(5.3745)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_2'),
                                                          name_ : SFString('l_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(4.3855), SFDouble(0.0044), SFDouble(5.3745)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([4.3855,0.0044,5.3745]),SFVec3f([4.4545,0.0017,5.7845])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip'),
                                                              name_ : SFString('l_tarsal_distal_phalanx_3_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_3_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(4.4545), SFDouble(0.0017), SFDouble(5.7845)]))])])])])]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_calcaneocuboid'),
                                      name_ : SFString('l_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(3.9515), SFDouble(0.0653), SFDouble(-0.6895)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_calcaneus'),
                                          name_ : SFString('l_calcaneus'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(3.9515), SFDouble(0.0653), SFDouble(-0.6895)]),
                                              children_ : [
                                                Transform(
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([3.9515,0.0653,-0.6895]),SFVec3f([4.9085,0.0353,0.5574])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_transversetarsal'),
                                          name_ : SFString('l_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(4.9085), SFDouble(0.0353), SFDouble(0.5574)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_cuboid'),
                                              name_ : SFString('l_cuboid'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(4.9085), SFDouble(0.0353), SFDouble(0.5574)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([4.9085,0.0353,0.5574]),SFVec3f([4.7245,0.0211,2.1725])])))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([4.9085,0.0353,0.5574]),SFVec3f([5.3615,0.0164,2.0085])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                              name_ : SFString('l_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(4.7245), SFDouble(0.0211), SFDouble(2.1725)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_metatarsal_4'),
                                                  name_ : SFString('l_metatarsal_4'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(4.7245), SFDouble(0.0211), SFDouble(2.1725)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([4.7245,0.0211,2.1725]),SFVec3f([4.8745,0.0076,4.5165])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                                  name_ : SFString('l_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(4.8745), SFDouble(0.0076), SFDouble(4.5165)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_4'),
                                                      name_ : SFString('l_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(4.8745), SFDouble(0.0076), SFDouble(4.5165)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([4.8745,0.0076,4.5165]),SFVec3f([5.0655,0.0049,5.1895])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(5.0655), SFDouble(0.0049), SFDouble(5.1895)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_3'),
                                                          name_ : SFString('l_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(5.0655), SFDouble(0.0049), SFDouble(5.1895)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([5.0655,0.0049,5.1895]),SFVec3f([5.1325,0.0011,5.5175])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip'),
                                                              name_ : SFString('l_tarsal_distal_phalanx_4_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_4_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(5.1325), SFDouble(0.0011), SFDouble(5.5175)]))])])]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                              name_ : SFString('l_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(5.3615), SFDouble(0.0164), SFDouble(2.0085)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_metatarsal_5'),
                                                  name_ : SFString('l_metatarsal_5'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(5.3615), SFDouble(0.0164), SFDouble(2.0085)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([5.3615,0.0164,2.0085]),SFVec3f([5.5055,0.0067,4.3115])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                      name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_phalanx_5_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                                  name_ : SFString('l_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(5.5055), SFDouble(0.0067), SFDouble(4.3115)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_5'),
                                                      name_ : SFString('l_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(5.5055), SFDouble(0.0067), SFDouble(4.3115)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([5.5055,0.0067,4.3115]),SFVec3f([5.6085,0.003,4.6485])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(5.6085), SFDouble(0.003), SFDouble(4.6485)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_4'),
                                                          name_ : SFString('l_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(5.6085), SFDouble(0.003), SFDouble(4.6485)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([5.6085,0.003,4.6485]),SFVec3f([5.6485,0,4.9925])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip'),
                                                              name_ : SFString('l_tarsal_distal_phalanx_5_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_5_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(5.6485), SFDouble(0), SFDouble(4.9925)]))])])])])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_hip'),
                          name_ : SFString('r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_thigh'),
                              name_ : SFString('r_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                  children_ : [
                                    Transform(
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([-0.0867,0.4913,0.0318])])))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                  name_ : SFString('r_lateral_malleolus_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_lateral_malleolus_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                  name_ : SFString('r_medial_malleolus_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_medial_malleolus_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_tibiale_pt'),
                                  name_ : SFString('r_tibiale_pt'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_tibiale_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_knee'),
                              name_ : SFString('r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_calf'),
                                  name_ : SFString('r_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                      children_ : [
                                        Transform(
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.0867,0.4913,0.0318]),SFVec3f([-0.0801,0.0712,-0.0766])])))),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                      name_ : SFString('r_calcaneus_posterior_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_calcaneus_posterior_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_sphyrion_pt'),
                                      name_ : SFString('r_sphyrion_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_sphyrion_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  name_ : SFString('r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_talus'),
                                      name_ : SFString('r_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.06), SFDouble(-0.025)]),
                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                                          scale_ : SFVec3f([SFDouble(0.15), SFDouble(0.15), SFDouble(0.15)]),
                                          children_ : [
                                            Transform(
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-3.4725,0.0374,0.6807])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-3.9515,0.0653,-0.6895])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_r_talocalcaneonavicular'),
                                      name_ : SFString('r_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(-3.4725), SFDouble(0.0374), SFDouble(0.6807)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_r_navicular'),
                                          name_ : SFString('r_navicular'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-3.4725), SFDouble(0.0374), SFDouble(0.6807)]),
                                              children_ : [
                                                Transform(
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-3.4725,0.0374,0.6807]),SFVec3f([-2.9855,0.0311,1.2819])])))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-3.4725,0.0374,0.6807]),SFVec3f([-3.6105,0.033,1.4168])])))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-3.4725,0.0374,0.6807]),SFVec3f([-4.1245,0.0328,1.3453])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_cuneonavicular_1'),
                                          name_ : SFString('r_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(-2.9855), SFDouble(0.0311), SFDouble(1.2819)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_cuneiform_1'),
                                              name_ : SFString('r_cuneiform_1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-2.9855), SFDouble(0.0311), SFDouble(1.2819)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-2.9855,0.0311,1.2819]),SFVec3f([-2.8645,0.0194,2.4285])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsometatarsal_1'),
                                              name_ : SFString('r_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(-2.8645), SFDouble(0.0194), SFDouble(2.4285)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_metatarsal_1'),
                                                  name_ : SFString('r_metatarsal_1'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-2.8645), SFDouble(0.0194), SFDouble(2.4285)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-2.8645,0.0194,2.4285]),SFVec3f([-2.7535,0.0077,4.6255])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                                      name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_phalanx_1_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_1'),
                                                  name_ : SFString('r_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(-2.7535), SFDouble(0.0077), SFDouble(4.6255)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_1'),
                                                      name_ : SFString('r_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-2.7535), SFDouble(0.0077), SFDouble(4.6255)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-2.7535,0.0077,4.6255]),SFVec3f([-2.7535,0.0077,4.6255])])))),

                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip'),
                                                          name_ : SFString('r_tarsal_distal_phalanx_1_tip'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_1_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_1'),
                                                      name_ : SFString('r_tarsal_interphalangeal_1'))])])]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_cuneonavicular_2'),
                                          name_ : SFString('r_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(-3.6105), SFDouble(0.033), SFDouble(1.4168)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_cuneiform_2'),
                                              name_ : SFString('r_cuneiform_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-3.6105), SFDouble(0.033), SFDouble(1.4168)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-3.6105,0.033,1.4168]),SFVec3f([-3.5565,0.0232,2.2895])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(-3.5565), SFDouble(0.0232), SFDouble(2.2895)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_metatarsal_2'),
                                                  name_ : SFString('r_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-3.5565), SFDouble(0.0232), SFDouble(2.2895)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-3.5565,0.0232,2.2895]),SFVec3f([-3.6595,0.0085,4.8125])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-3.6595), SFDouble(0.0085), SFDouble(4.8125)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                                      name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-3.6595), SFDouble(0.0085), SFDouble(4.8125)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-3.6595,0.0085,4.8125]),SFVec3f([-3.7385,0.0054,5.5315])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_1'),
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(-3.7385), SFDouble(0.0054), SFDouble(5.5315)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_1'),
                                                          name_ : SFString('r_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-3.7385), SFDouble(0.0054), SFDouble(5.5315)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-3.7385,0.0054,5.5315]),SFVec3f([-3.7385,0.0017,5.9505])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip'),
                                                              name_ : SFString('r_tarsal_distal_phalanx_2_tip'),
                                                              translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_2_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_1'),
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(-3.7385), SFDouble(0.0017), SFDouble(5.9505)]))])])])]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_cuneonavicular_3'),
                                          name_ : SFString('r_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(-4.1245), SFDouble(0.0328), SFDouble(1.3453)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_cuneiform_3'),
                                              name_ : SFString('r_cuneiform_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-4.1245), SFDouble(0.0328), SFDouble(1.3453)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-4.1245,0.0328,1.3453]),SFVec3f([-3.7385,0.0017,5.9505])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3 '),
                                              name_ : SFString('r_tarsometatarsal_3 '),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_metatarsal_3'),
                                                  name_ : SFString('r_metatarsal_3'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-4.1245), SFDouble(0.0328), SFDouble(1.3453)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-4.2795,0.0086,4.7055])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_3'),
                                                  name_ : SFString('r_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(-4.2795), SFDouble(0.0086), SFDouble(4.7055)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_3'),
                                                      name_ : SFString('r_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-4.2795), SFDouble(0.0086), SFDouble(4.7055)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-4.2795,0.0086,4.7055]),SFVec3f([-4.3865,0.0044,5.3745])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2'),
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(-4.3865), SFDouble(0.0044), SFDouble(5.3745)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_2'),
                                                          name_ : SFString('r_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-4.3865), SFDouble(0.0044), SFDouble(5.3745)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-4.3865,0.0044,5.3745]),SFVec3f([-4.4545,0.0017,5.7845])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip'),
                                                              name_ : SFString('r_tarsal_distal_phalanx_3_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_3_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(-4.4545), SFDouble(0.0017), SFDouble(5.7845)]))])])])])]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_r_calcaneocuboid'),
                                      name_ : SFString('r_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(-3.9515), SFDouble(0.0653), SFDouble(-0.6895)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_r_calcaneus'),
                                          name_ : SFString('r_calcaneus'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-3.9515), SFDouble(0.0653), SFDouble(-0.6895)]),
                                              children_ : [
                                                Transform(
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-3.9515,0.0653,-0.6895]),SFVec3f([-4.9095,0.0353,0.5574])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_transversetarsal'),
                                          name_ : SFString('r_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(-4.9095), SFDouble(0.0353), SFDouble(0.5574)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_cuboid'),
                                              name_ : SFString('r_cuboid'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-4.9095), SFDouble(0.0353), SFDouble(0.5574)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-4.9095,0.0353,0.5574]),SFVec3f([-4.7255,0.0211,2.1725])])))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-4.9095,0.0353,0.5574]),SFVec3f([-5.3615,0.0164,2.0085])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3'),
                                              name_ : SFString('r_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(-4.7255), SFDouble(0.0211), SFDouble(2.1725)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_metatarsal_4'),
                                                  name_ : SFString('r_metatarsal_4'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-4.7255), SFDouble(0.0211), SFDouble(2.1725)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-4.7255,0.0211,2.1725]),SFVec3f([-4.8755,0.0076,4.5165])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_4'),
                                                  name_ : SFString('r_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(-4.8755), SFDouble(0.0076), SFDouble(4.5165)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_4'),
                                                      name_ : SFString('r_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-4.8755), SFDouble(0.0076), SFDouble(4.5165)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-4.8755,0.0076,4.5165]),SFVec3f([-5.0655,0.0049,5.1895])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3'),
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(-5.0655), SFDouble(0.0049), SFDouble(5.1895)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_3'),
                                                          name_ : SFString('r_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-5.0655), SFDouble(0.0049), SFDouble(5.1895)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-5.0655,0.0049,5.1895]),SFVec3f([-5.1335,0.0011,5.5175])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip'),
                                                              name_ : SFString('r_tarsal_distal_phalanx_4_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_4_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_3'),
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(-5.1335), SFDouble(0.0011), SFDouble(5.5175)]))])])]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsometatarsal_4'),
                                              name_ : SFString('r_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(-5.3615), SFDouble(0.0164), SFDouble(2.0085)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_metatarsal_5'),
                                                  name_ : SFString('r_metatarsal_5'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-5.3615), SFDouble(0.0164), SFDouble(2.0085)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-5.3615,0.0164,2.0085]),SFVec3f([-5.5055,0.0067,4.3115])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                                      name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_phalanx_5_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_5'),
                                                  name_ : SFString('r_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(-5.5055), SFDouble(0.0067), SFDouble(4.3115)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_5'),
                                                      name_ : SFString('r_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-5.5055), SFDouble(0.0067), SFDouble(4.3115)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-5.5055,0.0067,4.3115]),SFVec3f([-5.6085,0.003,4.6485])]))))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4'),
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(-5.6085), SFDouble(0.003), SFDouble(4.6485)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_4'),
                                                          name_ : SFString('r_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-5.6085), SFDouble(0.003), SFDouble(4.6485)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-5.6085,0.003,4.6485]),SFVec3f([-5.6495,0,4.9925])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip'),
                                                              name_ : SFString('r_tarsal_distal_phalanx_5_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_5_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_4'),
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(-5.6495), SFDouble(0), SFDouble(4.9925)]))])])])])])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl5'),
                      name_ : SFString('vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l5'),
                          name_ : SFString('l5'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                              children_ : [
                                Transform(
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape')))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])]))))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_vl4'),
                          name_ : SFString('vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l4'),
                              name_ : SFString('l4'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                  children_ : [
                                    Transform(
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_vl3'),
                              name_ : SFString('vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l3'),
                                  name_ : SFString('l3'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                      children_ : [
                                        Transform(
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])])))),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_rib10_pt'),
                                      name_ : SFString('l_rib10_pt'),
                                      translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_rib10_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_rib10_pt'),
                                      name_ : SFString('r_rib10_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_rib10_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_spine_2_middle_back_pt'),
                                      name_ : SFString('spine_2_middle_back_pt'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite spine_2_middle_back_pt')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_vl2'),
                                  name_ : SFString('vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l2'),
                                      name_ : SFString('l2'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                          children_ : [
                                            Transform(
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_vl1'),
                                      name_ : SFString('vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l1'),
                                          name_ : SFString('l1'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                              children_ : [
                                                Transform(
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_vt12'),
                                          name_ : SFString('vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_t12'),
                                              name_ : SFString('t12'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                  children_ : [
                                                    Transform(
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_vt11'),
                                              name_ : SFString('vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_t11'),
                                                  name_ : SFString('t11'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        Transform(
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_substernale_pt'),
                                                      name_ : SFString('substernale_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite substernale_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_vt10'),
                                                  name_ : SFString('vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_t10'),
                                                      name_ : SFString('t10'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                          children_ : [
                                                            Transform(
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])))),

                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_l_thelion_pt'),
                                                          name_ : SFString('l_thelion_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_thelion_pt')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_r_thelion_pt'),
                                                          name_ : SFString('r_thelion_pt'),
                                                          translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_thelion_pt')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_vt9'),
                                                      name_ : SFString('vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_t9'),
                                                          name_ : SFString('t9'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                              children_ : [
                                                                Transform(
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])]))))]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_vt8'),
                                                          name_ : SFString('vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              DEF_ : SFString('hanim_t8'),
                                                              name_ : SFString('t8'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                  children_ : [
                                                                    Transform(
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])]))))]),

                                                            HAnimJoint(
                                                              DEF_ : SFString('hanim_vt7'),
                                                              name_ : SFString('vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  name_ : SFString('t7'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                      children_ : [
                                                                        Transform(
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])])))),

                                                                    HAnimSite(
                                                                      DEF_ : SFString('hanim_l_chest_midsagittal_plane_pt'),
                                                                      name_ : SFString('l_chest_midsagittal_plane_pt'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite l_chest_midsagittal_plane_pt')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      DEF_ : SFString('hanim_mesosternale_pt'),
                                                                      name_ : SFString('mesosternale_pt'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite mesosternale_pt')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      DEF_ : SFString('hanim_r_chest_midsagittal_plane_pt'),
                                                                      name_ : SFString('r_chest_midsagittal_plane_pt'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite r_chest_midsagittal_plane_pt')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      DEF_ : SFString('hanim_rear_center_midsagittal_plane_pt'),
                                                                      name_ : SFString('rear_center_midsagittal_plane_pt'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite rear_center_midsagittal_plane_pt')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                HAnimJoint(
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  name_ : SFString('vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      name_ : SFString('t6'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                          children_ : [
                                                                            Transform(
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])])))),

                                                                        HAnimSite(
                                                                          DEF_ : SFString('hanim_spine_1_middle_back_pt'),
                                                                          name_ : SFString('spine_1_middle_back_pt'),
                                                                          children_ : [
                                                                            TouchSensor(
                                                                              description_ : SFString('HAnimSite spine_1_middle_back_pt')),

                                                                            Shape(
                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                    HAnimJoint(
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      name_ : SFString('vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          name_ : SFString('t5'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                              children_ : [
                                                                                Transform(
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])]))))]),

                                                                        HAnimJoint(
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          name_ : SFString('vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              name_ : SFString('t4'),
                                                                              children_ : [
                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])]))))]),

                                                                            HAnimJoint(
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              name_ : SFString('vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  name_ : SFString('t3'),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])]))))]),

                                                                                HAnimJoint(
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  name_ : SFString('vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      name_ : SFString('t2'),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])])))),

                                                                                        HAnimSite(
                                                                                          DEF_ : SFString('hanim_cervicale_pt'),
                                                                                          name_ : SFString('cervicale_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite cervicale_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                        HAnimSite(
                                                                                          DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                          name_ : SFString('suprasternale_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite suprasternale_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                    HAnimJoint(
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      name_ : SFString('vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          name_ : SFString('t1'),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301])])))),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                              name_ : SFString('l_neck_base_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_neck_base_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                              name_ : SFString('r_neck_base_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_neck_base_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.082,1.4488,-0.0353])])))),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                              name_ : SFString('l_acromion_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_acromion_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                              name_ : SFString('l_axilla_distal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_distal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_axilla_posterior_folds_pt'),
                                                                                              name_ : SFString('l_axilla_posterior_folds_pt'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_posterior_folds_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_axilla_proximal_pt'),
                                                                                              name_ : SFString('l_axilla_proximal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_proximal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_l_clavicale_pt'),
                                                                                              name_ : SFString('l_clavicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_clavicale_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([-0.0694,1.46,-0.033])])))),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                              name_ : SFString('r_acromion_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_acromion_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                              name_ : SFString('r_axilla_distal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_distal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_axilla_posterior_folds_pt'),
                                                                                              name_ : SFString('r_axilla_posterior_folds_pt'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_posterior_folds_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_axilla_proximal_pt'),
                                                                                              name_ : SFString('r_axilla_proximal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_proximal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_r_clavicale_pt'),
                                                                                              name_ : SFString('r_clavicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_clavicale_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          name_ : SFString('vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              name_ : SFString('c7'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])]))))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              name_ : SFString('vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  name_ : SFString('c6'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])]))))]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  name_ : SFString('vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      name_ : SFString('c5'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      name_ : SFString('vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          name_ : SFString('c4'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          name_ : SFString('vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              name_ : SFString('c3'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.58,-0.0103]),SFVec3f([0.0066,1.5928,-0.0103])])))),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_adams_apple_pt'),
                                                                                                                  name_ : SFString('adams_apple_pt'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite adams_apple_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              name_ : SFString('vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])])))),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_glabella_pt'),
                                                                                                                          name_ : SFString('glabella_pt'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite glabella_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_l_ectocanthus_pt'),
                                                                                                                          name_ : SFString('l_ectocanthus_pt'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_ectocanthus_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                          name_ : SFString('l_infraorbitale_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_infraorbitale_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                          name_ : SFString('l_tragion_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_tragion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                          name_ : SFString('nuchale_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite nuchale_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_opisthocranion_pt'),
                                                                                                                          name_ : SFString('opisthocranion_pt'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite opisthocranion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_r_ectocanthus_pt'),
                                                                                                                          name_ : SFString('r_ectocanthus_pt'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_ectocanthus_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                          name_ : SFString('r_infraorbitale_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_infraorbitale_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                          name_ : SFString('r_tragion_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_tragion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                          name_ : SFString('sellion_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite sellion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          DEF_ : SFString('hanim_skull_vertex_pt'),
                                                                                                                          name_ : SFString('skull_vertex_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite skull_vertex_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([2.2365,1.87,1.9285])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-2.2535,1.87,1.9285])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([2.1305,1.8444,4.1555])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-2.1475,1.8444,4.1555])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.9581,1.8563,5.2175])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.9751,1.8563,5.2175])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0085,1.7229,1.148])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                              name_ : SFString('l_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_gonion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_menton_pt'),
                                                                                                                              name_ : SFString('menton_pt'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite menton_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                              name_ : SFString('r_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_gonion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                              name_ : SFString('supramenton_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite supramenton_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(2.2365), SFDouble(1.87), SFDouble(1.9285)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-2.2535), SFDouble(1.87), SFDouble(1.9285)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(2.1305), SFDouble(1.8444), SFDouble(4.1555)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-2.1475), SFDouble(1.8444), SFDouble(4.1555)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.9581), SFDouble(1.8563), SFDouble(5.2175)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.9751), SFDouble(1.8563), SFDouble(5.2175)])),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0085), SFDouble(1.7229), SFDouble(1.148)]))])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])]))))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])])))),

                                                                                                    HAnimSite(
                                                                                                      DEF_ : SFString('hanim_l_bideltoid_pt'),
                                                                                                      name_ : SFString('l_bideltoid_pt'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_bideltoid_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                                                    HAnimSite(
                                                                                                      DEF_ : SFString('hanim_l_humeral_lateral_epicondyles_pt'),
                                                                                                      name_ : SFString('l_humeral_lateral_epicondyles_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_humeral_lateral_epicondyles_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])))),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_humeral_medial_epicondyles_pt'),
                                                                                                          name_ : SFString('l_humeral_medial_epicondyles_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_humeral_medial_epicondyles_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                          name_ : SFString('l_olecranon_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_olecranon_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                          name_ : SFString('l_radial_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_radial_styloid_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                          name_ : SFString('l_radiale_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_radiale_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])))),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                              name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_ulnar_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_l_carpal'),
                                                                                                              name_ : SFString('l_carpal'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.85), SFDouble(-0.05)]),
                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-3.14)]),
                                                                                                                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([8.0485,0.9213,1.3235])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([8.0485,0.9225,0.8386])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([8.0395,0.9246,0.2513])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([8.0395,0.921,-0.6795])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_1'),
                                                                                                              name_ : SFString('l_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(8.0485), SFDouble(0.9213), SFDouble(1.3235)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_trapezium'),
                                                                                                                  name_ : SFString('l_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(8.0485), SFDouble(0.9213), SFDouble(1.3235)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([8.0485,0.9213,1.3235]),SFVec3f([0.1924,0.8472,-0.0534])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                                  name_ : SFString('l_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                                      name_ : SFString('l_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                      name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_1_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                          name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_2'),
                                                                                                              name_ : SFString('l_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(8.0485), SFDouble(0.9225), SFDouble(0.8386)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_trapezoid'),
                                                                                                                  name_ : SFString('l_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(8.0485), SFDouble(0.9225), SFDouble(0.8386)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([8.0485,0.9225,0.8386]),SFVec3f([0.1983,0.8024,-0.028])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_2_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                                  name_ : SFString('l_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                                      name_ : SFString('l_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                      name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2 '),
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_2 '),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_1'),
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_1'),
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_2_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                  name_ : SFString('l_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_dactylion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_1'),
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_3'),
                                                                                                              name_ : SFString('l_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(8.0395), SFDouble(0.9246), SFDouble(0.2513)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_capitate'),
                                                                                                                  name_ : SFString('l_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(8.0395), SFDouble(0.9246), SFDouble(0.2513)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([8.0395,0.9246,0.2513]),SFVec3f([0.1987,0.8029,-0.053])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_3_pt'),
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_3_pt'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_3_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                                  name_ : SFString('l_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_3'),
                                                                                                                      name_ : SFString('l_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                      name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_3_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_4_1'),
                                                                                                              name_ : SFString('l_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(8.0395), SFDouble(0.921), SFDouble(-0.6795)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_hamate'),
                                                                                                                  name_ : SFString('l_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(8.0395), SFDouble(0.921), SFDouble(-0.6795)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([8.0395,0.921,-0.6795]),SFVec3f([0.1956,0.8019,-0.0794])])))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([8.0395,0.921,-0.6795]),SFVec3f([0.1925,0.8066,-0.1036])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_5_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_4'),
                                                                                                                      name_ : SFString('l_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3'),
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_3'),
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_4_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                                  name_ : SFString('l_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_5'),
                                                                                                                      name_ : SFString('l_metacarpal_5'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                      name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4'),
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_4'),
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]))])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.0694,1.46,-0.033]),SFVec3f([-0.0836,1.4281,-0.0401])]))))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0836,1.4281,-0.0401]),SFVec3f([-0.1907,1.4407,-0.0325])])))),

                                                                                                    HAnimSite(
                                                                                                      DEF_ : SFString('hanim_r_bideltoid_pt'),
                                                                                                      name_ : SFString('r_bideltoid_pt'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_bideltoid_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                                                    HAnimSite(
                                                                                                      DEF_ : SFString('hanim_r_humeral_lateral_epicondyles_pt'),
                                                                                                      name_ : SFString('r_humeral_lateral_epicondyles_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_humeral_lateral_epicondyles_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1907,1.4407,-0.0325]),SFVec3f([-0.1949,1.1388,-0.062])])))),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_humeral_medial_epicondyles_pt'),
                                                                                                          name_ : SFString('r_humeral_medial_epicondyles_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_humeral_medial_epicondyles_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                          name_ : SFString('r_olecranon_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_olecranon_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                          name_ : SFString('r_radial_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_radial_styloid_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                          name_ : SFString('r_radiale_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_radiale_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1949,1.1388,-0.062]),SFVec3f([-0.1959,0.8694,-0.0521])])))),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                              name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_ulnar_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_r_carpal'),
                                                                                                              name_ : SFString('r_carpal'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(-0.05)]),
                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-3.14)]),
                                                                                                                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-8.0515,0.9213,1.3235])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-8.0515,0.9225,0.8386])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-8.0405,0.9246,0.2513])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-8.0405,0.921,-0.6795])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_1'),
                                                                                                              name_ : SFString('r_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(-8.0515), SFDouble(0.9213), SFDouble(1.3235)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_trapezium'),
                                                                                                                  name_ : SFString('r_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-8.0515), SFDouble(0.9213), SFDouble(1.3235)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-8.0515,0.9213,1.3235]),SFVec3f([-0.1899,0.8502,-0.0473])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                                  name_ : SFString('r_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_1'),
                                                                                                                      name_ : SFString('r_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1899,0.8502,-0.0473]),SFVec3f([-0.1874,0.8256,0.0306])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                      name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1874,0.8256,0.0306]),SFVec3f([-0.1864,0.819,0.0506])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_tip'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_1_tip'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_1_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                          name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_2'),
                                                                                                              name_ : SFString('r_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(-8.0515), SFDouble(0.9225), SFDouble(0.8386)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_trapezoid'),
                                                                                                                  name_ : SFString('r_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-8.0515), SFDouble(0.9225), SFDouble(0.8386)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-8.0515,0.9225,0.8386]),SFVec3f([-0.1961,0.8055,-0.0218])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_2_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                                  name_ : SFString('r_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_2'),
                                                                                                                      name_ : SFString('r_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1961,0.8055,-0.0218]),SFVec3f([-0.1961,0.7846,-0.0218])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                      name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2 '),
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_2 '),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1961,0.7846,-0.0218]),SFVec3f([-0.1954,0.7393,-0.0185])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_1'),
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_1'),
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1954,0.7393,-0.0185]),SFVec3f([-0.1945,0.7169,-0.0173])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_2_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                  name_ : SFString('r_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_dactylion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_1'),
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_3'),
                                                                                                              name_ : SFString('r_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(-8.0405), SFDouble(0.9246), SFDouble(0.2513)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_capitate'),
                                                                                                                  name_ : SFString('r_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-8.0405), SFDouble(0.9246), SFDouble(0.2513)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-8.0405,0.9246,0.2513]),SFVec3f([-0.1972,0.806,-0.0468])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_3_pt'),
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_3_pt'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_3_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_3'),
                                                                                                                      name_ : SFString('r_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1972,0.806,-0.0468]),SFVec3f([-0.1972,0.7849,-0.0468])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1972,0.7849,-0.0468]),SFVec3f([-0.195,0.7304,-0.0441])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.195,0.7304,-0.0441]),SFVec3f([-0.1939,0.7042,-0.0432])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_3_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_4_1'),
                                                                                                              name_ : SFString('r_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-8.0405), SFDouble(0.921), SFDouble(-0.6795)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_hamate'),
                                                                                                                  name_ : SFString('r_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-8.0405), SFDouble(0.921), SFDouble(-0.6795)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-8.0405,0.921,-0.6795]),SFVec3f([-0.1951,0.8049,-0.0732])])))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-8.0405,0.921,-0.6795]),SFVec3f([-0.1926,0.8096,-0.0975])])))),

                                                                                                                    HAnimSite(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_5_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                                  name_ : SFString('r_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_4'),
                                                                                                                      name_ : SFString('r_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.8049,-0.0732]),SFVec3f([-0.1951,0.7845,-0.0732])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                      name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1951,0.7845,-0.0732]),SFVec3f([-0.192,0.7318,-0.0716])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.192,0.7318,-0.0716]),SFVec3f([-0.1908,0.7077,-0.0706])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_4_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                                  name_ : SFString('r_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_5'),
                                                                                                                      name_ : SFString('r_metacarpal_5'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1926,0.8096,-0.0975]),SFVec3f([-0.1926,0.7896,-0.0975])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                      name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1926,0.7896,-0.0975]),SFVec3f([-0.1902,0.7483,-0.0963])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1902,0.7483,-0.0963]),SFVec3f([-0.1908,0.754,-0.096])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]))])])])])])])])])])])])])])])])])])])])])])])])])])])]),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_buttocks_standing_wall_contact_point_pt'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_crotch_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_psis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_psis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_navel_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_anterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_suprapatella_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_suprapatella_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tibiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tibiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_spine_2_middle_back_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_substernale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_chest_midsagittal_plane_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_mesosternale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_chest_midsagittal_plane_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_rear_center_midsagittal_plane_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_spine_1_middle_back_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_cervicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_suprasternale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_posterior_folds_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_posterior_folds_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_adams_apple_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_glabella_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ectocanthus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_nuchale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_opisthocranion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ectocanthus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_sellion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_vertex_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_menton_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_supramenton_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_bideltoid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_lateral_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_3_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_bideltoid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicondyles_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_3_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5_tip')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_sacrum')),

                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_navicular')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calcaneus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuboid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_navicular')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calcaneus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuboid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_t12')),

                HAnimSegment(
                  USE_ : SFString('hanim_t11')),

                HAnimSegment(
                  USE_ : SFString('hanim_t10')),

                HAnimSegment(
                  USE_ : SFString('hanim_t9')),

                HAnimSegment(
                  USE_ : SFString('hanim_t8')),

                HAnimSegment(
                  USE_ : SFString('hanim_t7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t6')),

                HAnimSegment(
                  USE_ : SFString('hanim_t5')),

                HAnimSegment(
                  USE_ : SFString('hanim_t4')),

                HAnimSegment(
                  USE_ : SFString('hanim_t3')),

                HAnimSegment(
                  USE_ : SFString('hanim_t2')),

                HAnimSegment(
                  USE_ : SFString('hanim_t1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c7')),

                HAnimSegment(
                  USE_ : SFString('hanim_c6')),

                HAnimSegment(
                  USE_ : SFString('hanim_c5')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_c3')),

                HAnimSegment(
                  USE_ : SFString('hanim_c2')),

                HAnimSegment(
                  USE_ : SFString('hanim_c1')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_trapezium')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_trapezoid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2 ')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_capitate')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hamate')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_trapezium')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_trapezoid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_2 ')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_capitate')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hamate')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3 ')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_3 ')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_4')),

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
                  USE_ : SFString('hanim_l_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_temporomandibular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_4_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_4_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),
              skinCoord_ : 
                Coordinate()])]));
void main() { exit(0); }
