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
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:25 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:25 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in CosmoWorldsPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("veag-zentrale"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("seite-l"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("reling_1"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-17.9397,4.71995,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_1"),
                                      ambientIntensity : new SFFloat(0.195325),
                                      diffuseColor : new SFColor([0.819149,0.819149,0.819149])})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_2"),
                                      url : new MFString(["reling.png"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      DEF : new SFString("_3"),
                                      scale : new SFVec2f([12,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,-10,10,-10,10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,7.94848,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      DEF : new SFString("_4"),
                                      scale : new SFVec2f([12,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,-10,10,-10,10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,11.2374,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      DEF : new SFString("_5"),
                                      scale : new SFVec2f([12,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,-10,10,-10,10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,14.4675,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      DEF : new SFString("_6"),
                                      scale : new SFVec2f([12,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,-10,10,-10,10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,17.6986,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      DEF : new SFString("_7"),
                                      scale : new SFVec2f([12,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,-10,10,-10,10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([0.427938,20.6912,-23.5949]),
                          scale : new SFVec3f([2.56205,0.100096,2.59196]),
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
                                      DEF : new SFString("_8"),
                                      scale : new SFVec2f([36,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.721954,0,1,0,1,1,0.721954,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,-10,4.18848,-10,-10,10,-10,10,10,-10,10,4.18848])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("seite"),
                      translation : new SFVec3f([-23.4009,11.4211,-24.7899]),
                      rotation : new SFRotation([0.00000212471,1,0.00000157051,1.57079]),
                      scale : new SFVec3f([49.7936,22.7998,0.999999]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.542553),
                                  diffuseColor : new SFColor([1,1,1])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["seite.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              texCoordIndex : new MFInt32([4,7,19,17,-1,19,11,10,17,-1,7,0,20,19,-1,20,12,11,19,-1,11,21,18,10,-1,21,6,3,18,-1,12,22,21,11,-1,22,1,6,21,-1,29,25,4,17,26,-1,17,10,30,27,-1,10,18,32,31,-1,18,3,34,33,-1,33,34,2,15,-1,31,32,15,9,-1,27,30,9,14,-1,28,26,14,24,-1]),
                              coordIndex : new MFInt32([4,6,15,13,-1,15,9,8,13,-1,6,0,16,15,-1,16,10,9,15,-1,9,17,14,8,-1,17,5,3,14,-1,10,18,17,9,-1,18,1,5,17,-1,22,20,4,13,21,-1,13,8,23,21,-1,8,14,24,23,-1,14,3,25,24,-1,24,25,2,12,-1,23,24,12,7,-1,21,23,7,11,-1,22,21,11,19,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([1,0,1,1,0,1,0.5,1,0.5,0,0.25,1,0.75,1,0.75,0,0.25,0.5,0,0.5,0.5,0.5,0.75,0.5,1,0.5,0.25,0.25,0,0.25,0,0.75,0.25,0.75,0.5,0.25,0.5,0.75,0.75,0.25,1,0.25,0.75,0.75,1,0.75,0.25,0.157991,0,0.157991,0.261133,0,0.261133,0.25,0.261133,0.25,0.261133,0.16247,0.261133,0.16247,0.261133,0.5,0.261133,0.5,0.261133,0.75,0.261133,0.75,0.261133,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.25,-0.5,0,-0.5,0,0,0,0,0,0.25,0,0,0.5,0,0,-0.5,-0.25,0,-0.5,0.25,0,0,-0.25,0,0,0.25,0,0.25,-0.25,0,0.5,-0.25,0,0.25,0.25,0,0.5,0.25,0,-0.5,-0.33753,0,-0.238867,-0.5,0,-0.238867,-0.25,0,-0.238867,-0.33753,0,-0.238867,0,0,-0.238867,0.25,0,-0.238867,0.5,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0.427938,20.6912,-23.5949]),
                      scale : new SFVec3f([2.56205,0.100096,2.59196]),
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
                                  USE : new SFString("_8")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,3,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,0.721954,1,0.721954,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,-10,-10,-10,-10,-10,10,4.18848,-10,-10,4.18848])}))}))})])}),

                    new Transform({
                      DEF : new SFString("gang_1"),
                      translation : new SFVec3f([-14.6001,1.97401,-8.5561]),
                      rotation : new SFRotation([0,1,0,4.71239]),
                      scale : new SFVec3f([8.37489,1.84669,7.93055]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([0,1,1,0,-1,0,0,0,0,-1,0,1,1,0,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1,0,3,4,5,-1,3,2,6,7,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([1,0.878475,0.644795,1,0.634546,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,0.660834,-1,-1,0.660834,-4.91299,-1,0.660834,-4.91299,1,0.660834,-4.91299,1,1.06974,-1,1,1.06974,-4.91299,-1,1.07872,-4.91299,1,1.07872])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("dach"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0.486346,23.3353,-23.7242]),
                      rotation : new SFRotation([1,0,0,1.5708]),
                      scale : new SFVec3f([2.66457,2.69275,0.0380883]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_9"),
                                  ambientIntensity : new SFFloat(0.625),
                                  diffuseColor : new SFColor([0.510638,0.475596,0.392026]),
                                  emissiveColor : new SFColor([0.0425532,0.039633,0.0326688])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_10"),
                                  url : new MFString(["concrete.jpg"])}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([20,20,20])}))})])}),

                    new Transform({
                      translation : new SFVec3f([0.57647,19.837,-23.9663]),
                      rotation : new SFRotation([1,0,0,1.5708]),
                      scale : new SFVec3f([2.58125,2.63692,0.0190014]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_9")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_10")}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([20,20,20])}))})])})])}),

                new Transform({
                  DEF : new SFString("front"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("gang"),
                      translation : new SFVec3f([-14.6001,1.97401,-8.5561]),
                      rotation : new SFRotation([0,1,0,4.71239]),
                      scale : new SFVec3f([8.37488,1.84669,7.93055]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([0,0,1,2,2,-1,3,3,4,4,-1,3,3,3,3,-1]),
                              coordIndex : new MFInt32([0,1,2,3,4,-1,5,0,4,6,-1,1,0,5,7,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,0,0,1,0.878475,0.644795,0.406417,0.357027,0.262056,0.00534759,0.00469773,0.0034481,0.256684,0.225491,0.165509])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0.583611,1,-4.95722,1.05602,1,-5.12081,1.05324,1,-0.931487,0.972493,1,-0.943266,0.583611,1,-1,0.583611,-1,-4.95722,0.583611,-1,-1,1.10983,-1,-5.11296])}))}))})])}),

                    new Transform({
                      DEF : new SFString("top"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("gitter_1"),
                          translation : new SFVec3f([-18.063,19.5441,-1.17617]),
                          scale : new SFVec3f([0.987725,0.290538,1]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,7,6,-1,12,13,14,15,-1,16,17,13,12,-1,18,19,20,21,-1,22,23,19,18,-1,24,25,26,27,-1,28,29,25,24,-1,30,31,32,33,-1,34,35,31,30,-1,36,37,38,39,-1,40,41,37,36,-1,42,43,44,45,-1,46,47,43,42,-1,48,49,50,51,-1,52,53,49,48,-1,54,55,56,57,-1,58,59,55,54,-1,60,61,62,63,-1,64,65,61,60,-1,66,67,68,69,-1,70,71,67,66,-1,72,73,74,75,-1,76,77,73,72,-1,78,79,80,81,-1,82,83,79,78,-1,84,85,86,87,-1,88,89,85,84,-1,90,91,92,93,-1,94,95,91,90,-1,96,97,98,99,-1,100,101,97,96,-1,102,103,104,105,-1,106,107,103,102,-1,108,109,110,111,-1,112,113,109,108,-1,114,115,116,117,-1,118,119,115,114,-1,120,121,122,123,-1,124,125,121,120,-1,126,127,128,129,-1,130,131,127,126,-1,132,133,134,135,-1,136,137,133,132,-1,138,139,140,141,-1,142,143,139,138,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([44.5283,12.0987,1.34614,44.5283,-6.97789,1.34614,44.7775,-6.97789,1.18186,44.7775,12.0987,1.18186,44.2791,12.0987,1.18186,44.2791,-6.97789,1.18186,42.9091,12.0987,1.34614,42.9091,-6.97789,1.34614,43.1583,-6.97789,1.18186,43.1583,12.0987,1.18186,42.6599,12.0987,1.18186,42.6599,-6.97789,1.18186,41.29,12.0987,1.34614,41.29,-6.97789,1.34614,41.5392,-6.97789,1.18186,41.5392,12.0987,1.18186,41.0408,12.0987,1.18186,41.0408,-6.97789,1.18186,39.6708,12.0987,1.34614,39.6708,-6.97789,1.34614,39.92,-6.97789,1.18186,39.92,12.0987,1.18186,39.4216,12.0987,1.18186,39.4216,-6.97789,1.18186,38.0516,12.0987,1.34614,38.0516,-6.97789,1.34614,38.3008,-6.97789,1.18186,38.3008,12.0987,1.18186,37.8024,12.0987,1.18186,37.8024,-6.97789,1.18186,36.4278,12.0987,1.34614,36.4278,-6.97789,1.34614,36.677,-6.97789,1.18186,36.677,12.0987,1.18186,36.1786,12.0987,1.18186,36.1786,-6.97789,1.18186,34.8086,12.0987,1.34614,34.8086,-6.97789,1.34614,35.0578,-6.97789,1.18186,35.0578,12.0987,1.18186,34.5594,12.0987,1.18186,34.5594,-6.97789,1.18186,33.1895,12.0987,1.34614,33.1895,-6.97789,1.34614,33.4387,-6.97789,1.18186,33.4387,12.0987,1.18186,32.9403,12.0987,1.18186,32.9403,-6.97789,1.18186,31.5703,12.0987,1.34614,31.5703,-6.97789,1.34614,31.8195,-6.97789,1.18186,31.8195,12.0987,1.18186,31.3211,12.0987,1.18186,31.3211,-6.97789,1.18186,29.9512,12.0987,1.34614,29.9512,-6.97789,1.34614,30.2004,-6.97789,1.18186,30.2004,12.0987,1.18186,29.702,12.0987,1.18186,29.702,-6.97789,1.18186,28.332,12.0987,1.34614,28.332,-6.97789,1.34614,28.5812,-6.97789,1.18186,28.5812,12.0987,1.18186,28.0828,12.0987,1.18186,28.0828,-6.97789,1.18186,26.7128,12.0987,1.34614,26.7128,-6.97789,1.34614,26.962,-6.97789,1.18186,26.962,12.0987,1.18186,26.4636,12.0987,1.18186,26.4636,-6.97789,1.18186,25.0937,12.0987,1.34614,25.0937,-6.97789,1.34614,25.3429,-6.97789,1.18186,25.3429,12.0987,1.18186,24.8445,12.0987,1.18186,24.8445,-6.97789,1.18186,23.4116,12.0987,1.34614,23.4116,-6.97789,1.34614,23.6608,-6.97789,1.18186,23.6608,12.0987,1.18186,23.1624,12.0987,1.18186,23.1624,-6.97789,1.18186,21.7925,12.0987,1.34614,21.7925,-6.97789,1.34614,22.0417,-6.97789,1.18186,22.0417,12.0987,1.18186,21.5433,12.0987,1.18186,21.5433,-6.97789,1.18186,20.1733,12.0987,1.34614,20.1733,-6.97789,1.34614,20.4225,-6.97789,1.18186,20.4225,12.0987,1.18186,19.9241,12.0987,1.18186,19.9241,-6.97789,1.18186,18.5541,12.0987,1.34614,18.5541,-6.97789,1.34614,18.8033,-6.97789,1.18186,18.8033,12.0987,1.18186,18.305,12.0987,1.18186,18.305,-6.97789,1.18186,16.935,12.0987,1.34614,16.935,-6.97789,1.34614,17.1842,-6.97789,1.18186,17.1842,12.0987,1.18186,16.6858,12.0987,1.18186,16.6858,-6.97789,1.18186,15.3158,12.0987,1.34614,15.3158,-6.97789,1.34614,15.565,-6.97789,1.18186,15.565,12.0987,1.18186,15.0666,12.0987,1.18186,15.0666,-6.97789,1.18186,13.6967,12.0987,1.34614,13.6967,-6.97789,1.34614,13.9459,-6.97789,1.18186,13.9459,12.0987,1.18186,13.4475,12.0987,1.18186,13.4475,-6.97789,1.18186,12.0775,12.0987,1.34614,12.0775,-6.97789,1.34614,12.3267,-6.97789,1.18186,12.3267,12.0987,1.18186,11.8283,12.0987,1.18186,11.8283,-6.97789,1.18186,9.05049,12.0333,1.34614,9.05049,0.743505,1.34614,9.2315,0.743505,1.18186,9.2315,12.0333,1.18186,8.86948,12.0333,1.18186,8.86948,0.743505,1.18186,10.6081,12.0333,1.34614,10.6081,0.743528,1.34614,10.7891,0.743528,1.18185,10.7891,12.0333,1.18185,10.427,12.0333,1.18186,10.427,0.743528,1.18186,7.66366,12.0333,1.34614,7.66366,0.743505,1.34614,7.84468,0.743505,1.18186,7.84468,12.0333,1.18186,7.48265,12.0333,1.18186,7.48265,0.743505,1.18186])}))}))})])}),

                        new Transform({
                          DEF : new SFString("reling_2"),
                          translation : new SFVec3f([0.427938,20.6912,-23.5949]),
                          scale : new SFVec3f([2.56205,0.100096,2.59196]),
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
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,5,0,3,4,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.5,0,1,0,1,1,0.5,1,0.277759,1,0.277759,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,-10,10,10,-10,10,10,10,10,0,10,10,-4.29376,10,10,-4.29376,-10,10])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("frame-vert"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-9.03016,3.85749,-0.334988]),
                          scale : new SFVec3f([1.65721,0.256657,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_11"),
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-9.03016,7.12366,-0.334988]),
                          scale : new SFVec3f([1.49949,0.221592,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-9.03016,10.3764,-0.334988]),
                          scale : new SFVec3f([1.49949,0.221592,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-9.03016,13.6144,-0.334988]),
                          scale : new SFVec3f([1.49949,0.221592,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-9.03016,16.805,-0.334988]),
                          scale : new SFVec3f([1.49949,0.221592,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-9.03016,19.7563,-0.334988]),
                          scale : new SFVec3f([1.50862,0.221592,0.355458]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,5,4,2,-1,7,1,3,6,-1,4,5,7,6,-1,1,7,5,0,-1,2,4,6,3,8,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,0.96231,-1,-1,0.952654,1,1,0.96231,1,-1,0.952654,1,0.5,1.44307,-1,0.5,1.44307,1,-0.5,1.44307,-1,-0.5,1.44307,1,1,0.952654])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-7.53207,11.8962,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.108827,7.9203,0.116164]),
                          scaleOrientation : new SFRotation([0,-1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-10.5286,11.8962,0.00568462]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,7.9203,0.108827]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_11")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("leuchtfenster"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-1.49224,14.1334,0.283072]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_12"),
                                      url : new MFString(["fenster.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.659419,0.490986,0.659419,0.990986,0.495285,0.990986,0.495286,0.490986])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.171733,0,0,-0.171733,0.5,0,-0.335867,0.5,0,-0.335867,0,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-1.49223,7.79532,0.283072]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_12")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.832621,0.00965897,0.832621,0.494255,0.668487,0.494255,0.668487,0.00965897])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.171733,0,0,-0.171733,0.5,0,-0.335867,0.5,0,-0.335867,0,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([11.3076,10.962,0.283072]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_12")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.992354,0.00452453,0.992354,0.500426,0.675766,0.500426,0.675766,0.00452453])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.171733,0,0,-0.171733,0.5,0,-0.5,0.5,0,-0.5,0,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([18.8789,14.1334,0.283072]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_12")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.824459,0.492298,0.824459,0.992298,0.496192,0.992298,0.496192,0.492298])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.171733,0,0,-0.171733,0.5,0,-0.5,0.5,0,-0.5,0,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([26.4957,14.1362,0.283073]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_12")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.00181621,0.00965904,0.00396371,0.492255,0.328141,0.497262,0.325994,0.0146661])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.171733,0,0,-0.171733,0.5,0,-0.5,0.5,0,-0.5,0,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([16.2979,7.80995,0.283072]),
                          scale : new SFVec3f([5.58324,4.58219,2.8632]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_12")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([2,0,1,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.165611,0.997433,0.165611,0.497433,0.329744,0.997433,0.329745,0.497433])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,0.5,0,-0.5,0,0,-0.335867,0.5,0,-0.335867,0,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("sandstein-fassade"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("sandstein"),
                          translation : new SFVec3f([24.319,8.97231,0.08629]),
                          scale : new SFVec3f([1.27446,8.71,0.7145]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.8,0.646707,0.389969])})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["steinfassade256.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  texCoordIndex : new MFInt32([117,5,50,118,-1,32,18,119,33,-1,101,103,4,102,-1,105,106,107,108,-1,34,15,14,36,-1,38,35,7,6,-1,89,90,91,92,-1,109,110,111,112,-1,37,16,10,40,-1,42,39,9,8,-1,93,94,95,96,-1,113,114,115,116,-1,41,17,13,44,-1,45,43,12,11,-1,97,98,99,100,-1,51,52,53,54,-1,75,76,77,78,-1,85,86,87,88,-1,55,56,57,58,-1,69,70,22,71,-1,72,73,23,74,-1,79,80,24,81,-1,82,83,25,84,-1,47,46,26,27,-1,59,60,61,21,-1,47,27,20,48,-1,65,66,67,68,-1,62,28,63,64,-1,0,1,30,31,-1,30,3,2,31,-1,49,19,50,5,-1,103,104,29,4,-1,128,129,130,131,-1,144,145,146,147,-1,164,165,166,167,-1,184,185,186,187,-1,192,193,194,195,-1,196,197,198,199,-1,200,201,202,203,-1,204,205,206,207,-1,208,209,210,211,-1,216,217,218,219,-1,226,227,228,229,-1,230,231,232,233,-1,129,236,237,130,-1,235,233,232,234,-1,138,139,136,137,-1,224,225,222,223,-1,141,142,143,140,-1,135,132,133,134,-1,154,155,152,153,-1,157,158,159,156,-1,161,162,163,160,-1,151,148,149,150,-1,174,175,172,173,-1,177,178,179,176,-1,181,182,183,180,-1,171,168,169,170,-1,126,127,124,125,-1,189,190,191,188,-1,248,249,250,251,-1,264,265,266,267,-1,284,285,286,287,-1,304,305,306,307,-1,312,313,314,315,-1,316,317,318,319,-1,320,321,322,323,-1,324,325,326,327,-1,328,329,330,331,-1,332,333,334,335,-1,336,337,338,339,-1,332,335,340,341,-1,346,347,348,349,-1,350,351,352,353,-1,249,356,357,250,-1,364,365,366,367,-1,368,369,370,371,-1,372,373,374,375,-1,376,377,378,379,-1,380,381,382,383,-1,384,385,386,387,-1,388,389,390,391,-1,392,393,394,395,-1,396,397,398,399,-1,400,401,402,403,-1,404,405,406,407,-1,408,409,410,411,-1,412,413,414,415,-1,416,417,418,419,-1,420,421,422,423,-1,424,425,426,427,-1,428,429,430,431,-1,432,433,434,435,-1,436,437,438,439,-1,440,441,442,443,-1,444,445,446,447,-1,448,449,450,451,-1,452,453,454,455,-1,456,457,458,459,-1,452,455,460,461,-1,462,463,464,465,-1,466,467,468,469,-1,470,471,472,473,-1,474,473,472,475,-1,369,476,477,370,-1,355,353,352,354,-1,258,259,256,257,-1,344,345,342,343,-1,261,262,263,260,-1,255,252,253,254,-1,274,275,272,273,-1,277,278,279,276,-1,281,282,283,280,-1,271,268,269,270,-1,294,295,292,293,-1,297,298,299,296,-1,301,302,303,300,-1,291,288,289,290,-1,240,241,242,243,-1,246,247,244,245,-1,309,310,311,308,-1,242,241,358,359,-1,488,489,490,491,-1,504,505,506,507,-1,524,525,526,527,-1,544,545,546,547,-1,552,553,554,555,-1,556,557,558,559,-1,560,561,562,563,-1,564,565,566,567,-1,568,569,570,571,-1,576,577,578,579,-1,586,587,588,589,-1,590,591,592,593,-1,489,596,597,490,-1,600,601,602,603,-1,604,605,606,607,-1,608,609,610,611,-1,612,613,614,615,-1,616,617,618,619,-1,620,621,622,623,-1,624,625,626,627,-1,628,629,630,631,-1,632,633,634,635,-1,636,637,638,639,-1,640,641,642,643,-1,644,645,646,647,-1,648,649,650,651,-1,652,653,654,655,-1,656,657,658,659,-1,660,661,662,663,-1,664,665,666,667,-1,668,669,670,671,-1,672,673,674,675,-1,676,677,678,679,-1,680,681,682,683,-1,684,685,686,687,-1,688,689,690,691,-1,696,697,698,699,-1,702,703,704,705,-1,706,707,708,709,-1,710,711,712,713,-1,714,713,712,715,-1,609,716,717,610,-1,602,601,718,719,-1,720,721,722,723,-1,724,725,726,727,-1,728,729,730,731,-1,732,733,734,735,-1,736,737,738,739,-1,740,741,742,743,-1,744,745,746,747,-1,748,749,750,751,-1,752,753,754,755,-1,756,757,758,759,-1,760,761,762,763,-1,764,765,766,767,-1,768,769,770,771,-1,772,773,774,775,-1,776,777,778,779,-1,780,781,782,783,-1,784,785,786,787,-1,788,789,790,791,-1,792,793,794,795,-1,796,797,798,799,-1,800,801,802,803,-1,804,805,806,807,-1,808,809,810,811,-1,816,817,818,819,-1,822,823,824,825,-1,826,827,828,829,-1,830,831,832,833,-1,834,833,832,835,-1,729,836,837,730,-1,722,721,838,839,-1,840,841,842,843,-1,844,845,846,847,-1,848,849,850,851,-1,852,853,854,855,-1,856,857,858,859,-1,860,861,862,863,-1,864,865,866,867,-1,868,869,870,871,-1,872,873,874,875,-1,876,877,878,879,-1,880,881,882,883,-1,884,885,886,887,-1,888,889,890,891,-1,892,893,894,895,-1,896,897,898,899,-1,900,901,902,903,-1,904,905,906,907,-1,908,909,910,911,-1,912,913,914,915,-1,916,917,918,919,-1,920,921,922,923,-1,924,925,926,927,-1,928,929,930,931,-1,932,933,934,935,-1,936,937,938,939,-1,932,935,940,941,-1,942,943,944,945,-1,946,947,948,949,-1,950,951,952,953,-1,954,953,952,955,-1,849,956,957,850,-1,842,841,958,959,-1,595,593,592,594,-1,498,499,496,497,-1,584,585,582,583,-1,501,502,503,500,-1,495,492,493,494,-1,514,515,512,513,-1,517,518,519,516,-1,521,522,523,520,-1,511,508,509,510,-1,534,535,532,533,-1,537,538,539,536,-1,541,542,543,540,-1,531,528,529,530,-1,486,487,484,485,-1,549,550,551,548,-1,968,969,970,971,-1,984,985,986,987,-1,1004,1005,1006,1007,-1,1024,1025,1026,1027,-1,1032,1033,1034,1035,-1,1036,1037,1038,1039,-1,1040,1041,1042,1043,-1,1044,1045,1046,1047,-1,1048,1049,1050,1051,-1,1052,1053,1054,1055,-1,1056,1057,1058,1059,-1,1052,1055,1060,1061,-1,1066,1067,1068,1069,-1,1070,1071,1072,1073,-1,969,1076,1077,970,-1,1084,1085,1086,1087,-1,1088,1089,1090,1091,-1,1092,1093,1094,1095,-1,1096,1097,1098,1099,-1,1100,1101,1102,1103,-1,1104,1105,1106,1107,-1,1108,1109,1110,1111,-1,1112,1113,1114,1115,-1,1116,1117,1118,1119,-1,1120,1121,1122,1123,-1,1124,1125,1126,1127,-1,1128,1129,1130,1131,-1,1132,1133,1134,1135,-1,1136,1137,1138,1139,-1,1140,1141,1142,1143,-1,1144,1145,1146,1147,-1,1148,1149,1150,1151,-1,1152,1153,1154,1155,-1,1156,1157,1158,1159,-1,1160,1161,1162,1163,-1,1164,1165,1166,1167,-1,1168,1169,1170,1171,-1,1176,1177,1178,1179,-1,1182,1183,1184,1185,-1,1186,1187,1188,1189,-1,1190,1191,1192,1193,-1,1194,1193,1192,1195,-1,1089,1196,1197,1090,-1,1200,1201,1202,1203,-1,1204,1205,1206,1207,-1,1208,1209,1210,1211,-1,1212,1213,1214,1215,-1,1216,1217,1218,1219,-1,1220,1221,1222,1223,-1,1224,1225,1226,1227,-1,1228,1229,1230,1231,-1,1232,1233,1234,1235,-1,1236,1237,1238,1239,-1,1240,1241,1242,1243,-1,1244,1245,1246,1247,-1,1248,1249,1250,1251,-1,1252,1253,1254,1255,-1,1256,1257,1258,1259,-1,1260,1261,1262,1263,-1,1264,1265,1266,1267,-1,1268,1269,1270,1271,-1,1272,1273,1274,1275,-1,1276,1277,1278,1279,-1,1280,1281,1282,1283,-1,1284,1285,1286,1287,-1,1288,1289,1290,1291,-1,1292,1293,1294,1295,-1,1296,1297,1298,1299,-1,1292,1295,1300,1301,-1,1302,1303,1304,1305,-1,1306,1307,1308,1309,-1,1310,1311,1312,1313,-1,1314,1313,1312,1315,-1,1209,1316,1317,1210,-1,1202,1201,1318,1319,-1,1324,1325,1326,1327,-1,1328,1329,1330,1331,-1,1332,1333,1334,1335,-1,1336,1337,1338,1339,-1,1340,1341,1342,1343,-1,1344,1345,1346,1347,-1,1348,1349,1350,1351,-1,1352,1353,1354,1355,-1,1356,1357,1358,1359,-1,1360,1361,1362,1363,-1,1364,1365,1366,1367,-1,1368,1369,1370,1371,-1,1372,1373,1374,1375,-1,1376,1377,1378,1379,-1,1380,1381,1382,1383,-1,1384,1385,1386,1387,-1,1388,1389,1390,1391,-1,1392,1393,1394,1395,-1,1396,1397,1398,1399,-1,1400,1401,1402,1403,-1,1404,1405,1406,1407,-1,1408,1409,1410,1411,-1,1412,1413,1414,1415,-1,1416,1417,1418,1419,-1,1412,1415,1420,1421,-1,1422,1423,1424,1425,-1,1426,1427,1428,1429,-1,1430,1431,1432,1433,-1,1434,1433,1432,1435,-1,1329,1436,1437,1330,-1,1444,1445,1446,1447,-1,1448,1449,1450,1451,-1,1452,1453,1454,1455,-1,1456,1457,1458,1459,-1,1460,1461,1462,1463,-1,1464,1465,1466,1467,-1,1468,1469,1470,1471,-1,1472,1473,1474,1475,-1,1476,1477,1478,1479,-1,1480,1481,1482,1483,-1,1484,1485,1486,1487,-1,1488,1489,1490,1491,-1,1492,1493,1494,1495,-1,1496,1497,1498,1499,-1,1500,1501,1502,1503,-1,1504,1505,1506,1507,-1,1508,1509,1510,1511,-1,1512,1513,1514,1515,-1,1516,1517,1518,1519,-1,1520,1521,1522,1523,-1,1524,1525,1526,1527,-1,1528,1529,1530,1531,-1,1532,1533,1534,1535,-1,1536,1537,1538,1539,-1,1532,1535,1540,1541,-1,1542,1543,1544,1545,-1,1546,1547,1548,1549,-1,1550,1551,1552,1553,-1,1554,1553,1552,1555,-1,1449,1556,1557,1450,-1,1075,1073,1072,1074,-1,978,979,976,977,-1,1064,1065,1062,1063,-1,981,982,983,980,-1,975,972,973,974,-1,994,995,992,993,-1,997,998,999,996,-1,1001,1002,1003,1000,-1,991,988,989,990,-1,1014,1015,1012,1013,-1,1017,1018,1019,1016,-1,1021,1022,1023,1020,-1,1011,1008,1009,1010,-1,966,967,964,965,-1,1029,1030,1031,1028,-1,963,960,961,962,-1,961,1078,1079,962,-1,812,813,814,815,-1,820,821,812,815,-1,692,693,694,695,-1,700,701,692,695,-1,572,573,574,575,-1,580,581,572,575,-1,483,480,481,482,-1,481,598,599,482,-1,363,360,361,362,-1,361,478,479,362,-1,212,213,214,215,-1,220,221,212,215,-1,123,120,121,122,-1,121,238,239,122,-1,1083,1080,1081,1082,-1,1081,1198,1199,1082,-1,1172,1173,1174,1175,-1,1180,1181,1172,1175,-1,1323,1320,1321,1322,-1,1321,1438,1439,1322,-1,1443,1440,1441,1442,-1,1441,1558,1559,1442,-1,1562,1563,1560,1561,-1,1564,1565,1566,1567,-1,1568,1569,1570,1571,-1,1572,1573,1574,1575,-1,1576,1577,1578,1579,-1,1580,1581,1582,1583,-1,1584,1585,1586,1587,-1,1588,1589,1590,1591,-1,1592,1593,1588,1591,-1,1594,1595,1596,1597,-1,1598,1599,1600,1601,-1,1602,1603,1604,1605,-1,1606,1607,1608,1609,-1,1624,1625,1626,1627,-1,1613,1610,1611,1612,-1,1620,1621,1622,1623,-1,1614,1615,1616,1617,-1,1619,1614,1617,1618,-1,1630,1631,1628,1629,-1,1634,1633,1632,1635,-1,1658,1657,1656,1659,-1,1664,1657,1658,1665,-1,1662,1661,1660,1663,-1,1653,1652,1655,1654,-1,1649,1648,1651,1650,-1,1637,1636,1639,1638,-1,1642,1641,1640,1643,-1,1645,1644,1647,1646,-1]),
                                  coordIndex : new MFInt32([9,8,7,6,-1,9,6,11,10,-1,11,13,12,10,-1,17,16,15,14,-1,17,14,19,18,-1,15,16,20,21,-1,19,21,20,18,-1,25,24,23,22,-1,25,22,27,26,-1,23,24,28,29,-1,27,29,28,26,-1,33,32,31,30,-1,33,30,35,34,-1,31,32,36,37,-1,35,37,36,34,-1,22,15,21,27,-1,30,23,29,35,-1,6,31,37,11,-1,27,21,38,39,-1,29,27,39,40,-1,35,29,40,41,-1,37,35,41,42,-1,11,37,42,43,-1,13,11,43,44,-1,21,19,45,38,-1,13,44,1,46,-1,19,14,2,47,-1,0,45,19,47,-1,5,0,47,48,-1,47,2,4,48,-1,50,3,7,8,-1,13,46,49,12,-1,53,55,56,54,-1,59,62,61,60,-1,65,68,67,66,-1,71,74,73,72,-1,65,62,75,76,-1,68,65,76,77,-1,71,68,77,78,-1,74,71,78,79,-1,53,74,79,80,-1,62,59,81,75,-1,85,81,59,84,-1,86,85,84,87,-1,55,83,88,56,-1,5,87,84,0,-1,59,60,57,45,-1,0,84,59,45,-1,58,61,62,38,-1,45,57,58,38,-1,65,66,63,39,-1,38,62,65,39,-1,64,67,68,40,-1,39,63,64,40,-1,71,72,69,41,-1,40,68,71,41,-1,70,73,74,42,-1,41,69,70,42,-1,53,54,51,43,-1,42,74,53,43,-1,93,95,96,94,-1,99,102,101,100,-1,105,108,107,106,-1,111,114,113,112,-1,105,102,115,116,-1,108,105,116,117,-1,111,108,117,118,-1,114,111,118,119,-1,93,114,119,120,-1,95,93,120,121,-1,102,99,122,115,-1,95,121,123,124,-1,126,122,99,125,-1,127,126,125,128,-1,95,124,129,96,-1,133,134,131,120,-1,133,135,136,134,-1,122,137,138,115,-1,139,140,137,122,-1,139,141,142,140,-1,138,142,141,115,-1,116,143,144,117,-1,115,141,145,116,-1,145,146,143,116,-1,145,147,148,146,-1,144,148,147,117,-1,118,149,150,119,-1,117,147,151,118,-1,151,152,149,118,-1,151,153,154,152,-1,150,154,153,119,-1,119,153,133,120,-1,145,141,155,156,-1,147,145,156,157,-1,151,147,157,158,-1,153,151,158,159,-1,133,153,159,160,-1,135,133,160,161,-1,141,139,162,155,-1,135,161,163,164,-1,126,165,139,122,-1,166,162,139,165,-1,167,166,165,168,-1,127,168,165,126,-1,135,164,169,136,-1,86,128,125,85,-1,99,100,97,81,-1,85,125,99,81,-1,98,101,102,75,-1,81,97,98,75,-1,105,106,103,76,-1,75,102,105,76,-1,104,107,108,77,-1,76,103,104,77,-1,111,112,109,78,-1,77,108,111,78,-1,110,113,114,79,-1,78,109,110,79,-1,90,91,92,80,-1,93,94,90,80,-1,79,114,93,80,-1,92,91,130,82,-1,173,175,176,174,-1,179,182,181,180,-1,185,188,187,186,-1,191,194,193,192,-1,185,182,195,196,-1,188,185,196,197,-1,191,188,197,198,-1,194,191,198,199,-1,173,194,199,200,-1,182,179,201,195,-1,205,201,179,204,-1,206,205,204,207,-1,175,203,208,176,-1,210,211,212,200,-1,213,214,210,200,-1,213,215,216,214,-1,201,217,218,195,-1,219,220,217,201,-1,219,221,222,220,-1,218,222,221,195,-1,196,223,224,197,-1,195,221,225,196,-1,225,226,223,196,-1,225,227,228,226,-1,224,228,227,197,-1,198,229,230,199,-1,197,227,231,198,-1,231,232,229,198,-1,231,233,234,232,-1,230,234,233,199,-1,199,233,213,200,-1,225,221,235,236,-1,227,225,236,237,-1,231,227,237,238,-1,233,231,238,239,-1,213,233,239,240,-1,221,219,241,235,-1,205,244,219,201,-1,245,241,219,244,-1,246,245,244,247,-1,206,247,244,205,-1,215,243,248,216,-1,212,211,249,202,-1,250,251,252,240,-1,253,254,250,240,-1,253,255,256,254,-1,241,257,258,235,-1,259,260,257,241,-1,259,261,262,260,-1,258,262,261,235,-1,236,263,264,237,-1,235,261,265,236,-1,265,266,263,236,-1,265,267,268,266,-1,264,268,267,237,-1,238,269,270,239,-1,237,267,271,238,-1,271,272,269,238,-1,271,273,274,272,-1,270,274,273,239,-1,239,273,253,240,-1,265,261,275,276,-1,267,265,276,277,-1,271,267,277,278,-1,273,271,278,279,-1,253,273,279,280,-1,261,259,281,275,-1,245,284,259,241,-1,285,281,259,284,-1,286,285,284,287,-1,246,287,284,245,-1,255,283,288,256,-1,252,251,289,242,-1,290,291,292,280,-1,293,294,290,280,-1,293,295,296,294,-1,281,297,298,275,-1,299,300,297,281,-1,299,301,302,300,-1,298,302,301,275,-1,276,303,304,277,-1,275,301,305,276,-1,305,306,303,276,-1,305,307,308,306,-1,304,308,307,277,-1,278,309,310,279,-1,277,307,311,278,-1,311,312,309,278,-1,279,313,293,280,-1,311,313,314,312,-1,310,314,313,279,-1,305,301,315,316,-1,307,305,316,317,-1,311,307,317,318,-1,313,311,318,319,-1,293,313,319,320,-1,295,293,320,321,-1,301,299,322,315,-1,295,321,323,324,-1,285,325,299,281,-1,326,322,299,325,-1,327,326,325,328,-1,286,328,325,285,-1,295,324,329,296,-1,292,291,330,282,-1,167,207,204,166,-1,179,180,177,162,-1,166,204,179,162,-1,178,181,182,155,-1,162,177,178,155,-1,185,186,183,156,-1,155,182,185,156,-1,184,187,188,157,-1,156,183,184,157,-1,191,192,189,158,-1,157,188,191,158,-1,190,193,194,159,-1,158,189,190,159,-1,173,174,171,160,-1,159,194,173,160,-1,333,335,336,334,-1,339,342,341,340,-1,345,348,347,346,-1,351,354,353,352,-1,345,342,355,356,-1,348,345,356,357,-1,351,348,357,358,-1,354,351,358,359,-1,333,354,359,360,-1,335,333,360,361,-1,342,339,362,355,-1,335,361,363,364,-1,366,362,339,365,-1,367,366,365,368,-1,335,364,369,336,-1,373,374,371,360,-1,373,375,376,374,-1,362,377,378,355,-1,379,380,377,362,-1,379,381,382,380,-1,378,382,381,355,-1,356,383,384,357,-1,355,381,385,356,-1,385,386,383,356,-1,385,387,388,386,-1,384,388,387,357,-1,358,389,390,359,-1,357,387,391,358,-1,391,392,389,358,-1,391,393,394,392,-1,390,394,393,359,-1,359,393,373,360,-1,385,381,395,396,-1,387,385,396,397,-1,391,387,397,398,-1,393,391,398,399,-1,373,393,399,400,-1,381,379,401,395,-1,366,404,379,362,-1,405,401,379,404,-1,406,405,404,407,-1,367,407,404,366,-1,375,403,408,376,-1,410,411,412,400,-1,413,414,410,400,-1,413,415,416,414,-1,401,417,418,395,-1,419,420,417,401,-1,419,421,422,420,-1,418,422,421,395,-1,396,423,424,397,-1,395,421,425,396,-1,425,426,423,396,-1,425,427,428,426,-1,424,428,427,397,-1,398,429,430,399,-1,397,427,431,398,-1,431,432,429,398,-1,431,433,434,432,-1,430,434,433,399,-1,399,433,413,400,-1,425,421,435,436,-1,427,425,436,437,-1,431,427,437,438,-1,433,431,438,439,-1,413,433,439,440,-1,415,413,440,441,-1,421,419,442,435,-1,415,441,443,444,-1,405,445,419,401,-1,446,442,419,445,-1,447,446,445,448,-1,406,448,445,405,-1,415,444,449,416,-1,412,411,450,402,-1,453,454,451,440,-1,453,455,456,454,-1,442,457,458,435,-1,459,460,457,442,-1,459,461,462,460,-1,458,462,461,435,-1,436,463,464,437,-1,435,461,465,436,-1,465,466,463,436,-1,465,467,468,466,-1,464,468,467,437,-1,438,469,470,439,-1,437,467,471,438,-1,471,472,469,438,-1,439,473,453,440,-1,471,473,474,472,-1,470,474,473,439,-1,465,461,475,476,-1,467,465,476,477,-1,471,467,477,478,-1,473,471,478,479,-1,453,473,479,480,-1,455,453,480,481,-1,461,459,482,475,-1,455,481,483,484,-1,446,485,459,442,-1,486,482,459,485,-1,487,486,485,488,-1,447,488,485,446,-1,455,484,489,456,-1,493,494,491,480,-1,493,495,496,494,-1,482,497,498,475,-1,499,500,497,482,-1,499,501,502,500,-1,498,502,501,475,-1,476,503,504,477,-1,475,501,505,476,-1,505,506,503,476,-1,505,507,508,506,-1,504,508,507,477,-1,478,509,510,479,-1,477,507,511,478,-1,511,512,509,478,-1,511,513,514,512,-1,510,514,513,479,-1,479,513,493,480,-1,505,501,515,516,-1,507,505,516,517,-1,511,507,517,518,-1,513,511,518,519,-1,493,513,519,520,-1,495,493,520,521,-1,501,499,522,515,-1,495,521,523,524,-1,486,525,499,482,-1,526,522,499,525,-1,527,526,525,528,-1,487,528,525,486,-1,495,524,529,496,-1,327,368,365,326,-1,339,340,337,322,-1,326,365,339,322,-1,338,341,342,315,-1,322,337,338,315,-1,345,346,343,316,-1,315,342,345,316,-1,344,347,348,317,-1,316,343,344,317,-1,351,352,349,318,-1,317,348,351,318,-1,350,353,354,319,-1,318,349,350,319,-1,333,334,331,320,-1,319,354,333,320,-1,320,331,332,321,-1,332,370,323,321,-1,255,253,280,292,-1,282,283,255,292,-1,215,213,240,252,-1,242,243,215,252,-1,175,173,200,212,-1,202,203,175,212,-1,160,171,172,161,-1,172,209,163,161,-1,120,131,132,121,-1,132,170,123,121,-1,55,53,80,92,-1,82,83,55,92,-1,43,51,52,44,-1,52,89,1,44,-1,360,371,372,361,-1,372,409,363,361,-1,375,373,400,412,-1,402,403,375,412,-1,440,451,452,441,-1,452,490,443,441,-1,480,491,492,481,-1,492,530,483,481,-1,531,532,2,14,-1,533,531,14,15,-1,534,533,15,22,-1,535,534,22,23,-1,536,535,23,30,-1,537,536,30,31,-1,538,537,31,6,-1,539,538,6,7,-1,3,540,539,7,-1,541,542,532,531,-1,543,541,531,533,-1,544,543,533,534,-1,545,544,534,535,-1,551,545,535,536,-1,548,546,547,537,-1,547,551,536,537,-1,549,546,548,539,-1,550,549,539,540,-1,4,2,532,542,-1,526,527,552,522,-1,521,559,558,523,-1,560,559,521,520,-1,557,560,520,519,-1,556,557,519,518,-1,553,556,518,517,-1,554,553,517,516,-1,522,552,555,515,-1,555,554,516,515,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.266825,0.754002,0.270138,0.12036,0.992942,0.754002,0.996255,0.12036,0.261571,1.25039,0.264575,1.24773,0.265283,0.000359047,0.265283,0.124907,0.265283,0.000359047,0.265283,0.124907,0.260731,0.000538185,0.265283,0.000359047,0.265283,0.124907,0.260731,0.000538185,0.260731,0.000538185,0.993802,0.000538185,0.993802,0.000538185,0.993802,0.000538185,0.993802,0.000538185,-0.00395795,0.00113806,0,0,0.00399294,4.12475,0.000936627,3.74735,-0.000839293,3.12467,0.00363377,2.74606,-0.00160974,2.12745,-0.00160974,1.87022,0,1.24847,0.00187302,4.74614,0.261531,0.000801854,0.462781,0.12036,0.459468,0.754002,0.993802,0.122801,0.260731,0.122801,0.993802,0.122801,0.996218,0.124907,0.260731,0.122801,0.993802,0.122801,0.996218,0.000359047,0.996218,0.124907,0.260731,0.122801,0.993802,0.122801,0.996218,0.000359047,0.996218,0.124907,0.260731,0.122801,0.996218,0.000359047,0.260539,1.87022,0.261274,1.25014,0.262149,0,0.263796,0.00113806,-0.00317922,1.24773,0.992091,3.87101,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00187302,5.0616,0.264022,4.74614,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.989971,5.0616,0.264022,5.0616,0.261309,3.12193,0.263085,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,0.000936627,2.86957,0.989035,2.86957,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.260539,2.12745,0.265782,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,1.87022,0.986488,1.87022,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,-0.00500241,1.87453,0.258901,1.87072,0.0000380781,1.24846,0,0,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,-0.00503311,0.749036,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,-0.00257376,0.749821,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,-0.00254271,0.746545,0.263796,1.87894,-0.00395795,1.87894,0.260731,0.000538185,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,-0.00503311,0.749036,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,-0.00257376,0.749821,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.992091,3.87101,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,-0.00254271,0.746545,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.989035,2.86957,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.986488,1.87022,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.264022,4.74614,0.989971,4.74614,0.989971,5.0616,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.996255,0.12036,0.992942,0.754002,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,-0.00503311,0.749036,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,-0.00257376,0.749821,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.992091,3.87101,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,-0.00254271,0.746545,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.989035,2.86957,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.986488,1.87022,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.264022,4.74614,0.989971,4.74614,0.989971,5.0616,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.996255,0.12036,0.992942,0.754002,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,-0.00503311,0.749036,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,-0.00257376,0.749821,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.992091,3.87101,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,-0.00254271,0.746545,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.989035,2.86957,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.986488,1.87022,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.264022,4.74614,0.989971,4.74614,0.989971,5.0616,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.996255,0.12036,0.992942,0.754002,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,-0.00503311,0.749036,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,-0.00257376,0.749821,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.992091,3.87101,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,-0.00254271,0.746545,0.993802,0.122801,0.993802,0.000538185,0.260731,0.000538185,0.260731,0.122801,0.989035,2.86957,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.996218,0.000359047,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.986488,1.87022,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.264022,4.74614,0.989971,4.74614,0.989971,5.0616,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.996255,0.12036,0.992942,0.754002,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.263796,1.87894,0.264575,1.24773,-0.00317922,1.24773,-0.00395795,1.87894,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,-0.00500241,1.87453,0.0000380781,1.24846,0.261571,1.25039,0.258901,1.87072,-0.00503311,0.749036,0.262212,0.749036,0.267192,0.121461,-0.0000523627,0.121461,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74627,0.0000499077,1.12133,0.26301,1.1215,0.261754,1.74608,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00257376,0.749821,0.264671,0.749821,0.264671,0.128526,-0.00257376,0.128526,0.992091,4.12475,0.266142,4.12475,0.266142,3.87101,0.992091,3.87101,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000407841,1.74621,0.000153629,1.12133,0.263113,1.12158,0.261808,1.74596,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,-0.00254271,0.746545,0.264702,0.746545,0.264671,0.121895,-0.00257376,0.121895,0.987259,3.12467,0.261309,3.12467,0.263085,2.86957,0.989035,2.86957,0.260731,0.000538185,0.260731,0.122801,0.993802,0.122801,0.993802,0.000538185,0.000280553,1.74612,0.0000786558,1.1214,0.263113,1.12158,0.261924,1.74597,0.996218,0.124907,0.265283,0.124907,0.265283,0.000359047,0.996218,0.000359047,0.986488,2.12745,0.260539,2.12745,0.260539,1.87022,0.986488,1.87022,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0,0,0.262149,0,0.989971,5.0616,0.264022,5.0616,0.264022,4.74614,0.989971,4.74614,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266825,0.754002,0.270138,0.12036,0.462781,0.12036,0.459468,0.754002,0.992942,0.754002,0.996255,0.12036,0,0,0.261531,0.000801854,0.263796,0.00113806,-0.00395795,0.00113806,0.00187302,5.0616,0.00187302,4.74614,0.264022,4.74614,0.264022,5.0616,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0,0,0.262149,0,0.264022,4.74614,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,-0.00160974,1.87022,0.261274,1.25014,0.260539,1.87022,-0.00160974,1.87022,0,1.24847,0,0,0.262149,0,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.520147,0.117017,0.521559,0.736217,0.268932,0.745307,0.268932,0.117017,0.264022,4.74614,0.264022,5.0616,0.00187302,5.0616,0.00187302,4.74614,0.261309,3.12193,0.263085,3.74735,0.000936627,3.74735,-0.000839293,3.12193,0.266142,4.12475,0.261914,4.74683,-0.000234157,4.74683,0.00399294,4.12475,0.266142,3.87101,0.266142,4.12475,0.00399294,4.12475,0.00399294,3.87101,0.263085,2.86957,0.261309,3.12467,-0.000839293,3.12467,0.000936627,2.86957,0.260539,2.12745,0.265782,2.74606,0.00363377,2.74606,-0.00160974,2.12745,0.262149,0,0.261274,1.25014,0,1.24847,0,0,-0.00160974,1.87022,0.260539,1.87022,0.260539,2.12745,-0.00160974,2.12745,0.260539,1.87022,-0.00160974,1.87022])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,1,-0.237924,1,1,-0.513469,1,1,-0.513469,0.251645,1,-0.237924,0.251645,-0.469387,-0.237924,0.251645,-0.469387,-0.237924,1,-0.469387,-0.513469,0.251645,-0.469387,-0.513469,1,1,0.864258,1,1,0.588712,1,1,0.588712,0.251645,1,0.864258,0.251645,-0.469387,0.864258,0.251645,-0.469387,0.864258,1,-0.469387,0.588712,0.251645,-0.469387,0.588712,1,1,0.496864,1,1,0.221319,1,1,0.221319,0.251645,1,0.496864,0.251645,-0.469387,0.496864,0.251645,-0.469387,0.496864,1,-0.469387,0.221319,0.251645,-0.469387,0.221319,1,1,0.12947,1,1,-0.146075,1,1,-0.146075,0.251645,1,0.12947,0.251645,-0.469387,0.12947,0.251645,-0.469387,0.12947,1,-0.469387,-0.146075,0.251645,-0.469387,-0.146075,1,-1,0.588712,1,-1,0.496864,1,-1,0.221319,1,-1,0.12947,1,-1,-0.146075,1,-1,-0.237924,1,-1,-0.513469,1,-1,0.864258,1,-0.469387,-1,1,-0.469387,1,1,-0.469387,1,-1,-0.469387,-1,0.251644,1,-1,0.251644,-1.00002,-0.237924,0.251645,-1.00002,-0.513469,0.251645,-2.46941,-0.237924,1,-2.46941,-0.237924,0.251645,-2.46941,-0.513469,1,-2.46941,-0.513469,0.251645,-1.00002,0.864258,0.251645,-1.00002,0.588712,0.251645,-2.46941,0.864258,1,-2.46941,0.864258,0.251645,-2.46941,0.588712,0.251645,-2.46941,0.588712,1,-1.00002,0.496864,0.251645,-1.00002,0.221319,0.251645,-2.46941,0.496864,1,-2.46941,0.496864,0.251645,-2.46941,0.221319,0.251645,-2.46941,0.221319,1,-1.00002,0.12947,0.251645,-1.00002,-0.146075,0.251645,-2.46941,0.12947,1,-2.46941,0.12947,0.251645,-2.46941,-0.146075,0.251645,-2.46941,-0.146075,1,-3.00002,0.588712,1,-3.00002,0.496864,1,-3.00002,0.221319,1,-3.00002,0.12947,1,-3.00002,-0.146075,1,-3.00002,-0.237924,1,-3.00002,0.864258,1,-3.00002,-1,1,-2.46941,-1,1,-2.46941,1,1,-3.00002,1,1,-3.00002,1,-1,-2.46941,1,-1,-2.46941,-1,0.251644,-1.00002,-1,0.251644,-3.00361,-0.237924,0.251645,-3.00361,-0.513469,0.251645,-3.00361,-0.513469,1,-4.473,-0.237924,1,-4.473,-0.237924,0.251645,-4.473,-0.513469,1,-4.473,-0.513469,0.251645,-3.00361,0.864258,0.251645,-3.00361,0.588712,0.251645,-4.473,0.864258,1,-4.473,0.864258,0.251645,-4.473,0.588712,0.251645,-4.473,0.588712,1,-3.00361,0.496864,0.251645,-3.00361,0.221319,0.251645,-4.473,0.496864,1,-4.473,0.496864,0.251645,-4.473,0.221319,0.251645,-4.473,0.221319,1,-3.00361,0.12947,0.251645,-3.00361,-0.146075,0.251645,-4.473,0.12947,1,-4.473,0.12947,0.251645,-4.473,-0.146075,0.251645,-4.473,-0.146075,1,-5.00361,0.588712,1,-5.00361,0.496864,1,-5.00361,0.221319,1,-5.00361,0.12947,1,-5.00361,-0.146075,1,-5.00361,-0.237924,1,-5.00361,-0.513469,1,-5.00361,0.864258,1,-5.00361,-1,1,-4.473,-1,1,-4.473,1,1,-5.00361,1,1,-5.00361,1,-1,-4.473,1,-1,-4.473,-1,0.251644,-3.00361,-1,0.251644,-5.00363,-0.237924,0.251645,-5.00363,-0.513469,0.251645,-6.47302,-0.237924,1,-6.47302,-0.237924,0.251645,-6.47302,-0.513469,1,-6.47302,-0.513469,0.251645,-5.00363,0.864258,0.251645,-5.00363,0.588712,0.251645,-6.47302,0.864258,1,-6.47302,0.864258,0.251645,-6.47302,0.588712,1,-6.47302,0.588712,0.251645,-5.00363,0.496864,0.251645,-5.00363,0.221319,0.251645,-6.47302,0.496864,1,-6.47302,0.496864,0.251645,-6.47302,0.221319,1,-6.47302,0.221319,0.251645,-5.00363,0.12947,0.251645,-5.00363,-0.146075,0.251645,-6.47302,0.12947,1,-6.47302,0.12947,0.251645,-6.47302,-0.146075,1,-6.47302,-0.146075,0.251645,-7.00363,0.588712,1,-7.00363,0.496864,1,-7.00363,0.221319,1,-7.00363,0.12947,1,-7.00363,-0.146075,1,-7.00363,-0.237924,1,-7.00363,-0.513469,1,-7.00363,0.864258,1,-7.00363,-1,1,-6.47302,-1,1,-6.47302,1,1,-7.00363,1,1,-7.00363,1,-1,-6.47302,1,-1,-6.47302,-1,0.251644,-5.00363,-1,0.251644,-7.00377,-0.237924,0.251645,-7.00377,-0.513469,0.251645,-8.47316,-0.237924,1,-8.47316,-0.237924,0.251645,-8.47316,-0.513469,1,-8.47316,-0.513469,0.251645,-7.00377,0.864258,0.251645,-7.00377,0.588712,0.251645,-8.47316,0.864258,1,-8.47316,0.864258,0.251645,-8.47316,0.588712,0.251645,-8.47316,0.588712,1,-7.00377,0.496864,0.251645,-7.00377,0.221319,0.251645,-8.47316,0.496864,1,-8.47316,0.496864,0.251645,-8.47316,0.221319,0.251645,-8.47316,0.221319,1,-7.00377,0.12947,0.251645,-7.00377,-0.146075,0.251645,-8.47316,0.12947,1,-8.47316,0.12947,0.251645,-8.47316,-0.146075,0.251645,-8.47316,-0.146075,1,-9.00377,0.588712,1,-9.00377,0.496864,1,-9.00377,0.221319,1,-9.00377,0.12947,1,-9.00377,-0.146075,1,-9.00377,-0.237924,1,-9.00377,0.864258,1,-9.00377,-1,1,-8.47316,-1,1,-8.47316,1,1,-9.00377,1,1,-9.00377,1,-1,-8.47316,1,-1,-8.47316,-1,0.251644,-7.00377,-1,0.251644,-9.00379,-0.237924,0.251645,-9.00379,-0.513469,0.251645,-9.00379,-0.513469,1,-10.4732,-0.237924,1,-10.4732,-0.237924,0.251645,-10.4732,-0.513469,1,-10.4732,-0.513469,0.251645,-9.00379,0.864258,0.251645,-9.00379,0.588712,0.251645,-10.4732,0.864258,1,-10.4732,0.864258,0.251645,-10.4732,0.588712,1,-10.4732,0.588712,0.251645,-9.00379,0.496864,0.251645,-9.00379,0.221319,0.251645,-10.4732,0.496864,1,-10.4732,0.496864,0.251645,-10.4732,0.221319,1,-10.4732,0.221319,0.251645,-9.00379,0.12947,0.251645,-9.00379,-0.146075,0.251645,-10.4732,0.12947,1,-10.4732,0.12947,0.251645,-10.4732,-0.146075,1,-10.4732,-0.146075,0.251645,-11.0038,0.588712,1,-11.0038,0.496864,1,-11.0038,0.221319,1,-11.0038,0.12947,1,-11.0038,-0.146075,1,-11.0038,-0.237924,1,-11.0038,0.864258,1,-11.0038,-1,1,-10.4732,-1,1,-10.4732,1,1,-11.0038,1,1,-11.0038,1,-1,-10.4732,1,-1,-10.4732,-1,0.251644,-9.00379,-1,0.251644,-11.0074,-0.237924,0.251645,-11.0074,-0.513469,0.251645,-11.0074,-0.513469,1,-12.4768,-0.237924,1,-12.4768,-0.237924,0.251645,-12.4768,-0.513469,1,-12.4768,-0.513469,0.251645,-11.0074,0.864258,0.251645,-11.0074,0.588712,0.251645,-12.4768,0.864258,1,-12.4768,0.864258,0.251645,-12.4768,0.588712,1,-12.4768,0.588712,0.251645,-11.0074,0.496864,0.251645,-11.0074,0.221319,0.251645,-12.4768,0.496864,1,-12.4768,0.496864,0.251645,-12.4768,0.221319,1,-12.4768,0.221319,0.251645,-11.0074,0.12947,0.251645,-11.0074,-0.146075,0.251645,-12.4768,0.12947,1,-12.4768,0.12947,0.251645,-12.4768,-0.146075,1,-12.4768,-0.146075,0.251645,-13.0074,0.588712,1,-13.0074,0.496864,1,-13.0074,0.221319,1,-13.0074,0.12947,1,-13.0074,-0.146075,1,-13.0074,-0.237924,1,-13.0074,0.864258,1,-13.0074,-1,1,-12.4768,-1,1,-12.4768,1,1,-13.0074,1,1,-13.0074,1,-1,-12.4768,1,-1,-12.4768,-1,0.251644,-11.0074,-1,0.251644,-13.0074,-0.237924,0.251645,-13.0074,-0.513469,0.251645,-13.0074,-0.513469,1,-14.4768,-0.237924,1,-14.4768,-0.237924,0.251645,-14.4768,-0.513469,1,-14.4768,-0.513469,0.251645,-13.0074,0.864258,0.251645,-13.0074,0.588712,0.251645,-14.4768,0.864258,1,-14.4768,0.864258,0.251645,-14.4768,0.588712,1,-14.4768,0.588712,0.251645,-13.0074,0.496864,0.251645,-13.0074,0.221319,0.251645,-14.4768,0.496864,1,-14.4768,0.496864,0.251645,-14.4768,0.221319,1,-14.4768,0.221319,0.251645,-13.0074,0.12947,0.251645,-13.0074,-0.146075,0.251645,-14.4768,0.12947,1,-14.4768,0.12947,0.251645,-14.4768,-0.146075,1,-14.4768,-0.146075,0.251645,-15.0074,0.588712,1,-15.0074,0.496864,1,-15.0074,0.221319,1,-15.0074,0.12947,1,-15.0074,-0.146075,1,-15.0074,-0.237924,1,-15.0074,-0.513469,1,-15.0074,0.864258,1,-15.0074,-1,1,-14.4768,-1,1,-14.4768,1,1,-15.0074,1,1,-15.0074,1,-1,-14.4768,1,-1,-14.4768,-1,0.251644,-13.0074,-1,0.251644,-15.0084,-0.237924,0.251645,-15.0084,-0.513469,0.251645,-16.4778,-0.237924,1,-16.4778,-0.237924,0.251645,-16.4778,-0.513469,1,-16.4778,-0.513469,0.251645,-15.0084,0.864258,0.251645,-15.0084,0.588712,0.251645,-16.4778,0.864258,1,-16.4778,0.864258,0.251645,-16.4778,0.588712,0.251645,-16.4778,0.588712,1,-15.0084,0.496864,0.251645,-15.0084,0.221319,0.251645,-16.4778,0.496864,1,-16.4778,0.496864,0.251645,-16.4778,0.221319,0.251645,-16.4778,0.221319,1,-15.0084,0.12947,0.251645,-15.0084,-0.146075,0.251645,-16.4778,0.12947,1,-16.4778,0.12947,0.251645,-16.4778,-0.146075,0.251645,-16.4778,-0.146075,1,-17.0084,0.588712,1,-17.0084,0.496864,1,-17.0084,0.221319,1,-17.0084,0.12947,1,-17.0084,-0.146075,1,-17.0084,-0.237924,1,-17.0084,-0.513469,1,-17.0084,0.864258,1,-17.0084,-1,1,-16.4778,-1,1,-16.4778,1,1,-17.0084,1,1,-17.0084,1,-1,-16.4778,1,-1,-16.4778,-1,0.251644,-15.0084,-1,0.251644,-17.0084,-0.237924,0.251645,-17.0084,-0.513469,0.251645,-18.4778,-0.237924,1,-18.4778,-0.237924,0.251645,-18.4778,-0.513469,1,-18.4778,-0.513469,0.251645,-17.0084,0.864258,0.251645,-17.0084,0.588712,0.251645,-18.4778,0.864258,1,-18.4778,0.864258,0.251645,-18.4778,0.588712,1,-18.4778,0.588712,0.251645,-17.0084,0.496864,0.251645,-17.0084,0.221319,0.251645,-18.4778,0.496864,1,-18.4778,0.496864,0.251645,-18.4778,0.221319,1,-18.4778,0.221319,0.251645,-17.0084,0.12947,0.251645,-17.0084,-0.146075,0.251645,-18.4778,0.12947,1,-18.4778,0.12947,0.251645,-18.4778,-0.146075,1,-18.4778,-0.146075,0.251645,-19.0084,0.588712,1,-19.0084,0.496864,1,-19.0084,0.221319,1,-19.0084,0.12947,1,-19.0084,-0.146075,1,-19.0084,-0.237924,1,-19.0084,0.864258,1,-19.0084,-1,1,-18.4778,-1,1,-18.4778,1,1,-19.0084,1,1,-19.0084,1,-1,-18.4778,1,-1,-18.4778,-1,0.251644,-17.0084,-1,0.251644,-19.012,-0.237924,0.251645,-19.012,-0.513469,0.251645,-19.012,-0.513469,1,-20.4814,-0.237924,1,-20.4814,-0.237924,0.251645,-20.4814,-0.513469,1,-20.4814,-0.513469,0.251645,-19.012,0.864258,0.251645,-19.012,0.588712,0.251645,-20.4814,0.864258,1,-20.4814,0.864258,0.251645,-20.4814,0.588712,1,-20.4814,0.588712,0.251645,-19.012,0.496864,0.251645,-19.012,0.221319,0.251645,-20.4814,0.496864,1,-20.4814,0.496864,0.251645,-20.4814,0.221319,1,-20.4814,0.221319,0.251645,-19.012,0.12947,0.251645,-19.012,-0.146075,0.251645,-20.4814,0.12947,1,-20.4814,0.12947,0.251645,-20.4814,-0.146075,1,-20.4814,-0.146075,0.251645,-21.012,0.588712,1,-21.012,0.496864,1,-21.012,0.221319,1,-21.012,0.12947,1,-21.012,-0.146075,1,-21.012,-0.237924,1,-21.012,-0.513469,1,-21.012,0.864258,1,-21.012,-1,1,-20.4814,-1,1,-20.4814,1,1,-21.012,1,1,-21.012,1,-1,-20.4814,1,-1,-20.4814,-1,0.251644,-19.012,-1,0.251644,-21.012,-0.237924,0.251645,-21.012,-0.513469,0.251645,-22.4814,-0.237924,1,-22.4814,-0.237924,0.251645,-22.4814,-0.513469,1,-22.4814,-0.513469,0.251645,-21.012,0.864258,0.251645,-21.012,0.588712,0.251645,-22.4814,0.864258,1,-22.4814,0.864258,0.251645,-22.4814,0.588712,1,-22.4814,0.588712,0.251645,-21.012,0.496864,0.251645,-21.012,0.221319,0.251645,-22.4814,0.496864,1,-22.4814,0.496864,0.251645,-22.4814,0.221319,1,-22.4814,0.221319,0.251645,-21.012,0.12947,0.251645,-21.012,-0.146075,0.251645,-22.4814,0.12947,1,-22.4814,0.12947,0.251645,-22.4814,-0.146075,1,-22.4814,-0.146075,0.251645,-23.012,0.588712,1,-23.012,0.496864,1,-23.012,0.221319,1,-23.012,0.12947,1,-23.012,-0.146075,1,-23.012,-0.237924,1,-23.012,-0.513469,1,-23.012,0.864258,1,-23.012,-1,1,-22.4814,-1,1,-22.4814,1,1,-23.012,1,1,-23.012,1,-1,-22.4814,1,-1,-22.4814,-1,0.251644,-21.012,-1,0.251644,-23.0121,-0.237924,0.251645,-23.0121,-0.513469,0.251645,-24.4815,-0.237924,1,-24.4815,-0.237924,0.251645,-24.4815,-0.513469,1,-24.4815,-0.513469,0.251645,-23.0121,0.864258,0.251645,-23.0121,0.588712,0.251645,-24.4815,0.864258,1,-24.4815,0.864258,0.251645,-24.4815,0.588712,1,-24.4815,0.588712,0.251645,-23.0121,0.496864,0.251645,-23.0121,0.221319,0.251645,-24.4815,0.496864,1,-24.4815,0.496864,0.251645,-24.4815,0.221319,1,-24.4815,0.221319,0.251645,-23.0121,0.12947,0.251645,-23.0121,-0.146075,0.251645,-24.4815,0.12947,1,-24.4815,0.12947,0.251645,-24.4815,-0.146075,1,-24.4815,-0.146075,0.251645,-25.0121,0.588712,1,-25.0121,0.496864,1,-25.0121,0.221319,1,-25.0121,0.12947,1,-25.0121,-0.146075,1,-25.0121,-0.237924,1,-25.0121,-0.513469,1,-25.0121,0.864258,1,-25.0121,-1,1,-24.4815,-1,1,-24.4815,1,1,-25.0121,1,1,-25.0121,1,-1,-24.4815,1,-1,-24.4815,-1,0.251644,-23.0121,-1,0.251644,1.53446,0.864258,1,1.53446,1,1,1.53446,0.588712,1,1.53446,0.496864,1,1.53446,0.221318,1,1.53446,0.12947,1,1.53446,-0.146075,1,1.53446,-0.237924,1,1.53446,-0.513469,1,1.53446,-1,1,1.53747,0.864254,-0.971061,1.53747,0.999996,-0.971062,1.53747,0.588709,-0.971061,1.53747,0.49686,-0.971061,1.53747,0.221315,-0.971061,1.53747,-0.237927,-0.971061,1.53747,-0.146078,-0.971061,1.53586,-0.237924,1,1.53747,-0.513472,-0.971061,1.53747,-1,-0.971062,1.53747,0.129467,-0.971061,-25.0101,0.864254,-0.971061,-25.0101,0.221315,-0.971061,-25.0101,0.49686,-0.971061,-25.0101,0.588709,-0.971061,-25.0101,0.129467,-0.971061,-25.0101,-0.146078,-0.971061,-25.0101,-1,-0.971062,-25.0101,-0.513472,-0.971061,-25.0101,-0.237927,-0.971061])}))}))})])}),

                        new Transform({
                          DEF : new SFString("querbalken-eg"),
                          translation : new SFVec3f([9.3164,4.07659,0.440292]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([16.4452,0.254208,0.429409]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0.349767),
                                      diffuseColor : new SFColor([0.305992,0.408754,0.457447])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([27,51,50,26,-1,51,1,3,50,-1,15,53,52,14,-1,53,27,26,52,-1,29,55,54,28,-1,55,15,14,54,-1,9,57,56,8,-1,57,29,28,56,-1,31,59,58,30,-1,59,9,8,58,-1,17,61,60,16,-1,61,31,30,60,-1,35,63,62,34,-1,63,17,16,62,-1,33,65,64,32,-1,65,10,11,64,-1,10,67,66,11,-1,67,37,36,66,-1,18,69,68,19,-1,69,33,32,68,-1,38,71,70,39,-1,71,18,19,70,-1,37,73,72,36,-1,73,21,20,72,-1,78,0,75,74,2,81,41,77,21,73,37,67,10,65,33,69,18,71,38,-1,75,35,34,74,-1,21,77,76,20,-1,77,41,40,76,-1,6,0,78,79,-1,78,38,39,79,-1,41,81,80,40,-1,81,2,4,80,-1,4,83,82,6,79,39,70,19,68,32,64,11,66,36,72,20,76,40,80,-1,83,43,42,82,-1,43,85,84,42,-1,85,23,22,84,-1,23,87,86,22,-1,87,45,44,86,-1,45,89,88,44,-1,89,13,12,88,-1,13,91,90,12,-1,91,47,46,90,-1,47,93,92,46,-1,93,25,24,92,-1,25,95,94,24,-1,95,49,48,94,-1,49,97,96,48,-1,97,5,7,96,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,0,1,-1,0,1,0,1,1,0,1,-1,-1,0,-1,1,0,-1,1,-0.5,1,-1,-0.5,1,1,0.5,1,-1,0.5,1,-0.5,1,1,-0.5,1,-1,0.5,1,-1,0.5,1,1,-1,0.5,-1,1,0.5,-1,-1,-0.5,-1,1,-0.5,-1,1,-0.75,1,-1,-0.75,1,1,-0.25,1,-1,-0.25,1,1,0.25,1,-1,0.25,1,-0.25,1,-1,-0.25,1,1,1,0.75,1,-1,0.75,1,0.25,1,-1,0.25,1,1,-0.75,1,1,-0.75,1,-1,0.75,1,-1,0.75,1,1,-1,0.75,-1,1,0.75,-1,-1,0.25,-1,1,0.25,-1,-1,-0.25,-1,1,-0.25,-1,-1,-0.75,-1,1,-0.75,-1,1,-0.875,1,-1,-0.875,1,1,-0.625,1,-1,-0.625,1,1,-0.375,1,-1,-0.375,1,1,-0.125,1,-1,-0.125,1,1,0.125,1,-1,0.125,1,1,0.375,1,-1,0.375,1,1,0.625,1,-1,0.625,1,-0.125,1,-1,-0.125,1,1,0.125,1,-1,0.125,1,1,-0.375,1,-1,-0.375,1,1,-0.625,1,-1,-0.625,1,1,0.375,1,-1,0.375,1,1,1,0.875,1,-1,0.875,1,0.625,1,-1,0.625,1,1,-0.875,1,1,-0.875,1,-1,0.875,1,-1,0.875,1,1,-1,0.875,-1,1,0.875,-1,-1,0.625,-1,1,0.625,-1,-1,0.375,-1,1,0.375,-1,-1,0.125,-1,1,0.125,-1,-1,-0.125,-1,1,-0.125,-1,-1,-0.375,-1,1,-0.375,-1,-1,-0.625,-1,1,-0.625,-1,-1,-0.875,-1,1,-0.875,-1])}))}))})])}),

                        new Transform({
                          DEF : new SFString("frame-hor"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-14.5233,1.93602,0.18805]),
                              scale : new SFVec3f([9.71042,0.963711,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("_13"),
                                          ambientIntensity : new SFFloat(3.008),
                                          diffuseColor : new SFColor([0.0531915,0,0]),
                                          specularColor : new SFColor([0.170213,0.170213,0.170213])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.757711,1.79069,0.198935,0.757711,1.67067,0.0789075,4.16723,1.67067,0.0789075,4.16723,1.79069,0.198935,0.757711,-1.49878,0.0789083,0.757711,-1.61881,0.198935,4.16723,-1.61881,0.198935,4.16723,-1.49878,0.0789083])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([21.2869,9.98375,0.18805]),
                              scale : new SFVec3f([1.05477,0.604794,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_13")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1,72,73,74,75,-1,76,77,78,79,-1,80,81,82,83,-1,84,85,86,87,-1,88,89,90,91,-1,92,93,94,95,-1,96,97,98,99,-1,100,101,102,103,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([3.97977,-16.2019,0.0768576,4.09949,-16.202,0.197197,4.09949,-10.3175,0.198233,3.97978,-10.3174,0.0778929,2.29331,-16.202,0.192475,2.41365,-16.2019,0.0727615,2.41365,-10.3174,0.0737968,2.29331,-10.3175,0.19351,-3.27106,-16.2019,0.0768579,-3.15135,-16.202,0.197198,-3.15135,-10.3175,0.198233,-3.27106,-10.3174,0.0778932,-4.95753,-16.202,0.192475,-4.83719,-16.2019,0.0727618,-4.83718,-10.3174,0.0737971,-4.95752,-10.3175,0.19351,-0.847101,-16.2019,0.0768579,-0.727389,-16.202,0.197198,-0.727387,-10.3175,0.198233,-0.847098,-10.3174,0.0778932,-2.53356,-16.202,0.192475,-2.41322,-16.2019,0.0727618,-2.41322,-10.3174,0.0737971,-2.53356,-10.3175,0.19351,1.56548,-16.2019,0.0768579,1.68519,-16.202,0.197198,1.6852,-10.3175,0.198233,1.56548,-10.3174,0.0778932,-0.120981,-16.202,0.192475,-0.000642346,-16.2019,0.0727618,-0.000639553,-10.3174,0.0737971,-0.120979,-10.3175,0.19351,-5.69005,-16.2019,0.0768576,-5.57034,-16.202,0.197197,-5.57034,-10.3175,0.198233,-5.69005,-10.3174,0.0778929,-7.37651,-16.202,0.192475,-7.25618,-16.2019,0.0727615,-7.25617,-10.3174,0.0737968,-7.37651,-10.3175,0.19351,-12.9409,-16.2019,0.0768579,-12.8212,-16.202,0.197198,-12.8212,-10.3175,0.198233,-12.9409,-10.3174,0.0778932,-14.6274,-16.202,0.192475,-14.507,-16.2019,0.0727618,-14.507,-10.3174,0.0737971,-14.6274,-10.3175,0.19351,-10.5169,-16.2019,0.0768579,-10.3972,-16.202,0.197198,-10.3972,-10.3175,0.198233,-10.5169,-10.3174,0.0778932,-12.2034,-16.202,0.192475,-12.0831,-16.2019,0.0727618,-12.083,-10.3174,0.0737971,-12.2034,-10.3175,0.19351,-8.10435,-16.2019,0.0768579,-7.98463,-16.202,0.197198,-7.98463,-10.3175,0.198233,-8.10434,-10.3174,0.0778932,-9.79081,-16.202,0.192475,-9.67047,-16.2019,0.0727618,-9.67047,-10.3174,0.0737971,-9.79081,-10.3175,0.19351,-15.3619,-16.2019,0.0768576,-15.2422,-16.202,0.197197,-15.2422,-10.3175,0.198233,-15.3619,-10.3174,0.0778929,-17.0483,-16.202,0.192475,-16.928,-16.2019,0.0727615,-16.928,-10.3174,0.0737968,-17.0483,-10.3175,0.19351,-22.6127,-16.2019,0.0768579,-22.493,-16.202,0.197198,-22.493,-10.3175,0.198233,-22.6127,-10.3174,0.0778932,-24.2992,-16.202,0.192475,-24.1788,-16.2019,0.0727618,-24.1788,-10.3174,0.0737971,-24.2992,-10.3175,0.19351,-20.1887,-16.2019,0.0768579,-20.069,-16.202,0.197198,-20.069,-10.3175,0.198233,-20.1887,-10.3174,0.0778932,-21.8752,-16.202,0.192475,-21.7549,-16.2019,0.0727618,-21.7549,-10.3174,0.0737971,-21.8752,-10.3175,0.19351,-17.7762,-16.2019,0.0768579,-17.6565,-16.202,0.197198,-17.6564,-10.3175,0.198233,-17.7762,-10.3174,0.0778932,-19.4626,-16.202,0.192475,-19.3423,-16.2019,0.0727618,-19.3423,-10.3174,0.0737971,-19.4626,-10.3175,0.19351,-25.0317,-16.2019,0.0768576,-24.912,-16.202,0.197197,-24.912,-10.3175,0.198233,-25.0317,-10.3174,0.0778929,-26.7182,-16.202,0.192475,-26.5978,-16.2019,0.0727615,-26.5978,-10.3174,0.0737968,-26.7182,-10.3175,0.19351])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("panels-h"),
                          translation : new SFVec3f([21.2869,14.7089,0.18805]),
                          scale : new SFVec3f([1.05477,1,1]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_13")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,10,11,12,13,-1,14,15,16,17,-1,18,19,20,21,-1,22,18,21,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,32,35,37,-1,38,39,40,41,-1,42,43,44,45,-1,46,47,48,49,-1,50,46,49,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,60,63,65,-1,66,67,68,69,-1,70,71,72,73,-1,74,75,76,77,-1,78,74,77,79,-1,80,81,82,83,-1,84,85,86,87,-1,88,89,90,91,-1,92,88,91,93,-1,94,95,96,97,-1,98,99,100,101,-1,102,103,104,105,-1,106,102,105,107,-1,108,109,110,111,-1,112,113,114,115,-1,116,117,118,119,-1,120,116,119,121,-1,122,123,124,125,-1,126,127,128,129,-1,130,131,132,133,-1,134,130,133,135,-1,136,137,138,139,-1,140,141,142,143,-1,144,145,146,147,-1,148,144,147,149,-1,150,151,152,153,-1,154,155,156,157,-1,158,159,160,161,-1,162,158,161,163,-1,164,165,166,167,-1,168,169,170,171,-1,172,173,174,175,-1,176,172,175,177,-1,178,179,180,181,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([3.97978,-10.3174,0.0778929,4.09949,-10.3175,0.198233,4.09948,1.84053,0.201348,3.97977,1.84059,0.0810087,3.18602,-10.2156,0.14498,3.25407,-10.2155,0.0772871,3.25407,1.84042,0.0794082,3.18602,1.8404,0.147101,3.11833,-10.2155,0.0769328,3.11833,1.84042,0.0790539,2.29331,-10.3175,0.19351,2.41365,-10.3174,0.0737968,2.41365,1.84059,0.0769172,2.29331,1.84053,0.19663,-3.27106,-10.3174,0.0778932,-3.15135,-10.3175,0.198233,-3.15135,1.84053,0.201349,-3.27107,1.84059,0.0810089,-4.06482,-10.2156,0.14498,-3.99677,-10.2155,0.0772874,-3.99677,1.84042,0.0794085,-4.06481,1.8404,0.147101,-4.13251,-10.2155,0.0769331,-4.1325,1.84042,0.0790542,-4.95752,-10.3175,0.19351,-4.83718,-10.3174,0.0737971,-4.83719,1.84059,0.0769174,-4.95753,1.84053,0.196631,-0.847098,-10.3174,0.0778932,-0.727387,-10.3175,0.198233,-0.727392,1.84053,0.201349,-0.847103,1.84059,0.0810089,-1.64086,-10.2156,0.14498,-1.57281,-10.2155,0.0772874,-1.5728,1.84042,0.0794085,-1.64085,1.8404,0.147101,-1.70855,-10.2155,0.0769331,-1.70854,1.84042,0.0790542,-2.53356,-10.3175,0.19351,-2.41322,-10.3174,0.0737971,-2.41322,1.84059,0.0769174,-2.53356,1.84053,0.196631,1.56548,-10.3174,0.0778932,1.6852,-10.3175,0.198233,1.68519,1.84053,0.201349,1.56548,1.84059,0.0810089,0.771726,-10.2156,0.14498,0.839772,-10.2155,0.0772874,0.839778,1.84042,0.0794085,0.771732,1.8404,0.147101,0.704034,-10.2155,0.0769331,0.70404,1.84042,0.0790542,-0.120979,-10.3175,0.19351,-0.000639553,-10.3174,0.0737971,-0.000642061,1.84059,0.0769174,-0.120981,1.84053,0.196631,-5.69005,-10.3174,0.0778929,-5.57034,-10.3175,0.198233,-5.57034,1.84053,0.201348,-5.69005,1.84059,0.0810087,-6.48381,-10.2156,0.14498,-6.41576,-10.2155,0.0772871,-6.41576,1.84042,0.0794082,-6.4838,1.8404,0.147101,-6.5515,-10.2155,0.0769328,-6.55149,1.84042,0.0790539,-7.37651,-10.3175,0.19351,-7.25617,-10.3174,0.0737968,-7.25618,1.84059,0.0769172,-7.37651,1.84053,0.19663,-12.9409,-10.3174,0.0778932,-12.8212,-10.3175,0.198233,-12.8212,1.84053,0.201349,-12.9409,1.84059,0.0810089,-13.7346,-10.2156,0.14498,-13.6666,-10.2155,0.0772874,-13.6666,1.84042,0.0794085,-13.7346,1.8404,0.147101,-13.8023,-10.2155,0.0769331,-13.8023,1.84042,0.0790542,-14.6274,-10.3175,0.19351,-14.507,-10.3174,0.0737971,-14.507,1.84059,0.0769174,-14.6274,1.84053,0.196631,-10.5169,-10.3174,0.0778932,-10.3972,-10.3175,0.198233,-10.3972,1.84053,0.201349,-10.5169,1.84059,0.0810089,-11.3107,-10.2156,0.14498,-11.2426,-10.2155,0.0772874,-11.2426,1.84042,0.0794085,-11.3107,1.8404,0.147101,-11.3784,-10.2155,0.0769331,-11.3784,1.84042,0.0790542,-12.2034,-10.3175,0.19351,-12.083,-10.3174,0.0737971,-12.0831,1.84059,0.0769174,-12.2034,1.84053,0.196631,-8.10434,-10.3174,0.0778932,-7.98463,-10.3175,0.198233,-7.98464,1.84053,0.201349,-8.10435,1.84059,0.0810089,-8.8981,-10.2156,0.14498,-8.83005,-10.2155,0.0772874,-8.83005,1.84042,0.0794085,-8.8981,1.8404,0.147101,-8.96579,-10.2155,0.0769331,-8.96579,1.84042,0.0790542,-9.79081,-10.3175,0.19351,-9.67047,-10.3174,0.0737971,-9.67047,1.84059,0.0769174,-9.79081,1.84053,0.196631,-15.3619,-10.3174,0.0778929,-15.2422,-10.3175,0.198233,-15.2422,1.84053,0.201348,-15.3619,1.84059,0.0810087,-16.1556,-10.2156,0.14498,-16.0876,-10.2155,0.0772871,-16.0876,1.84042,0.0794082,-16.1556,1.8404,0.147101,-16.2233,-10.2155,0.0769328,-16.2233,1.84042,0.0790539,-17.0483,-10.3175,0.19351,-16.928,-10.3174,0.0737968,-16.928,1.84059,0.0769172,-17.0483,1.84053,0.19663,-22.6127,-10.3174,0.0778932,-22.493,-10.3175,0.198233,-22.493,1.84053,0.201349,-22.6127,1.84059,0.0810089,-23.4065,-10.2156,0.14498,-23.3384,-10.2155,0.0772874,-23.3384,1.84042,0.0794085,-23.4065,1.8404,0.147101,-23.4742,-10.2155,0.0769331,-23.4741,1.84042,0.0790542,-24.2992,-10.3175,0.19351,-24.1788,-10.3174,0.0737971,-24.1788,1.84059,0.0769174,-24.2992,1.84053,0.196631,-20.1887,-10.3174,0.0778932,-20.069,-10.3175,0.198233,-20.069,1.84053,0.201349,-20.1887,1.84059,0.0810089,-20.9825,-10.2156,0.14498,-20.9145,-10.2155,0.0772874,-20.9144,1.84042,0.0794085,-20.9825,1.8404,0.147101,-21.0502,-10.2155,0.0769331,-21.0502,1.84042,0.0790542,-21.8752,-10.3175,0.19351,-21.7549,-10.3174,0.0737971,-21.7549,1.84059,0.0769174,-21.8752,1.84053,0.196631,-17.7762,-10.3174,0.0778932,-17.6564,-10.3175,0.198233,-17.6565,1.84053,0.201349,-17.7762,1.84059,0.0810089,-18.5699,-10.2156,0.14498,-18.5019,-10.2155,0.0772874,-18.5019,1.84042,0.0794085,-18.5699,1.8404,0.147101,-18.6376,-10.2155,0.0769331,-18.6376,1.84042,0.0790542,-19.4626,-10.3175,0.19351,-19.3423,-10.3174,0.0737971,-19.3423,1.84059,0.0769174,-19.4626,1.84053,0.196631,-25.0317,-10.3174,0.0778929,-24.912,-10.3175,0.198233,-24.912,1.84053,0.201348,-25.0317,1.84059,0.0810087,-25.8255,-10.2156,0.14498,-25.7574,-10.2155,0.0772871,-25.7574,1.84042,0.0794082,-25.8254,1.8404,0.147101,-25.8931,-10.2155,0.0769328,-25.8931,1.84042,0.0790539,-26.7182,-10.3175,0.19351,-26.5978,-10.3174,0.0737968,-26.5978,1.84059,0.0769172,-26.7182,1.84053,0.19663])}))}))})])}),

                        new Transform({
                          DEF : new SFString("panels-v"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-14.5233,5.12273,0.18805]),
                              scale : new SFVec3f([9.71042,1,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_13")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,10,11,12,13,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.757711,1.79069,0.198935,0.757711,1.67067,0.0789075,4.16723,1.67067,0.0789075,4.16723,1.79069,0.198935,0.757711,0.00474381,0.146778,0.757711,-0.0631256,0.0789078,4.16723,-0.0631256,0.0789078,4.16723,0.00474381,0.146778,0.757711,0.0726128,0.0789082,4.16723,0.0726128,0.0789082,0.757711,-0.492244,0.0789083,0.757711,-0.612269,0.198935,4.16723,-0.612269,0.198935,4.16723,-0.492244,0.0789083])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-14.5233,8.3153,0.18805]),
                              scale : new SFVec3f([9.71042,1,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_13")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,10,11,12,13,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.757711,1.79069,0.198935,0.757711,1.67067,0.0789075,4.16723,1.67067,0.0789075,4.16723,1.79069,0.198935,0.757711,0.00474381,0.146778,0.757711,-0.0631256,0.0789078,4.16723,-0.0631256,0.0789078,4.16723,0.00474381,0.146778,0.757711,0.0726128,0.0789082,4.16723,0.0726128,0.0789082,0.757711,-0.492244,0.0789083,0.757711,-0.612269,0.198935,4.16723,-0.612269,0.198935,4.16723,-0.492244,0.0789083])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-14.5233,11.5163,0.18805]),
                              scale : new SFVec3f([9.71042,1,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_13")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,10,11,12,13,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.757711,1.79069,0.198935,0.757711,1.67067,0.0789075,4.16723,1.67067,0.0789075,4.16723,1.79069,0.198935,0.757711,0.00474381,0.146778,0.757711,-0.0631256,0.0789078,4.16723,-0.0631256,0.0789078,4.16723,0.00474381,0.146778,0.757711,0.0726128,0.0789082,4.16723,0.0726128,0.0789082,0.757711,-0.492244,0.0789083,0.757711,-0.612269,0.198935,4.16723,-0.612269,0.198935,4.16723,-0.492244,0.0789083])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-14.5233,14.7089,0.18805]),
                              scale : new SFVec3f([9.71042,1,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_13")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,10,11,12,13,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.757711,1.79069,0.198935,0.757711,1.67067,0.0789075,4.16723,1.67067,0.0789075,4.16723,1.79069,0.198935,0.757711,0.00474381,0.146778,0.757711,-0.0631256,0.0789078,4.16723,-0.0631256,0.0789078,4.16723,0.00474381,0.146778,0.757711,0.0726128,0.0789082,4.16723,0.0726128,0.0789082,0.757711,-0.492244,0.0789083,0.757711,-0.612269,0.198935,4.16723,-0.612269,0.198935,4.16723,-0.492244,0.0789083])}))}))})])})])})])})])}),

                new Transform({
                  DEF : new SFString("ecke"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("reling"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-17.9397,4.71995,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                  texCoordIndex : new MFInt32([0,1,3,2,-1,6,7,5,4,-1]),
                                  coordIndex : new MFInt32([0,1,3,2,-1,2,3,5,4,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0,-0.000174861,0.993487,-0.000174861,0.00407209,-0.0831924,0.993487,-0.0831924,0.00407209])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,7.01179,10,-10,7.01179])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,7.94848,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      USE : new SFString("_4")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,11.2374,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      USE : new SFString("_5")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,14.4675,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      USE : new SFString("_6")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9397,17.6986,-5.20605]),
                          scale : new SFVec3f([0.725289,0.100096,0.75308]),
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
                                      USE : new SFString("_7")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([0.427938,20.6912,-23.5949]),
                          scale : new SFVec3f([2.56205,0.100096,2.59196]),
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
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,0.277759,0,0.277759,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,10,-10,-10,10,-4.29376,-10,10,-4.29376,10,10])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("gitter"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-21.6412,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-23.2604,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-20.0221,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-18.4029,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-16.7837,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-15.1646,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-13.5454,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-11.9263,13.5142,0.0056842]),
                          rotation : new SFRotation([0,1,0,0.785398]),
                          scale : new SFVec3f([0.116164,9.53834,0.176208]),
                          scaleOrientation : new SFRotation([0,1,0,0.785398]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(3.008),
                                      diffuseColor : new SFColor([0.0531915,0.0531915,0.0531915]),
                                      specularColor : new SFColor([0.202128,0.202128,0.202128])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("etagen"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-16.342,3.88045,-5.19034]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([0.889391,0.75932,0.0190014]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_9")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  texCoordIndex : new MFInt32([0,1,3,74,50,78,24,2,-1,21,34,26,36,0,1,11,3,2,-1,13,10,3,2,8,-1,15,1,10,12,-1,0,1,42,30,40,19,9,-1,14,12,22,16,-1,12,8,19,22,-1,58,45,60,1,3,14,17,-1,28,33,41,31,-1,33,22,18,41,-1,0,25,39,43,-1,39,28,31,43,-1,44,59,56,46,-1,59,16,23,56,-1,20,3,61,62,-1,61,44,46,62,-1,47,57,64,53,-1,57,22,32,64,-1,35,20,63,66,-1,63,47,53,66,-1,52,65,68,54,-1,65,32,29,68,-1,27,35,67,70,-1,67,52,54,70,-1,51,75,72,48,-1,75,1,37,72,-1,37,27,71,73,-1,71,55,49,73,-1,25,79,76,38,-1,79,51,48,76,-1,55,69,77,49,-1,69,29,38,77,-1]),
                                  coordIndex : new MFInt32([4,5,1,39,27,41,14,0,-1,12,19,15,20,1,5,7,3,2,-1,8,7,5,4,6,-1,9,3,7,8,-1,4,0,23,17,22,11,6,-1,9,8,13,10,-1,8,6,11,13,-1,31,24,32,2,3,9,10,-1,16,18,22,17,-1,18,13,11,22,-1,0,14,21,23,-1,21,16,17,23,-1,24,31,30,25,-1,31,10,13,30,-1,12,2,32,33,-1,32,24,25,33,-1,25,30,34,28,-1,30,13,18,34,-1,19,12,33,35,-1,33,25,28,35,-1,28,34,36,29,-1,34,18,16,36,-1,15,19,35,37,-1,35,28,29,37,-1,27,39,38,26,-1,39,1,20,38,-1,20,15,37,38,-1,37,29,26,38,-1,14,41,40,21,-1,41,27,26,40,-1,29,36,40,26,-1,36,16,21,40,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,1,1,0,1,0.635589,0,0.635589,0,0.635589,1,0.635589,0.17458,1,0.82542,1,0.17458,0,0.82542,0,0.17458,0.849644,0.17458,0.849644,1,0.849644,0,0.849644,1,0.83884,0,0.83884,0.82542,1,0.82542,0,0.82542,0,0.82542,1,0.82542,0.83884,0.82542,0.83884,1,0.83884,0,0.83884,0.41271,1,0.41271,0,0.41271,0.83884,0.41271,0.83884,0.41271,0,0.41271,1,0.619065,0.83884,0.619065,0.83884,0.619065,1,0.619065,0,0.206355,1,0.206355,0,0.206355,0.83884,0.206355,0.83884,0.619065,0,0.619065,1,0.206355,0,0.206355,1,1,0.41942,0,0.41942,0.82542,0.41942,0.82542,0.41942,0.206355,0.41942,0.206355,0.41942,1,0.41942,0,0.41942,0.619065,0.41942,0.619065,0.41942,0.41271,0.41942,0.41271,0.41942,0.82542,0.62913,0.82542,0.62913,0,0.62913,1,0.62913,0,0.20971,1,0.20971,0.82542,0.20971,0.82542,0.20971,0.619065,0.62913,0.619065,0.62913,0.619065,0.20971,0.619065,0.20971,0.41271,0.62913,0.41271,0.62913,0.41271,0.20971,0.41271,0.20971,0.206355,0.20971,0.206355,0.20971,1,0.20971,0,0.20971,0.206355,0.62913,0.206355,0.62913,1,0.62913,0,0.62913])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-10,10,11.7737,-10,-10,11.7737,10,-10,11.7737,10,-10,-10,-10,10,-10,-10,-10,-10,6.50841,10,-10,6.50841,-10,-10,6.50841,6.7768,-10,10,6.7768,-10,10,6.77679,11.7737,6.50841,10,11.7737,6.50841,-10,11.7737,6.50841,6.77679,11.7737,-10,6.77679,11.7737,-1.7458,-10,11.7737,-1.7458,6.77679,11.7737,-1.7458,10,11.7737,2.38131,6.77679,11.7737,2.38131,-10,11.7737,-5.8729,-10,11.7737,-5.8729,6.77679,11.7737,2.38131,10,11.7737,-5.8729,10,11.7737,10,-1.6116,11.7737,6.50841,-1.6116,11.7737,-5.8729,-1.6116,11.7737,-10,-1.6116,11.7737,2.38131,-1.6116,11.7737,-1.7458,-1.6116,11.7737,6.50841,2.58259,11.7737,10,2.5826,11.7737,10,-5.8058,11.7737,6.50841,-5.8058,11.7737,2.38131,2.58259,11.7737,2.38131,-5.8058,11.7737,-1.7458,2.58259,11.7737,-1.7458,-5.8058,11.7737,-5.8729,-5.8058,11.7737,-10,-5.8058,11.7737,-5.8729,2.58259,11.7737,-10,2.58259,11.7737])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9008,7.09211,-5.19035]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([0.733516,0.759319,0.0190014]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_9")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([20,20,20])}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9009,10.4033,-5.19032]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([0.733516,0.759319,0.0190014]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_9")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([20,20,20])}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9008,13.6402,-5.19034]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([0.733516,0.75932,0.0190014]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_9")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([20,20,20])}))})])}),

                        new Transform({
                          translation : new SFVec3f([-17.9008,16.8335,-5.19035]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([0.733516,0.759319,0.0190014]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_9")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([20,20,20])}))})])})])}),

                    new Inline({
                      url : new MFString(["empfang.x3d"]),
                      bboxSize : new SFVec3f([16.8942,3.84035,17.7319]),
                      bboxCenter : new SFVec3f([-15.1166,1.90052,-8.06509])})])}),

                new Transform({
                  DEF : new SFString("seite-r"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([1.59214,11.6364,-24.9397]),
                      scale : new SFVec3f([2.49104,1.18219,2.49441]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.27381),
                                  diffuseColor : new SFColor([0.893617,0.783239,0.6419])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,1,0,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([10,10,10,10,-10,10,10,10,-10,10,-10,-10,9.66559,10,10,9.66559,-10,10])}))}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());