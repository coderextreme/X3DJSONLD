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
var TouchSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:17 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Button"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isOver"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isOut"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("hitNormal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("hitPoint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("hitTexCoord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("touchTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("downTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("overTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("outTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_1")}),

                        new Transform({
                          DEF : new SFString("_2")}),

                        new Transform({
                          DEF : new SFString("_3")}),

                        new Transform({
                          DEF : new SFString("_4")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touch_1"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("enabled"),
                                  protoField : new SFString("enabled")}),

                                new connect({
                                  nodeField : new SFString("hitTexCoord_changed"),
                                  protoField : new SFString("hitTexCoord_changed")}),

                                new connect({
                                  nodeField : new SFString("hitNormal_changed"),
                                  protoField : new SFString("hitNormal_changed")}),

                                new connect({
                                  nodeField : new SFString("hitPoint_changed"),
                                  protoField : new SFString("hitPoint_changed")}),

                                new connect({
                                  nodeField : new SFString("isOver"),
                                  protoField : new SFString("isOver")}),

                                new connect({
                                  nodeField : new SFString("isActive"),
                                  protoField : new SFString("isActive")}),

                                new connect({
                                  nodeField : new SFString("touchTime"),
                                  protoField : new SFString("touchTime")})])}))}),

                        new Switch({
                          DEF : new SFString("Button_1"),
                          whichChoice : new SFInt32(-1),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("whichChoice"),
                                  protoField : new SFString("whichChoice")}),

                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("choice")})])}))}),

                        new Script({
                          DEF : new SFString("_button_1"),
                          directOutput : new SFBool(true),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("isOut"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("overTime"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("outTime"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("downTime"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_enabled"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_isOver"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_isActive"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("set_choice"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("isOver"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("isActive"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("button"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              children : new MFNode([
                                new Switch({
                                  USE : new SFString("Button_1")})])}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("outChildren"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("isActiveChildren"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("1")}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("isOverChildren"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("2")}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("isOut"),
                                  protoField : new SFString("isOut")}),

                                new connect({
                                  nodeField : new SFString("overTime"),
                                  protoField : new SFString("overTime")}),

                                new connect({
                                  nodeField : new SFString("outTime"),
                                  protoField : new SFString("outTime")}),

                                new connect({
                                  nodeField : new SFString("downTime"),
                                  protoField : new SFString("downTime")})])})]),
                          vrmlscript:
, function choose() {
	if (isActive) { button.whichChoice = isOver ? isActiveChildren : outChildren; }
	else if (isOver) { button.whichChoice = isOverChildren; }
	else { button.whichChoice = outChildren; }
}
, function set_enabled(value, time) { if (value) button.whichChoice = outChildren; } 
, function set_isOver(value, time) {
	isOver = value;
	if(isOver) overTime = time;
	else  outTime = time;
	choose();
}
, function set_isActive(value, time) {
	isActive = value;
	if (isActive) { downTime = time; choose(); }
	else choose();
}
, function set_choice(value, time) {
	outChildren = value.length > 0 ? 0 : -1;
	isOverChildren = value.length > 1 ? 1 : (value.length > 0 ? 0 : -1);
	isActiveChildren = value.length > 2 ? 2 : (value.length > 1 ? 1 : (value.length > 0 ? 0 : -1));
	choose();
}
, function initialize() {
	if (Browser.getName() == "Cosmo Player" && Browser.getVersion() == 1.1)
	   return;
	set_choice(button.choice, 0);
}
, function eventsProcessed() {
	out = !(isOver || isActive);
	if (isOut != out) isOut = out;
})})])}),

                    new ROUTE({
                      fromNode : new SFString("touch_1"),
                      fromField : new SFString("enabled_changed"),
                      toNode : new SFString("_button_1"),
                      toField : new SFString("set_enabled")}),

                    new ROUTE({
                      fromNode : new SFString("touch_1"),
                      fromField : new SFString("isOver"),
                      toNode : new SFString("_button_1"),
                      toField : new SFString("set_isOver")}),

                    new ROUTE({
                      fromNode : new SFString("touch_1"),
                      fromField : new SFString("isActive"),
                      toNode : new SFString("_button_1"),
                      toField : new SFString("set_isActive")}),

                    new ROUTE({
                      fromNode : new SFString("Button_1"),
                      fromField : new SFString("children_changed"),
                      toNode : new SFString("_button_1"),
                      toField : new SFString("set_choice")})])}))})])}))});
console.log(X3D0.toXMLNode());
