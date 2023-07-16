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
var ProtoInstance = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Random"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
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
                              type : field.TYPE_SFINT32,
                              name : new SFString("minValue"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("maxValue"),
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
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Script({
                      DEF : new SFString("_random"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("set_maxValue"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("set_numValues"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichChoice_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fraction_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("values"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("vi"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("Data"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("minValue"),
                                      protoField : new SFString("minValue")}),

                                    new connect({
                                      nodeField : new SFString("maxValue"),
                                      protoField : new SFString("maxValue")}),

                                    new connect({
                                      nodeField : new SFString("numValues"),
                                      protoField : new SFString("numValues")}),

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
                              nodeField : new SFString("whichChoice_changed"),
                              protoField : new SFString("whichChoice_changed")}),

                            new connect({
                              nodeField : new SFString("fraction_changed"),
                              protoField : new SFString("fraction_changed")})])})]),
                      vrmlscript:
, function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }
, function isIn(value) {
	for (i = 0; i < values.length; ++i) {
		if (value == values[i]) return TRUE;
	}
	return FALSE;
}
, function set_maxValue(value, time) {
	if (value < 0) data.maxValue = 0;
	else if (value < data.numValues) data.numValues = value;
}
, function set_numValues(value, time) {
	if (value < 0) data.numValues = 0;
	else if (value > data.maxValue + 1) data.numValues = data.maxValue;
}
, function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }
, function set_startTime(value, time)
{
	whichChoice = rand(data.minValue, data.maxValue);
	while (isIn(whichChoice)) {
		whichChoice = rand(data.minValue, data.maxValue);
	}
	whichChoice_changed = whichChoice;
	fraction_changed = whichChoice / data.maxValue;

	if (values.length < data.numValues) ++values.length;
	values[vi++] = whichChoice;
	if (vi >= data.numValues) set_stopTime(0, 0);
}
, function initialize() {
	set_numValues(data.numValues, 0);
	set_maxValue(data.numValues, 0);
	if (data.startTime) set_startTime(1, 0);
})}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("maxValue_changed"),
                      toNode : new SFString("_random"),
                      toField : new SFString("set_maxValue")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("numValues_changed"),
                      toNode : new SFString("_random"),
                      toField : new SFString("set_numValues")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_random"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("_random"),
                      toField : new SFString("set_stopTime")})])}))})])}))});
console.log(X3D0.toXMLNode());
