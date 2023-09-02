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
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('JohnJoint3.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint3.x3d')),

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

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              /*DEF for markerfor XYZ axes*/
              child_ : 
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
                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0,0.1])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))),

            Group(
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children_ : [
                Transform(
                  /*<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimJointShape'),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimJointMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                  transparency_ : 0.3)))),

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
                          geometry_ : 
                            IndexedFaceSet(
                              DEF_ : SFString('DiamondIFS'),
                              creaseAngle_ : 0.5,
                              solid_ : false,
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSiteColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                                  transparency_ : 0.3))))])]),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('default')),

            HAnimHumanoid(
              name_ : SFString('HAnim'),
              DEF_ : SFString('hanim_HAnim'),
              info_ : MFString([SFString("humanoidVersion=2.0")]),
              version_ : SFString('2.0'),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        LineSet(
                          vertexCount_ : MFInt32([SFInt32(2)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016])])),
                          /*from humanoid_root to sacroiliac*/
                          color_ : 
                            ColorRGBA(
                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('buttocks_standing_wall_contact_point_pt'),
                      DEF_ : SFString('hanim_buttocks_standing_wall_contact_point_pt'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite buttocks_standing_wall_contact_point_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('crotch_pt'),
                      DEF_ : SFString('hanim_crotch_pt'),
                      translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite crotch_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('l_asis_pt'),
                      DEF_ : SFString('hanim_l_asis_pt'),
                      translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite l_asis_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('l_iliocristale_pt'),
                      DEF_ : SFString('hanim_l_iliocristale_pt'),
                      translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite l_iliocristale_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('l_psis_pt'),
                      DEF_ : SFString('hanim_l_psis_pt'),
                      translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite l_psis_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('l_trochanterion_pt'),
                      DEF_ : SFString('hanim_l_trochanterion_pt'),
                      translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite l_trochanterion_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('r_asis_pt'),
                      DEF_ : SFString('hanim_r_asis_pt'),
                      translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite r_asis_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('r_iliocristale_pt'),
                      DEF_ : SFString('hanim_r_iliocristale_pt'),
                      translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite r_iliocristale_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('r_psis_pt'),
                      DEF_ : SFString('hanim_r_psis_pt'),
                      translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite r_psis_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('r_trochanterion_pt'),
                      DEF_ : SFString('hanim_r_trochanterion_pt'),
                      translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite r_trochanterion_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        LineSet(
                          vertexCount_ : MFInt32([SFInt32(2)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0.0028,1.0568,-0.0776])])),
                          /*from humanoid_root to vl5*/
                          color_ : 
                            ColorRGBA(
                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('navel_pt'),
                      DEF_ : SFString('hanim_navel_pt'),
                      translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite navel_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('waist_preferred_anterior_pt'),
                      DEF_ : SFString('hanim_waist_preferred_anterior_pt'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite waist_preferred_anterior_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  child_ : 
                    HAnimSite(
                      name_ : SFString('waist_preferred_posterior_pt'),
                      DEF_ : SFString('hanim_waist_preferred_posterior_pt'),
                      translation_ : SFVec3f([SFDouble(0.29), SFDouble(1.0915), SFDouble(-0.1091)]),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimSite waist_preferred_posterior_pt')),

                        Shape(
                          USE_ : SFString('HAnimSiteShape'))]),
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001])])),
                              /*from sacroiliac to l_hip*/
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('l_femoral_lateral_epicondyles_pt'),
                          DEF_ : SFString('hanim_l_femoral_lateral_epicondyles_pt'),
                          translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_femoral_lateral_epicondyles_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('l_femoral_medial_epicondyles_pt'),
                          DEF_ : SFString('hanim_l_femoral_medial_epicondyles_pt'),
                          translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_femoral_medial_epicondyles_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('l_knee_crease_pt'),
                          DEF_ : SFString('hanim_l_knee_crease_pt'),
                          translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_knee_crease_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('l_suprapatella_pt'),
                          DEF_ : SFString('hanim_l_suprapatella_pt'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_suprapatella_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.095,0.9171,0.0029])])),
                              /*from sacroiliac to r_hip*/
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('r_femoral_lateral_epicondyles_pt'),
                          DEF_ : SFString('hanim_r_femoral_lateral_epicondyles_pt'),
                          translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_femoral_lateral_epicondyles_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('r_femoral_medial_epicondyles_pt'),
                          DEF_ : SFString('hanim_r_femoral_medial_epicondyles_pt'),
                          translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_femoral_medial_epicondyles_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('r_knee_crease_pt'),
                          DEF_ : SFString('hanim_r_knee_crease_pt'),
                          translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_knee_crease_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      child_ : 
                        HAnimSite(
                          name_ : SFString('r_suprapatella_pt'),
                          DEF_ : SFString('hanim_r_suprapatella_pt'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_suprapatella_pt')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])),
                                  /*from l_hip to l_knee*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('l_lateral_malleolus_pt'),
                              DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                              translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_lateral_malleolus_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('l_medial_malleolus_pt'),
                              DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                              translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_medial_malleolus_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('l_tibiale_pt'),
                              DEF_ : SFString('hanim_l_tibiale_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_tibiale_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])])),
                                      /*from l_knee to l_talocrural*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('l_calcaneus_posterior_pt'),
                                  DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_calcaneus_posterior_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('l_sphyrion_pt'),
                                  DEF_ : SFString('hanim_l_sphyrion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_sphyrion_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0,1,0])])),
                                          /*from l_talocrural to l_talocalcaneonavicular*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0,1,0])])),
                                          /*from l_talocrural to l_calcaneocuboid*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from l_talocalcaneonavicular to l_cuneonavicular_1*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from l_talocalcaneonavicular to l_cuneonavicular_2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from l_talocalcaneonavicular to l_cuneonavicular_3*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from l_cuneonavicular_1 to l_tarsometatarsal_1*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from l_tarsometatarsal_1 to l_metatarsophalangeal_1*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              child_ : 
                                                HAnimSite(
                                                  name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                  DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite l_metatarsal_phalanx_1_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  child_ : 
                                                    HAnimSite(
                                                      name_ : SFString('l_tarsal_distal_phalanx_1_tip'),
                                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip'),
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_tarsal_distal_phalanx_1_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from l_cuneonavicular_2 to l_tarsometatarsal_2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from l_tarsometatarsal_2 to l_metatarsophalangeal_2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('l_tarsal_distal_phalanx_2_tip'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip'),
                                                          translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_2_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from l_cuneonavicular_3 to l_tarsometatarsal_3*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from l_tarsometatarsal_3 to l_metatarsophalangeal_3*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('l_tarsal_distal_phalanx_3_tip'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_3_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('l_calcaneocuboid'),
                                      DEF_ : SFString('hanim_l_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from l_calcaneocuboid to l_transversetarsal*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_transversetarsal'),
                                          DEF_ : SFString('hanim_l_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from l_transversetarsal to l_tarsometatarsal_4*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from l_transversetarsal to l_tarsometatarsal_5*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from l_tarsometatarsal_4 to l_metatarsophalangeal_4*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('l_tarsal_distal_phalanx_4_tip'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_4_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from l_tarsometatarsal_5 to l_metatarsophalangeal_5*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              child_ : 
                                                HAnimSite(
                                                  name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                  DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite l_metatarsal_phalanx_5_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('l_tarsal_distal_phalanx_5_tip'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_5_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([-0.0867,0.4913,0.0318])])),
                                  /*from r_hip to r_knee*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('r_lateral_malleolus_pt'),
                              DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_lateral_malleolus_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('r_medial_malleolus_pt'),
                              DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_medial_malleolus_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          child_ : 
                            HAnimSite(
                              name_ : SFString('r_tibiale_pt'),
                              DEF_ : SFString('hanim_r_tibiale_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_tibiale_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0867,0.4913,0.0318]),SFVec3f([-0.0801,0.0712,-0.0766])])),
                                      /*from r_knee to r_talocrural*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('r_calcaneus_posterior_pt'),
                                  DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_calcaneus_posterior_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('r_sphyrion_pt'),
                                  DEF_ : SFString('hanim_r_sphyrion_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_sphyrion_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([0,1,0])])),
                                          /*from r_talocrural to r_talocalcaneonavicular*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([0,1,0])])),
                                          /*from r_talocrural to r_calcaneocuboid*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('r_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_r_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from r_talocalcaneonavicular to r_cuneonavicular_1*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from r_talocalcaneonavicular to r_cuneonavicular_2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from r_talocalcaneonavicular to r_cuneonavicular_3*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from r_cuneonavicular_1 to r_tarsometatarsal_1*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from r_tarsometatarsal_1 to r_metatarsophalangeal_1*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              child_ : 
                                                HAnimSite(
                                                  name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                                  DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite r_metatarsal_phalanx_1_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  child_ : 
                                                    HAnimSite(
                                                      name_ : SFString('r_tarsal_distal_phalanx_1_tip'),
                                                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip'),
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_tarsal_distal_phalanx_1_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from r_cuneonavicular_2 to r_tarsometatarsal_2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from r_tarsometatarsal_2 to r_metatarsophalangeal_2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('r_tarsal_distal_phalanx_2_tip'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip'),
                                                          translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_2_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from r_cuneonavicular_3 to r_tarsometatarsal_3*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from r_tarsometatarsal_3 to r_metatarsophalangeal_3*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('r_tarsal_distal_phalanx_3_tip'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_3_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('r_calcaneocuboid'),
                                      DEF_ : SFString('hanim_r_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                              /*from r_calcaneocuboid to r_transversetarsal*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_transversetarsal'),
                                          DEF_ : SFString('hanim_r_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from r_transversetarsal to r_tarsometatarsal_4*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                  /*from r_transversetarsal to r_tarsometatarsal_5*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from r_tarsometatarsal_4 to r_metatarsophalangeal_4*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('r_tarsal_distal_phalanx_4_tip'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_4_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                      /*from r_tarsometatarsal_5 to r_metatarsophalangeal_5*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              child_ : 
                                                HAnimSite(
                                                  name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                                  DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite r_metatarsal_phalanx_5_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                          /*from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(1)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0,1,0])])),
                                                              /*from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      child_ : 
                                                        HAnimSite(
                                                          name_ : SFString('r_tarsal_distal_phalanx_5_tip'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip'),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_5_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])])),
                              /*from vl5 to vl4*/
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])])),
                                  /*from vl4 to vl3*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])])),
                                      /*from vl3 to vl2*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('l_rib10_pt'),
                                  DEF_ : SFString('hanim_l_rib10_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_rib10_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('r_rib10_pt'),
                                  DEF_ : SFString('hanim_r_rib10_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_rib10_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              child_ : 
                                HAnimSite(
                                  name_ : SFString('spine_2_middle_back_pt'),
                                  DEF_ : SFString('hanim_spine_2_middle_back_pt'),
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite spine_2_middle_back_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])])),
                                          /*from vl2 to vl1*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])])),
                                              /*from vl1 to vt12*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])])),
                                                  /*from vt12 to vt11*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])])),
                                                      /*from vt11 to vt10*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              child_ : 
                                                HAnimSite(
                                                  name_ : SFString('substernale_pt'),
                                                  DEF_ : SFString('hanim_substernale_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite substernale_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  child_ : 
                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])),
                                                          /*from vt10 to vt9*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                  child_ : 
                                                    HAnimSite(
                                                      name_ : SFString('l_thelion_pt'),
                                                      DEF_ : SFString('hanim_l_thelion_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_thelion_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                  child_ : 
                                                    HAnimSite(
                                                      name_ : SFString('r_thelion_pt'),
                                                      DEF_ : SFString('hanim_r_thelion_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_thelion_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      child_ : 
                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])])),
                                                              /*from vt9 to vt8*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          child_ : 
                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])])),
                                                                  /*from vt8 to vt7*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                          children_ : [
                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              child_ : 
                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])])),
                                                                      /*from vt7 to vt6*/
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                              child_ : 
                                                                HAnimSite(
                                                                  name_ : SFString('l_chest_midsagittal_plane_pt'),
                                                                  DEF_ : SFString('hanim_l_chest_midsagittal_plane_pt'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite l_chest_midsagittal_plane_pt')),

                                                                    Shape(
                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                              child_ : 
                                                                HAnimSite(
                                                                  name_ : SFString('mesosternale_pt'),
                                                                  DEF_ : SFString('hanim_mesosternale_pt'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite mesosternale_pt')),

                                                                    Shape(
                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                              child_ : 
                                                                HAnimSite(
                                                                  name_ : SFString('r_chest_midsagittal_plane_pt'),
                                                                  DEF_ : SFString('hanim_r_chest_midsagittal_plane_pt'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite r_chest_midsagittal_plane_pt')),

                                                                    Shape(
                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                              child_ : 
                                                                HAnimSite(
                                                                  name_ : SFString('rear_center_midsagittal_plane_pt'),
                                                                  DEF_ : SFString('hanim_rear_center_midsagittal_plane_pt'),
                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimSite rear_center_midsagittal_plane_pt')),

                                                                    Shape(
                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])])),
                                                                          /*from vt6 to vt5*/
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                  child_ : 
                                                                    HAnimSite(
                                                                      name_ : SFString('spine_1_middle_back_pt'),
                                                                      DEF_ : SFString('hanim_spine_1_middle_back_pt'),
                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite spine_1_middle_back_pt')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])])),
                                                                              /*from vt5 to vt4*/
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])])),
                                                                                  /*from vt4 to vt3*/
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])])),
                                                                                      /*from vt3 to vt2*/
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])])),
                                                                                          /*from vt2 to vt1*/
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                  child_ : 
                                                                                    HAnimSite(
                                                                                      name_ : SFString('cervicale_pt'),
                                                                                      DEF_ : SFString('hanim_cervicale_pt'),
                                                                                      translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                      children_ : [
                                                                                        TouchSensor(
                                                                                          description_ : SFString('HAnimSite cervicale_pt')),

                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                  child_ : 
                                                                                    HAnimSite(
                                                                                      name_ : SFString('suprasternale_pt'),
                                                                                      DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                      translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                      children_ : [
                                                                                        TouchSensor(
                                                                                          description_ : SFString('HAnimSite suprasternale_pt')),

                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301])])),
                                                                                              /*from vt1 to vc7*/
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_neck_base_pt'),
                                                                                          DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_neck_base_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_neck_base_pt'),
                                                                                          DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_neck_base_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.082,1.4488,-0.0353])])),
                                                                                              /*from vt1 to l_sternoclavicular*/
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_acromion_pt'),
                                                                                          DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_acromion_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_axilla_distal_pt'),
                                                                                          DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_axilla_distal_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_axilla_posterior_folds_pt'),
                                                                                          DEF_ : SFString('hanim_l_axilla_posterior_folds_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_axilla_posterior_folds_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_axilla_proximal_pt'),
                                                                                          DEF_ : SFString('hanim_l_axilla_proximal_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_axilla_proximal_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('l_clavicale_pt'),
                                                                                          DEF_ : SFString('hanim_l_clavicale_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite l_clavicale_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([-0.0694,1.46,-0.033])])),
                                                                                              /*from vt1 to r_sternoclavicular*/
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_acromion_pt'),
                                                                                          DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_acromion_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_axilla_distal_pt'),
                                                                                          DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_axilla_distal_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_axilla_posterior_folds_pt'),
                                                                                          DEF_ : SFString('hanim_r_axilla_posterior_folds_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_axilla_posterior_folds_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_axilla_proximal_pt'),
                                                                                          DEF_ : SFString('hanim_r_axilla_proximal_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_axilla_proximal_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      child_ : 
                                                                                        HAnimSite(
                                                                                          name_ : SFString('r_clavicale_pt'),
                                                                                          DEF_ : SFString('hanim_r_clavicale_pt'),
                                                                                          translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite r_clavicale_pt')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])])),
                                                                                                  /*from vc7 to vc6*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])])),
                                                                                                      /*from vc6 to vc5*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])])),
                                                                                                          /*from vc5 to vc4*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])])),
                                                                                                              /*from vc4 to vc3*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.58,-0.0103]),SFVec3f([0.0066,1.5928,-0.0103])])),
                                                                                                                  /*from vc3 to vc2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('adams_apple_pt'),
                                                                                                              DEF_ : SFString('hanim_adams_apple_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite adams_apple_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])])),
                                                                                                                      /*from vc2 to vc1*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])])),
                                                                                                                          /*from vc1 to skullbase*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('glabella_pt'),
                                                                                                                      DEF_ : SFString('hanim_glabella_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite glabella_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_ectocanthus_pt'),
                                                                                                                      DEF_ : SFString('hanim_l_ectocanthus_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_ectocanthus_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_infraorbitale_pt'),
                                                                                                                      DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_infraorbitale_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_tragion_pt'),
                                                                                                                      DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_tragion_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('nuchale_pt'),
                                                                                                                      DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite nuchale_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('opisthocranion_pt'),
                                                                                                                      DEF_ : SFString('hanim_opisthocranion_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite opisthocranion_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_ectocanthus_pt'),
                                                                                                                      DEF_ : SFString('hanim_r_ectocanthus_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_ectocanthus_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_infraorbitale_pt'),
                                                                                                                      DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_infraorbitale_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_tragion_pt'),
                                                                                                                      DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_tragion_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('sellion_pt'),
                                                                                                                      DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite sellion_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  child_ : 
                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('skull_vertex_pt'),
                                                                                                                      DEF_ : SFString('hanim_skull_vertex_pt'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite skull_vertex_pt')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to l_eyelid_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to r_eyelid_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to l_eyeball_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to r_eyeball_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to l_eyebrow_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to r_eyebrow_joint*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1,0])])),
                                                                                                                              /*from skullbase to temporomandibular*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_gonion_pt'),
                                                                                                                          DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_gonion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('menton_pt'),
                                                                                                                          DEF_ : SFString('hanim_menton_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite menton_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_gonion_pt'),
                                                                                                                          DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_gonion_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('supramenton_pt'),
                                                                                                                          DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite supramenton_pt')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])),
                                                                                                  /*from l_sternoclavicular to l_acromioclavicular*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])])),
                                                                                                      /*from l_acromioclavicular to l_shoulder*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              child_ : 
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_bideltoid_pt'),
                                                                                                  DEF_ : SFString('hanim_l_bideltoid_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_bideltoid_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                              child_ : 
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_humeral_lateral_epicondyles_pt'),
                                                                                                  DEF_ : SFString('hanim_l_humeral_lateral_epicondyles_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_humeral_lateral_epicondyles_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])),
                                                                                                          /*from l_shoulder to l_elbow*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_humeral_medial_epicondyles_pt'),
                                                                                                      DEF_ : SFString('hanim_l_humeral_medial_epicondyles_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_humeral_medial_epicondyles_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_olecranon_pt'),
                                                                                                      DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_olecranon_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_radial_styloid_pt'),
                                                                                                      DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_radial_styloid_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_radiale_pt'),
                                                                                                      DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_radiale_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])),
                                                                                                              /*from l_elbow to l_radiocarpal*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                      child_ : 
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                          DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_ulnar_styloid_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0,1,0])])),
                                                                                                                  /*from l_radiocarpal to l_midcarpal_1*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0,1,0])])),
                                                                                                                  /*from l_radiocarpal to l_midcarpal_2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0,1,0])])),
                                                                                                                  /*from l_radiocarpal to l_midcarpal_3*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0,1,0])])),
                                                                                                                  /*from l_radiocarpal to l_midcarpal_4_5*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534])])),
                                                                                                                      /*from l_midcarpal_1 to l_carpometacarpal_1*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])])),
                                                                                                                          /*from l_carpometacarpal_1 to l_metacarpophalangeal_1*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])])),
                                                                                                                              /*from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_carpal_distal_phalanx_1_tip')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028])])),
                                                                                                                      /*from l_midcarpal_2 to l_carpometacarpal_2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_phalanx_2_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])])),
                                                                                                                          /*from l_carpometacarpal_2 to l_metacarpophalangeal_2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])])),
                                                                                                                              /*from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])])),
                                                                                                                                  /*from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_2_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_dactylion_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_dactylion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053])])),
                                                                                                                      /*from l_midcarpal_3 to l_carpometacarpal_3*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_3_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_3_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_phalanx_3_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])])),
                                                                                                                          /*from l_carpometacarpal_3 to l_metacarpophalangeal_3*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])])),
                                                                                                                              /*from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])])),
                                                                                                                                  /*from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_3_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_3_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794])])),
                                                                                                                      /*from l_midcarpal_4_5 to l_carpometacarpal_4*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036])])),
                                                                                                                      /*from l_midcarpal_4_5 to l_carpometacarpal_5*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_phalanx_5_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])])),
                                                                                                                          /*from l_carpometacarpal_4 to l_metacarpophalangeal_4*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])])),
                                                                                                                              /*from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])])),
                                                                                                                                  /*from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_4_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_4_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])])),
                                                                                                                          /*from l_carpometacarpal_5 to l_metacarpophalangeal_5*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])])),
                                                                                                                              /*from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])])),
                                                                                                                                  /*from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_5_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_5_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([-0.0694,1.46,-0.033]),SFVec3f([-0.0836,1.4281,-0.0401])])),
                                                                                                  /*from r_sternoclavicular to r_acromioclavicular*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.0836,1.4281,-0.0401]),SFVec3f([-0.1907,1.4407,-0.0325])])),
                                                                                                      /*from r_acromioclavicular to r_shoulder*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              child_ : 
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_bideltoid_pt'),
                                                                                                  DEF_ : SFString('hanim_r_bideltoid_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_bideltoid_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                              child_ : 
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_humeral_lateral_epicondyles_pt'),
                                                                                                  DEF_ : SFString('hanim_r_humeral_lateral_epicondyles_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_humeral_lateral_epicondyles_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.1907,1.4407,-0.0325]),SFVec3f([-0.1949,1.1388,-0.062])])),
                                                                                                          /*from r_shoulder to r_elbow*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_humeral_medial_epicondyles_pt'),
                                                                                                      DEF_ : SFString('hanim_r_humeral_medial_epicondyles_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_humeral_medial_epicondyles_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_olecranon_pt'),
                                                                                                      DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_olecranon_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_radial_styloid_pt'),
                                                                                                      DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_radial_styloid_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  child_ : 
                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_radiale_pt'),
                                                                                                      DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_radiale_pt')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1949,1.1388,-0.062]),SFVec3f([-0.1959,0.8694,-0.0521])])),
                                                                                                              /*from r_elbow to r_radiocarpal*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                      child_ : 
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                          DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_ulnar_styloid_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([0,1,0])])),
                                                                                                                  /*from r_radiocarpal to r_midcarpal_1*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([0,1,0])])),
                                                                                                                  /*from r_radiocarpal to r_midcarpal_2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([0,1,0])])),
                                                                                                                  /*from r_radiocarpal to r_midcarpal_3*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([0,1,0])])),
                                                                                                                  /*from r_radiocarpal to r_midcarpal_4_5*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1899,0.8502,-0.0473])])),
                                                                                                                      /*from r_midcarpal_1 to r_carpometacarpal_1*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1899,0.8502,-0.0473]),SFVec3f([-0.1874,0.8256,0.0306])])),
                                                                                                                          /*from r_carpometacarpal_1 to r_metacarpophalangeal_1*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1874,0.8256,0.0306]),SFVec3f([-0.1864,0.819,0.0506])])),
                                                                                                                              /*from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      child_ : 
                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_1_tip'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_tip'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_carpal_distal_phalanx_1_tip')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1961,0.8055,-0.0218])])),
                                                                                                                      /*from r_midcarpal_2 to r_carpometacarpal_2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_phalanx_2_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1961,0.8055,-0.0218]),SFVec3f([-0.1961,0.7846,-0.0218])])),
                                                                                                                          /*from r_carpometacarpal_2 to r_metacarpophalangeal_2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1961,0.7846,-0.0218]),SFVec3f([-0.1954,0.7393,-0.0185])])),
                                                                                                                              /*from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1954,0.7393,-0.0185]),SFVec3f([-0.1945,0.7169,-0.0173])])),
                                                                                                                                  /*from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_2_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_2_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_dactylion_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_dactylion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1972,0.806,-0.0468])])),
                                                                                                                      /*from r_midcarpal_3 to r_carpometacarpal_3*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_3_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_3_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_phalanx_3_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1972,0.806,-0.0468]),SFVec3f([-0.1972,0.7849,-0.0468])])),
                                                                                                                          /*from r_carpometacarpal_3 to r_metacarpophalangeal_3*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1972,0.7849,-0.0468]),SFVec3f([-0.195,0.7304,-0.0441])])),
                                                                                                                              /*from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.195,0.7304,-0.0441]),SFVec3f([-0.1939,0.7042,-0.0432])])),
                                                                                                                                  /*from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_3_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_3_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1951,0.8049,-0.0732])])),
                                                                                                                      /*from r_midcarpal_4_5 to r_carpometacarpal_4*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(1)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1926,0.8096,-0.0975])])),
                                                                                                                      /*from r_midcarpal_4_5 to r_carpometacarpal_5*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              child_ : 
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_phalanx_5_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1951,0.8049,-0.0732]),SFVec3f([-0.1951,0.7845,-0.0732])])),
                                                                                                                          /*from r_carpometacarpal_4 to r_metacarpophalangeal_4*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.7845,-0.0732]),SFVec3f([-0.192,0.7318,-0.0716])])),
                                                                                                                              /*from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.192,0.7318,-0.0716]),SFVec3f([-0.1908,0.7077,-0.0706])])),
                                                                                                                                  /*from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_4_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_4_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1926,0.8096,-0.0975]),SFVec3f([-0.1926,0.7896,-0.0975])])),
                                                                                                                          /*from r_carpometacarpal_5 to r_metacarpophalangeal_5*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1926,0.7896,-0.0975]),SFVec3f([-0.1902,0.7483,-0.0963])])),
                                                                                                                              /*from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1902,0.7483,-0.0963]),SFVec3f([-0.1908,0.754,-0.096])])),
                                                                                                                                  /*from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          child_ : 
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_5_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_5_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])])])])])])])])])])])])])])])])])])])]),

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
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_5')),

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
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_5')),

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
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_5')),

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
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5')),
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
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5_tip')))]));
void main() { exit(0); }
