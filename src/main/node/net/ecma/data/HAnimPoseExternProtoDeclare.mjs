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
var ExternProtoDeclare = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimPoseExternProtoDeclare.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 November 2025")}),

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
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              DEF : new SFString("ModelInfo"),
              info : new MFString(["Design to illustrate a potential HAnimPose node"]),
              title : new SFString("HAnimPoseExternProtoDeclare")}),

            new Background({
              skyColor : new MFColor([0.6,0.6,0.8])}),

            new NavigationInfo({}),

            new ExternProtoDeclare({
              name : new SFString("HAnimPose"),
              appinfo : new SFString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."),
              url : new MFString(["Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("parentHAnimHumanoid"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("HAnimHumanoid for this Pose to act upon")}),

                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("name"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("name of this pose")}),

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
                  appinfo : new SFString("default value true")}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("loa"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("default is no loa")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("transitionDuration"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("how many seconds to achieve the pose")}),

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
                  appinfo : new SFString("debug trace to Browser output console this is a local prototype field")})])}),

            new Viewpoint({
              description : new SFString("HAnimPoseExternProtoDeclare description"),
              position : new SFVec3f([0,1,4])}),

            new Transform({
              DEF : new SFString("DisplayHeader1"),
              translation : new SFVec3f([0,1.5,0]),
              children : new MFNode([
                new Anchor({
                  description : new SFString("go to HAnimPoseExternProtoDeclareIndex page"),
                  parameter : new MFString(["target=_blank"]),
                  url : new MFString(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Utility scene","HAnimPoseExternProtoDeclare.x3d"]),
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
                              diffuseColor : new SFColor([0.1,0.3,0.5])}))}))}),

                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([3.5,0.5,0.001])})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("TransparentAppearance"),
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(1)}))}))})])})])}),

            new Transform({
              DEF : new SFString("DisplayHeader2"),
              translation : new SFVec3f([0,0.5,0]),
              children : new MFNode([
                new Anchor({
                  description : new SFString("go to HAnimPosePrototypeIndex page"),
                  parameter : new MFString(["target=_blank"]),
                  url : new MFString(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["This model supports","HAnimPosePrototype.x3d"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("HeaderFont")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("PoseTextAppearance")}))})])}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([2.6,0.5,0.001])})),
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("TransparentAppearance")}))})])})])}))});
console.log(X3D0.toXMLNode());
