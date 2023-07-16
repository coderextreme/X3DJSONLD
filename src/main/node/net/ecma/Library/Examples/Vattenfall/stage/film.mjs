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
var Inline = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:21 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 27 Apr 2015 08:52:11 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Scene"),
              url : new MFString(["Scene_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
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
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("int"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Switch({
              DEF : new SFString("_1"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Inline({
                  url : new MFString(["film1.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])}),

                new Inline({
                  url : new MFString(["film2.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])}),

                new Inline({
                  url : new MFString(["film3.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])}),

                new Inline({
                  url : new MFString(["film4.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])}),

                new Inline({
                  url : new MFString(["film5.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])}),

                new Inline({
                  url : new MFString(["film6.x3d"]),
                  bboxSize : new SFVec3f([35.944,19.1172,0.299421]),
                  bboxCenter : new SFVec3f([7.5798,9.99219,0.153977])})])}),

            new Transform({
              DEF : new SFString("Scene"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Scene"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("interface"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Int"),
                          DEF : new SFString("_2")})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")})])}))});
console.log(X3D0.toXMLNode());
