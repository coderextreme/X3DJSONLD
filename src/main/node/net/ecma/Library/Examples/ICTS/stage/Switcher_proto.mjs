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
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Switcher"),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("prev"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("next"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("offset"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice_changed"),
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
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1")}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("prev"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("next"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("offset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("_switcher"),
                          directOutput : new SFBool(true),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("set_minValue"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("set_maxValue"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_prev"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_next"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("whichChoice_changed"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("data"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Data"),
                                  DEF : new SFString("_1"),
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
                                          nodeField : new SFString("prev"),
                                          protoField : new SFString("prev")}),

                                        new connect({
                                          nodeField : new SFString("next"),
                                          protoField : new SFString("next")}),

                                        new connect({
                                          nodeField : new SFString("offset"),
                                          protoField : new SFString("offset")})])}))})])}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("whichChoice_changed"),
                                  protoField : new SFString("whichChoice_changed")})])})]),
                          vrmlscript:
, function  initialize()
{
	if (data.next == 1 || data.prev == 1) whichChoice_changed = data.offset;
}

, function  set_prev(value, time)
{
	if (--data.offset < data.minValue) data.offset = data.maxValue;
	whichChoice_changed = data.offset;
}

, function  set_next(value, time)
{
	if (++data.offset > data.maxValue) data.offset = data.minValue;
	whichChoice_changed = data.offset;
}

, function set_minValue(value, time)
{
	if (data.offset < value) data.offset = value;
}

, function set_maxValue(value, time)
{
	if (data.offset > value) data.offset = value;
})})])}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("prev_changed"),
                      toNode : new SFString("_switcher"),
                      toField : new SFString("set_prev")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("next_changed"),
                      toNode : new SFString("_switcher"),
                      toField : new SFString("set_next")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("minValue_changed"),
                      toNode : new SFString("_switcher"),
                      toField : new SFString("set_minValue")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("maxValue_changed"),
                      toNode : new SFString("_switcher"),
                      toField : new SFString("set_maxValue")})])}))})])}))});
console.log(X3D0.toXMLNode());
