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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:18 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:18 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("buildings-left"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("buildings"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-57.1823,9.44531,-1.0095]),
                      scale : new SFVec3f([0.944059,1,1.15832]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["haus1.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,5,4,-1,5,3,2,4,-1]),
                              coordIndex : new MFInt32([2,3,5,4,-1,0,1,7,6,-1,7,3,2,6,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0,0.790594,1,0.790594,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,10,-10,-10,10,10,10,7.7781,10,-10,7.7781,10,10,-10,10,-10,-10,5.81188,10,10,5.81187,-10,10])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-62.2924,9.44532,-24.1592]),
                      scale : new SFVec3f([0.944059,1,1.15832]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["haus2.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,3,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([10,10,10,10,-10,10,10,10,-10,10,-10,-10])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-58.4409,9.44532,-47.1315]),
                      scale : new SFVec3f([0.944059,1,1.15832]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1]),
                              coordIndex : new MFInt32([0,1,3,2,-1,2,3,5,4,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("floor"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-43.4171,0.188247,-25.5435]),
                      rotation : new SFRotation([-0.000949805,0.707105,0.707108,3.14349]),
                      scale : new SFVec3f([18.9453,71.9534,11.9447]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.16),
                                  diffuseColor : new SFColor([1,1,1])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["str_norm.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([2,5])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,3,10,11,-1,10,6,7,11,-1,6,13,12,7,-1,13,4,5,12,-1,4,15,14,5,-1,15,9,8,14,-1,9,17,16,8,-1,17,2,1,16,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,0,1,0.5,1,0.5,0,0.5,0.5,0,0.5,0.5,0.25,0,0.25,0,0.75,0.5,0.75,0.5,0.125,0,0.125,0,0.375,0.5,0.375,0,0.625,0.5,0.625,0,0.875,0.5,0.875])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,-0.5,0.5,0,0,0.5,0,0,-0.5,0,0,0,0,-0.5,0,0,0,-0.25,0,-0.5,-0.25,0,-0.5,0.25,0,0,0.25,0,0,-0.375,0,-0.5,-0.375,0,-0.5,-0.125,0,0,-0.125,0,-0.5,0.125,0,0,0.125,0,-0.5,0.375,0,0,0.375,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-18.3245,-1.73798,36.0234]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_2"),
                                  url : new MFString(["fussweg.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([60,16])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([2,8,15,10,-1]),
                              coordIndex : new MFInt32([0,1,3,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-18.3245,-1.73798,-0.625544]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([60,16])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([2,8,15,10,-1]),
                              coordIndex : new MFInt32([0,1,3,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681])}))}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
