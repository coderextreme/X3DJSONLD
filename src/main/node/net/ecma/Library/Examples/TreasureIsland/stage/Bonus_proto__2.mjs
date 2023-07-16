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
var Script = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:55 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:55 GMT")})])})),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("enterTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("range"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.5 40 120")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("size"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.6 0.6 0.6")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("level2"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_1")})])}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("level1"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_2")})])}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("level0"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_3")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("_bonus"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("whichChoice_changed"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("stopTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("startTime"),
                                  protoField : new SFString("startTime")})])})]),
                          vrmlscript:
, function startTime(value, time)
{
	whichChoice_changed = 1;
}

, function stopTime(value, time)
{
	whichChoice_changed = 0;
})}),

                        new Switch({
                          DEF : new SFString("_4"),
                          whichChoice : new SFInt32(1),
                          children : new MFNode([
                            new Transform({}),

                            new Collision({
                              enabled : new SFBool(false),
                              proxy : new SFNode(
                                new LOD({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("range"),
                                          protoField : new SFString("range")})])})),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("level3"),
                                      children : new MFNode([
                                        new VisibilitySensor({
                                          DEF : new SFString("_5"),
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("size"),
                                                  protoField : new SFString("size")}),

                                                new connect({
                                                  nodeField : new SFString("enterTime"),
                                                  protoField : new SFString("enterTime")})])}))})])}),

                                    new Transform({
                                      DEF : new SFString("level2"),
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("children"),
                                              protoField : new SFString("level2")})])}))}),

                                    new Transform({
                                      DEF : new SFString("level1"),
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("children"),
                                              protoField : new SFString("level1")})])}))}),

                                    new Transform({
                                      DEF : new SFString("level0"),
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("children"),
                                              protoField : new SFString("level0")})])}))})])}))})])})])}),

                    new ROUTE({
                      fromNode : new SFString("_5"),
                      fromField : new SFString("enterTime"),
                      toNode : new SFString("_bonus"),
                      toField : new SFString("stopTime")}),

                    new ROUTE({
                      fromNode : new SFString("_bonus"),
                      fromField : new SFString("whichChoice_changed"),
                      toNode : new SFString("_4"),
                      toField : new SFString("set_whichChoice")})])}))}),

            new WorldInfo({
              info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])})])}))});
console.log(X3D0.toXMLNode());
