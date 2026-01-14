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
              content_ : SFString('HAnimPosePrototype.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('4 April 2025')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:09 GMT')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe Williams')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimPoseDesignNotes19MAR2025.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('HAnimPose'),
              appinfo_ : SFString('Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('enabled'),
                      value_ : SFString('true'),
                      appinfo_ : SFString('default value true')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('setPose'),
                      appinfo_ : SFString('this event tells the HAnimPose node to do i\' thing!')),

                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name'),
                      value_ : SFString('PoseName'),
                      appinfo_ : SFString('name of this pose')),

                    field(
                      type_ : SFString("MFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('namesPoseJoints'),
                      value_ : SFString('\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"'),
                      appinfo_ : SFString('names of joints in pose')),

                    field(
                      type_ : SFString("MFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('positionsPoseJoints'),
                      appinfo_ : SFString('positions of joints in pose')),

                    field(
                      type_ : SFString("MFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('rotationsPoseJoints'),
                      appinfo_ : SFString('rotations of joints in pose')),

                    field(
                      type_ : SFString("SFInt32"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('whichChoice'),
                      appinfo_ : SFString('selects one of the HAnimHumanoid nodes')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('children'),
                      appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('addChildren'),
                      appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('removeChildren'),
                      appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('traceEnabled'),
                      value_ : SFString('true'),
                      appinfo_ : SFString('debug trace to Browser output console'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Switch(
                      DEF_ : SFString('PrototypeRootNode'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('whichChoice'),
                              protoField_ : SFString('whichChoice')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children'))])),

                    MetadataString(
                      name_ : SFString('interface'),
                      reference_ : SFString('https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy'),
                      value_ : MFString([SFString("X3DGroupingNode")])),

                    Script(
                      DEF_ : SFString('HAnimPoseScriptOperations'),
                      directOutput_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('enabled'),
                          appinfo_ : SFString('default value true')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("inputOnly"),
                          name_ : SFString('setPose'),
                          appinfo_ : SFString('this event tells the HAnimPose node to do i\' thing!')),

                        field(
                          type_ : SFString("SFString"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('name'),
                          appinfo_ : SFString('name of this pose')),

                        field(
                          type_ : SFString("MFString"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('namesPoseJoints'),
                          appinfo_ : SFString('names of joints in pose')),

                        field(
                          type_ : SFString("MFVec3f"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('positionsPoseJoints'),
                          appinfo_ : SFString('positions of joints in pose')),

                        field(
                          type_ : SFString("MFRotation"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('rotationsPoseJoints'),
                          appinfo_ : SFString('rotations of joints in pose')),

                        field(
                          type_ : SFString("SFInt32"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('whichChoice'),
                          appinfo_ : SFString('selects one of the HAnimHumanoid nodes')),

                        field(
                          type_ : SFString("MFNode"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('children'),
                          appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                        field(
                          type_ : SFString("MFNode"),
                          accessType_ : SFString("inputOnly"),
                          name_ : SFString('addChildren'),
                          appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                        field(
                          type_ : SFString("MFNode"),
                          accessType_ : SFString("inputOnly"),
                          name_ : SFString('removeChildren'),
                          appinfo_ : SFString('references one or more HAnimHumanoid nodes, typically via USE references')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("inputOutput"),
                          name_ : SFString('traceEnabled'),
                          appinfo_ : SFString('debug trace to Browser output console')),
                      ],
ecmascript:eval (0

// Needed , functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

, function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
, function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
, function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
, function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
, function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
, function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
, function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
, function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output , functions ==================

, function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
, function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
, function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('setPose'),
                              protoField_ : SFString('setPose')),

                            connect(
                              nodeField_ : SFString('name'),
                              protoField_ : SFString('name')),

                            connect(
                              nodeField_ : SFString('namesPoseJoints'),
                              protoField_ : SFString('namesPoseJoints')),

                            connect(
                              nodeField_ : SFString('positionsPoseJoints'),
                              protoField_ : SFString('positionsPoseJoints')),

                            connect(
                              nodeField_ : SFString('rotationsPoseJoints'),
                              protoField_ : SFString('rotationsPoseJoints')),

                            connect(
                              nodeField_ : SFString('whichChoice'),
                              protoField_ : SFString('whichChoice')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]))])),

            WorldInfo(
              DEF_ : SFString('ModelInfo'),
              title_ : SFString('HAnimPose Prototype'),
              info_ : MFString([SFString("Design to illustrate a potential HAnimPose node")])),

            NavigationInfo(),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('A')),

                fieldValue(
                  name_ : SFString('namesPoseJoints'),
                  value_ : SFString('\"l_hip\" \"r_hip\"')),

                fieldValue(
                  name_ : SFString('positionsPoseJoints'),
                  value_ : SFString('0 0 0 0 0 0')),

                fieldValue(
                  name_ : SFString('rotationsPoseJoints'),
                  value_ : SFString('0 0 1 0.2 0 0 1 -0.2'))]),

            ProtoInstance(
              name_ : SFString('HAnimPose'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('T')),

                fieldValue(
                  name_ : SFString('namesPoseJoints'),
                  value_ : SFString('\"l_shoulder\" \"r_shoulder\"')),

                fieldValue(
                  name_ : SFString('positionsPoseJoints'),
                  value_ : SFString('0 0 0 0 0 0')),

                fieldValue(
                  name_ : SFString('rotationsPoseJoints'),
                  value_ : SFString('0 0 1 1.57 0 0 1 -1.57'))])]));
void main() { exit(0); }
