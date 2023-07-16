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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
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
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Random"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("numValues"),
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
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Switch({
              DEF : new SFString("_1"),
              whichChoice : new SFInt32(3),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("vs_1"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_2"),
                          size : new SFVec3f([1,1,1])})])}),

                    new Sound({
                      DEF : new SFString("create3000"),
                      minBack : new SFFloat(8.2),
                      minFront : new SFFloat(8.2),
                      maxBack : new SFFloat(82),
                      maxFront : new SFFloat(82),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("create3000_1"),
                          description : new SFString("create3000"),
                          url : new MFString(["create3000.wav"]),
                          startTime : new SFTime(1007130771.72448)}))})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("vs_2"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_3"),
                          size : new SFVec3f([1,1,1])})])}),

                    new Sound({
                      DEF : new SFString("future-tech"),
                      minBack : new SFFloat(8.2),
                      minFront : new SFFloat(8.2),
                      maxBack : new SFFloat(82),
                      maxFront : new SFFloat(82),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("future-tech_1"),
                          description : new SFString("future-tech"),
                          url : new MFString(["future-tech.wav"]),
                          startTime : new SFTime(1007130782.19115)}))})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("vs_3"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_4"),
                          size : new SFVec3f([1,1,1])})])}),

                    new Sound({
                      DEF : new SFString("neopolitics"),
                      minBack : new SFFloat(8.2),
                      minFront : new SFFloat(8.2),
                      maxBack : new SFFloat(82),
                      maxFront : new SFFloat(82),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("neopolitics_1"),
                          description : new SFString("neopolitics"),
                          url : new MFString(["neopolitics.wav"]),
                          startTime : new SFTime(1007130785.8577)}))})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("vs"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_5"),
                          size : new SFVec3f([1,1,1])})])}),

                    new Sound({
                      DEF : new SFString("revolution"),
                      minBack : new SFFloat(8.2),
                      minFront : new SFFloat(8.2),
                      maxBack : new SFFloat(82),
                      maxFront : new SFFloat(82),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("revolution_1"),
                          description : new SFString("revolution"),
                          url : new MFString(["revolution.wav"]),
                          startTime : new SFTime(1007298321.90254)}))})])})])}),

            new TimeSensor({
              DEF : new SFString("_6"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new Transform({
              DEF : new SFString("Random"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Random"),
                  DEF : new SFString("_7"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("value"),
                      value : new SFString("3")})])})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("create3000_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("future-tech_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("neopolitics_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("revolution_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_7"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
