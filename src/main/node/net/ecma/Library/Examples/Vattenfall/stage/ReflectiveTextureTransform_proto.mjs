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
              name : new SFString("ReflectiveTextureTransform"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("position"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("distance"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("10")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("textureTransform"),
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
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("translation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("position"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("distance"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("10")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("textureTransform"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Script({
                      DEF : new SFString("_ReflectiveTextureTransform_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_position"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_distance"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("Data_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("translation"),
                                      protoField : new SFString("translation")}),

                                    new connect({
                                      nodeField : new SFString("position"),
                                      protoField : new SFString("position")}),

                                    new connect({
                                      nodeField : new SFString("distance"),
                                      protoField : new SFString("distance")}),

                                    new connect({
                                      nodeField : new SFString("textureTransform"),
                                      protoField : new SFString("textureTransform")})])}))})])}),
                      ]),vrmlscript:
, function set_translation (value, time) {
}
, function set_position (value, time) {
}
, function set_distance (value, time) {
}
, function initialize () {
}
, function eventsProcessed () {
	distance = data.translation.subtract(data.position);
	v = data.distance / distance.length();
	
	s = data.distance / (distance.length()/2 + 1/2);
	tx = distance.x * s * s;
	ty = distance.y * s * s;

	data.textureTransform.scale = new SFVec2f(s, s);
	data.textureTransform.translation = new SFVec2f(tx, ty);
})}),

                    new ROUTE({
                      fromNode : new SFString("Data_1"),
                      fromField : new SFString("translation_changed"),
                      toNode : new SFString("_ReflectiveTextureTransform_1"),
                      toField : new SFString("set_translation")}),

                    new ROUTE({
                      fromNode : new SFString("Data_1"),
                      fromField : new SFString("position_changed"),
                      toNode : new SFString("_ReflectiveTextureTransform_1"),
                      toField : new SFString("set_position")}),

                    new ROUTE({
                      fromNode : new SFString("Data_1"),
                      fromField : new SFString("distance_changed"),
                      toNode : new SFString("_ReflectiveTextureTransform_1"),
                      toField : new SFString("set_distance")})])}))})])}))});
console.log(X3D0.toXMLNode());
