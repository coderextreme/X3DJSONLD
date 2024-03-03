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
              level_ : 3),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('blenderSkeleton.x3d')),

            meta(
              name_ : SFString('copyright'),
              content_ : SFString('2023')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.web3D.org')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Blender 4.0.1'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            Background(
              DEF_ : SFString('WO_World'),
              groundColor_ : MFColor([SFColor(0.05087608844041824), SFColor(0.05087608844041824), SFColor(0.05087608844041824)]),
              skyColor_ : MFColor([SFColor(0.05087608844041824), SFColor(0.05087608844041824), SFColor(0.05087608844041824)])),

            Transform(
              child_ : 
                Shape(
                  DEF_ : SFString('SiteShape'),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(0.05), SFDouble(0.05), SFDouble(0.05)])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))))),

            Transform(
              child_ : 
                Shape(
                  DEF_ : SFString('JointShape'),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.06),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('JointAppearance'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.5), SFDouble(0)]),
                          transparency_ : 0.5)))),

            Transform(
              DEF_ : SFString('Light_TRANSFORM'),
              rotation_ : SFRotation([SFDouble(0.20594), SFDouble(0.33152), SFDouble(0.9207), SFDouble(1.92627)]),
              translation_ : SFVec3f([SFDouble(4.07625), SFDouble(1.00545), SFDouble(5.90386)]),
              children_ : [
                PointLight(
                  DEF_ : SFString('LA_Light'),
                  location_ : SFVec3f([SFDouble(-8.940696716308594e-8), SFDouble(-3.5762786865234375e-7), SFDouble(4.6193599700927734e-7)]),
                  radius_ : 40)]),

            Transform(
              DEF_ : SFString('Camera_TRANSFORM'),
              rotation_ : SFRotation([SFDouble(0.77344), SFDouble(0.33383), SFDouble(0.53884), SFDouble(1.35072)]),
              translation_ : SFVec3f([SFDouble(7.35889), SFDouble(-6.92579), SFDouble(4.95831)]),
              children_ : [
                Viewpoint(
                  DEF_ : SFString('CA_Camera'),
                  fieldOfView_ : 0.6911112070083618,
                  orientation_ : SFRotation([SFDouble(-3.627339850709177e-8), SFDouble(-0.4730778932571411), SFDouble(-0.8810206651687622), SFDouble(0)]),
                  position_ : SFVec3f([SFDouble(-3.927080456378462e-7), SFDouble(-2.123415470123291e-7), SFDouble(2.384185791015625e-7)]))]),

            Transform(
              DEF_ : SFString('Armature_TRANSFORM'),
              children_ : [
                HAnimHumanoid(
                  name_ : SFString('humanoid'),
                  DEF_ : SFString('hanim_humanoid'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('Armature'),
                      DEF_ : SFString('hanim_Armature'),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('SEGMENT_FOR_Armature'),
                          DEF_ : SFString('hanim_SEGMENT_FOR_Armature'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('joint Armature segment SEGMENT_FOR_Armature')),

                            Transform(
                              child_ : 
                                Shape(
                                  USE_ : SFString('JointShape'))),

                            HAnimSite(
                              name_ : SFString('SEGMENT_FOR_Armature_tip'),
                              DEF_ : SFString('hanim_SEGMENT_FOR_Armature_tip'),
                              children_ : [
                                Transform(
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('SiteShape')))])]),

                        HAnimJoint(
                          name_ : SFString('sacrum'),
                          DEF_ : SFString('hanim_sacrum'),
                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.8174)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('SEGMENT_FOR_sacrum'),
                              DEF_ : SFString('hanim_SEGMENT_FOR_sacrum'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('joint sacrum segment SEGMENT_FOR_sacrum')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.8174)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('JointShape'))),

                                HAnimSite(
                                  name_ : SFString('SEGMENT_FOR_sacrum_tip'),
                                  DEF_ : SFString('hanim_SEGMENT_FOR_sacrum_tip'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.8174)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('SiteShape')))])]),

                            HAnimJoint(
                              name_ : SFString('pelvis'),
                              DEF_ : SFString('hanim_pelvis'),
                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.6986)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('SEGMENT_FOR_pelvis'),
                                  DEF_ : SFString('hanim_SEGMENT_FOR_pelvis'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('joint pelvis segment SEGMENT_FOR_pelvis')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.6986)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('JointShape'))),

                                    HAnimSite(
                                      name_ : SFString('SEGMENT_FOR_pelvis_tip'),
                                      DEF_ : SFString('hanim_SEGMENT_FOR_pelvis_tip'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1178), SFDouble(0.6986)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('SiteShape')))])]),

                                HAnimJoint(
                                  name_ : SFString('l_thigh'),
                                  DEF_ : SFString('hanim_l_thigh'),
                                  center_ : SFVec3f([SFDouble(0.0945), SFDouble(-0.1202), SFDouble(0.8181)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('SEGMENT_FOR_l_thigh'),
                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_thigh'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('joint l_thigh segment SEGMENT_FOR_l_thigh')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0945), SFDouble(-0.1202), SFDouble(0.8181)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('JointShape'))),

                                        HAnimSite(
                                          name_ : SFString('SEGMENT_FOR_l_thigh_tip'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_thigh_tip'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0945), SFDouble(-0.1202), SFDouble(0.8181)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('SiteShape')))])]),

                                    HAnimJoint(
                                      name_ : SFString('l_calf'),
                                      DEF_ : SFString('hanim_l_calf'),
                                      center_ : SFVec3f([SFDouble(0.0924), SFDouble(-0.1213), SFDouble(0.4003)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('SEGMENT_FOR_l_calf'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_calf'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('joint l_calf segment SEGMENT_FOR_l_calf')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0924), SFDouble(-0.1213), SFDouble(0.4003)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('JointShape'))),

                                            HAnimSite(
                                              name_ : SFString('SEGMENT_FOR_l_calf_tip'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_calf_tip'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0924), SFDouble(-0.1213), SFDouble(0.4003)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('SiteShape')))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_talus'),
                                          DEF_ : SFString('hanim_l_talus'),
                                          center_ : SFVec3f([SFDouble(0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('SEGMENT_FOR_l_talus'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_talus'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('joint l_talus segment SEGMENT_FOR_l_talus')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('JointShape'))),

                                                HAnimSite(
                                                  name_ : SFString('SEGMENT_FOR_l_talus_tip'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_talus_tip'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('SiteShape')))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_navicular'),
                                              DEF_ : SFString('hanim_l_navicular'),
                                              center_ : SFVec3f([SFDouble(0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('SEGMENT_FOR_l_navicular'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_navicular'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('joint l_navicular segment SEGMENT_FOR_l_navicular')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('JointShape'))),

                                                    HAnimSite(
                                                      name_ : SFString('SEGMENT_FOR_l_navicular_tip'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_navicular_tip'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('SiteShape')))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_cuneiform_1'),
                                                  DEF_ : SFString('hanim_l_cuneiform_1'),
                                                  center_ : SFVec3f([SFDouble(0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_l_cuneiform_1'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_1'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_l_cuneiform_1_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_1_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal_1'),
                                                      DEF_ : SFString('hanim_l_metatarsal_1'),
                                                      center_ : SFVec3f([SFDouble(0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_l_metatarsal_1'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_1'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_l_metatarsal_1_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_1_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_proximal_phalanx_1'),
                                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_1'),
                                                          center_ : SFVec3f([SFDouble(0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_1'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('l_tarsal_distal_phalanx_1'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1'),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_1'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1')),

                                                                    Transform(
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])])])])])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_cuneiform_2'),
                                                  DEF_ : SFString('hanim_l_cuneiform_2'),
                                                  center_ : SFVec3f([SFDouble(0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_l_cuneiform_2'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_2'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_l_cuneiform_2_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_2_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal_2'),
                                                      DEF_ : SFString('hanim_l_metatarsal_2'),
                                                      center_ : SFVec3f([SFDouble(0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_l_metatarsal_2'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_2'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_l_metatarsal_2_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_2_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                                          center_ : SFVec3f([SFDouble(0.0824), SFDouble(-0.004), SFDouble(0.0064)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_2'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0824), SFDouble(-0.004), SFDouble(0.0064)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0824), SFDouble(-0.004), SFDouble(0.0064)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('l_tarsal_middle_phalanx_2'),
                                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_2'),
                                                              center_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_2'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                                  center_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_2'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_cuneiform_3'),
                                                  DEF_ : SFString('hanim_l_cuneiform_3'),
                                                  center_ : SFVec3f([SFDouble(0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_l_cuneiform_3'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_3'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_l_cuneiform_3_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_cuneiform_3_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal_3'),
                                                      DEF_ : SFString('hanim_l_metatarsal_3'),
                                                      center_ : SFVec3f([SFDouble(0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_l_metatarsal_3'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_3'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_l_metatarsal_3_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_3_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_proximal_phalanx_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_3'),
                                                          center_ : SFVec3f([SFDouble(0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_3'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('l_tarsal_middle_phalanx_3'),
                                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_3'),
                                                              center_ : SFVec3f([SFDouble(0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_3'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_3'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3'),
                                                                  center_ : SFVec3f([SFDouble(0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_3'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])])]),

                                            HAnimJoint(
                                              name_ : SFString('l_calcaneus'),
                                              DEF_ : SFString('hanim_l_calcaneus'),
                                              center_ : SFVec3f([SFDouble(0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('SEGMENT_FOR_l_calcaneus'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_calcaneus'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('joint l_calcaneus segment SEGMENT_FOR_l_calcaneus')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('JointShape'))),

                                                    HAnimSite(
                                                      name_ : SFString('SEGMENT_FOR_l_calcaneus_tip'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_calcaneus_tip'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('SiteShape')))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_cuboid'),
                                                  DEF_ : SFString('hanim_l_cuboid'),
                                                  center_ : SFVec3f([SFDouble(0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_l_cuboid'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_cuboid'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint l_cuboid segment SEGMENT_FOR_l_cuboid')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_l_cuboid_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_cuboid_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal_4'),
                                                      DEF_ : SFString('hanim_l_metatarsal_4'),
                                                      center_ : SFVec3f([SFDouble(0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_l_metatarsal_4'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_4'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_l_metatarsal_4_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_4_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_proximal_phalanx_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_4'),
                                                          center_ : SFVec3f([SFDouble(0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_4'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('l_tarsal_middle_phalanx_4'),
                                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_4'),
                                                              center_ : SFVec3f([SFDouble(0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_4'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_4'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4'),
                                                                  center_ : SFVec3f([SFDouble(0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_4'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_metatarsal_5'),
                                                      DEF_ : SFString('hanim_l_metatarsal_5'),
                                                      center_ : SFVec3f([SFDouble(0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_l_metatarsal_5'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_5'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_l_metatarsal_5_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metatarsal_5_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_proximal_phalanx_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_5'),
                                                          center_ : SFVec3f([SFDouble(0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_5'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('l_tarsal_middle_phalanx_5'),
                                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_5'),
                                                              center_ : SFVec3f([SFDouble(0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_5'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('l_tarsal_distal_phalanx_5'),
                                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5'),
                                                                  center_ : SFVec3f([SFDouble(0.1271), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_5'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.1271), SFDouble(0), SFDouble(0)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.1271), SFDouble(0), SFDouble(0)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])])])])])]),

                                HAnimJoint(
                                  name_ : SFString('r_thigh'),
                                  DEF_ : SFString('hanim_r_thigh'),
                                  center_ : SFVec3f([SFDouble(-0.0948), SFDouble(-0.1202), SFDouble(0.8181)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('SEGMENT_FOR_r_thigh'),
                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_thigh'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('joint r_thigh segment SEGMENT_FOR_r_thigh')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0948), SFDouble(-0.1202), SFDouble(0.8181)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('JointShape'))),

                                        HAnimSite(
                                          name_ : SFString('SEGMENT_FOR_r_thigh_tip'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_thigh_tip'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0948), SFDouble(-0.1202), SFDouble(0.8181)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('SiteShape')))])]),

                                    HAnimJoint(
                                      name_ : SFString('r_calf'),
                                      DEF_ : SFString('hanim_r_calf'),
                                      center_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.1213), SFDouble(0.4003)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('SEGMENT_FOR_r_calf'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_calf'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('joint r_calf segment SEGMENT_FOR_r_calf')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.1213), SFDouble(0.4003)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('JointShape'))),

                                            HAnimSite(
                                              name_ : SFString('SEGMENT_FOR_r_calf_tip'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_calf_tip'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.1213), SFDouble(0.4003)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('SiteShape')))])]),

                                        HAnimJoint(
                                          name_ : SFString('r_talus'),
                                          DEF_ : SFString('hanim_r_talus'),
                                          center_ : SFVec3f([SFDouble(-0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('SEGMENT_FOR_r_talus'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_talus'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('joint r_talus segment SEGMENT_FOR_r_talus')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('JointShape'))),

                                                HAnimSite(
                                                  name_ : SFString('SEGMENT_FOR_r_talus_tip'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_talus_tip'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0886), SFDouble(-0.1123), SFDouble(0.0869)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('SiteShape')))])]),

                                            HAnimJoint(
                                              name_ : SFString('r_navicular'),
                                              DEF_ : SFString('hanim_r_navicular'),
                                              center_ : SFVec3f([SFDouble(-0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('SEGMENT_FOR_r_navicular'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_navicular'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('joint r_navicular segment SEGMENT_FOR_r_navicular')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('JointShape'))),

                                                    HAnimSite(
                                                      name_ : SFString('SEGMENT_FOR_r_navicular_tip'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_navicular_tip'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0781), SFDouble(-0.097), SFDouble(0.0283)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('SiteShape')))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_cuneiform_1'),
                                                  DEF_ : SFString('hanim_r_cuneiform_1'),
                                                  center_ : SFVec3f([SFDouble(-0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_r_cuneiform_1'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_1'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_r_cuneiform_1_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_1_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0672), SFDouble(-0.0835), SFDouble(0.0235)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal_1'),
                                                      DEF_ : SFString('hanim_r_metatarsal_1'),
                                                      center_ : SFVec3f([SFDouble(-0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_r_metatarsal_1'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_1'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_r_metatarsal_1_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_1_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0644), SFDouble(-0.0577), SFDouble(0.0147)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_proximal_phalanx_1'),
                                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_1'),
                                                          center_ : SFVec3f([SFDouble(-0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_1'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0619), SFDouble(-0.0083), SFDouble(0.0059)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('r_tarsal_distal_phalanx_1'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1'),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_1'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1')),

                                                                    Transform(
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])])])])])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_cuneiform_2'),
                                                  DEF_ : SFString('hanim_r_cuneiform_2'),
                                                  center_ : SFVec3f([SFDouble(-0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_r_cuneiform_2'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_2'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_r_cuneiform_2_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_2_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0812), SFDouble(-0.0805), SFDouble(0.025)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal_2'),
                                                      DEF_ : SFString('hanim_r_metatarsal_2'),
                                                      center_ : SFVec3f([SFDouble(-0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_r_metatarsal_2'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_2'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_r_metatarsal_2_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_2_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.08), SFDouble(-0.0608), SFDouble(0.0175)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                                          center_ : SFVec3f([SFDouble(-0.0823), SFDouble(-0.004), SFDouble(0.0064)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_2'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0823), SFDouble(-0.004), SFDouble(0.0064)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0823), SFDouble(-0.004), SFDouble(0.0064)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('r_tarsal_middle_phalanx_2'),
                                                              DEF_ : SFString('hanim_r_tarsal_middle_phalanx_2'),
                                                              center_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_2'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0121), SFDouble(0.0041)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                                                  center_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_2'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0216), SFDouble(0.0013)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_cuneiform_3'),
                                                  DEF_ : SFString('hanim_r_cuneiform_3'),
                                                  center_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_r_cuneiform_3'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_3'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_r_cuneiform_3_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_cuneiform_3_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0928), SFDouble(-0.0821), SFDouble(0.0248)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal_3'),
                                                      DEF_ : SFString('hanim_r_metatarsal_3'),
                                                      center_ : SFVec3f([SFDouble(-0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_r_metatarsal_3'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_3'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_r_metatarsal_3_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_3_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0944), SFDouble(-0.0625), SFDouble(0.0175)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_proximal_phalanx_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_3'),
                                                          center_ : SFVec3f([SFDouble(-0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_3'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0963), SFDouble(-0.0065), SFDouble(0.0065)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('r_tarsal_middle_phalanx_3'),
                                                              DEF_ : SFString('hanim_r_tarsal_middle_phalanx_3'),
                                                              center_ : SFVec3f([SFDouble(-0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_3'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.0987), SFDouble(0.0086), SFDouble(0.0034)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_3'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3'),
                                                                  center_ : SFVec3f([SFDouble(-0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_3'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.1002), SFDouble(0.0178), SFDouble(0.0013)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])])]),

                                            HAnimJoint(
                                              name_ : SFString('r_calcaneus'),
                                              DEF_ : SFString('hanim_r_calcaneus'),
                                              center_ : SFVec3f([SFDouble(-0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('SEGMENT_FOR_r_calcaneus'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_calcaneus'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('joint r_calcaneus segment SEGMENT_FOR_r_calcaneus')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('JointShape'))),

                                                    HAnimSite(
                                                      name_ : SFString('SEGMENT_FOR_r_calcaneus_tip'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_calcaneus_tip'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0889), SFDouble(-0.1278), SFDouble(0.0494)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('SiteShape')))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_cuboid'),
                                                  DEF_ : SFString('hanim_r_cuboid'),
                                                  center_ : SFVec3f([SFDouble(-0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_r_cuboid'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_cuboid'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint r_cuboid segment SEGMENT_FOR_r_cuboid')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_r_cuboid_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_cuboid_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1105), SFDouble(-0.0998), SFDouble(0.0267)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal_4'),
                                                      DEF_ : SFString('hanim_r_metatarsal_4'),
                                                      center_ : SFVec3f([SFDouble(-0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_r_metatarsal_4'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_4'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_r_metatarsal_4_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_4_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.1063), SFDouble(-0.0634), SFDouble(0.016)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_proximal_phalanx_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_4'),
                                                          center_ : SFVec3f([SFDouble(-0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_4'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.1097), SFDouble(-0.0107), SFDouble(0.0058)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('r_tarsal_middle_phalanx_4'),
                                                              DEF_ : SFString('hanim_r_tarsal_middle_phalanx_4'),
                                                              center_ : SFVec3f([SFDouble(-0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_4'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.114), SFDouble(0.0044), SFDouble(0.0037)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_4'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4'),
                                                                  center_ : SFVec3f([SFDouble(-0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_4'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.1155), SFDouble(0.0118), SFDouble(0.0008)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_metatarsal_5'),
                                                      DEF_ : SFString('hanim_r_metatarsal_5'),
                                                      center_ : SFVec3f([SFDouble(-0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_r_metatarsal_5'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_5'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_r_metatarsal_5_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metatarsal_5_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.1206), SFDouble(-0.0671), SFDouble(0.0124)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_proximal_phalanx_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_5'),
                                                          center_ : SFVec3f([SFDouble(-0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_5'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.1239), SFDouble(-0.0153), SFDouble(0.0051)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('r_tarsal_middle_phalanx_5'),
                                                              DEF_ : SFString('hanim_r_tarsal_middle_phalanx_5'),
                                                              center_ : SFVec3f([SFDouble(-0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_5'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.1262), SFDouble(-0.0077), SFDouble(0.0023)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('r_tarsal_distal_phalanx_5'),
                                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5'),
                                                                  center_ : SFVec3f([SFDouble(-0.1271), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_5'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.1271), SFDouble(0), SFDouble(0)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.1271), SFDouble(0), SFDouble(0)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])])])])])])])])])])])]),

                            HAnimJoint(
                              name_ : SFString('l5'),
                              DEF_ : SFString('hanim_l5'),
                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9169)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('SEGMENT_FOR_l5'),
                                  DEF_ : SFString('hanim_SEGMENT_FOR_l5'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('joint l5 segment SEGMENT_FOR_l5')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9169)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('JointShape'))),

                                    HAnimSite(
                                      name_ : SFString('SEGMENT_FOR_l5_tip'),
                                      DEF_ : SFString('hanim_SEGMENT_FOR_l5_tip'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9169)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('SiteShape')))])]),

                                HAnimJoint(
                                  name_ : SFString('l4'),
                                  DEF_ : SFString('hanim_l4'),
                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9412)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('SEGMENT_FOR_l4'),
                                      DEF_ : SFString('hanim_SEGMENT_FOR_l4'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('joint l4 segment SEGMENT_FOR_l4')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9412)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('JointShape'))),

                                        HAnimSite(
                                          name_ : SFString('SEGMENT_FOR_l4_tip'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_l4_tip'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9412)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('SiteShape')))])]),

                                    HAnimJoint(
                                      name_ : SFString('l3'),
                                      DEF_ : SFString('hanim_l3'),
                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9574)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('SEGMENT_FOR_l3'),
                                          DEF_ : SFString('hanim_SEGMENT_FOR_l3'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('joint l3 segment SEGMENT_FOR_l3')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9574)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('JointShape'))),

                                            HAnimSite(
                                              name_ : SFString('SEGMENT_FOR_l3_tip'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_l3_tip'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9574)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('SiteShape')))])]),

                                        HAnimJoint(
                                          name_ : SFString('l2'),
                                          DEF_ : SFString('hanim_l2'),
                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9738)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('SEGMENT_FOR_l2'),
                                              DEF_ : SFString('hanim_SEGMENT_FOR_l2'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('joint l2 segment SEGMENT_FOR_l2')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9738)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('JointShape'))),

                                                HAnimSite(
                                                  name_ : SFString('SEGMENT_FOR_l2_tip'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l2_tip'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9738)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('SiteShape')))])]),

                                            HAnimJoint(
                                              name_ : SFString('l1'),
                                              DEF_ : SFString('hanim_l1'),
                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9911)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('SEGMENT_FOR_l1'),
                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l1'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('joint l1 segment SEGMENT_FOR_l1')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9911)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('JointShape'))),

                                                    HAnimSite(
                                                      name_ : SFString('SEGMENT_FOR_l1_tip'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l1_tip'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(0.9911)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('SiteShape')))])]),

                                                HAnimJoint(
                                                  name_ : SFString('t12'),
                                                  DEF_ : SFString('hanim_t12'),
                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0145)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('SEGMENT_FOR_t12'),
                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t12'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('joint t12 segment SEGMENT_FOR_t12')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0145)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('JointShape'))),

                                                        HAnimSite(
                                                          name_ : SFString('SEGMENT_FOR_t12_tip'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t12_tip'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0145)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('SiteShape')))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('t11'),
                                                      DEF_ : SFString('hanim_t11'),
                                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0381)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('SEGMENT_FOR_t11'),
                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t11'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('joint t11 segment SEGMENT_FOR_t11')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0381)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('JointShape'))),

                                                            HAnimSite(
                                                              name_ : SFString('SEGMENT_FOR_t11_tip'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t11_tip'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0381)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('SiteShape')))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('t10'),
                                                          DEF_ : SFString('hanim_t10'),
                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.0552)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('SEGMENT_FOR_t10'),
                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t10'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('joint t10 segment SEGMENT_FOR_t10')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.0552)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('JointShape'))),

                                                                HAnimSite(
                                                                  name_ : SFString('SEGMENT_FOR_t10_tip'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t10_tip'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.0552)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('SiteShape')))])]),

                                                            HAnimJoint(
                                                              name_ : SFString('t9'),
                                                              DEF_ : SFString('hanim_t9'),
                                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0699)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('SEGMENT_FOR_t9'),
                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t9'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('joint t9 segment SEGMENT_FOR_t9')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0699)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('JointShape'))),

                                                                    HAnimSite(
                                                                      name_ : SFString('SEGMENT_FOR_t9_tip'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t9_tip'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0699)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('SiteShape')))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('t8'),
                                                                  DEF_ : SFString('hanim_t8'),
                                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0845)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('SEGMENT_FOR_t8'),
                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t8'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('joint t8 segment SEGMENT_FOR_t8')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0845)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('JointShape'))),

                                                                        HAnimSite(
                                                                          name_ : SFString('SEGMENT_FOR_t8_tip'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t8_tip'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.0845)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('t7'),
                                                                      DEF_ : SFString('hanim_t7'),
                                                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1002)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('SEGMENT_FOR_t7'),
                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t7'),
                                                                          children_ : [
                                                                            TouchSensor(
                                                                              description_ : SFString('joint t7 segment SEGMENT_FOR_t7')),

                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1002)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('JointShape'))),

                                                                            HAnimSite(
                                                                              name_ : SFString('SEGMENT_FOR_t7_tip'),
                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t7_tip'),
                                                                              children_ : [
                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1002)]),
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('t6'),
                                                                          DEF_ : SFString('hanim_t6'),
                                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1131)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('SEGMENT_FOR_t6'),
                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t6'),
                                                                              children_ : [
                                                                                TouchSensor(
                                                                                  description_ : SFString('joint t6 segment SEGMENT_FOR_t6')),

                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1131)]),
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('JointShape'))),

                                                                                HAnimSite(
                                                                                  name_ : SFString('SEGMENT_FOR_t6_tip'),
                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t6_tip'),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1131)]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('t5'),
                                                                              DEF_ : SFString('hanim_t5'),
                                                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1286)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('SEGMENT_FOR_t5'),
                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t5'),
                                                                                  children_ : [
                                                                                    TouchSensor(
                                                                                      description_ : SFString('joint t5 segment SEGMENT_FOR_t5')),

                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1286)]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('JointShape'))),

                                                                                    HAnimSite(
                                                                                      name_ : SFString('SEGMENT_FOR_t5_tip'),
                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t5_tip'),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1286)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('t4'),
                                                                                  DEF_ : SFString('hanim_t4'),
                                                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1439)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('SEGMENT_FOR_t4'),
                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t4'),
                                                                                      children_ : [
                                                                                        TouchSensor(
                                                                                          description_ : SFString('joint t4 segment SEGMENT_FOR_t4')),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1439)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('JointShape'))),

                                                                                        HAnimSite(
                                                                                          name_ : SFString('SEGMENT_FOR_t4_tip'),
                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t4_tip'),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1439)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('t3'),
                                                                                      DEF_ : SFString('hanim_t3'),
                                                                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1623)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('SEGMENT_FOR_t3'),
                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_t3'),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('joint t3 segment SEGMENT_FOR_t3')),

                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1623)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('JointShape'))),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('SEGMENT_FOR_t3_tip'),
                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t3_tip'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.1623)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('t2'),
                                                                                          DEF_ : SFString('hanim_t2'),
                                                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.1871)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('SEGMENT_FOR_t2'),
                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_t2'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('joint t2 segment SEGMENT_FOR_t2')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.1871)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('SEGMENT_FOR_t2_tip'),
                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t2_tip'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1157), SFDouble(1.1871)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('t1'),
                                                                                              DEF_ : SFString('hanim_t1'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.2109)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('SEGMENT_FOR_t1'),
                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_t1'),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('joint t1 segment SEGMENT_FOR_t1')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.2109)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('SEGMENT_FOR_t1_tip'),
                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_t1_tip'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1156), SFDouble(1.2109)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('c7'),
                                                                                                  DEF_ : SFString('hanim_c7'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2368)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('SEGMENT_FOR_c7'),
                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_c7'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('joint c7 segment SEGMENT_FOR_c7')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2368)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('SEGMENT_FOR_c7_tip'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_c7_tip'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2368)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('c6'),
                                                                                                      DEF_ : SFString('hanim_c6'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.249)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('SEGMENT_FOR_c6'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_c6'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('joint c6 segment SEGMENT_FOR_c6')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.249)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('SEGMENT_FOR_c6_tip'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_c6_tip'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.249)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('c5'),
                                                                                                          DEF_ : SFString('hanim_c5'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2613)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('SEGMENT_FOR_c5'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_c5'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('joint c5 segment SEGMENT_FOR_c5')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2613)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('SEGMENT_FOR_c5_tip'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_c5_tip'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2613)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('c4'),
                                                                                                              DEF_ : SFString('hanim_c4'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2737)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('SEGMENT_FOR_c4'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_c4'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('joint c4 segment SEGMENT_FOR_c4')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2737)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('SEGMENT_FOR_c4_tip'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_c4_tip'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2737)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('c3'),
                                                                                                                  DEF_ : SFString('hanim_c3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2865)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('SEGMENT_FOR_c3'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_c3'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('joint c3 segment SEGMENT_FOR_c3')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2865)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('SEGMENT_FOR_c3_tip'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_c3_tip'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2865)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('c2'),
                                                                                                                      DEF_ : SFString('hanim_c2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2982)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_c2'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_c2'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint c2 segment SEGMENT_FOR_c2')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2982)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_c2_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_c2_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.2982)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('c1'),
                                                                                                                          DEF_ : SFString('hanim_c1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.3099)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_c1'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_c1'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint c1 segment SEGMENT_FOR_c1')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.3099)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_c1_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_c1_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1169), SFDouble(1.3099)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('skull'),
                                                                                                                              DEF_ : SFString('hanim_skull'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1173), SFDouble(1.3041)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_skull'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_skull'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint skull segment SEGMENT_FOR_skull')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1173), SFDouble(1.3041)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_skull_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_skull_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.1173), SFDouble(1.3041)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyelid'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyelid'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.0503), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_eyelid'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_eyelid'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_eyelid segment SEGMENT_FOR_l_eyelid')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.0503), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_eyelid_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_eyelid_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.0503), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyelid'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyelid'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.0507), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_eyelid'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_eyelid'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_eyelid segment SEGMENT_FOR_r_eyelid')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0507), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_eyelid_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_eyelid_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0507), SFDouble(-0.0689), SFDouble(1.4157)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyeball'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.0479), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_eyeball'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_eyeball segment SEGMENT_FOR_l_eyeball')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.0479), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_eyeball_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_eyeball_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.0479), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyeball'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.0483), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_eyeball'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_eyeball'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_eyeball segment SEGMENT_FOR_r_eyeball')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0483), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_eyeball_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_eyeball_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0483), SFDouble(-0.0188), SFDouble(1.3963)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_eyebrow'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyebrow'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.0216), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_eyebrow'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_eyebrow'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_eyebrow segment SEGMENT_FOR_l_eyebrow')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.0216), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_eyebrow_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_eyebrow_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.0216), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_eyebrow'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyebrow'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.0219), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_eyebrow'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_eyebrow'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_eyebrow segment SEGMENT_FOR_r_eyebrow')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0219), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_eyebrow_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_eyebrow_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0219), SFDouble(0.0051), SFDouble(1.4053)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('jaw'),
                                                                                                                                  DEF_ : SFString('hanim_jaw'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.0865), SFDouble(1.3043)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_jaw'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_jaw'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint jaw segment SEGMENT_FOR_jaw')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.0865), SFDouble(1.3043)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_jaw_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_jaw_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0002), SFDouble(-0.0865), SFDouble(1.3043)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_clavicle'),
                                                                                                  DEF_ : SFString('hanim_l_clavicle'),
                                                                                                  center_ : SFVec3f([SFDouble(0.1228), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('SEGMENT_FOR_l_clavicle'),
                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_clavicle'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('joint l_clavicle segment SEGMENT_FOR_l_clavicle')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.1228), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('SEGMENT_FOR_l_clavicle_tip'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_clavicle_tip'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.1228), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_scapula'),
                                                                                                      DEF_ : SFString('hanim_l_scapula'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0383), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('SEGMENT_FOR_l_scapula'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_scapula'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('joint l_scapula segment SEGMENT_FOR_l_scapula')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0383), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('SEGMENT_FOR_l_scapula_tip'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_scapula_tip'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0383), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_upperarm'),
                                                                                                          DEF_ : SFString('hanim_l_upperarm'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('SEGMENT_FOR_l_upperarm'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_upperarm'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('joint l_upperarm segment SEGMENT_FOR_l_upperarm')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('SEGMENT_FOR_l_upperarm_tip'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_upperarm_tip'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_forearm'),
                                                                                                              DEF_ : SFString('hanim_l_forearm'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('SEGMENT_FOR_l_forearm'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_forearm'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('joint l_forearm segment SEGMENT_FOR_l_forearm')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('SEGMENT_FOR_l_forearm_tip'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_forearm_tip'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpal'),
                                                                                                                  DEF_ : SFString('hanim_l_carpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('joint l_carpal segment SEGMENT_FOR_l_carpal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_tip'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_tip'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_trapezium'),
                                                                                                                      DEF_ : SFString('hanim_l_trapezium'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_l_trapezium'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_trapezium'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint l_trapezium segment SEGMENT_FOR_l_trapezium')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_trapezium_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_trapezium_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpal_1'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_metacarpal_1'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_1'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_metacarpal_1_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_1_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_1'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_1'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_1_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_trapezoid'),
                                                                                                                      DEF_ : SFString('hanim_l_trapezoid'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_l_trapezoid'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_trapezoid'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint l_trapezoid segment SEGMENT_FOR_l_trapezoid')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_trapezoid_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_trapezoid_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_metacarpal_2'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_2'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_metacarpal_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1836), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1836), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1836), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_2_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_2'),
                                                                                                                                      center_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_2'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_capitate'),
                                                                                                                      DEF_ : SFString('hanim_l_capitate'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_l_capitate'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_capitate'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint l_capitate segment SEGMENT_FOR_l_capitate')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_capitate_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_capitate_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_metacarpal_3'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_3'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_metacarpal_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_middle_phalanx_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_3_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_3'),
                                                                                                                                      center_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_3'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_hamate'),
                                                                                                                      DEF_ : SFString('hanim_l_hamate'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_l_hamate'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_hamate'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint l_hamate segment SEGMENT_FOR_l_hamate')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_hamate_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_hamate_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_metacarpal_4'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_4'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_metacarpal_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_middle_phalanx_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_4_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_4'),
                                                                                                                                      center_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_4'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_metacarpal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_metacarpal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_l_metacarpal_5'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_5'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_metacarpal_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_metacarpal_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_middle_phalanx_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_5'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_middle_phalanx_5_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_5'),
                                                                                                                                      center_ : SFVec3f([SFDouble(0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_5'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])])])])])])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_clavicle'),
                                                                                                  DEF_ : SFString('hanim_r_clavicle'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1231), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('SEGMENT_FOR_r_clavicle'),
                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_clavicle'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('joint r_clavicle segment SEGMENT_FOR_r_clavicle')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1231), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('SEGMENT_FOR_r_clavicle_tip'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_clavicle_tip'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1231), SFDouble(-0.1148), SFDouble(1.1833)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_scapula'),
                                                                                                      DEF_ : SFString('hanim_r_scapula'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.0387), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('SEGMENT_FOR_r_scapula'),
                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_scapula'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('joint r_scapula segment SEGMENT_FOR_r_scapula')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.0387), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('SEGMENT_FOR_r_scapula_tip'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_scapula_tip'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0387), SFDouble(-0.1157), SFDouble(1.2001)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_upperarm'),
                                                                                                          DEF_ : SFString('hanim_r_upperarm'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('SEGMENT_FOR_r_upperarm'),
                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_upperarm'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('joint r_upperarm segment SEGMENT_FOR_r_upperarm')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('SEGMENT_FOR_r_upperarm_tip'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_upperarm_tip'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1649), SFDouble(-0.1051), SFDouble(1.17)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_forearm'),
                                                                                                              DEF_ : SFString('hanim_r_forearm'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('SEGMENT_FOR_r_forearm'),
                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_forearm'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('joint r_forearm segment SEGMENT_FOR_r_forearm')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('SEGMENT_FOR_r_forearm_tip'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_forearm_tip'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1819), SFDouble(-0.1075), SFDouble(0.9202)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpal'),
                                                                                                                  DEF_ : SFString('hanim_r_carpal'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal'),
                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('joint r_carpal segment SEGMENT_FOR_r_carpal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_tip'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_tip'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1818), SFDouble(-0.1069), SFDouble(0.7157)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_trapezium'),
                                                                                                                      DEF_ : SFString('hanim_r_trapezium'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_r_trapezium'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_trapezium'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint r_trapezium segment SEGMENT_FOR_r_trapezium')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_trapezium_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_trapezium_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0826), SFDouble(0.6975)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpal_1'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_metacarpal_1'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_1'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_metacarpal_1_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_1_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1803), SFDouble(-0.0759), SFDouble(0.684)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1808), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1808), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1808), SFDouble(-0.0661), SFDouble(0.6642)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_1'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_1'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_1_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1825), SFDouble(-0.0522), SFDouble(0.6455)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_trapezoid'),
                                                                                                                      DEF_ : SFString('hanim_r_trapezoid'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_r_trapezoid'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_trapezoid'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint r_trapezoid segment SEGMENT_FOR_r_trapezoid')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_trapezoid_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_trapezoid_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0935), SFDouble(0.6984)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_metacarpal_2'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_2'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_metacarpal_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(-0.0922), SFDouble(0.679)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.0868), SFDouble(0.6286)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_2_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.0877), SFDouble(0.5983)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_2'),
                                                                                                                                      center_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_2'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.0885), SFDouble(0.5731)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_capitate'),
                                                                                                                      DEF_ : SFString('hanim_r_capitate'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_r_capitate'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_capitate'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint r_capitate segment SEGMENT_FOR_r_capitate')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_capitate_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_capitate_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1067), SFDouble(0.7)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_metacarpal_3'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_3'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_metacarpal_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1081), SFDouble(0.6772)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1058), SFDouble(0.6264)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_3_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1054), SFDouble(0.5947)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_3'),
                                                                                                                                      center_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_3'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1056), SFDouble(0.5668)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_hamate'),
                                                                                                                      DEF_ : SFString('hanim_r_hamate'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('SEGMENT_FOR_r_hamate'),
                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_hamate'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('joint r_hamate segment SEGMENT_FOR_r_hamate')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_hamate_tip'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_hamate_tip'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1276), SFDouble(0.6973)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('SiteShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_metacarpal_4'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_4'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_metacarpal_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(-0.1218), SFDouble(0.6777)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1835), SFDouble(-0.1233), SFDouble(0.6255)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_4_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.1225), SFDouble(0.598)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_4'),
                                                                                                                                      center_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_4'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1805), SFDouble(-0.1217), SFDouble(0.5722)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_metacarpal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_metacarpal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1814), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('SEGMENT_FOR_r_metacarpal_5'),
                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_5'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1814), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('JointShape'))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_metacarpal_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_metacarpal_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1814), SFDouble(-0.1347), SFDouble(0.6797)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('SiteShape')))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                              children_ : [
                                                                                                                                HAnimSegment(
                                                                                                                                  name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5')),

                                                                                                                                    Transform(
                                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('JointShape'))),

                                                                                                                                    HAnimSite(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip'),
                                                                                                                                      children_ : [
                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1832), SFDouble(-0.1389), SFDouble(0.6295)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('SiteShape')))])]),

                                                                                                                                HAnimJoint(
                                                                                                                                  name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_middle_phalanx_5'),
                                                                                                                                  center_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                  children_ : [
                                                                                                                                    HAnimSegment(
                                                                                                                                      name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_5'),
                                                                                                                                      DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5'),
                                                                                                                                      children_ : [
                                                                                                                                        TouchSensor(
                                                                                                                                          description_ : SFString('joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5')),

                                                                                                                                        Transform(
                                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                          child_ : 
                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('JointShape'))),

                                                                                                                                        HAnimSite(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_middle_phalanx_5_tip'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip'),
                                                                                                                                          children_ : [
                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1815), SFDouble(-0.139), SFDouble(0.6124)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('SiteShape')))])]),

                                                                                                                                    HAnimJoint(
                                                                                                                                      name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                                      DEF_ : SFString('hanim_r_carpal_distal_phalanx_5'),
                                                                                                                                      center_ : SFVec3f([SFDouble(-0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                      children_ : [
                                                                                                                                        HAnimSegment(
                                                                                                                                          name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_5'),
                                                                                                                                          DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5'),
                                                                                                                                          children_ : [
                                                                                                                                            TouchSensor(
                                                                                                                                              description_ : SFString('joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5')),

                                                                                                                                            Transform(
                                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                              child_ : 
                                                                                                                                                Shape(
                                                                                                                                                  USE_ : SFString('JointShape'))),

                                                                                                                                            HAnimSite(
                                                                                                                                              name_ : SFString('SEGMENT_FOR_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                              DEF_ : SFString('hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                              children_ : [
                                                                                                                                                Transform(
                                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1806), SFDouble(-0.1388), SFDouble(0.5938)]),
                                                                                                                                                  child_ : 
                                                                                                                                                    Shape(
                                                                                                                                                      USE_ : SFString('SiteShape')))])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

                    HAnimJoint(
                      USE_ : SFString('hanim_sacrum')),

                    HAnimJoint(
                      USE_ : SFString('hanim_pelvis')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_thigh')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_calf')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_talus')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_navicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_cuneiform_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metatarsal_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_proximal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_distal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_cuneiform_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metatarsal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_middle_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_cuneiform_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metatarsal_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_proximal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_middle_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_distal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_calcaneus')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_cuboid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metatarsal_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_proximal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_middle_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_distal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metatarsal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_proximal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_middle_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_tarsal_distal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_thigh')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_calf')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_talus')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_navicular')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_cuneiform_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metatarsal_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_proximal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_distal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_cuneiform_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metatarsal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_middle_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_distal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_cuneiform_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metatarsal_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_proximal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_middle_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_distal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_calcaneus')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_cuboid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metatarsal_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_proximal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_middle_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_distal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metatarsal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_proximal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_middle_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_tarsal_distal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t12')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t11')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t10')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t9')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t8')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t7')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t6')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_t1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c7')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c6')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_c1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_skull')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_eyelid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_eyelid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_eyeball')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_eyeball')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_eyebrow')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_eyebrow')),

                    HAnimJoint(
                      USE_ : SFString('hanim_jaw')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_clavicle')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_scapula')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_upperarm')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_forearm')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_trapezium')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metacarpal_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_distal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_trapezoid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metacarpal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_distal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_capitate')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metacarpal_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_distal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_hamate')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metacarpal_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_distal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_metacarpal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_middle_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_l_carpal_distal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_clavicle')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_scapula')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_upperarm')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_forearm')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_trapezium')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metacarpal_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_distal_phalanx_1')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_trapezoid')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metacarpal_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_distal_phalanx_2')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_capitate')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metacarpal_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_distal_phalanx_3')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_hamate')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metacarpal_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_distal_phalanx_4')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_metacarpal_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_middle_phalanx_5')),

                    HAnimJoint(
                      USE_ : SFString('hanim_r_carpal_distal_phalanx_5'))])]),

            TimeSensor(
              DEF_ : SFString('Armature_Clock'),
              cycleInterval_ : 10.416666666666666,
              loop_ : true),

            ProximitySensor(
              DEF_ : SFString('Armature_Close'),
              size_ : SFVec3f([SFDouble(1000000), SFDouble(1000000), SFDouble(1000000)])),

            ROUTE(
              fromField_ : SFString('enterTime'),
              fromNode_ : SFString('Armature_Close'),
              toField_ : SFString('startTime'),
              toNode_ : SFString('Armature_Clock')),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_sacrum'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_pelvis'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_thigh'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_calf'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_talus'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_navicular'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_cuneiform_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metatarsal_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_distal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_cuneiform_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metatarsal_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_middle_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_distal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_cuneiform_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metatarsal_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_middle_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_distal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_calcaneus'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_cuboid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metatarsal_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_middle_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_distal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metatarsal_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_middle_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_tarsal_distal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_thigh'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_calf'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_talus'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_navicular'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_cuneiform_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metatarsal_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_distal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_cuneiform_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metatarsal_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_middle_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_distal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_cuneiform_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metatarsal_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_middle_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_distal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_calcaneus'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_cuboid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metatarsal_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_middle_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_distal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metatarsal_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_middle_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_tarsal_distal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t12'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t11'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t10'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t9'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t8'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t7'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t6'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_t1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c7'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c6'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_c1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_skull'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_eyelid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_eyelid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_eyeball'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_eyeball'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_eyebrow'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_eyebrow'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_jaw'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_clavicle'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_scapula'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_upperarm'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_forearm'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_trapezium'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metacarpal_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_proximal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_distal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_trapezoid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metacarpal_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_proximal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_middle_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_distal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_capitate'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metacarpal_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_proximal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_middle_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_distal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_hamate'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metacarpal_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_proximal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_middle_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_distal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_metacarpal_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_proximal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_middle_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_l_carpal_distal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_clavicle'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_scapula'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_upperarm'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_forearm'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_trapezium'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metacarpal_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_proximal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_distal_phalanx_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_trapezoid'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metacarpal_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_proximal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_middle_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_distal_phalanx_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_capitate'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metacarpal_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_proximal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_middle_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_distal_phalanx_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_hamate'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metacarpal_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_proximal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_middle_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_distal_phalanx_4'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_metacarpal_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_proximal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_middle_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            OrientationInterpolator(
              DEF_ : SFString('Armature_OI_r_carpal_distal_phalanx_5'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_sacrum')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_sacrum'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_sacrum')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_pelvis')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_pelvis'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_pelvis')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_thigh')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_thigh'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_thigh')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_calf')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_calf'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_calf')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_talus')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_talus'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_talus')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_navicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_navicular'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_navicular')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_cuneiform_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_cuneiform_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_cuneiform_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metatarsal_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metatarsal_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metatarsal_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_cuneiform_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_cuneiform_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_cuneiform_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metatarsal_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metatarsal_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metatarsal_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_cuneiform_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_cuneiform_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_cuneiform_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metatarsal_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metatarsal_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metatarsal_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_calcaneus')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_calcaneus'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_calcaneus')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_cuboid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_cuboid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_cuboid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metatarsal_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metatarsal_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metatarsal_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metatarsal_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metatarsal_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metatarsal_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_proximal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_middle_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_tarsal_distal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_tarsal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_thigh')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_thigh'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_thigh')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_calf')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_calf'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_calf')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_talus')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_talus'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_talus')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_navicular')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_navicular'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_navicular')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_cuneiform_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_cuneiform_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_cuneiform_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metatarsal_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metatarsal_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metatarsal_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_cuneiform_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_cuneiform_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_cuneiform_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metatarsal_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metatarsal_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metatarsal_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_cuneiform_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_cuneiform_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_cuneiform_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metatarsal_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metatarsal_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metatarsal_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_calcaneus')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_calcaneus'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_calcaneus')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_cuboid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_cuboid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_cuboid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metatarsal_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metatarsal_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metatarsal_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metatarsal_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metatarsal_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metatarsal_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_proximal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_middle_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_tarsal_distal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_tarsal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t12')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t12'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t12')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t11')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t11'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t11')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t10')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t10'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t10')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t9')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t9'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t9')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t8')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t8'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t8')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t7')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t7'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t7')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t6')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t6'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t6')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_t1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_t1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_t1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c7')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c7'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c7')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c6')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c6'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c6')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_c1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_c1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_c1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_skull')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_skull'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_skull')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_eyelid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_eyelid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_eyelid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_eyelid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_eyelid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_eyelid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_eyeball')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_eyeball'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_eyeball')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_eyeball')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_eyeball'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_eyeball')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_eyebrow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_eyebrow'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_eyebrow')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_eyebrow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_eyebrow'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_eyebrow')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_jaw')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_jaw'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_jaw')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_clavicle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_clavicle'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_clavicle')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_scapula')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_scapula'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_scapula')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_upperarm')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_upperarm'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_upperarm')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_forearm')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_forearm'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_forearm')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_trapezium')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_trapezium'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_trapezium')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metacarpal_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metacarpal_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metacarpal_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_trapezoid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_trapezoid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_trapezoid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metacarpal_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metacarpal_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metacarpal_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_capitate')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_capitate'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_capitate')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metacarpal_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metacarpal_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metacarpal_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_hamate')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_hamate'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_hamate')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metacarpal_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metacarpal_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metacarpal_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_metacarpal_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_metacarpal_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_metacarpal_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_proximal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_middle_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_l_carpal_distal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_l_carpal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_clavicle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_clavicle'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_clavicle')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_scapula')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_scapula'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_scapula')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_upperarm')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_upperarm'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_upperarm')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_forearm')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_forearm'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_forearm')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_trapezium')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_trapezium'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_trapezium')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metacarpal_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metacarpal_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metacarpal_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_1'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_distal_phalanx_1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_trapezoid')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_trapezoid'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_trapezoid')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metacarpal_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metacarpal_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metacarpal_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_middle_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_2'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_distal_phalanx_2')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_capitate')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_capitate'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_capitate')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metacarpal_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metacarpal_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metacarpal_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_middle_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_3'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_distal_phalanx_3')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_hamate')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_hamate'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_hamate')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metacarpal_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metacarpal_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metacarpal_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_middle_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_4'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_distal_phalanx_4')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_metacarpal_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_metacarpal_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_metacarpal_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_proximal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_middle_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_middle_phalanx_5')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Armature_Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_5')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Armature_OI_r_carpal_distal_phalanx_5'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('hanim_r_carpal_distal_phalanx_5'))]));
void main() { exit(0); }
