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
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("AllenBox.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Allen Box")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("8 July 2025")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("AllenBox.x3d")}),

            new NavigationInfo({
              type : ["EXAMINE"],
              avatarSize : new MFFloat([0.15,1.53,0.75]),
              speed : new SFFloat(0.5)}),

            new Transform({
              DEF : new SFString("Floor"),
              scale : new SFVec3f([1,0.0125,1]),
              translation : new SFVec3f([0,-0.0125,0]),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Box({})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}))})])}))});
console.log(X3D0.toXMLNode());
