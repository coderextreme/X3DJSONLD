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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
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
var TimeSensor = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimPose = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimPoseExample.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("11 December 2025")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 December 2025")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development for X3D 4.1")}),

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
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              DEF : new SFString("ModelInfo"),
              info : new MFString(["Example scene for HAnimPose node"]),
              title : new SFString("HAnimPoseExample.x3d")}),

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
                  url : new MFString(["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"])}),
              /*Note that the following importedDEF must match the EXPORT name found in remote file*/

                new IMPORT({
                  aS : new SFString("HumanoidImported"),
                  importedDEF : new SFString("JoeSkeletonSkinSite"),
                  inlineDEF : new SFString("HumanoidInline")}),

                new LoadSensor({
                  DEF : new SFString("HumanoidInlineLoadSensor"),
                  timeOut : new SFTime(2),
                  children : new MFNode([
                    new Inline({
                      USE : new SFString("HumanoidInline")})])})])}),

            new Viewpoint({
              description : new SFString("HAnimPose for HumanoidInline IMPORT model"),
              position : new SFVec3f([0,1,4])}),
          /*no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...*/

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
                  toNode : new SFString("TouchDown_Pose")})])}),

            new HAnimHumanoid({
              name : new SFString("HumanoidStub"),
              info : new MFString(["humanoidVersion=2.0"]),
              version : new SFString("2.0"),
              children : new MFNode([
                new HAnimPose({
                  USE : new SFString("TouchDown_Pose")})])})])}))});
console.log(X3D0.toXMLNode());
