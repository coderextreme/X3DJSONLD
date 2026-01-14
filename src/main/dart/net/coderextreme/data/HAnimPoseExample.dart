// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.1'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HAnimPoseExample.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('11 December 2025')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 December 2025')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development for X3D 4.1')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              DEF_ : SFString('ModelInfo'),
              info_ : MFString([SFString("Example scene for HAnimPose node")]),
              title_ : SFString('HAnimPoseExample.x3d')),

            Background(
              skyColor_ : MFColor([SFColor(0.8), SFColor(0.8), SFColor(1)])),

            NavigationInfo(),

            Group(
              DEF_ : SFString('HandleInlineLoading'),
              /*Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2*/
              /*Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun*/
              children_ : [
                Inline(
                  DEF_ : SFString('HumanoidInline'),
                  description_ : SFString('remote HAnimHumanoid for IMPORT'),
                  url_ : MFString([SFString("../Skin/JoeSkeletonSkinSite.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d")])),
              /*Note that the following importedDEF must match the EXPORT name found in remote file*/

                IMPORT(
                  aS_ : SFString('HumanoidImported'),
                  importedDEF_ : SFString('JoeSkeletonSkinSite'),
                  inlineDEF_ : SFString('HumanoidInline')),

                LoadSensor(
                  DEF_ : SFString('HumanoidInlineLoadSensor'),
                  timeOut_ : 2,
                  children_ : [
                    Inline(
                      USE_ : SFString('HumanoidInline'))])]),

            Viewpoint(
              description_ : SFString('HAnimPose for HumanoidInline IMPORT model'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(4)])),
          /*no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...*/

            HAnimPose(
              name_ : SFString('T'),
              DEF_ : SFString('T_Pose'),
              description_ : SFString('arms stretched outward and level similar to letter T'),
              loa_ : 1,
              transitionDuration_ : 1.3,
              metadata_ : [
                MetadataString(
                  name_ : SFString('metadataTest'),
                  value_ : MFString([SFString("hello HAnimPose metadata")])),
              /*test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/*/
              children_ : [
                HAnimJoint(
                  name_ : SFString('l_shoulder'),
                  DEF_ : SFString('PoseJoint_l_shoulder_1'),
                  description_ : SFString('left shoulder'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_shoulder'),
                  DEF_ : SFString('PoseJoint_r_shoulder_1'),
                  description_ : SFString('right shoulder'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-1), SFDouble(1.57)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

            HAnimPose(
              name_ : SFString('A'),
              DEF_ : SFString('A_Pose'),
              description_ : SFString('arms stretched outward and downward similar to letter A'),
              loa_ : 1,
              transitionDuration_ : 1.2,
              children_ : [
                HAnimJoint(
                  name_ : SFString('l_shoulder'),
                  DEF_ : SFString('PoseJoint_l_shoulder'),
                  description_ : SFString('left shoulder'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(0.5)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_shoulder'),
                  DEF_ : SFString('PoseJoint_r_shoulder'),
                  description_ : SFString('right shoulder'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-1), SFDouble(0.5)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

            HAnimPose(
              name_ : SFString('TouchDown'),
              DEF_ : SFString('TouchDown_Pose'),
              description_ : SFString('arms and legs stretched outward providing a TouchDown gesture'),
              loa_ : 1,
              transitionDuration_ : 1.2,
              children_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-0.698132)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_hip'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(1), SFDouble(1), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_knee'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_talocrural'),
                  rotation_ : SFRotation([SFDouble(-0.2), SFDouble(0), SFDouble(0.1), SFDouble(0.225)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_hip'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(-1), SFDouble(-1), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_knee'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_talocrural'),
                  rotation_ : SFRotation([SFDouble(-0.2), SFDouble(0), SFDouble(0.1), SFDouble(0.25)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('vl5'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(0.01), SFDouble(0.2)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('vt10'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(0.01), SFDouble(0.1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('vc4'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-0.01), SFDouble(0.15)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_shoulder'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0.5), SFDouble(1), SFDouble(2)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_elbow'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('l_radiocarpal'),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_shoulder'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(-0.5), SFDouble(-1), SFDouble(2.6)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_elbow'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                HAnimJoint(
                  name_ : SFString('r_radiocarpal'),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

            HAnimPose(
              name_ : SFString('I'),
              DEF_ : SFString('I_Pose'),
              description_ : SFString('arms and legs straight down default binding pose for baseline Humanoid'),
              loa_ : 1,
              transitionDuration_ : 1.5,
              /*not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose*/),

            HAnimPose(
              name_ : SFString('H'),
              DEF_ : SFString('H_Pose'),
              description_ : SFString('TODO experimental pose not yet implemented'),
              enabled_ : false,
              transitionDuration_ : 1.4,
              loa_ : -1,
              /*TODO define poseJoint HAnimJoint nodes*/),

            HAnimPose(
              name_ : SFString('FaceLeft'),
              DEF_ : SFString('FaceLeft_Pose'),
              description_ : SFString('Only modify humanoid_root Joint node to face left'),
              loa_ : 0,
              transitionDuration_ : 1.1,
              children_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('FaceLeft_humanoid_root'),
                  description_ : SFString('Only rotate the model'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.570796)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

            HAnimPose(
              name_ : SFString('FaceRight'),
              DEF_ : SFString('FaceRight_Pose'),
              description_ : SFString('Only modify humanoid_root Joint node to face right'),
              loa_ : 0,
              transitionDuration_ : 1.1,
              children_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('FaceRight_humanoid_root'),
                  description_ : SFString('Only rotate the model'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.570796)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

            Group(
              DEF_ : SFString('InterfaceButtonsGroup'),
              children_ : [
                Transform(
                  DEF_ : SFString('DisplayHeader'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("HAnimPosePrototype example implementation")]),
                          fontStyle_ : 
                            FontStyle(
                              DEF_ : SFString('HeaderFont'),
                              family_ : MFString([SFString("SANS")]),
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                              size_ : 0.15,
                              style_ : SFString('BOLD'))),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('PoseTextAppearance'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.5), SFDouble(0.3)]))))),

                Transform(
                  DEF_ : SFString('T_PoseInterface'),
                  translation_ : SFVec3f([SFDouble(-1.5), SFDouble(1.5), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("\"T\" Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              DEF_ : SFString('SharedFont'),
                              family_ : MFString([SFString("SANS")]),
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                              size_ : 0.1,
                              style_ : SFString('BOLD'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('TransparentAppearance'),
                          material_ : 
                            Material(
                              transparency_ : 0.8)),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.45), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('T_PoseTouchSensor'),
                      description_ : SFString('select to move shoulders to \"T\" pose, leave other joints unchanged')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('T_PoseTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('T_Pose'))]),

                Transform(
                  DEF_ : SFString('A_PoseInterface'),
                  translation_ : SFVec3f([SFDouble(-1.5), SFDouble(1), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("\"A\" Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.45), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('A_PoseTouchSensor'),
                      description_ : SFString('select to move shoulders to \"A\" pose, leave other joints unchanged')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('A_PoseTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('A_Pose'))]),

                Transform(
                  DEF_ : SFString('TouchDown_PoseInterface'),
                  translation_ : SFVec3f([SFDouble(-1.5), SFDouble(0.5), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("TouchDown Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.85), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('TouchDown_PoseTouchSensor'),
                      description_ : SFString('select to transition all joints to TouchDown pose')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('TouchDown_PoseTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('TouchDown_Pose'))]),

                Transform(
                  DEF_ : SFString('I_PoseInterface'),
                  translation_ : SFVec3f([SFDouble(-1.5), SFDouble(0), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("\"I\" Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.45), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('I_PoseTouchSensor'),
                      description_ : SFString('select to transition all joints to \"I\" pose')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('I_PoseTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('I_Pose'))]),

                Transform(
                  DEF_ : SFString('FaceLeftPoseInterface'),
                  translation_ : SFVec3f([SFDouble(1.5), SFDouble(1.5), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Face Left Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.9), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('FaceLeftTouchSensor'),
                      description_ : SFString('select to rotate body and Face Left, leave other joints unchanged')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('FaceLeftTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('FaceLeft_Pose'))]),

                Transform(
                  DEF_ : SFString('FaceRightPoseInterface'),
                  translation_ : SFVec3f([SFDouble(1.5), SFDouble(1), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Face Right Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance'))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.9), SFDouble(0.2), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('FaceRightTouchSensor'),
                      description_ : SFString('select to rotate body and Face Right, leave other joints unchanged')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('FaceRightTouchSensor'),
                      toField_ : SFString('commencePose'),
                      toNode_ : SFString('FaceRight_Pose'))]),

                Transform(
                  DEF_ : SFString('AnimatePosesInterface'),
                  translation_ : SFVec3f([SFDouble(1.5), SFDouble(0.5), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Direct animation"), SFString("to, from \"I\" Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('AnimationTextAppearance'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.2), SFDouble(0.3)])))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.9), SFDouble(0.25), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('AnimatePosesTouchSensor'),
                      description_ : SFString('select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events')),
                  /*cycleInterval=4 also hard-coded in script execution message*/

                    TimeSensor(
                      DEF_ : SFString('AnimatePosesClock'),
                      cycleInterval_ : 4,
                      description_ : SFString('directly animate several poses')),

                    ScalarInterpolator(
                      DEF_ : SFString('AnimatePosesLoopInterpolator'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.05), SFFloat(0.45), SFFloat(0.55), SFFloat(0.95), SFFloat(1)]),
                      keyValue_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(1), SFFloat(1), SFFloat(0), SFFloat(0)])),

                    ROUTE(
                      fromField_ : SFString('touchTime'),
                      fromNode_ : SFString('AnimatePosesTouchSensor'),
                      toField_ : SFString('startTime'),
                      toNode_ : SFString('AnimatePosesClock')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('AnimatePosesClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('AnimatePosesLoopInterpolator')),

                    ROUTE(
                      fromField_ : SFString('value_changed'),
                      fromNode_ : SFString('AnimatePosesLoopInterpolator'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('I_Pose'))]),

                Transform(
                  DEF_ : SFString('ResetDefaultPoseInterface'),
                  translation_ : SFVec3f([SFDouble(1.5), SFDouble(0), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Reset All Joints"), SFString("to Default \"I\" Pose")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('SharedFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('AnimationTextAppearance'))),
                  child_ : 
                    Shape(
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TransparentAppearance')),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(0.9), SFDouble(0.25), SFDouble(0.001)]))),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('ResetPoseTouchSensor'),
                      description_ : SFString('select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('ResetPoseTouchSensor'),
                      toField_ : SFString('resetAllJoints'),
                      toNode_ : SFString('FaceLeft_Pose'))])]),

            Group(
              DEF_ : SFString('HandleInlineLoadsensorRouting'),
              children_ : [
                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('A_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('H_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('I_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('T_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('FaceLeft_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('FaceRight_Pose')),

                ROUTE(
                  fromField_ : SFString('isLoaded'),
                  fromNode_ : SFString('HumanoidInlineLoadSensor'),
                  toField_ : SFString('isLoaded'),
                  toNode_ : SFString('TouchDown_Pose'))]),

            HAnimHumanoid(
              name_ : SFString('HumanoidStub'),
              info_ : MFString([SFString("humanoidVersion=2.0")]),
              version_ : SFString('2.0'),
              children_ : [
                HAnimPose(
                  USE_ : SFString('A_Pose')),

                HAnimPose(
                  USE_ : SFString('T_Pose')),

                HAnimPose(
                  USE_ : SFString('I_Pose')),

                HAnimPose(
                  USE_ : SFString('H_Pose')),

                HAnimPose(
                  USE_ : SFString('FaceLeft_Pose')),

                HAnimPose(
                  USE_ : SFString('FaceRight_Pose')),

                HAnimPose(
                  USE_ : SFString('TouchDown_Pose'))])]));
void main() { exit(0); }
