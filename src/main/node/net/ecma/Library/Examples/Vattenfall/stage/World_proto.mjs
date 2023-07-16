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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
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
              name : new SFString("World"),
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
                      name : new SFString("enterTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("exitTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("interface"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
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
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("stopTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("iface"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("children"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Switch({
                                  whichChoice : new SFInt32(-1),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("children"),
                                          protoField : new SFString("iface")})])}))}),

                                new Group({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("children"),
                                          protoField : new SFString("children")})])}))})])})])}))}),

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
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")}),

                            new connect({
                              nodeField : new SFString("iface"),
                              protoField : new SFString("interface")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),

                    new Script({
                      DEF : new SFString("_world"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("enterTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("exitTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("set_url"),
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
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTimeC"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_stopTimeC"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("set_children"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("self"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Script({
                              USE : new SFString("_world")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("scene"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

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
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("enterTime"),
                              protoField : new SFString("enterTime")}),

                            new connect({
                              nodeField : new SFString("exitTime"),
                              protoField : new SFString("exitTime")})])})]),
                      vrmlscript:
, function set_startTime(value, time)
{
	if (!data.enabled) return;
	if (!scene) return;
	if (!isActive) {
		scene.set_startTime = time;
	}
}

, function set_stopTime(value, time)
{
	if (!data.enabled) return;
	if (!scene) return;
	if (isActive) {
		scene.set_stopTime = time;
	}
}

, function set_startTimeC(value, time)
{
	if (!data.enabled) return;
	if (!isActive) {
		isActive = TRUE;
		enterTime = time;
	}
}

, function set_stopTimeC(value, time)
{
	if (!data.enabled) return;
	if (isActive) {
		exitTime = time;
		isActive = FALSE;
	}
}

, function set_children(value, time)
{
	found = FALSE;
	for (i = 0; i < value.length && !found; i++) {
		if (value[i].toString() == 'Transform { }' && value[i].children.length && value[i].children[0].toString() == 'Scene { }') {
			found = TRUE;
			scene = value[i].children[0];
		} else if (value[i].toString() == 'Scene { }') {
			found = TRUE;
			scene = value[i];
		} 
	}
	if (!found) return;
	Browser.addRoute(scene, 'enterTime', self, 'set_startTimeC');
	Browser.addRoute(scene, 'exitTime', self, 'set_stopTimeC');
	iface = scene.interface_changed;
	l = Math.min(data.iface.length, iface.length);
	for (i = 0; i < l; i++) {
		Browser.addRoute(data.iface[i],  'value_changed', iface[i], 'set_value');
		Browser.addRoute(iface[i], 'value_changed', data.iface[i], 'set_value');
	}
}

, function initialize()
{
	for (i = 0; i < data.children.length; i++) {
		Browser.addRoute(data.children[i],  'children_changed', self, 'set_children');
	}
	if (data.startTime) data.startTime = 1;
})}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_world"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("_world"),
                      toField : new SFString("set_stopTime")})])}))})])}))});
console.log(X3D0.toXMLNode());
