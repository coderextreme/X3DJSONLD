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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:56 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:56 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              translation : new SFVec3f([-6,0,0]),
              children : new MFNode([
                new Inline({
                  DEF : new SFString("Bonus"),
                  url : new MFString(["bonus-yellow-level2.x3d"])})])}),

            new Transform({
              translation : new SFVec3f([6,0,0]),
              children : new MFNode([
                new Inline({
                  USE : new SFString("Bonus")})])})])}))});
console.log(X3D0.toXMLNode());
