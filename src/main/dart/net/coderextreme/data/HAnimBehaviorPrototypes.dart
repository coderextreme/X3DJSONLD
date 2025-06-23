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
              content_ : SFString('HAnimBehaviorPrototypes.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('2 May 2006')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('4 July 2020')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Web3D2007BlendedBehaviorsChangeableBodies.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('InterchangableActorsViaDynamicRoutingPrototypes.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ApaydinThesis.pdf')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D HAnim humanoid animation behaviors')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development. should joint translations be exposed? upgrade to HAnim v2.2')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d')),

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
              title_ : SFString('HAnimBehaviorPrototypes.x3d')),

            ProtoDeclare(
              name_ : SFString('HAnimBehavior'),
              appinfo_ : SFString('The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.'),
              documentation_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/'),
              ProtoInterface_ : 
                ProtoInterface(
                  /*supported Level of Articulation (LOA)*/
                  /*shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations*/
                  /*TODO: add other X3D 3.0 TimeSensor fields (pause etc.)*/
                  /*Not supported: animated translation of individual joints*/
                  /*pass in key/keyValue array pairs for single PositionInterpolator*/
                  /*pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint*/
                  field_ : [
                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('supportedLOA'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.'),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('is this behavior enabled?'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleInterval'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('how long do these interpolators take to execute?'),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('loop'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('startTime'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('when time now >= startTime isActive becomes true and TimeSensor becomes active'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('stopTime'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('pauseTime'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('resumeTime'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleTime'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isActive'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('isActive true/false events are sent when TimeSensor starts/stops running')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isPaused'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('isPaused true/false events are sent when TimeSensor is paused/resumed')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('elapsedTime'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('time'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('continuously sends the absolute time (since January 1 1970)')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('fraction_changed'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.')),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('HumanoidRoot_translation_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFVec3f"),
                      name_ : SFString('HumanoidRoot_translation_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('HumanoidRoot_translation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('HumanoidRoot_rotation_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('HumanoidRoot_rotation_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('HumanoidRoot_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c6_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c6_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c6_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('c7_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('c7_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('c7_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('jaw_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('jaw_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('jaw_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_acromioclavicular_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_acromioclavicular_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_acromioclavicular_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ankle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ankle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ankle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_calf_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_calf_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_calf_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_clavicle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_clavicle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_clavicle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_elbow_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_elbow_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_elbow_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyeball_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyeball_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyeball_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyeball_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyeball_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyeball_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyebrow_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyebrow_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyebrow_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyebrow_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyebrow_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyebrow_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyelid_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyelid_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyelid_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_eyelid_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_eyelid_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_eyelid_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_forearm_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_forearm_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_forearm_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_forefoot_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_forefoot_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_forefoot_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_hand_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_hand_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_hand_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_hindfoot_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_hindfoot_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_hindfoot_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_hip_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_hip_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_hip_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_index_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_index_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_index_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_knee_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_knee_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_knee_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_metatarsal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_metatarsal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_metatarsal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middistal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middistal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middistal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_middle_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_middle_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_middle_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_midproximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_midproximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_midproximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_midtarsal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_midtarsal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_midtarsal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_pinky_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_pinky_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_pinky_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_ring_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_ring_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ring_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_scapula_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_scapula_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_scapula_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_shoulder_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_shoulder_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_shoulder_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_sternoclavicular_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_sternoclavicular_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_sternoclavicular_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_subtalar_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_subtalar_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_subtalar_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thigh_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thigh_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thigh_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_thumb_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_thumb_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_thumb_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_upperarm_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_upperarm_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_upperarm_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('l_wrist_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('l_wrist_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_wrist_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('pelvis_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('pelvis_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('pelvis_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_acromioclavicular_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_acromioclavicular_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_acromioclavicular_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ankle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ankle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ankle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_calf_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_calf_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_calf_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_clavicle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_clavicle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_clavicle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_elbow_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_elbow_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_elbow_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyeball_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyeball_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyeball_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyeball_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyeball_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyeball_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyebrow_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyebrow_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyebrow_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyebrow_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyebrow_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyebrow_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyelid_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyelid_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyelid_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_eyelid_joint_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_eyelid_joint_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_eyelid_joint_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_forearm_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_forearm_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_forearm_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_forefoot_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_forefoot_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_forefoot_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_hand_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_hand_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_hand_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_hindfoot_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_hindfoot_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_hindfoot_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_hip_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_hip_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_hip_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_index_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_index_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_index_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_knee_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_knee_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_knee_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_metatarsal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_metatarsal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_metatarsal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middistal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middistal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middistal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_middle_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_middle_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_middle_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_midproximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_midproximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_midproximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_midtarsal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_midtarsal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_midtarsal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_pinky_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_pinky_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_pinky_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring0_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring0_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring0_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring_middle_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring_middle_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring_middle_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_ring_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_ring_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ring_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_scapula_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_scapula_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_scapula_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_shoulder_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_shoulder_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_shoulder_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_sternoclavicular_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_sternoclavicular_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_sternoclavicular_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_subtalar_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_subtalar_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_subtalar_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thigh_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thigh_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thigh_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb_distal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb_distal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb_distal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb_metacarpal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb_metacarpal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb_metacarpal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_thumb_proximal_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_thumb_proximal_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_thumb_proximal_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_upperarm_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_upperarm_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_upperarm_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('r_wrist_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('r_wrist_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_wrist_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('sacroiliac_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('sacroiliac_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('sacroiliac_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('sacrum_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('sacrum_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('sacrum_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('skull_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('skull_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('skull_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('skullbase_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('skullbase_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('skullbase_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t10_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t10_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t10_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t11_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t11_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t11_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t12_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t12_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t12_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t6_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t6_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t6_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t7_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t7_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t7_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t8_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t8_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t8_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('t9_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('t9_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('t9_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('temporomandibular_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('temporomandibular_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('temporomandibular_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc6_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc6_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc6_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vc7_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vc7_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vc7_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vl1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vl1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vl2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vl2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vl3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vl3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vl4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vl4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vl5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vl5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt10_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt10_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt10_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt11_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt11_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt11_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt12_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt12_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt12_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt1_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt1_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt1_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt2_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt2_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt2_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt3_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt3_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt3_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt4_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt4_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt4_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt5_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt5_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt5_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt6_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt6_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt6_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt7_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt7_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt7_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt8_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt8_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt8_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('vt9_key'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("MFRotation"),
                      name_ : SFString('vt9_keyValue'),
                      accessType_ : SFString("inputOutput"),
                      /*no default value*/),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vt9_changed'),
                      accessType_ : SFString("outputOnly"))]),
              ProtoBody_ : 
                ProtoBody(
                  /*design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators*/
                  children_ : [
                    TimeSensor(
                      DEF_ : SFString('BehaviorClock'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('cycleInterval'),
                              protoField_ : SFString('cycleInterval')),

                            connect(
                              nodeField_ : SFString('loop'),
                              protoField_ : SFString('loop')),

                            connect(
                              nodeField_ : SFString('startTime'),
                              protoField_ : SFString('startTime')),

                            connect(
                              nodeField_ : SFString('stopTime'),
                              protoField_ : SFString('stopTime')),

                            connect(
                              nodeField_ : SFString('pauseTime'),
                              protoField_ : SFString('pauseTime')),

                            connect(
                              nodeField_ : SFString('resumeTime'),
                              protoField_ : SFString('resumeTime')),

                            connect(
                              nodeField_ : SFString('cycleTime'),
                              protoField_ : SFString('cycleTime')),

                            connect(
                              nodeField_ : SFString('isActive'),
                              protoField_ : SFString('isActive')),

                            connect(
                              nodeField_ : SFString('isPaused'),
                              protoField_ : SFString('isPaused')),

                            connect(
                              nodeField_ : SFString('elapsedTime'),
                              protoField_ : SFString('elapsedTime')),

                            connect(
                              nodeField_ : SFString('time'),
                              protoField_ : SFString('time')),

                            connect(
                              nodeField_ : SFString('fraction_changed'),
                              protoField_ : SFString('fraction_changed'))])),
                  /*note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless*/

                    Switch(
                      DEF_ : SFString('SupportedLoaHolder1'),
                      whichChoice_ : -1,
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('whichChoice'),
                              protoField_ : SFString('supportedLOA'))])),

                    PositionInterpolator(
                      DEF_ : SFString('HumanoidRootPI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('HumanoidRoot_translation_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('HumanoidRoot_translation_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('HumanoidRoot_translation_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('HumanoidRootPI')),

                    OrientationInterpolator(
                      DEF_ : SFString('HumanoidRootOI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('HumanoidRoot_rotation_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('HumanoidRoot_rotation_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('HumanoidRoot_rotation_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('HumanoidRootOI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c6_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c6_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c6_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c6_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c6_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('c7_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('c7_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('c7_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('c7_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('c7_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('jaw_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('jaw_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('jaw_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('jaw_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('jaw_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_acromioclavicular_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_acromioclavicular_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_acromioclavicular_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_acromioclavicular_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_acromioclavicular_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ankle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ankle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ankle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ankle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_calf_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_calf_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_calf_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_calf_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_calf_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_clavicle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_clavicle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_clavicle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_clavicle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_clavicle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_elbow_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_elbow_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_elbow_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_elbow_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyeball_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyeball_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyeball_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyeball_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyeball_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyeball_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyeball_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyeball_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyeball_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyeball_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyebrow_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyebrow_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyebrow_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyebrow_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyebrow_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyebrow_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyebrow_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyebrow_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyebrow_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyebrow_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyelid_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyelid_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyelid_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyelid_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyelid_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_eyelid_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_eyelid_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_eyelid_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_eyelid_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_eyelid_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_forearm_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_forearm_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_forearm_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_forearm_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_forearm_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_forefoot_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_forefoot_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_forefoot_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_forefoot_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_forefoot_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hand_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_hand_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_hand_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_hand_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_hand_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hindfoot_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_hindfoot_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_hindfoot_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_hindfoot_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_hindfoot_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_hip_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_hip_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_hip_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_hip_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_index_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_index_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_index_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_index_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_index_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_knee_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_knee_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_knee_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_knee_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_metatarsal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_metatarsal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_metatarsal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_metatarsal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_metatarsal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middistal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middistal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middistal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middistal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middistal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_middle_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_middle_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_middle_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_middle_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_middle_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_midproximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_midproximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_midproximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_midproximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_midproximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_midtarsal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_midtarsal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_midtarsal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_midtarsal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_midtarsal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_pinky_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_pinky_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_pinky_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_pinky_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_pinky_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ring_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_ring_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_ring_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_ring_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_ring_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_scapula_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_scapula_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_scapula_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_scapula_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_scapula_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_shoulder_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_shoulder_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_shoulder_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_shoulder_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_sternoclavicular_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_sternoclavicular_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_sternoclavicular_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_sternoclavicular_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_sternoclavicular_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_subtalar_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_subtalar_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_subtalar_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_subtalar_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_subtalar_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thigh_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thigh_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thigh_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thigh_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thigh_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_thumb_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_thumb_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_thumb_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_thumb_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_thumb_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_upperarm_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_upperarm_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_upperarm_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_upperarm_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_upperarm_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('l_wrist_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('l_wrist_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('l_wrist_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('l_wrist_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('pelvis_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('pelvis_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('pelvis_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('pelvis_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('pelvis_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_acromioclavicular_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_acromioclavicular_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_acromioclavicular_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_acromioclavicular_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_acromioclavicular_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ankle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ankle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ankle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ankle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_calf_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_calf_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_calf_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_calf_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_calf_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_clavicle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_clavicle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_clavicle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_clavicle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_clavicle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_elbow_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_elbow_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_elbow_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_elbow_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyeball_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyeball_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyeball_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyeball_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyeball_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyeball_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyeball_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyeball_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyeball_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyeball_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyebrow_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyebrow_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyebrow_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyebrow_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyebrow_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyebrow_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyebrow_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyebrow_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyebrow_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyebrow_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyelid_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyelid_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyelid_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyelid_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyelid_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_eyelid_joint_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_eyelid_joint_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_eyelid_joint_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_eyelid_joint_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_eyelid_joint_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_forearm_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_forearm_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_forearm_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_forearm_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_forearm_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_forefoot_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_forefoot_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_forefoot_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_forefoot_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_forefoot_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hand_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_hand_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_hand_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_hand_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_hand_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hindfoot_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_hindfoot_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_hindfoot_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_hindfoot_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_hindfoot_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_hip_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_hip_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_hip_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_hip_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_index_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_index_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_index_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_index_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_index_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_knee_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_knee_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_knee_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_knee_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_metatarsal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_metatarsal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_metatarsal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_metatarsal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_metatarsal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middistal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middistal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middistal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middistal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middistal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_middle_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_middle_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_middle_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_middle_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_middle_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_midproximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_midproximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_midproximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_midproximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_midproximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_midtarsal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_midtarsal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_midtarsal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_midtarsal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_midtarsal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_pinky_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_pinky_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_pinky_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_pinky_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_pinky_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring0_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring0_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring0_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring0_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring0_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring_middle_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring_middle_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring_middle_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring_middle_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring_middle_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_ring_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_ring_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_ring_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_ring_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_ring_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_scapula_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_scapula_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_scapula_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_scapula_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_scapula_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_shoulder_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_shoulder_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_shoulder_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_shoulder_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_sternoclavicular_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_sternoclavicular_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_sternoclavicular_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_sternoclavicular_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_sternoclavicular_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_subtalar_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_subtalar_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_subtalar_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_subtalar_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_subtalar_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thigh_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thigh_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thigh_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thigh_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thigh_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb_distal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb_distal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb_distal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb_distal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb_distal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb_metacarpal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb_metacarpal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb_metacarpal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb_metacarpal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb_metacarpal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_thumb_proximal_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_thumb_proximal_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_thumb_proximal_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_thumb_proximal_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_thumb_proximal_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_upperarm_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_upperarm_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_upperarm_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_upperarm_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_upperarm_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('r_wrist_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('r_wrist_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('r_wrist_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('r_wrist_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('sacroiliac_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('sacroiliac_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('sacroiliac_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('sacroiliac_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('sacroiliac_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('sacrum_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('sacrum_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('sacrum_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('sacrum_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('sacrum_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('skull_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('skull_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('skull_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('skull_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('skull_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('skullbase_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('skullbase_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('skullbase_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('skullbase_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('skullbase_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t6_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t6_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t6_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t6_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t6_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t7_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t7_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t7_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t7_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t7_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t8_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t8_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t8_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t8_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t8_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t9_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t9_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t9_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t9_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t9_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t10_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t10_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t10_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t10_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t10_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t11_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t11_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t11_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t11_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t11_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('t12_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('t12_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('t12_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('t12_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('t12_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('temporomandibular_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('temporomandibular_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('temporomandibular_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('temporomandibular_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('temporomandibular_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc6_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc6_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc6_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc6_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc6_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vc7_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vc7_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vc7_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vc7_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vc7_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vl1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vl1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vl1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vl1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vl1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vl2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vl2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vl2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vl2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vl2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vl3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vl3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vl3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vl3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vl3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vl4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vl4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vl4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vl4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vl4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vl5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vl5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vl5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vl5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vl5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt1_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt1_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt1_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt1_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt1_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt2_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt2_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt2_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt2_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt2_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt3_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt3_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt3_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt3_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt3_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt4_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt4_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt4_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt4_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt4_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt5_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt5_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt5_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt5_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt5_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt6_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt6_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt6_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt6_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt6_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt7_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt7_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt7_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt7_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt7_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt8_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt8_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt8_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt8_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt8_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt9_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt9_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt9_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt9_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt9_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt10_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt10_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt10_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt10_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt10_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt11_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt11_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt11_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt11_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt11_OI')),

                    OrientationInterpolator(
                      DEF_ : SFString('vt12_OI'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('key'),
                              protoField_ : SFString('vt12_key')),

                            connect(
                              nodeField_ : SFString('keyValue'),
                              protoField_ : SFString('vt12_keyValue')),

                            connect(
                              nodeField_ : SFString('value_changed'),
                              protoField_ : SFString('vt12_changed'))])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('BehaviorClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('vt12_OI'))])),

            ProtoDeclare(
              name_ : SFString('HAnimBodyBehaviorChooser'),
              appinfo_ : SFString('The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.'),
              ProtoInterface_ : 
                ProtoInterface(
                  /*TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs*/
                  /*accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints*/
                  /*shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs*/
                  /*TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName*/
                  /*TODO: consider addBody, removeBody, addBehavior, removeBehavior*/
                  /*TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName*/
                  field_ : [
                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('supportedLOA'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.'),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('HumanoidArray'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('[HAnimHumanoid] nodes only'),
                      /*default NULL*/),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('whichBody'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('whichBody is selected default is initial member of HumanoidArray'),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('set_whichBody'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('whichBody is selected default is none')),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('whichBody_changed'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('whichBody is selected default is none')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('hAnimBehaviorNodes'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.'),
                      /*default NULL*/),

                    field(
                      type_ : SFString("MFBool"),
                      name_ : SFString('enabledBehaviorsArray'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('indicate which HAnimBehavior nodes are activated, empty indicates all enabled true'),
                      /*no default values*/),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('enableBehavior'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('enable corresponding behavior identified by index number')),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('disableBehavior'),
                      accessType_ : SFString("inputOnly"),
                      appinfo_ : SFString('disable corresponding behavior identified by index number')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('startTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('stopTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Switch(
                      DEF_ : SFString('BodySwitch'),
                      whichChoice_ : -1,
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('whichChoice'),
                              protoField_ : SFString('whichBody')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('HumanoidArray'))])),
                  /*note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless*/

                    Group(
                      DEF_ : SFString('BehaviorArrayHolder'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('hAnimBehaviorNodes'))])),

                    TimeSensor(
                      DEF_ : SFString('TimeSensorHolderStartStopTimes'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('startTime'),
                              protoField_ : SFString('startTime')),

                            connect(
                              nodeField_ : SFString('stopTime'),
                              protoField_ : SFString('stopTime'))])),

                    Switch(
                      DEF_ : SFString('SupportedLoaHolder2'),
                      whichChoice_ : -1,
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('whichChoice'),
                              protoField_ : SFString('supportedLOA'))])),

                    Script(
                      DEF_ : SFString('BehaviorSelectionScript'),
                      directOutput_ : true,
                      url_ : MFString([SFString("HAnimBehaviorPrototypesScript.js"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js")]),
                      field_ : [
                        field(
                          type_ : SFString("MFNode"),
                          name_ : SFString('HumanoidArray'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('[HAnimHumanoid] nodes only')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('whichBody'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('whichBody is selected default is none')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('set_whichBody'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('whichBody is selected default is none')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('whichBody_changed'),
                          accessType_ : SFString("outputOnly"),
                          appinfo_ : SFString('whichBody is selected default is none')),

                        field(
                          type_ : SFString("MFNode"),
                          name_ : SFString('hAnimBehaviorNodes'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('[HAnimBehavior] nodes only'),
                          /*TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed*/),

                        field(
                          type_ : SFString("MFBool"),
                          name_ : SFString('enabledBehaviorsArray'),
                          accessType_ : SFString("initializeOnly")),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('enableBehavior'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('enable corresponding behavior')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('disableBehavior'),
                          accessType_ : SFString("inputOnly"),
                          appinfo_ : SFString('enable corresponding behavior')),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('timeSensorNode'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            TimeSensor(
                              USE_ : SFString('TimeSensorHolderStartStopTimes'))]),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('previousBodyIndex'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('remember prior body index to avoid unnecessary ROUTE teardown and creation'),
                          value_ : SFString('-1')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('traceEnabled'),
                          accessType_ : SFString("initializeOnly"),
                          value_ : SFString('true'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('HumanoidArray'),
                              protoField_ : SFString('HumanoidArray')),

                            connect(
                              nodeField_ : SFString('whichBody'),
                              protoField_ : SFString('whichBody')),

                            connect(
                              nodeField_ : SFString('set_whichBody'),
                              protoField_ : SFString('set_whichBody')),

                            connect(
                              nodeField_ : SFString('whichBody_changed'),
                              protoField_ : SFString('whichBody_changed')),

                            connect(
                              nodeField_ : SFString('hAnimBehaviorNodes'),
                              protoField_ : SFString('hAnimBehaviorNodes')),

                            connect(
                              nodeField_ : SFString('enabledBehaviorsArray'),
                              protoField_ : SFString('enabledBehaviorsArray')),

                            connect(
                              nodeField_ : SFString('enableBehavior'),
                              protoField_ : SFString('enableBehavior')),

                            connect(
                              nodeField_ : SFString('disableBehavior'),
                              protoField_ : SFString('disableBehavior'))]))])),
          /*TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.*/

            ProtoInstance(
              name_ : SFString('HAnimBehavior'),
              DEF_ : SFString('BehaviorTest1'),
              /*only one PositionInterpolator key/keyValue definition for entire humanoid - optional*/
              /*must have paired overrides of each key/keyValue array being defined*/
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('HumanoidRoot_translation_key'),
                  value_ : SFString('0 0.25 0.5 0.75 1')),

                fieldValue(
                  name_ : SFString('HumanoidRoot_translation_keyValue'),
                  value_ : SFString('0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50')),

                fieldValue(
                  name_ : SFString('r_ankle_key'),
                  value_ : SFString('0 0.5 1')),

                fieldValue(
                  name_ : SFString('r_ankle_keyValue'),
                  value_ : SFString('0 1 0 0 0 1 0 0.2 0 1 0 0.4'))]),

            ProtoInstance(
              name_ : SFString('HAnimBodyBehaviorChooser'),
              DEF_ : SFString('ChooserTest'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('HumanoidArray'),
                  children_ : [
                    HAnimHumanoid(
                      name_ : SFString('DiamondManLOA-1'),
                      DEF_ : SFString('hanim_DiamondManLOA-1'),
                      version_ : SFString('2.0'))]),

                fieldValue(
                  name_ : SFString('whichBody'),
                  value_ : SFString('0')),

                fieldValue(
                  name_ : SFString('hAnimBehaviorNodes'),
                  children_ : [
                    ProtoInstance(
                      USE_ : SFString('BehaviorTest1'))]),

                fieldValue(
                  name_ : SFString('enabledBehaviorsArray'),
                  value_ : SFString('true'))])]));
void main() { exit(0); }
