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
            new ProtoDeclare({
              name : new SFString("Import"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("\"\"")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("exitTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("parameter"),
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
                              type : field.TYPE_MFSTRING,
                              name : new SFString("url"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("\"\"")}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("parameter"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_MFNODE,
                              name : new SFString("children"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Script({
                      DEF : new SFString("_import"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
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
                          type : field.TYPE_MFNODE,
                          name : new SFString("set_children"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("set_url"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("self"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Script({
                              USE : new SFString("_import")})])}),

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
                                      nodeField : new SFString("url"),
                                      protoField : new SFString("url")}),

                                    new connect({
                                      nodeField : new SFString("startTime"),
                                      protoField : new SFString("startTime")}),

                                    new connect({
                                      nodeField : new SFString("parameter"),
                                      protoField : new SFString("parameter")}),

                                    new connect({
                                      nodeField : new SFString("children"),
                                      protoField : new SFString("children")})])}))})])}),
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
, function query() {
	q = '';
	for (i = 0; i < data.parameter.length; i++) {
		q += ';' + data.parameter[i].name;
		if (data.parameter[i].value.length) {
			q += '=' + data.parameter[i].value[0];
		}
	}
	if (q.length > 1) return q.substring(1, q.length);
	return '';
}
, function url() {
	q = query();
	u = new MFString();
	u.length = data.url.length;

	if (q == '') return data.url;
	for (i = 0; i < u.length; i++) {
		u[i] = data.url[i] + (data.url[i].indexOf('?') > -1 ? (data.url[i].indexOf('?') == data.url[i].length-1  ? '' : (q.length ? (data.url[i].indexOf(';') == data.url[i].length-1  ? '' : ';') : '') ) : '?') + q;
	}
	return u;
}
, function loadUrl() {
	if(data.url.length && !isActive) {
		isActive = TRUE;
		Browser.createVrmlFromURL(url(), self, "set_children");
	}
}
, function set_url(value, time) { loadUrl(); }
, function set_startTime(value, time) { loadUrl(); }
, function set_stopTime(value, time) { isActive = FALSE; exitTime = time; }
, function set_children(value, time) {
	if(isActive){
		if (value.length == 1 && value.toString() == "Group { }") {
			data.children = value[0].children;
		} else {
			data.children = value;
		}
		self.set_stopTime = time;
	}
}
, function initialize() { if (data.startTime) loadUrl(); })}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("url_changed"),
                      toNode : new SFString("_import"),
                      toField : new SFString("set_url")}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_import"),
                      toField : new SFString("set_startTime")})])}))})])}))});
console.log(X3D0.toXMLNode());
