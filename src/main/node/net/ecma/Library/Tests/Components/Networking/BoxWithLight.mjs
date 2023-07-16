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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("created"),
              content : new SFString("Sun, 29 Jan 2023 22:00:06 GMT")}),

            new meta({
              name : new SFString("comment"),
              content : new SFString("Rise and Shine")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/BoxWithLight.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 29 Jan 2023 23:15:27 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              DEF : new SFString("Box"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Transform({
              DEF : new SFString("Plane"),
              scale : new SFVec3f([2,0.1,2]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new SpotLight({
              location : new SFVec3f([4,4,0]),
              direction : new SFVec3f([-1,-1,0]),
              beamWidth : new SFFloat(0.3),
              cutOffAngle : new SFFloat(0.6),
              shadows : new SFBool(true)})])}))});
console.log(X3D0.toXMLNode());
