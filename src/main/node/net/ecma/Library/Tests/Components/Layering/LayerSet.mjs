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
var LayerSet = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sat, 29 Aug 2015 04:01:22 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 29 Aug 2015 04:01:22 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("LayerSet")})])})),
      Scene : new SFNode(
        new Scene({
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(2),
              order : new MFInt32([1,2]),
              layers : new SFNode(
                new Layer({
                  DEF : new SFString("Right"),
                  children : new MFNode([
                    new Viewpoint({
                      description : new SFString("Right"),
                      position : new SFVec3f([0,0,20])}),

                    new Viewpoint({
                      USE : new SFString("Clone")}),

                    new Transform({
                      DEF : new SFString("Blue"),
                      translation : new SFVec3f([2,0,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,1])}))})),
                          geometry : new SFNode(
                            new Box({}))})])}),

                    new Transform({
                      DEF : new SFString("DarkBlue"),
                      translation : new SFVec3f([5,0,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0.5])}))})),
                          geometry : new SFNode(
                            new Box({
                              USE : new SFString("Box")}))})])})])}))}))}))});
console.log(X3D0.toXMLNode());
