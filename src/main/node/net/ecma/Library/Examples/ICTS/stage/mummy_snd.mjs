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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Random"),
              url : new MFString(["Random_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("minValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("maxValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("RandomSwitcher"),
              url : new MFString(["RandomSwitcher_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("minValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("maxValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("MediaCtrl"),
              url : new MFString(["MediaCtrl_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("reset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_isActive"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("source"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new LOD({
              range : new MFFloat([20]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("sound"),
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("_1"),
                      cycleInterval : new SFTime(5),
                      loop : new SFBool(true)}),

                    new Transform({
                      DEF : new SFString("RandomPitch"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Random"),
                          DEF : new SFString("_2"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("minValue"),
                              value : new SFString("0.6")}),

                            new fieldValue({
                              name : new SFString("maxValue"),
                              value : new SFString("1.2")})])})])}),

                    new Transform({
                      DEF : new SFString("RandomVSens"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("RandomSwitcher"),
                          DEF : new SFString("_3"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("maxValue"),
                              value : new SFString("4")})])})])}),

                    new Transform({
                      DEF : new SFString("vSwitch"),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_4"),
                          whichChoice : new SFInt32(4),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("vSens1"),
                              children : new MFNode([
                                new VisibilitySensor({
                                  DEF : new SFString("_5"),
                                  size : new SFVec3f([1,1,1])})])}),

                            new Transform({
                              DEF : new SFString("vSens2"),
                              children : new MFNode([
                                new VisibilitySensor({
                                  DEF : new SFString("_6"),
                                  size : new SFVec3f([1,1,1])})])}),

                            new Transform({
                              DEF : new SFString("vSens3"),
                              children : new MFNode([
                                new VisibilitySensor({
                                  DEF : new SFString("_7"),
                                  size : new SFVec3f([1,1,1])})])}),

                            new Transform({
                              DEF : new SFString("vSens4"),
                              children : new MFNode([
                                new VisibilitySensor({
                                  DEF : new SFString("_8"),
                                  size : new SFVec3f([1,1,1])})])}),

                            new Transform({
                              DEF : new SFString("vSens5"),
                              children : new MFNode([
                                new VisibilitySensor({
                                  DEF : new SFString("_9"),
                                  size : new SFVec3f([1,1,1])})])})])})])}),

                    new Transform({
                      DEF : new SFString("sounds"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("s1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("SoundCtrl_1"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_10"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("startTime"),
                                      value : new SFString("968631646.59428")}),

                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          DEF : new SFString("_11"),
                                          url : new MFString(["mummy01.wav"]),
                                          pitch : new SFFloat(0.755888)})])})])})])}),

                            new Sound({
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(1.7),
                              minFront : new SFFloat(1.7),
                              maxBack : new SFFloat(17),
                              maxFront : new SFFloat(17),
                              source : new SFNode(
                                new AudioClip({
                                  USE : new SFString("_11")}))})])}),

                        new Transform({
                          DEF : new SFString("s2"),
                          children : new MFNode([
                            new Sound({
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(1.7),
                              minFront : new SFFloat(1.7),
                              maxBack : new SFFloat(17),
                              maxFront : new SFFloat(17),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("_12"),
                                  url : new MFString(["mummy02.wav"])}))}),

                            new Transform({
                              DEF : new SFString("SoundCtrl_2"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_13"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("startTime"),
                                      value : new SFString("968634529.591305")}),

                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          USE : new SFString("_12")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("s3"),
                          children : new MFNode([
                            new Sound({
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(1.7),
                              minFront : new SFFloat(1.7),
                              maxBack : new SFFloat(17),
                              maxFront : new SFFloat(17),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("_14"),
                                  url : new MFString(["mummy03.wav"])}))}),

                            new Transform({
                              DEF : new SFString("SoundCtrl_3"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_15"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("startTime"),
                                      value : new SFString("968632098.758846")}),

                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          USE : new SFString("_14")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("s4"),
                          children : new MFNode([
                            new Sound({
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(1.7),
                              minFront : new SFFloat(1.7),
                              maxBack : new SFFloat(17),
                              maxFront : new SFFloat(17),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("_16"),
                                  url : new MFString(["mummy04.wav"])}))}),

                            new Transform({
                              DEF : new SFString("SoundCtrl_4"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_17"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          USE : new SFString("_16")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("s5"),
                          children : new MFNode([
                            new Sound({
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(1.7),
                              minFront : new SFFloat(1.7),
                              maxBack : new SFFloat(17),
                              maxFront : new SFFloat(17),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("_18"),
                                  url : new MFString(["mummy05.wav"])}))}),

                            new Transform({
                              DEF : new SFString("SoundCtrl_5"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_19"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("startTime"),
                                      value : new SFString("968634812.486442")}),

                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          USE : new SFString("_18")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("s6_breathe"),
                          children : new MFNode([
                            new Sound({
                              intensity : new SFFloat(0.2),
                              location : new SFVec3f([0,0.5,0]),
                              minBack : new SFFloat(2),
                              minFront : new SFFloat(2),
                              maxBack : new SFFloat(20),
                              maxFront : new SFFloat(20),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("_20"),
                                  url : new MFString(["mummy_breath.wav"]),
                                  loop : new SFBool(true)}))}),

                            new Transform({
                              DEF : new SFString("SoundCtrl"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("MediaCtrl"),
                                  DEF : new SFString("_21"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("source"),
                                      children : new MFNode([
                                        new AudioClip({
                                          USE : new SFString("_20")})])})])})])})])})])})])}),

                new Transform({})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_11"),
              toField : new SFString("set_pitch")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_10"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_10"),
              toField : new SFString("set_isActive")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_12"),
              toField : new SFString("set_pitch")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_13"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_13"),
              toField : new SFString("set_isActive")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_14"),
              toField : new SFString("set_pitch")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_15"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_15"),
              toField : new SFString("set_isActive")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_16"),
              toField : new SFString("set_pitch")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_17"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_17"),
              toField : new SFString("set_isActive")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_18"),
              toField : new SFString("set_pitch")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_19"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_18"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_19"),
              toField : new SFString("set_isActive")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_21"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_21"),
              toField : new SFString("set_isActive")})])}))});
console.log(X3D0.toXMLNode());
