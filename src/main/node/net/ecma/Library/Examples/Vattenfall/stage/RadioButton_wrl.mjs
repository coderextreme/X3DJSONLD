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
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              name : new SFString("RadioButton"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("touchTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Data"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("enabled"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("true")}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("whichChoice"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("children"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("children"),
                                      protoField : new SFString("children")})])}))})])}))}),

                    new ProtoInstance({
                      name : new SFString("Data"),
                      DEF : new SFString("Data"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("whichChoice")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("choice")})])}))}),

                    new Script({
                      DEF : new SFString("_radioButton"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("touchTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_touchTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("set_whichChoice"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("set_children"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichChoice"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("children"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("self"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Script({
                              USE : new SFString("_radioButton")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              USE : new SFString("Data")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("touchTime"),
                              protoField : new SFString("touchTime")})])})]),
                      vrmlscript:
, function set_touchTime (value, time) {
	if (!data.enabled) return;
	for (i=0; i<children.length; ++i) {
		if (children[i].touchTime == value) {
			touchTime = time;
			data.whichChoice = i;
			break;
		}
	}
}
, function set_whichChoice (value, time) {
	if (whichChoice >= 0 && whichChoice < children.length)
		children[whichChoice].on = FALSE;
	whichChoice = value;
	if (touchTime != time)
		if (whichChoice >= 0 && whichChoice < children.length && !children[whichChoice].whichChoice)
			children[whichChoice].on = TRUE;
}
, function set_children (value, time) {
	for (i=0; i<children.length; ++i)
		Browser.deleteRoute(children[i], 'touchTime', self, 'set_touchTime');
	children = value;
	for (i=0; i<children.length; ++i) {
		children[i].on = FALSE;
		Browser.addRoute(children[i], 'touchTime', self, 'set_touchTime');
	}
	if (whichChoice >= 0 && whichChoice < children.length)
		children[whichChoice].on = TRUE;
}
, function initialize() {
	whichChoice = data.whichChoice;
	set_children(data.children, 0);
})}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("children_changed"),
                      toNode : new SFString("_radioButton"),
                      toField : new SFString("set_children")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("whichChoice_changed"),
                      toNode : new SFString("_radioButton"),
                      toField : new SFString("set_whichChoice")})])}))})])}))});
console.log(X3D0.toXMLNode());
