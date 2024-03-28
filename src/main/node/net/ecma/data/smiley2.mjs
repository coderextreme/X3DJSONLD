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
var Scene = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      head : new SFNode(
        new head({})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              scale : new SFVec3f([10,10,1]),
              rotation : new SFRotation([1,0,0,3.14]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.5,0.8,0.5])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["./face2.jpg"])}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))})])}))});
console.log(X3D0.toXMLNode());
