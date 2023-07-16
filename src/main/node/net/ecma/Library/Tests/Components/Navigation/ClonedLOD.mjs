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
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
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
              content : new SFString("Thu, 10 Sep 2015 07:10:33 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 10 Sep 2015 07:10:33 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              DEF : new SFString("_1"),
              translation : new SFVec3f([-3.07774,0,0]),
              children : new MFNode([
                new LOD({
                  DEF : new SFString("_2"),
                  range : new MFFloat([20]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Box_1"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("Rococo12_1"),
                                  ambientIntensity : new SFFloat(0.226102),
                                  diffuseColor : new SFColor([0.904409,0.146366,0.208768]),
                                  specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                  shininess : new SFFloat(0.078125)}))})),
                          geometry : new SFNode(
                            new Box({}))})])}),

                    new Transform({
                      DEF : new SFString("Box_2"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("Rococo28_1"),
                                  ambientIntensity : new SFFloat(0.226102),
                                  diffuseColor : new SFColor([0.279645,0.904409,0.511589]),
                                  specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                  shininess : new SFFloat(0.078125)}))})),
                          geometry : new SFNode(
                            new Box({}))})])})])})])}),

            new Transform({
              translation : new SFVec3f([3.35422,0,-16.1449]),
              children : new MFNode([
                new LOD({
                  USE : new SFString("_2")})])}),

            new Viewpoint({
              DEF : new SFString("_3"),
              description : new SFString("Home")})])}))});
console.log(X3D0.toXMLNode());
