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
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("buildings-right"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("fw"),
                  translation : new SFVec3f([-1.82041,-1.79794,39.2256]),
                  rotation : new SFRotation([0,1,0,4.71164]),
                  scale : new SFVec3f([4.16081,0.202305,1.13301]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["fussweg.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([60,16])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([2,19,20,30,22,-1,19,8,23,35,21,-1,28,24,38,40,-1,38,22,31,40,-1,32,10,41,43,-1,41,24,29,43,-1,20,44,39,31,-1,44,25,28,39,-1,25,46,42,29,-1,46,18,32,42,-1,23,50,48,36,-1,50,27,33,48,-1,27,53,51,34,-1,53,15,37,51,-1,33,26,45,49,-1,45,21,36,49,-1,37,18,47,52,-1,47,26,34,52,-1]),
                          coordIndex : new MFInt32([0,5,6,13,7,-1,5,1,8,16,6,-1,12,9,18,19,-1,18,7,13,19,-1,14,2,20,21,-1,20,9,12,21,-1,6,22,19,13,-1,22,10,12,19,-1,10,23,21,12,-1,23,4,14,21,-1,8,25,24,16,-1,25,11,15,24,-1,11,27,26,15,-1,27,3,17,26,-1,15,10,22,24,-1,22,6,16,24,-1,17,4,23,26,-1,23,10,15,26,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184,0.078125,1.2184,0.078125,2.98896,0.078125,2.10368,0.078125,2.10368,0.15625,2.10368,0,2.10368,0.15625,1.66104,0.078125,1.66104,0.078125,1.66104,0,1.66104,0.117188,1.66104,0.117188,1.66104,0.117188,2.10368,0.117188,2.10368,0.117188,1.2184,0.0390625,1.66104,0.0390625,1.66104,0.0390625,2.10368,0.0390625,2.10368,0.0390625,1.2184,0.15625,1.88236,0.117188,1.88236,0.117188,1.88236,0.15625,1.43972,0.117188,1.43972,0.117188,1.43972,0.078125,1.88236,0.078125,1.88236,0.078125,1.43972,0.078125,1.43972,0.0390625,1.88236,0.0390625,1.88236,0,1.88236,0.0390625,1.43972,0.0390625,1.43972,0,1.43972])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681,-8.4375,10,-24.3681,-8.4375,10,-59.7793,-8.4375,10,-42.0737,-6.875,10,-42.0737,-10,10,-42.0737,-6.875,10,-33.2209,-8.4375,10,-33.2209,-10,10,-33.2209,-7.65625,10,-33.2209,-7.65625,10,-42.0737,-7.65625,10,-24.3681,-9.21875,10,-33.2209,-9.21875,10,-42.0737,-9.21875,10,-24.3681,-6.875,10,-37.6473,-7.65625,10,-37.6473,-6.875,10,-28.7945,-7.65625,10,-28.7945,-8.4375,10,-37.6473,-8.4375,10,-28.7945,-9.21875,10,-37.6473,-10,10,-37.6473,-9.21875,10,-28.7945,-10,10,-28.7945])}))}))})])}),

                new Transform({
                  DEF : new SFString("buildings"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([38.1814,12.1006,-10.342]),
                      scale : new SFVec3f([1,1.19228,1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.226064)})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["haus3.jpg"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([3.94955,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,7,18,20,-1,18,10,12,20,-1,10,22,21,12,-1,22,6,3,21,-1,13,26,24,15,-1,26,2,8,24,-1,9,1,27,28,-1,27,13,15,28,-1,7,5,30,19,-1,30,16,11,19,-1,5,9,29,31,-1,29,14,17,31,-1,16,32,23,11,-1,32,4,6,23,-1,14,25,33,17,-1,25,8,4,33,-1,34,35,43,42,-1,39,40,37,36,-1,41,43,35,38,-1,38,37,40,41,-1]),
                              coordIndex : new MFInt32([0,7,15,16,-1,15,10,11,16,-1,10,18,17,11,-1,18,6,3,17,-1,12,20,19,13,-1,20,2,8,19,-1,9,1,21,22,-1,21,12,13,22,-1,7,5,23,15,-1,23,14,10,15,-1,5,9,22,23,-1,22,13,14,23,-1,14,24,18,10,-1,24,4,6,18,-1,13,19,24,14,-1,19,8,4,24,-1,25,26,7,0,-1,1,9,28,27,-1,5,7,26,29,-1,29,28,9,5,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.75,0,0.75,1,0.25,0,0.25,0.5,0.75,0.5,0.75,0.5,1,0.5,0,0.5,0.25,0.5,0.25,0.5,0.5,0.5,0.5,0.25,0.75,0.25,0.75,0.25,1,0.75,1,0.75,0.75,0.75,0.75,0.75,0.25,0.75,0.25,0.75,0,0.25,0,0.25,0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.75,0.5,0,0.999917,0,0.749938,0,0,0,0.249979,0,0.499958,0.0784547,0,0.0784547,0.249979,0.0784547,0.499958,0.0784547,0.999917,0.0784547,0.749938])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,8.69979,-10,-10,8.69979,8.01112,-10,13.7097,8.01112,10,13.7097,8.01112,0,13.7097,-10,0,8.69979,8.01112,5,13.7097,-10,5,8.69979,8.01112,-5,13.7097,-10,-5,8.69979,-1.98888,5,13.7097,-1.98888,10,13.7097,-1.98888,-10,13.7097,-1.98888,-5,13.7097,-1.98888,0,13.7097,-6.98888,5,13.7097,-6.98888,10,13.7097,3.01112,10,13.7097,3.01112,5,13.7097,3.01112,-5,13.7097,3.01112,-10,13.7097,-6.98888,-10,13.7097,-6.98888,-5,13.7097,-6.98888,0,13.7097,3.01112,0,13.7097,-14.6541,10,8.69979,-14.6541,5,8.69979,-14.6541,-10,8.69979,-14.6541,-5,8.69979,-14.6541,0,8.69979])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([57.8741,12.1006,-10.342]),
                      scale : new SFVec3f([1,1.19228,1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.226064)})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([3.94955,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,7,18,20,-1,18,10,12,20,-1,10,22,21,12,-1,22,6,3,21,-1,13,26,24,15,-1,26,2,8,24,-1,9,1,27,28,-1,27,13,15,28,-1,7,5,30,19,-1,30,16,11,19,-1,5,9,29,31,-1,29,14,17,31,-1,16,32,23,11,-1,32,4,6,23,-1,14,25,33,17,-1,25,8,4,33,-1,34,35,43,42,-1,39,40,37,36,-1,41,43,35,38,-1,38,37,40,41,-1]),
                              coordIndex : new MFInt32([0,7,15,16,-1,15,10,11,16,-1,10,18,17,11,-1,18,6,3,17,-1,12,20,19,13,-1,20,2,8,19,-1,9,1,21,22,-1,21,12,13,22,-1,7,5,23,15,-1,23,14,10,15,-1,5,9,22,23,-1,22,13,14,23,-1,14,24,18,10,-1,24,4,6,18,-1,13,19,24,14,-1,19,8,4,24,-1,25,26,7,0,-1,1,9,28,27,-1,5,7,26,29,-1,29,28,9,5,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.75,0,0.75,1,0.25,0,0.25,0.5,0.75,0.5,0.75,0.5,1,0.5,0,0.5,0.25,0.5,0.25,0.5,0.5,0.5,0.5,0.25,0.75,0.25,0.75,0.25,1,0.75,1,0.75,0.75,0.75,0.75,0.75,0.25,0.75,0.25,0.75,0,0.25,0,0.25,0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.75,0.5,0,0.999917,0,0.749938,0,0,0,0.249979,0,0.499958,0.0784547,0,0.0784547,0.249979,0.0784547,0.499958,0.0784547,0.999917,0.0784547,0.749938])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,8.69979,-10,-10,8.69979,8.01112,-10,13.7097,8.01112,10,13.7097,8.01112,0,13.7097,-10,0,8.69979,8.01112,5,13.7097,-10,5,8.69979,8.01112,-5,13.7097,-10,-5,8.69979,-1.98888,5,13.7097,-1.98888,10,13.7097,-1.98888,-10,13.7097,-1.98888,-5,13.7097,-1.98888,0,13.7097,-6.98888,5,13.7097,-6.98888,10,13.7097,3.01112,10,13.7097,3.01112,5,13.7097,3.01112,-5,13.7097,3.01112,-10,13.7097,-6.98888,-10,13.7097,-6.98888,-5,13.7097,-6.98888,0,13.7097,3.01112,0,13.7097,-14.6541,10,8.69979,-14.6541,5,8.69979,-14.6541,-10,8.69979,-14.6541,-5,8.69979,-14.6541,0,8.69979])}))}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());