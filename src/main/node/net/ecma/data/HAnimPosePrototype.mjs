'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimPosePrototype.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("4 April 2025")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:20:09 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe Williams")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimPoseDesignNotes19MAR2025.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("HAnimPose"),
              appinfo : new SFString("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("enabled"),
                      value : new SFString("true"),
                      appinfo : new SFString("default value true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      name : new SFString("setPose"),
                      appinfo : new SFString("this event tells the HAnimPose node to do it's thing!")}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("name"),
                      value : new SFString("PoseName"),
                      appinfo : new SFString("name of this pose")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("namesPoseJoints"),
                      value : new SFString("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\""),
                      appinfo : new SFString("names of joints in pose")}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("positionsPoseJoints"),
                      appinfo : new SFString("positions of joints in pose")}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("rotationsPoseJoints"),
                      appinfo : new SFString("rotations of joints in pose")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("whichChoice"),
                      appinfo : new SFString("selects one of the HAnimHumanoid nodes")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("children"),
                      appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      name : new SFString("addChildren"),
                      appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      name : new SFString("removeChildren"),
                      appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("traceEnabled"),
                      value : new SFString("true"),
                      appinfo : new SFString("debug trace to Browser output console")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("PrototypeRootNode"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("whichChoice")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),

                    new MetadataString({
                      name : new SFString("interface"),
                      reference : new SFString("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy"),
                      value : new MFString(["X3DGroupingNode"])}),

                    new Script({
                      DEF : new SFString("HAnimPoseScriptOperations"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("enabled"),
                          appinfo : new SFString("default value true")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          name : new SFString("setPose"),
                          appinfo : new SFString("this event tells the HAnimPose node to do it's thing!")}),

                        new field({
                          type : field.TYPE_SFSTRING,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("name"),
                          appinfo : new SFString("name of this pose")}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("namesPoseJoints"),
                          appinfo : new SFString("names of joints in pose")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("positionsPoseJoints"),
                          appinfo : new SFString("positions of joints in pose")}),

                        new field({
                          type : field.TYPE_MFROTATION,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("rotationsPoseJoints"),
                          appinfo : new SFString("rotations of joints in pose")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("whichChoice"),
                          appinfo : new SFString("selects one of the HAnimHumanoid nodes")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("children"),
                          appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          name : new SFString("addChildren"),
                          appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          name : new SFString("removeChildren"),
                          appinfo : new SFString("references one or more HAnimHumanoid nodes, typically via USE references")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          name : new SFString("traceEnabled"),
                          appinfo : new SFString("debug trace to Browser output console")}),
                      ]),
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
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("setPose"),
                              protoField : new SFString("setPose")}),

                            new connect({
                              nodeField : new SFString("name"),
                              protoField : new SFString("name")}),

                            new connect({
                              nodeField : new SFString("namesPoseJoints"),
                              protoField : new SFString("namesPoseJoints")}),

                            new connect({
                              nodeField : new SFString("positionsPoseJoints"),
                              protoField : new SFString("positionsPoseJoints")}),

                            new connect({
                              nodeField : new SFString("rotationsPoseJoints"),
                              protoField : new SFString("rotationsPoseJoints")}),

                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("whichChoice")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])}))})])}))}),

            new WorldInfo({
              DEF : new SFString("ModelInfo"),
              title : new SFString("HAnimPose Prototype"),
              info : new MFString(["Design to illustrate a potential HAnimPose node"])}),

            new NavigationInfo({}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("A")}),

                new fieldValue({
                  name : new SFString("namesPoseJoints"),
                  value : new SFString("\"l_hip\" \"r_hip\"")}),

                new fieldValue({
                  name : new SFString("positionsPoseJoints"),
                  value : new SFString("0 0 0 0 0 0")}),

                new fieldValue({
                  name : new SFString("rotationsPoseJoints"),
                  value : new SFString("0 0 1 0.2 0 0 1 -0.2")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("T")}),

                new fieldValue({
                  name : new SFString("namesPoseJoints"),
                  value : new SFString("\"l_shoulder\" \"r_shoulder\"")}),

                new fieldValue({
                  name : new SFString("positionsPoseJoints"),
                  value : new SFString("0 0 0 0 0 0")}),

                new fieldValue({
                  name : new SFString("rotationsPoseJoints"),
                  value : new SFString("0 0 1 1.57 0 0 1 -1.57")})])})])}))});
console.log(X3D0.toXMLNode());
