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
var Group = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, I")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, II")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, III")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Transform({
              rotation : new SFRotation([7,8,9,3.14]),
              scale : new SFVec3f([4,5,6]),
              translation : new SFVec3f([1,2,3])})])}))});
console.log(X3D0.toXMLNode());
