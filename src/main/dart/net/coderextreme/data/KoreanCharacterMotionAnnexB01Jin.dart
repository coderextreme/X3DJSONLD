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
              content_ : SFString('KoreanCharacterMotionAnnexB01Jin.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Jin Hoon Lee and Min Joo Lee')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Chul Hee Jung and Myeong Won Lee')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('31 March 2011')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('1 November 2014')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('8 January 2023')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('KoreanCharacter00ReadMe.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('KoreanCharacterHumanMotion_Infotech2014_140706.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('KoreanCharactersIllustrated.pdf')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex D (informative) Examples of HAnim motion data animation using a Motion object')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleKeyframeAnimation.html')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterAnnexB01Jin.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Suwon HAnim Converter')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Gnu Image Manipulation Program, http://www.gimp.org')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              description_ : SFString('AnnexB01Jin'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

            Group(
              DEF_ : SFString('KeyframeAnimation'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('KeyframeTimer'),
                  cycleInterval_ : 8.033494,
                  loop_ : true),

                PositionInterpolator(
                  DEF_ : SFString('Keyframe_HumanoidRoot'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_HumanoidRoot'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_sacroiliac'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_shoulder'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_elbow'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_radiocarpal'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_shoulder'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(3), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_elbow'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_radiocarpal'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_vl5'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_skullbase'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_hip'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_knee'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_talocrural'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_l_metatarsophalangeal'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_hip'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_knee'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_talocrural'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                OrientationInterpolator(
                  DEF_ : SFString('Keyframe_r_metatarsophalangeal'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(0)])),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_HumanoidRoot')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_HumanoidRoot')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_sacroiliac')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_shoulder')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_elbow')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_radiocarpal')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_shoulder')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_elbow')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_radiocarpal')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_vl5')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_skullbase')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_hip')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_knee')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_talocrural')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_l_metatarsophalangeal')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_hip')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_knee')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_talocrural')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('KeyframeTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Keyframe_r_metatarsophalangeal')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_HumanoidRoot'),
                  toField_ : SFString('translation'),
                  toNode_ : SFString('hanim_HumanoidRoot')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_HumanoidRoot'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_HumanoidRoot')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_sacroiliac'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_sacroiliac')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_shoulder'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_shoulder')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_elbow'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_elbow')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_radiocarpal'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_radiocarpal')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_r_shoulder'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_shoulder')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_r_elbow'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_elbow')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_r_radiocarpal'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_radiocarpal')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_vl5'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_vl5')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_skullbase'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_skullbase')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_hip'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_hip')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_knee'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_knee')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_talocrural'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_talocrural')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_talocrural'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_l_metatarsophalangeal')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_r_hip'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_hip')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_r_knee'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_knee')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_talocrural'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_talocrural')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('Keyframe_l_talocrural'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('hanim_r_metatarsophalangeal'))])]));
void main() { exit(0); }
