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
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("veag-floor"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("front"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([1.47039,-1.73798,10.4054]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_1")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_2"),
                                  url : new MFString(["fussweg.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  DEF : new SFString("_3"),
                                  scale : new SFVec2f([60,16])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([11,5,13,12,-1,13,3,10,12,-1,2,14,12,10,-1,14,7,11,12,-1,15,3,13,17,-1,13,5,16,17,-1,6,18,17,16,-1,18,1,15,17,-1,21,4,23,22,-1,23,5,11,22,-1,7,24,22,11,-1,24,47,21,22,-1,19,6,16,25,-1,16,5,23,25,-1,4,26,25,23,-1,26,0,19,25,-1,46,44,29,28,-1,29,9,27,28,-1,4,21,28,27,-1,21,47,46,28,-1,27,9,31,30,-1,31,8,20,30,-1,0,26,30,20,-1,26,4,27,30,-1,34,9,29,33,-1,44,35,33,29,-1,32,8,31,36,-1,31,9,34,36,-1,38,39,45,42,-1,37,38,42,43,-1,45,39,35,44,-1,40,41,45,44,-1,45,46,47,-1,45,44,46,-1]),
                              coordIndex : new MFInt32([13,6,15,14,-1,15,4,12,14,-1,3,16,14,12,-1,16,8,13,14,-1,17,4,15,19,-1,15,6,18,19,-1,7,20,19,18,-1,20,2,17,19,-1,23,5,25,24,-1,25,6,13,24,-1,8,26,24,13,-1,26,0,23,24,-1,21,7,18,27,-1,18,6,25,27,-1,5,28,27,25,-1,28,1,21,27,-1,29,10,32,31,-1,32,11,30,31,-1,5,23,31,30,-1,23,0,29,31,-1,30,11,34,33,-1,34,9,22,33,-1,1,28,33,22,-1,28,5,30,33,-1,37,11,32,36,-1,10,38,36,32,-1,35,9,34,39,-1,34,11,37,39,-1,41,42,43,44,-1,40,41,44,45,-1,43,42,38,10,-1,10,43,47,46,-1,43,29,0,-1,43,10,29,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.25,0,0.375,0,0.375,0.628218,0.375,0.25,0.25,0.25,0.3125,0.25,0.3125,0,0.3125,0.628218,0.1875,0,0.1875,0.25,0.375,0.375,0.3125,0.375,0.34375,0.375,0.34375,0.25,0.34375,0.628218,0.375,0.125,0.3125,0.125,0.34375,0.125,0.34375,0,0.28125,0,0.21875,0,0.25,0.375,0.28125,0.375,0.28125,0.25,0.28125,0.628218,0.28125,0.125,0.25,0.125,0.21875,0.25,0.21875,0.375,0.1875,0.375,0.21875,0.125,0.1875,0.125,0.15625,0,0.15625,0.375,0.15625,0.25,0.15625,0.628218,0.15625,0.125,0.15625,1.2184,0.15625,0.923311,0.15625,0.775764,0.1875,0.628218,0.203312,0.744405,0.203312,0.923311,0.203312,1.2184,0.1875,0.628218,0.203312,0.744405,0.21875,0.628218,0.25,0.628218])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-5,10,-12.5644,-5,10,0,-2.5,10,0,-2.5,10,-12.5644,-2.5,10,-5,-5,10,-5,-3.75,10,-5,-3.75,10,0,-3.75,10,-12.5644,-6.25,10,0,-6.25,10,-12.5644,-6.25,10,-5,-2.5,10,-7.5,-3.75,10,-7.5,-3.125,10,-7.5,-3.125,10,-5,-3.125,10,-12.5644,-2.5,10,-2.5,-3.75,10,-2.5,-3.125,10,-2.5,-3.125,10,0,-4.375,10,0,-5.625,10,0,-5,10,-7.5,-4.375,10,-7.5,-4.375,10,-5,-4.375,10,-12.5644,-4.375,10,-2.5,-5,10,-2.5,-5.625,10,-12.5644,-5.625,10,-5,-5.625,10,-7.5,-6.25,10,-7.5,-5.625,10,-2.5,-6.25,10,-2.5,-6.875,10,0,-6.875,10,-7.5,-6.875,10,-5,-6.875,10,-12.5644,-6.875,10,-2.5,-6.875,10,-24.3681,-6.875,10,-18.4662,-6.875,10,-15.5153,-5.93375,10,-14.8881,-5.93375,10,-18.4662,-5.93375,10,-24.3681,-6.25,10,-12.5644,-5.93375,10,-14.8881])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([1.47039,-1.73798,10.4054]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_1")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,2,3,-1,2,1,5,4,-1,6,7,4,5,-1,8,9,10,11,-1,10,1,0,11,-1,9,8,12,13,-1,14,15,13,12,-1,16,6,5,17,-1,5,1,10,17,-1,9,18,17,10,-1,18,19,16,17,-1,18,9,13,20,-1,19,18,20,21,-1,13,15,22,20,-1,22,23,21,20,-1,24,25,26,27,-1,26,15,14,27,-1,28,29,30,31,-1,30,25,24,31,-1,32,23,22,33,-1,22,15,26,33,-1,25,34,33,26,-1,34,35,32,33,-1,34,25,30,36,-1,30,29,37,36,-1,38,39,36,37,-1,39,35,34,36,-1,40,41,42,43,-1,42,29,28,43,-1,41,40,44,45,-1,46,47,45,44,-1,48,38,37,49,-1,37,29,42,49,-1,41,50,49,42,-1,50,51,48,49,-1,50,41,45,52,-1,51,50,52,53,-1,45,47,54,52,-1,54,55,53,52,-1,56,47,46,57,-1,58,55,54,59,-1,54,47,56,59,-1,60,61,56,57,-1,61,62,59,56,-1,62,63,58,59,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.8125,0.375,0.8125,0.25,0.84375,0.25,0.84375,0.375,0.84375,0.125,0.8125,0.125,0.8125,0,0.84375,0,0.75,0.375,0.75,0.25,0.78125,0.25,0.78125,0.375,0.71875,0.375,0.71875,0.25,0.6875,0.375,0.6875,0.25,0.78125,0,0.78125,0.125,0.75,0.125,0.75,0,0.71875,0.125,0.71875,0,0.6875,0.125,0.6875,0,0.625,0.375,0.625,0.25,0.65625,0.25,0.65625,0.375,0.5625,0.375,0.5625,0.25,0.59375,0.25,0.59375,0.375,0.65625,0,0.65625,0.125,0.625,0.125,0.625,0,0.59375,0.125,0.5625,0.125,0.5625,0,0.59375,0,0.5,0.375,0.5,0.25,0.53125,0.25,0.53125,0.375,0.46875,0.375,0.46875,0.25,0.4375,0.375,0.4375,0.25,0.53125,0,0.53125,0.125,0.5,0.125,0.5,0,0.46875,0.125,0.46875,0,0.4375,0.125,0.4375,0,0.40625,0.25,0.40625,0.375,0.40625,0,0.40625,0.125,0.375,0.375,0.375,0.25,0.375,0.125,0.375,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([6.25,10,-7.5,6.25,10,-5,6.875,10,-5,6.875,10,-7.5,6.875,10,-2.5,6.25,10,-2.5,6.25,10,0,6.875,10,0,5,10,-7.5,5,10,-5,5.625,10,-5,5.625,10,-7.5,4.375,10,-7.5,4.375,10,-5,3.75,10,-7.5,3.75,10,-5,5.625,10,0,5.625,10,-2.5,5,10,-2.5,5,10,0,4.375,10,-2.5,4.375,10,0,3.75,10,-2.5,3.75,10,0,2.5,10,-7.5,2.5,10,-5,3.125,10,-5,3.125,10,-7.5,1.25,10,-7.5,1.25,10,-5,1.875,10,-5,1.875,10,-7.5,3.125,10,0,3.125,10,-2.5,2.5,10,-2.5,2.5,10,0,1.875,10,-2.5,1.25,10,-2.5,1.25,10,0,1.875,10,0,0,10,-7.5,0,10,-5,0.625,10,-5,0.625,10,-7.5,-0.625,10,-7.5,-0.625,10,-5,-1.25,10,-7.5,-1.25,10,-5,0.625,10,0,0.625,10,-2.5,0,10,-2.5,0,10,0,-0.625,10,-2.5,-0.625,10,0,-1.25,10,-2.5,-1.25,10,0,-1.875,10,-5,-1.875,10,-7.5,-1.875,10,0,-1.875,10,-2.5,-2.5,10,-7.5,-2.5,10,-5,-2.5,10,-2.5,-2.5,10,0])}))}))})])}),

                    new Transform({
                      DEF : new SFString("rasenkante"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-7.49087,0.319543,1.19471]),
                          rotation : new SFRotation([0,-1,0,1.57079]),
                          scale : new SFVec3f([1.38761,0.0680928,0.054399]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_4"),
                                      url : new MFString(["concrete.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      scale : new SFVec2f([3.32357,0.309305])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  texCoordIndex : new MFInt32([4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1]),
                                  coordIndex : new MFInt32([6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([1.63219,2.98023e-8,0]),
                          scale : new SFVec3f([1.21632,1,1]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_5"),
                              translation : new SFVec3f([-6.15764,0.319543,2.63679]),
                              scale : new SFVec3f([1.38761,0.0680928,0.054399]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_4")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([3.32357,0.309305])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      texCoordIndex : new MFInt32([4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1]),
                                      coordIndex : new MFInt32([6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([2.77905,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([5.55998,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([8.34099,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([11.121,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([13.8953,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([16.6755,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([19.4552,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([22.233,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])}),

                            new Transform({
                              translation : new SFVec3f([25.0138,0,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])})])}),

                        new Transform({
                          translation : new SFVec3f([26.2011,0.319543,1.19462]),
                          rotation : new SFRotation([0,-1,0,1.57079]),
                          scale : new SFVec3f([1.38761,0.0680928,0.054399]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_4")})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      scale : new SFVec2f([3.32357,0.309305])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  texCoordIndex : new MFInt32([4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1]),
                                  coordIndex : new MFInt32([6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("rasen"),
                      translation : new SFVec3f([1.46296,-1.69118,8.40168]),
                      scale : new SFVec3f([3.60071,0.202305,0.768248]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_1")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["gras01.jpg"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,2,3,-1,4,0,3,5,-1,6,4,7,8,-1,9,10,6,11,-1,12,10,13,14,-1,15,12,14,16,-1,17,15,18,19,-1,20,17,19,21,-1,22,20,23,24,-1,25,22,24,26,-1,27,25,28,29,-1,30,31,27,32,-1,33,34,35,36,-1,37,31,38,39,-1,34,37,39,40,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,9,6,7,-1,10,9,8,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,20,18,19,21,-1,22,20,21,23,-1,24,25,22,23,-1,26,27,28,29,-1,30,25,24,31,-1,27,30,31,28,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.40625,1,0.375,1,0.375,0.875,0.40625,0.875,0.4375,1,0.4375,0.875,0.46875,1,0.4375,0.875,0.46875,0.875,0.5,0.875,0.5,1,0.46875,0.875,0.53125,1,0.5,0.875,0.53125,0.875,0.5625,1,0.5625,0.875,0.59375,1,0.5625,0.875,0.59375,0.875,0.625,1,0.625,0.875,0.65625,1,0.625,0.875,0.65625,0.875,0.6875,1,0.6875,0.875,0.71875,1,0.6875,0.875,0.71875,0.875,0.75,0.875,0.75,1,0.71875,0.875,0.84375,1,0.8125,1,0.8125,0.875,0.84375,0.875,0.78125,1,0.75,0.875,0.78125,0.875,0.8125,0.875])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1.875,10,-10,-2.5,10,-10,-2.5,10,-7.5,-1.875,10,-7.5,-1.25,10,-10,-1.25,10,-7.5,-0.625,10,-10,-0.625,10,-7.5,0,10,-7.5,0,10,-10,0.625,10,-10,0.625,10,-7.5,1.25,10,-10,1.25,10,-7.5,1.875,10,-10,1.875,10,-7.5,2.5,10,-10,2.5,10,-7.5,3.125,10,-10,3.125,10,-7.5,3.75,10,-10,3.75,10,-7.5,4.375,10,-10,4.375,10,-7.5,5,10,-7.5,5,10,-10,6.875,10,-10,6.25,10,-10,6.25,10,-7.5,6.875,10,-7.5,5.625,10,-10,5.625,10,-7.5])}))}))})])}),

                    new Transform({
                      DEF : new SFString("kiesbett"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([30.6458,0,0]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_6"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-5.96811,0.361661,0.522935]),
                                  rotation : new SFRotation([0,1,0,4.71239]),
                                  scale : new SFVec3f([0.221293,0.0338355,0.989542]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_1")})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["kieselstein01.jpg"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              scale : new SFVec2f([0.796297,3])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([5,7,6,4,-1,7,1,2,6,-1,0,9,8,3,-1,9,5,4,8,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.25,0,0.25,1,0.75,0,0.75])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1,1,1,0,-1,1,0,1,1,0.5,-1,1,0.5,1,1,-0.5,-1,1,-0.5])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-5.94448,0.309971,0.717207]),
                                  scale : new SFVec3f([1.0795,0.100811,0.054399]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_1")})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_4")})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              scale : new SFVec2f([3.32357,0.309305])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          texCoordIndex : new MFInt32([4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1]),
                                          coordIndex : new MFInt32([6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1])}))}))})])})])})])}),

                        new Transform({
                          translation : new SFVec3f([28.1185,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([25.5156,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([22.9666,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([20.3454,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([17.9213,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([15.3405,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([12.8044,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([10.2395,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([7.69543,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([5.10118,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          translation : new SFVec3f([2.55872,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_6")})])}),

                        new Transform({
                          USE : new SFString("_6")})])})])}),

                new Transform({
                  DEF : new SFString("left"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([1.47039,-1.73798,10.4054]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_1")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,0,3,-1,1,6,7,2,-1,6,8,9,7,-1,10,8,6,11,-1,12,10,11,13,-1,6,1,14,11,-1,14,15,13,11,-1,16,12,13,17,-1,13,15,18,17,-1,19,20,17,18,-1,20,21,16,17,-1,0,5,22,23,-1,1,0,23,14,-1,22,24,25,23,-1,25,15,14,23,-1,18,15,25,26,-1,25,24,27,26,-1,28,29,26,27,-1,29,19,18,26,-1,30,31,32,33,-1,34,35,36,37,-1,33,32,38,39,-1,39,38,35,34,-1,5,4,40,41,-1,40,30,33,41,-1,28,27,42,43,-1,42,37,44,43,-1,24,45,42,27,-1,45,34,37,42,-1,24,22,46,45,-1,5,41,46,22,-1,46,39,34,45,-1,41,33,39,46,-1,37,36,47,44,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.125,0.375,0.125,0.25,0.15625,0.25,0.15625,0.375,0.15625,0.628218,0.125,0.628218,0.125,0.125,0.15625,0.125,0.125,0,0.15625,0,0.09375,0,0.09375,0.125,0.0625,0,0.0625,0.125,0.09375,0.25,0.0625,0.25,0.03125,0,0.03125,0.125,0.03125,0.25,0,0.25,0,0.125,0,0,0.09375,0.628218,0.09375,0.375,0.0625,0.628218,0.0625,0.375,0.03125,0.375,0.03125,0.628218,0,0.628218,0,0.375,0.15625,0.923311,0.15625,1.2184,0.125,1.2184,0.125,0.923311,0.0625,0.923311,0.0625,1.2184,0.03125,1.2184,0.03125,0.923311,0.09375,1.2184,0.09375,0.923311,0.15625,0.775764,0.125,0.775764,0.03125,0.775764,0,0.775764,0,0.923311,0.0625,0.775764,0.09375,0.775764,0,1.2184])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-7.5,10,-7.5,-7.5,10,-5,-6.875,10,-5,-6.875,10,-7.5,-6.875,10,-12.5644,-7.5,10,-12.5644,-7.5,10,-2.5,-6.875,10,-2.5,-7.5,10,0,-6.875,10,0,-8.125,10,0,-8.125,10,-2.5,-8.75,10,0,-8.75,10,-2.5,-8.125,10,-5,-8.75,10,-5,-9.375,10,0,-9.375,10,-2.5,-9.375,10,-5,-10,10,-5,-10,10,-2.5,-10,10,0,-8.125,10,-12.5644,-8.125,10,-7.5,-8.75,10,-12.5644,-8.75,10,-7.5,-9.375,10,-7.5,-9.375,10,-12.5644,-10,10,-12.5644,-10,10,-7.5,-6.875,10,-18.4662,-6.875,10,-24.3681,-7.5,10,-24.3681,-7.5,10,-18.4662,-8.75,10,-18.4662,-8.75,10,-24.3681,-9.375,10,-24.3681,-9.375,10,-18.4662,-8.125,10,-24.3681,-8.125,10,-18.4662,-6.875,10,-15.5153,-7.5,10,-15.5153,-9.375,10,-15.5153,-10,10,-15.5153,-10,10,-18.4662,-8.75,10,-15.5153,-8.125,10,-15.5153,-10,10,-24.3681])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([1.47039,-1.73798,10.4054]),
                      scale : new SFVec3f([3.58919,0.202305,1.03599]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_1")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,3,2,6,7,-1,2,5,8,6,-1,9,10,11,12,-1,10,13,14,11,-1,7,6,15,16,-1,6,8,17,15,-1,16,15,10,9,-1,15,17,13,10,-1,18,19,20,21,-1,19,0,3,20,-1,22,23,24,25,-1,23,9,12,24,-1,26,27,23,22,-1,27,16,9,23,-1,21,20,28,29,-1,20,3,7,28,-1,29,28,27,26,-1,28,7,16,27,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.15625,1.80859,0.15625,2.39878,0.125,2.39878,0.125,1.80859,0.15625,2.98896,0.125,2.98896,0.09375,2.39878,0.09375,1.80859,0.09375,2.98896,0.03125,1.80859,0.03125,2.39878,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.39878,0.0625,1.80859,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.5135,0.125,1.2184,0.03125,1.2184,0.03125,1.5135,0,1.5135,0,1.2184,0.0625,1.2184,0.0625,1.5135,0.09375,1.5135,0.09375,1.2184])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-6.875,10,-36.1718,-6.875,10,-47.9756,-7.5,10,-47.9755,-7.5,10,-36.1718,-6.875,10,-59.7793,-7.5,10,-59.7793,-8.125,10,-47.9755,-8.125,10,-36.1718,-8.125,10,-59.7793,-9.375,10,-36.1718,-9.375,10,-47.9756,-10,10,-47.9755,-10,10,-36.1718,-9.375,10,-59.7793,-10,10,-59.7793,-8.75,10,-47.9755,-8.75,10,-36.1718,-8.75,10,-59.7793,-6.875,10,-24.3681,-6.875,10,-30.27,-7.5,10,-30.27,-7.5,10,-24.3681,-9.375,10,-24.3681,-9.375,10,-30.27,-10,10,-30.27,-10,10,-24.3681,-8.75,10,-24.3681,-8.75,10,-30.27,-8.125,10,-30.27,-8.125,10,-24.3681])}))}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
