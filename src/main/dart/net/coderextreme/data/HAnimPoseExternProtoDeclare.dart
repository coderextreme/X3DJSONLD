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
              content_ : SFString('HAnimPoseExternProtoDeclare.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('1 November 2025')),

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
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              DEF_ : SFString('ModelInfo'),
              info_ : MFString([SFString("Design to illustrate a potential HAnimPose node")]),
              title_ : SFString('HAnimPoseExternProtoDeclare')),

            Background(
              skyColor_ : MFColor([SFColor(0.6), SFColor(0.6), SFColor(0.8)])),

            NavigationInfo(),

            ExternProtoDeclare(
              name_ : SFString('HAnimPose'),
              appinfo_ : SFString('Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.'),
              url_ : MFString([SFString("Filename.x3d#HAnimPose"), SFString("https://some.address.org/Filename.x3d#HAnimPose")]),
              field_ : [
                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('parentHAnimHumanoid'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('HAnimHumanoid for this Pose to act upon')),

                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('name'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('name of this pose')),

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
                  appinfo_ : SFString('default value true')),

                field(
                  type_ : SFString("SFInt32"),
                  name_ : SFString('loa'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('default is no loa')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('transitionDuration'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('how many seconds to achieve the pose')),

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
                  appinfo_ : SFString('debug trace to Browser output console this is a local prototype field'))]),

            Viewpoint(
              description_ : SFString('HAnimPoseExternProtoDeclare description'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(4)])),

            Transform(
              DEF_ : SFString('DisplayHeader1'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              children_ : [
                Anchor(
                  description_ : SFString('go to HAnimPoseExternProtoDeclareIndex page'),
                  parameter_ : MFString([SFString("target=_blank")]),
                  url_ : MFString([SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html")]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Utility scene"), SFString("HAnimPoseExternProtoDeclare.x3d")]),
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
                              diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.3), SFDouble(0.5)])))),

                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(3.5), SFDouble(0.5), SFDouble(0.001)])),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('TransparentAppearance'),
                          material_ : 
                            Material(
                              transparency_ : 1)))])]),

            Transform(
              DEF_ : SFString('DisplayHeader2'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
              children_ : [
                Anchor(
                  description_ : SFString('go to HAnimPosePrototypeIndex page'),
                  parameter_ : MFString([SFString("target=_blank")]),
                  url_ : MFString([SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html")]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("This model supports"), SFString("HAnimPosePrototype.x3d")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('HeaderFont'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('PoseTextAppearance')))]),
              child_ : 
                Shape(
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(2.6), SFDouble(0.5), SFDouble(0.001)])),
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('TransparentAppearance')))])]));
void main() { exit(0); }
