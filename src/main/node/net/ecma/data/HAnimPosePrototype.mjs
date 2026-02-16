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
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var IMPORT = require('./x3d.mjs');
var LoadSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimPosePrototype.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("2 October 2025")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 December 2025")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe Williams")}),

            new meta({
              name : new SFString("contributor"),
              content : new SFString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimPosePrototype.console.txt")}),

            new meta({
              name : new SFString("MovingImage"),
              content : new SFString("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimPoseExampleTouchDown.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimPoseExampleTouchDownFaceLeftAPose.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleBoxMan1.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleBoxMan2.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleJoeKick.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleJoeSkeletonSkinSite.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter01Jin.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter02Chul.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter03Hyun.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter04Young.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter05Ju.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter06Ga.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter07No.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter08Da.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter09Ru.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter10Mi.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter11Min.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/HAnimPoseExampleKoreanCharacter12Sun.png")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("earlier version of this prototype: originals/HAnimPosePreliminary.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              DEF : new SFString("ModelInfo"),
              info : new MFString(["Design to illustrate a potential HAnimPose node"]),
              title : new SFString("HAnimPosePrototype.x3d")}),

            new Background({
              skyColor : new MFColor([0.8,0.8,1])}),

            new NavigationInfo({}),

            new Group({
              DEF : new SFString("HandleInlineLoading"),
              /*Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2*/
              /*Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun*/
              children : new MFNode([
                new Inline({
                  DEF : new SFString("HumanoidInline"),
                  description : new SFString("remote HAnimHumanoid for IMPORT"),
                  url : new MFString(["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"])}),
              /*Note that the following importedDEF must match the EXPORT name found in remote file*/

                new IMPORT({
                  aS : new SFString("HumanoidImported"),
                  importedDEF : new SFString("BoxMan2"),
                  inlineDEF : new SFString("HumanoidInline")}),

                new LoadSensor({
                  DEF : new SFString("HumanoidInlineLoadSensor"),
                  timeOut : new SFTime(2),
                  children : new MFNode([
                    new Inline({
                      USE : new SFString("HumanoidInline")})])})])}),

            new ProtoDeclare({
              name : new SFString("HAnimPose"),
              appinfo : new SFString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("parentHAnimHumanoid"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("HAnimHumanoid for this Pose to act upon"),
                      /*HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation*/}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("name of this pose"),
                      value : new SFString("newPoseName")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("joint values to apply to HAnimHumanoid"),
                      /*initializating Joint nodes (if any) go here*/}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("explanation of purpose")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("default value true"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("loa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("default is no loa"),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("transitionDuration"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("how many seconds to achieve the pose"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("metadata"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("single Metadata* node")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("event indicating when pose transition is active")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("commencePose"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("resetAllJoints"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("reset the skeleton to I pose with all joints zeroed")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("allows transition to proceed incrementally from fraction [0..10")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("starts the animation clock")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isLoaded"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("debug trace to Browser output console this is a local prototype field"),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("ClockTimeSensor"),
                      description : new SFString("control timing of pose animation when triggered"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("transitionDuration")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("set_startTime")}),

                            new connect({
                              nodeField : new SFString("metadata"),
                              protoField : new SFString("metadata")})])}))}),

                    new TimeSensor({
                      DEF : new SFString("ResetTimeSensor"),
                      description : new SFString("control timing of skeleton reset to \"A\" pose when triggered"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("transitionDuration")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("set_startTime")}),
                          /*no need to report isActive since that would be duplicative*/])}))}),

                    new Group({
                      DEF : new SFString("PoseInterpolatorGroup"),
                      /*interpolators generated by prototype script appear here at runtime*/}),

                    new Group({
                      DEF : new SFString("ResetInterpolatorGroup"),
                      /*interpolators generated by prototype script appear here at runtime*/}),

                    new Script({
                      DEF : new SFString("HAnimPoseScript"),
                      directOutput : new SFBool(true),
                      url : new MFString(["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"]),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("parentHAnimHumanoid"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Humanoid for this Pose to act upon"),
                          /*initialization node (if any) goes here*/}),

                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("name"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("name of this pose")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("loa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("default is no loa")}),

                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("explanation of purpose")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("default value true")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("resetAllJoints"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("reset the skeleton to I pose with all joints zeroed")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("children"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("joint values to apply to HAnimHumanoid"),
                          /*initializating Joint nodes (if any) go here*/}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("transitionDuration"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("how many seconds to achieve the pose")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("commencePose"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("allows transition to proceed incrementally from fraction [0..10")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("starts the animation clock")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isLoaded"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("debug trace to Browser output console")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("numberPoseJoints"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("number of joints found in children field"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("numberSkeletonJoints"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("number of joints found in Humanoid"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("jointOrientationInterpolators"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("OrientationInterpolator node array matching number of children"),
                          /*initializating Joint nodes (if any) go here*/}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("parentHAnimHumanoid"),
                              protoField : new SFString("parentHAnimHumanoid")}),

                            new connect({
                              nodeField : new SFString("name"),
                              protoField : new SFString("name")}),

                            new connect({
                              nodeField : new SFString("loa"),
                              protoField : new SFString("loa")}),

                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("resetAllJoints"),
                              protoField : new SFString("resetAllJoints")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("transitionDuration"),
                              protoField : new SFString("transitionDuration")}),

                            new connect({
                              nodeField : new SFString("commencePose"),
                              protoField : new SFString("commencePose")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("set_startTime"),
                              protoField : new SFString("set_startTime")}),

                            new connect({
                              nodeField : new SFString("isLoaded"),
                              protoField : new SFString("isLoaded")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])})])})])}))}),

            new Viewpoint({
              description : new SFString("HAnimPose for HumanoidInline IMPORT model"),
              position : new SFVec3f([0,1,4])}),
          /*no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...*/

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("T_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("T")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  /*debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("1")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("arms stretched outward and level similar to letter T")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("l_shoulder"),
                      DEF : new SFString("PoseJoint_l_shoulder_1"),
                      description : new SFString("left shoulder"),
                      rotation : new SFRotation([0,0,1,1.57]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_shoulder"),
                      DEF : new SFString("PoseJoint_r_shoulder_1"),
                      description : new SFString("right shoulder"),
                      rotation : new SFRotation([0,0,-1,1.57]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),
                  /*test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/*/])}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.3")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("A_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("A")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("1")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("arms stretched outward and downward similar to letter A")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("l_shoulder"),
                      DEF : new SFString("PoseJoint_l_shoulder"),
                      description : new SFString("left shoulder"),
                      rotation : new SFRotation([0,0,1,0.5]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_shoulder"),
                      DEF : new SFString("PoseJoint_r_shoulder"),
                      description : new SFString("right shoulder"),
                      rotation : new SFRotation([0,0,-1,0.5]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])})])}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.2")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("TouchDown_Pose"),
              /*thanks Joe*/
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("TouchDown")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("1")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("arms and legs stretched outward providing a TouchDown gesture")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      rotation : new SFRotation([0,1,0,-0.698132]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_hip"),
                      rotation : new SFRotation([-1,1,1,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_knee"),
                      rotation : new SFRotation([1,0,0,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_talocrural"),
                      rotation : new SFRotation([-0.2,0,0.1,0.225]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_hip"),
                      rotation : new SFRotation([-1,-1,-1,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_knee"),
                      rotation : new SFRotation([1,0,0,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_talocrural"),
                      rotation : new SFRotation([-0.2,0,0.1,0.25]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      rotation : new SFRotation([0,0,0.01,0.2]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("vt10"),
                      rotation : new SFRotation([0,0,0.01,0.1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("vc4"),
                      rotation : new SFRotation([0,0,-0.01,0.15]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_shoulder"),
                      rotation : new SFRotation([-1,0.5,1,2]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_elbow"),
                      rotation : new SFRotation([-1,0,0,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("l_radiocarpal"),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_shoulder"),
                      rotation : new SFRotation([-1,-0.5,-1,2.6]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_elbow"),
                      rotation : new SFRotation([-1,0,0,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])}),

                    new HAnimJoint({
                      name : new SFString("r_radiocarpal"),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])})])}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.2")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("I_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("I")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("1")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("arms and legs straight down default binding pose for baseline Humanoid")}),

                new fieldValue({
                  name : new SFString("children"),
                  /*not defining any children equals the default \"I\" pose*/}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.5")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("H_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("H")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("false")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("TODO experimental pose not yet implemented")}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.4")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")}),
              /*<fieldValue name='loa' value='1'/>*/])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("FaceLeft_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("FaceLeft")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("0")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("Only modify humanoid_root Joint node to face left")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      DEF : new SFString("FaceLeft_humanoid_root"),
                      description : new SFString("Only rotate the model"),
                      rotation : new SFRotation([0,1,0,1.570796]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])})])}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.1")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("HAnimPose"),
              DEF : new SFString("FaceRight_Pose"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("FaceRight")}),

                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("parentHAnimHumanoid"),
                  /*HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)*/
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("HumanoidImported")})])}),

                new fieldValue({
                  name : new SFString("loa"),
                  value : new SFString("0")}),

                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("Only modify humanoid_root Joint node to face right")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      DEF : new SFString("FaceRight_humanoid_root"),
                      description : new SFString("Only rotate the model"),
                      rotation : new SFRotation([0,1,0,-1.570796]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0])})])}),

                new fieldValue({
                  name : new SFString("transitionDuration"),
                  value : new SFString("1.1")}),

                new fieldValue({
                  name : new SFString("traceEnabled"),
                  value : new SFString("true")})])}),

            new Group({
              DEF : new SFString("InterfaceButtonsGroup"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("DisplayHeader"),
                  translation : new SFVec3f([0,2,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["HAnimPosePrototype example implementation"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("HeaderFont"),
                              family : new MFString(["SANS"]),
                              justify : new MFString(["MIDDLE","MIDDLE"]),
                              size : new SFFloat(0.15),
                              style : new SFString("BOLD")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("PoseTextAppearance"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.1,0.5,0.3])}))}))}))}),

                new Transform({
                  DEF : new SFString("T_PoseInterface"),
                  translation : new SFVec3f([-1.5,1.5,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["\"T\" Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("SharedFont"),
                              family : new MFString(["SANS"]),
                              justify : new MFString(["MIDDLE","MIDDLE"]),
                              size : new SFFloat(0.1),
                              style : new SFString("BOLD")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("TransparentAppearance"),
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(0.8)}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.45,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("T_PoseTouchSensor"),
                      description : new SFString("select to move shoulders to \"T\" pose, leave other joints unchanged")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("T_PoseTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("T_Pose")})])}),

                new Transform({
                  DEF : new SFString("A_PoseInterface"),
                  translation : new SFVec3f([-1.5,1,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["\"A\" Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.45,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("A_PoseTouchSensor"),
                      description : new SFString("select to move shoulders to \"A\" pose, leave other joints unchanged")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("A_PoseTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("A_Pose")})])}),

                new Transform({
                  DEF : new SFString("TouchDown_PoseInterface"),
                  translation : new SFVec3f([-1.5,0.5,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["TouchDown Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.85,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("TouchDown_PoseTouchSensor"),
                      description : new SFString("select to transition all joints to TouchDown pose")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("TouchDown_PoseTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("TouchDown_Pose")})])}),

                new Transform({
                  DEF : new SFString("I_PoseInterface"),
                  translation : new SFVec3f([-1.5,0,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["\"I\" Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.45,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("I_PoseTouchSensor"),
                      description : new SFString("select to transition all joints to \"I\" pose")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("I_PoseTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("I_Pose")})])}),

                new Transform({
                  DEF : new SFString("FaceLeftPoseInterface"),
                  translation : new SFVec3f([1.5,1.5,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Face Left Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.9,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("FaceLeftTouchSensor"),
                      description : new SFString("select to rotate body and Face Left, leave other joints unchanged")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("FaceLeftTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("FaceLeft_Pose")})])}),

                new Transform({
                  DEF : new SFString("FaceRightPoseInterface"),
                  translation : new SFVec3f([1.5,1,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Face Right Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.9,0.2,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("FaceRightTouchSensor"),
                      description : new SFString("select to rotate body and Face Right, leave other joints unchanged")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("FaceRightTouchSensor"),
                      toField : new SFString("commencePose"),
                      toNode : new SFString("FaceRight_Pose")})])}),

                new Transform({
                  DEF : new SFString("AnimatePosesInterface"),
                  translation : new SFVec3f([1.5,0.5,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Direct animation","to, from \"I\" Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("AnimationTextAppearance"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.1,0.2,0.3])}))}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.9,0.25,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("AnimatePosesTouchSensor"),
                      description : new SFString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events")}),
                  /*cycleInterval=4 also hard-coded in script execution message*/

                    new TimeSensor({
                      DEF : new SFString("AnimatePosesClock"),
                      cycleInterval : new SFTime(4),
                      description : new SFString("directly animate several poses")}),

                    new ScalarInterpolator({
                      DEF : new SFString("AnimatePosesLoopInterpolator"),
                      key : new MFFloat([0,0.05,0.45,0.55,0.95,1]),
                      keyValue : new MFFloat([0,0,1,1,0,0])}),

                    new ROUTE({
                      fromField : new SFString("touchTime"),
                      fromNode : new SFString("AnimatePosesTouchSensor"),
                      toField : new SFString("startTime"),
                      toNode : new SFString("AnimatePosesClock")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("AnimatePosesClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("AnimatePosesLoopInterpolator")}),

                    new ROUTE({
                      fromField : new SFString("value_changed"),
                      fromNode : new SFString("AnimatePosesLoopInterpolator"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("I_Pose")})])}),

                new Transform({
                  DEF : new SFString("ResetDefaultPoseInterface"),
                  translation : new SFVec3f([1.5,0,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Reset All Joints","to Default \"I\" Pose"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("SharedFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("AnimationTextAppearance")}))})),
                  child : new SFNode(
                    new Shape({
                      /*Selectable Text transparent Box for easy user selection*/
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TransparentAppearance")})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.9,0.25,0.001])}))})),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("ResetPoseTouchSensor"),
                      description : new SFString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("ResetPoseTouchSensor"),
                      toField : new SFString("resetAllJoints"),
                      toNode : new SFString("FaceLeft_Pose")})])})])}),

            new Group({
              DEF : new SFString("HandleInlineLoadsensorRouting"),
              children : new MFNode([
                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("A_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("H_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("I_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("T_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("FaceLeft_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("FaceRight_Pose")}),

                new ROUTE({
                  fromField : new SFString("isLoaded"),
                  fromNode : new SFString("HumanoidInlineLoadSensor"),
                  toField : new SFString("isLoaded"),
                  toNode : new SFString("TouchDown_Pose")})])})])}))});
console.log(X3D0.toXMLNode());
