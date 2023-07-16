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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:01 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:01 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("DigitalClock"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("time"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_1"),
                          whichChoice : new SFInt32(-1)}),

                        new Switch({
                          DEF : new SFString("_2"),
                          whichChoice : new SFInt32(-1)})])}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_3"),
                          whichChoice : new SFInt32(-1)}),

                        new Switch({
                          DEF : new SFString("_4"),
                          whichChoice : new SFInt32(-1)})])})])})),
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
                              name : new SFString("time"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Script({
                      DEF : new SFString("_digitalClock"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_time"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("sec"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("min"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("hour"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("l"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("children"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("_5"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("time"),
                                      protoField : new SFString("time")})])}))})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("fraction"),
                              protoField : new SFString("fraction")})])})]),
                      vrmlscript:
, function  set_time(value, time)
{
    t = Math.floor(value);
        f = (value - t);
   for (i = 0; i < fraction.length; i++) {
                f *= 10;
                whichChoice = Math.floor(f);
                fraction[i].whichChoice = whichChoice;
        f -= whichChoice;
    }
    if (l > 0) {
        if (t != sec && l) {
                sec = t;
                s = sec % 60; t =  sec / 60;
                e = s % 10;
                children[0].whichChoice = e;
                if (l > 1) {
                        z = s / 10;
                        children[1].whichChoice = z;
                        if (t != min && l > 2) {
                                min = t;
                                m = min % 60; t = min / 60;
                                e = m % 10;
                                children[2].whichChoice = e;
                                if (l > 2) {
                                        z = m / 10;
                                        children[3].whichChoice = z;
                                        if (t != hour && l > 4) {
                                                hour = t;
                                                h = hour % 24; t = hour / 24;
                                                e = h  % 10;
                                                children[4].whichChoice = e;
                                                if (l > 5) {
                                                        z = h  / 10;
                                                        children[5].whichChoice = z;
                                                }
                                        }
                                }
                        }
                }
        }
    }
}
, function  initialize()
{
    set_time(data.time, 0);
        l = children.length;
})}),

                    new ROUTE({
                      fromNode : new SFString("_5"),
                      fromField : new SFString("time_changed"),
                      toNode : new SFString("_digitalClock"),
                      toField : new SFString("set_time")})])}))})])}))});
console.log(X3D0.toXMLNode());
