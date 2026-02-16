// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HAnimPosePrototype.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('2 October 2025')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 December 2025')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe Williams')),

            meta(
              name_ : SFString('contributor'),
              content_ : SFString('Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimPosePrototype.console.txt')),

            meta(
              name_ : SFString('MovingImage'),
              content_ : SFString('demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnimPoseExampleTouchDown.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnimPoseExampleTouchDownFaceLeftAPose.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleBoxMan1.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleBoxMan2.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleJoeKick.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleJoeSkeletonSkinSite.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter01Jin.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter02Chul.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter03Hyun.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter04Young.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter05Ju.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter06Ga.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter07No.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter08Da.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter09Ru.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter10Mi.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter11Min.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/HAnimPoseExampleKoreanCharacter12Sun.png')),

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
              name_ : SFString('reference'),
              content_ : SFString('Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('earlier version of this prototype: originals/HAnimPosePreliminary.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              DEF_ : SFString('ModelInfo'),
              info_ : MFString([SFString("Design to illustrate a potential HAnimPose node")]),
              title_ : SFString('HAnimPosePrototype.x3d')),

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
                  url_ : MFString([SFString("../Skin/BoxMan2.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d")])),
              /*Note that the following importedDEF must match the EXPORT name found in remote file*/

                IMPORT(
                  aS_ : SFString('HumanoidImported'),
                  importedDEF_ : SFString('BoxMan2'),
                  inlineDEF_ : SFString('HumanoidInline')),

                LoadSensor(
                  DEF_ : SFString('HumanoidInlineLoadSensor'),
                  timeOut_ : 2,
                  children_ : [
                    Inline(
                      USE_ : SFString('HumanoidInline'))])]),

            ProtoDeclare(
              name_ : SFString('HAnimPose'),
              appinfo_ : SFString('Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('parentHAnimHumanoid'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('HAnimHumanoid for this Pose to act upon'),
                      /*HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation*/),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('name'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('name of this pose'),
                      value_ : SFString('newPoseName')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('joint values to apply to HAnimHumanoid'),
                      /*initializating Joint nodes (if any) go here*/),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('description'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('explanation of purpose')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('default value true'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('loa'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('default is no loa'),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('transitionDuration'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('how many seconds to achieve the pose'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('metadata'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('single Metadata* node')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isActive'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('event indicating when pose transition is active')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('commencePose'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('resetAllJoints'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('reset the skeleton to I pose with all joints zeroed')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('set_fraction'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('allows transition to proceed incrementally from fraction [0..10')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('set_startTime'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('starts the animation clock')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isLoaded'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('debug trace to Browser output console this is a local prototype field'),
                      value_ : SFString('true'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    TimeSensor(
                      DEF_ : SFString('ClockTimeSensor'),
                      description_ : SFString('control timing of pose animation when triggered'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('cycleInterval'),
                              protoField_ : SFString('transitionDuration')),

                            connect(
                              nodeField_ : SFString('isActive'),
                              protoField_ : SFString('isActive')),

                            connect(
                              nodeField_ : SFString('startTime'),
                              protoField_ : SFString('set_startTime')),

                            connect(
                              nodeField_ : SFString('metadata'),
                              protoField_ : SFString('metadata'))])),

                    TimeSensor(
                      DEF_ : SFString('ResetTimeSensor'),
                      description_ : SFString('control timing of skeleton reset to \"A\" pose when triggered'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('cycleInterval'),
                              protoField_ : SFString('transitionDuration')),

                            connect(
                              nodeField_ : SFString('startTime'),
                              protoField_ : SFString('set_startTime')),
                          /*no need to report isActive since that would be duplicative*/])),

                    Group(
                      DEF_ : SFString('PoseInterpolatorGroup'),
                      /*interpolators generated by prototype script appear here at runtime*/),

                    Group(
                      DEF_ : SFString('ResetInterpolatorGroup'),
                      /*interpolators generated by prototype script appear here at runtime*/),

                    Script(
                      DEF_ : SFString('HAnimPoseScript'),
                      directOutput_ : true,
                      url_ : MFString([SFString("HAnimPosePrototypeScript.js"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js")]),
                      field_ : [
                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('parentHAnimHumanoid'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Humanoid for this Pose to act upon'),
                          /*initialization node (if any) goes here*/),

                        field(
                          type_ : SFString("SFString"),
                          name_ : SFString('name'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('name of this pose')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('loa'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('default is no loa')),

                        field(
                          type_ : SFString("SFString"),
                          name_ : SFString('description'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('explanation of purpose')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('enabled'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('default value true')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('resetAllJoints'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('reset the skeleton to I pose with all joints zeroed')),

                        field(
                          type_ : SFString("MFNode"),
                          name_ : SFString('children'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('joint values to apply to HAnimHumanoid'),
                          /*initializating Joint nodes (if any) go here*/),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('transitionDuration'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('how many seconds to achieve the pose')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('commencePose'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('set_fraction'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('allows transition to proceed incrementally from fraction [0..10')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('set_startTime'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('starts the animation clock')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('isLoaded'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('traceEnabled'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('debug trace to Browser output console')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('numberPoseJoints'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('number of joints found in children field'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('numberSkeletonJoints'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('number of joints found in Humanoid'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("MFNode"),
                          name_ : SFString('jointOrientationInterpolators'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('OrientationInterpolator node array matching number of children'),
                          /*initializating Joint nodes (if any) go here*/)],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('parentHAnimHumanoid'),
                              protoField_ : SFString('parentHAnimHumanoid')),

                            connect(
                              nodeField_ : SFString('name'),
                              protoField_ : SFString('name')),

                            connect(
                              nodeField_ : SFString('loa'),
                              protoField_ : SFString('loa')),

                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('resetAllJoints'),
                              protoField_ : SFString('resetAllJoints')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children')),

                            connect(
                              nodeField_ : SFString('transitionDuration'),
                              protoField_ : SFString('transitionDuration')),

                            connect(
                              nodeField_ : SFString('commencePose'),
                              protoField_ : SFString('commencePose')),

                            connect(
                              nodeField_ : SFString('set_fraction'),
                              protoField_ : SFString('set_fraction')),

                            connect(
                              nodeField_ : SFString('set_startTime'),
                              protoField_ : SFString('set_startTime')),

                            connect(
                              nodeField_ : SFString('isLoaded'),
                              protoField_ : SFString('isLoaded')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]))])),

            Viewpoint(
              description_ : SFString('HAnimPose for HumanoidInline IMPORT model'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(4)])),
          /*no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...*/

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('T_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('T')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  /*debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('1')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('arms stretched outward and level similar to letter T')),

                fieldValue(
                  name_ : SFString('children'),
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
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),
                  /*test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/*/]),

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.3'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('A_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('A')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('1')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('arms stretched outward and downward similar to letter A')),

                fieldValue(
                  name_ : SFString('children'),
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

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.2')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('TouchDown_Pose'),
              /*thanks Joe*/
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('TouchDown')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('1')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('arms and legs stretched outward providing a TouchDown gesture')),

                fieldValue(
                  name_ : SFString('children'),
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

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.2')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('I_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('I')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('1')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('arms and legs straight down default binding pose for baseline Humanoid')),

                fieldValue(
                  name_ : SFString('children'),
                  /*not defining any children equals the default \"I\" pose*/),

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.5')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('H_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('H')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('false')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('TODO experimental pose not yet implemented')),

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.4')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true')),
              /*<fieldValue name='loa' value='1'/>*/]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('FaceLeft_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('FaceLeft')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('0')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('Only modify humanoid_root Joint node to face left')),

                fieldValue(
                  name_ : SFString('children'),
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      DEF_ : SFString('FaceLeft_humanoid_root'),
                      description_ : SFString('Only rotate the model'),
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.570796)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.1')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              DEF_ : SFString('FaceRight_Pose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('FaceRight')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('parentHAnimHumanoid'),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children_ : [
                    HAnimHumanoid(
                      USE_ : SFString('HumanoidImported'))]),

                fieldValue(
                  name_ : SFString('loa'),
                  value_ : SFString('0')),

                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('Only modify humanoid_root Joint node to face right')),

                fieldValue(
                  name_ : SFString('children'),
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      DEF_ : SFString('FaceRight_humanoid_root'),
                      description_ : SFString('Only rotate the model'),
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.570796)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))]),

                fieldValue(
                  name_ : SFString('transitionDuration'),
                  value_ : SFString('1.1')),

                fieldValue(
                  name_ : SFString('traceEnabled'),
                  value_ : SFString('true'))]),

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
                  toNode_ : SFString('TouchDown_Pose'))])]));
void main() { exit(0); }
