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
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:00 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:00 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Delay"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

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
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("exitTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
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
                              name : new SFString("cycleInterval"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1")}),

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

                    new Script({
                      DEF : new SFString("_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("exitTime"),
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
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_time"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("timeSensor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("_2"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("enabled"),
                                      protoField : new SFString("enabled")})])}))})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("_3"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("cycleInterval"),
                                      protoField : new SFString("cycleInterval")}),

                                    new connect({
                                      nodeField : new SFString("startTime"),
                                      protoField : new SFString("startTime")}),

                                    new connect({
                                      nodeField : new SFString("stopTime"),
                                      protoField : new SFString("stopTime")})])}))})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("exitTime"),
                              protoField : new SFString("exitTime")})])})]),
                      vrmlscript:
, function set_startTime(value, time)
{
	if (!isActive) isActive = TRUE;
	timeSensor.startTime = time + data.cycleInterval;
}

, function set_stopTime(value, time)
{
	timeSensor.startTime = 0;
	timeSensor.stopTime = time;
	if (isActive) isActive = FALSE;
}

, function set_time(value, time)
{
	timeSensor.stopTime = time;
	if (isActive) {
		isActive = FALSE;
		exitTime = time;
	}
})}),

                    new ROUTE({
                      fromNode : new SFString("_3"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_1"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("_3"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("_1"),
                      toField : new SFString("set_stopTime")}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("time"),
                      toNode : new SFString("_1"),
                      toField : new SFString("set_time")})])}))})])}))});
console.log(X3D0.toXMLNode());