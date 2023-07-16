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
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
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
            new WorldInfo({
              info : new MFString([", ","Created in CosmoWorldsPackaged by CosmoPackage"])}),

            new Background({
              DEF : new SFString("city"),
              frontUrl : new MFString(["night.png"]),
              backUrl : new MFString(["night.png"]),
              leftUrl : new MFString(["night.png"]),
              rightUrl : new MFString(["night.png"]),
              topUrl : new MFString(["night.png"]),
              bottomUrl : new MFString(["night.png"])}),

            new Transform({
              DEF : new SFString("vs_handle"),
              scale : new SFVec3f([19.4378,19.4378,19.4378]),
              children : new MFNode([
                new Switch({
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Transform({}),

                    new Inline({
                      url : new MFString(["cube.x3d"]),
                      bboxSize : new SFVec3f([1,1,1])})])})])}),

            new Transform({
              DEF : new SFString("vs"),
              children : new MFNode([
                new VisibilitySensor({
                  DEF : new SFString("_1"),
                  size : new SFVec3f([19.4378,19.4378,19.4378])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("city"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("vs_handle"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("vs_handle"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_size")})])}))});
console.log(X3D0.toXMLNode());
