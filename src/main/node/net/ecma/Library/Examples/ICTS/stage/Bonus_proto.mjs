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
var Transform = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:57 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:57 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Bonus"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("axisOfRotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 1 0")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("range"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("level"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_1")}),

                        new Transform({
                          DEF : new SFString("_2")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Data"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("stopTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Transform({
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_3"),
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Transform({}),

                            new Billboard({
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("axisOfRotation"),
                                      protoField : new SFString("axisOfRotation")})])})),
                              children : new MFNode([
                                new Collision({
                                  enabled : new SFBool(false),
                                  proxy : new SFNode(
                                    new LOD({
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("range"),
                                              protoField : new SFString("range")}),

                                            new connect({
                                              nodeField : new SFString("children"),
                                              protoField : new SFString("level")})])}))}))})])})])})])}),

                    new Script({
                      DEF : new SFString("_bonus_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichChoice_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("_4"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("startTime"),
                                      protoField : new SFString("startTime")}),

                                    new connect({
                                      nodeField : new SFString("stopTime"),
                                      protoField : new SFString("stopTime")})])}))})])}),
                      ]),vrmlscript:
, function initialize()
{
	whichChoice_changed = data.startTime ? 1 : 0;
}

, function set_startTime(value, time)
{
	whichChoice_changed = 1;
}

, function set_stopTime(value, time)
{
	whichChoice_changed = 0;
})}),

                    new ROUTE({
                      fromNode : new SFString("_bonus_1"),
                      fromField : new SFString("whichChoice_changed"),
                      toNode : new SFString("_3"),
                      toField : new SFString("set_whichChoice")}),

                    new ROUTE({
                      fromNode : new SFString("_4"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_bonus_1"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("_4"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("_bonus_1"),
                      toField : new SFString("set_stopTime")})])}))})])}))});
console.log(X3D0.toXMLNode());
