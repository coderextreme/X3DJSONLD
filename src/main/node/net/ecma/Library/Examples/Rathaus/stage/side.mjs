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
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Normal = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 Mar 2015 09:34:45 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 Mar 2015 09:34:45 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              translation : new SFVec3f([0,0,-0.00311279]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("_1"),
                  translation : new SFVec3f([-4.94424,0.019293,-8.2466]),
                  rotation : new SFRotation([0,-1,0,1.5698]),
                  scale : new SFVec3f([1.20947,1.1498,1.62056]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-1.19467,0.781652,-6.9305]),
                      rotation : new SFRotation([-0.000480725,-1,-0.000911969,1.5694]),
                      scale : new SFVec3f([1.22589,1.50658,0.976649]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0.953235,0.643695])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["w_bogen.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              texCoordIndex : new MFInt32([15,17,17,15,-1,25,16,16,25,-1,23,25,25,23,-1,23,2,2,23,-1,12,2,2,12,-1,19,21,21,19,-1,18,19,19,18,-1,18,13,13,18,-1,37,21,21,7,7,-1,0,28,26,10,-1,28,14,12,26,-1,3,10,27,29,-1,27,13,29,-1,3,30,32,-1,30,13,18,32,-1,3,31,34,-1,31,18,19,34,-1,3,33,36,-1,33,19,20,36,-1,3,35,40,39,-1,35,20,38,40,-1,38,22,43,41,-1,43,2,39,41,-1,22,23,44,42,-1,44,2,42,-1,23,24,46,45,-1,46,2,45,-1,24,16,48,47,-1,48,2,47,-1,16,51,49,-1,51,11,2,49,-1,17,52,50,15,-1,52,1,11,50,-1]),
                              coordIndex : new MFInt32([17,16,9,8,-1,19,17,8,15,-1,20,19,15,14,-1,18,20,14,13,-1,21,22,6,7,-1,24,23,12,11,-1,25,24,11,10,-1,22,25,10,6,-1,32,12,23,18,13,-1,0,27,26,4,-1,27,7,6,26,-1,3,4,26,28,-1,26,6,28,-1,3,28,29,-1,28,6,10,29,-1,3,29,30,-1,29,10,11,30,-1,3,30,31,-1,30,11,12,31,-1,3,31,34,33,-1,31,12,32,34,-1,32,13,35,34,-1,35,2,33,34,-1,13,14,36,35,-1,36,2,35,-1,14,15,37,36,-1,37,2,36,-1,15,8,38,37,-1,38,2,37,-1,8,39,38,-1,39,5,2,38,-1,9,40,39,8,-1,40,1,5,39,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,0.997605,0,0.997605,0.5,1,0.5,1,0.5,0.855555,0.5,0.853506,1,0.855555,0,0.855555,0,0.710991,1,0.71099,0.154202,0.710991,0.154202,0.710991,0.154203,0,0.866185,0.710991,0.866185,0.710991,0.866185,0,0.178152,0.74662,0.288551,0.817878,0.4375,0.853506,0.4375,0.853506,0.5625,0.853506,0.716546,0.817878,0.837139,0.74662,0.837139,0.74662,0.0771011,0.710991,0.0771011,0.710991,0.0771015,0,0.122338,0.770216,0.122338,0.770216,0.147063,0.790418,0.147063,0.790418,0.24011,0.848049,0.24011,0.848049,0.343087,0.884603,0.343087,0.884603,0.46875,0.853506,0.5,0.853506,0.5,0.997605,0.5,0.904473,0.5,0.904473,0.659761,0.885541,0.659761,0.885541,0.766695,0.849675,0.766695,0.849675,0.863846,0.787779,0.863846,0.787779,0.890664,0.763422,0.890664,0.763422,0.932989,0.710991,0.932989,0.710991,0.932989,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.557074,-0.503827,-1.19209e-7,0.5,-0.503827,0,0.5,0.5,0,-0.557074,0.5,-1.19209e-7,-0.557074,0.211598,-1.19209e-7,0.5,0.211598,0,-0.394071,0.211598,-0.0682247,-0.394071,-0.503827,-0.0682247,0.358547,0.211598,-0.0682246,0.358547,-0.503827,-0.0682246,-0.368754,0.247449,-0.0682246,-0.252055,0.319151,-0.0682246,-0.094604,0.355002,-0.0682246,0.0375302,0.355002,-0.0682246,0.200368,0.319151,-0.0682246,0.327843,0.247449,-0.0682246,0.358547,-0.503827,-0.0954834,0.358547,0.211598,-0.0954834,0.0375302,0.355002,-0.0954835,0.327843,0.247449,-0.0954834,0.200368,0.319151,-0.0954834,-0.394071,-0.503827,-0.0954835,-0.394071,0.211598,-0.0954835,-0.094604,0.355002,-0.0954835,-0.252055,0.319151,-0.0954835,-0.368754,0.247449,-0.0954835,-0.475572,0.211598,-1.10018e-7,-0.475572,-0.503827,-1.10018e-7,-0.427753,0.271192,-1.04625e-7,-0.401617,0.29152,-1.01678e-7,-0.303259,0.349511,-9.05859e-8,-0.194405,0.386293,-7.83101e-8,-0.0285369,0.355002,-0.0682246,-0.0285368,0.5,-5.96046e-8,-0.0285368,0.406287,-5.96046e-8,0.140343,0.387237,-4.05596e-8,0.25338,0.351147,-2.78121e-8,0.356075,0.288865,-1.62308e-8,0.384424,0.264357,-1.30338e-8,0.429164,0.211598,-7.98838e-9,0.429164,-0.503827,-7.98828e-9])}))}))})])})])})])}),

            new Transform({
              DEF : new SFString("top"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("giebelzier"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("polySurface49"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_2"),
                                  diffuseColor : new SFColor([1,0.794631,0.389824])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_3"),
                                  url : new MFString(["t_stones.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface49_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface49GeoPoints"),
                                  point : new MFVec3f([-1.068,5.652,-9.663,-1.093,5.84,-9.625,-1.037,5.744,-9.711,-1.196,5.652,-9.535,-1.227,5.744,-9.488,-1.227,5.699,-9.488,-1.037,5.699,-9.711,-1.196,5.652,-9.663,-1.227,5.699,-9.71,-1.227,5.744,-9.71,-1.068,5.652,-9.535,-1.037,5.699,-9.488,-1.037,5.744,-9.488,-1.171,5.84,-9.573,-1.171,5.84,-9.625,-1.093,5.84,-9.573,-1.187,6.029,-9.651,-1.058,6.029,-9.596,-1.102,6.029,-9.694,-1.187,5.907,-9.651,-1.058,5.907,-9.596,-1.102,5.907,-9.694,-1.187,6.029,-9.542,-1.128,6.103,-9.596,-1.101,6.029,-9.498,-1.187,5.907,-9.542,-1.101,5.907,-9.498,-1.128,5.832,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly83"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly83_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([20,1,16,21,-1,6,10,19,12,-1,8,7,14,13,-1,4,3,2,5,-1,4,5,0,6,7,-1,17,12,16,-1,8,3,4,7,-1,0,9,10,6,-1,9,2,3,8,10,-1,13,10,8,-1,15,11,18,17,-1,16,1,15,17,-1,18,13,14,17,-1,11,20,21,18,-1,16,12,19,21,-1,19,10,13,18,-1,14,7,6,-1,19,18,21,-1,14,6,12,17,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly83GeoPoints"),
                                  point : new MFVec3f([-0.317,6.729,-9.421,-0.324,5.763,-9.421,-0.318,6.729,-9.699,-0.157,6.792,-9.7,-0.157,6.792,-9.422,-0.317,6.729,-9.421,-0.138,6.559,-9.421,0.054,6.655,-9.422,0.053,6.655,-9.7,-0.318,6.729,-9.699,-0.138,6.559,-9.699,-0.325,5.763,-9.699,-0.68,5.923,-9.421,-0.037,6.396,-9.699,-0.036,6.396,-9.421,-0.324,5.763,-9.421,-0.547,5.652,-9.421,-0.463,5.947,-9.421,-0.463,5.947,-9.699,-0.68,5.923,-9.699,-0.325,5.763,-9.699,-0.548,5.652,-9.699])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface50"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface50_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface50GeoPoints"),
                                  point : new MFVec3f([0.214,7.154,-9.663,0.189,7.342,-9.625,0.245,7.246,-9.711,0.087,7.154,-9.535,0.056,7.246,-9.488,0.056,7.202,-9.488,0.245,7.202,-9.711,0.087,7.154,-9.663,0.055,7.202,-9.71,0.055,7.246,-9.71,0.214,7.154,-9.535,0.246,7.202,-9.488,0.246,7.246,-9.488,0.112,7.342,-9.573,0.112,7.342,-9.625,0.189,7.342,-9.573,0.095,7.531,-9.651,0.225,7.531,-9.596,0.181,7.531,-9.694,0.095,7.41,-9.651,0.225,7.41,-9.596,0.181,7.41,-9.694,0.096,7.531,-9.542,0.155,7.606,-9.596,0.181,7.531,-9.498,0.096,7.41,-9.542,0.181,7.41,-9.498,0.155,7.335,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly86"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly86_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly86GeoPoints"),
                                  point : new MFVec3f([0.67,8.03,-9.425,0.482,7.431,-9.424,0.441,7.223,-9.701,0.749,8.252,-9.701,0.808,7.603,-9.425,0.893,7.464,-9.702,0.893,7.464,-9.425,0.749,8.252,-9.425,0.858,7.93,-9.425,0.971,8.079,-9.425,0.971,8.079,-9.702,0.441,7.223,-9.424,0.623,7.283,-9.425,0.673,7.112,-9.425,0.673,7.112,-9.701,0.669,8.03,-9.701,0.807,7.603,-9.701,0.857,7.93,-9.702,0.482,7.431,-9.701,0.622,7.283,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface51"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface51_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface51GeoPoints"),
                                  point : new MFVec3f([1.173,8.654,-9.663,1.148,8.842,-9.625,1.204,8.746,-9.711,1.045,8.654,-9.535,1.014,8.746,-9.488,1.014,8.702,-9.488,1.204,8.702,-9.711,1.045,8.654,-9.663,1.014,8.702,-9.71,1.014,8.746,-9.71,1.173,8.654,-9.535,1.204,8.702,-9.488,1.204,8.746,-9.488,1.07,8.842,-9.573,1.07,8.842,-9.625,1.148,8.842,-9.573,1.054,9.031,-9.651,1.183,9.031,-9.596,1.139,9.031,-9.694,1.054,8.91,-9.651,1.183,8.91,-9.596,1.139,8.91,-9.694,1.054,9.031,-9.542,1.113,9.106,-9.596,1.14,9.031,-9.498,1.054,8.91,-9.542,1.14,8.91,-9.498,1.113,8.835,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly85"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly85_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly85GeoPoints"),
                                  point : new MFVec3f([1.67,9.223,-9.425,1.527,8.853,-9.424,1.495,8.724,-9.701,1.73,9.36,-9.701,1.775,8.959,-9.425,1.84,8.873,-9.702,1.841,8.873,-9.425,1.731,9.36,-9.425,1.814,9.161,-9.425,1.9,9.253,-9.425,1.9,9.253,-9.702,1.496,8.724,-9.424,1.634,8.761,-9.425,1.673,8.655,-9.425,1.673,8.655,-9.701,1.67,9.223,-9.701,1.775,8.959,-9.701,1.813,9.161,-9.702,1.527,8.853,-9.701,1.634,8.761,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface52"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface52_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface52GeoPoints"),
                                  point : new MFVec3f([2.089,9.404,-9.663,2.064,9.592,-9.625,2.12,9.496,-9.711,1.962,9.404,-9.535,1.931,9.496,-9.488,1.931,9.452,-9.488,2.12,9.452,-9.711,1.962,9.404,-9.663,1.93,9.452,-9.71,1.93,9.496,-9.71,2.09,9.404,-9.535,2.121,9.452,-9.488,2.121,9.496,-9.488,1.987,9.592,-9.573,1.987,9.592,-9.625,2.064,9.592,-9.573,1.971,9.781,-9.651,2.1,9.781,-9.596,2.056,9.781,-9.694,1.971,9.66,-9.651,2.1,9.66,-9.596,2.056,9.66,-9.694,1.971,9.781,-9.542,2.03,9.856,-9.596,2.056,9.781,-9.498,1.971,9.66,-9.542,2.056,9.66,-9.498,2.03,9.585,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly84"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly84_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly84GeoPoints"),
                                  point : new MFVec3f([2.597,9.964,-9.425,2.455,9.594,-9.424,2.423,9.465,-9.701,2.657,10.102,-9.701,2.702,9.701,-9.425,2.767,9.614,-9.702,2.768,9.614,-9.425,2.658,10.102,-9.425,2.741,9.903,-9.425,2.827,9.995,-9.425,2.827,9.995,-9.702,2.423,9.465,-9.424,2.561,9.503,-9.425,2.6,9.397,-9.425,2.6,9.397,-9.701,2.597,9.964,-9.701,2.702,9.701,-9.701,2.74,9.903,-9.702,2.454,9.594,-9.701,2.561,9.503,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface53"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface53_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface53GeoPoints"),
                                  point : new MFVec3f([3.346,10.398,-9.663,3.321,10.587,-9.625,3.377,10.49,-9.711,3.218,10.398,-9.535,3.187,10.49,-9.488,3.187,10.446,-9.488,3.377,10.446,-9.711,3.218,10.398,-9.663,3.187,10.446,-9.71,3.187,10.49,-9.71,3.346,10.398,-9.535,3.377,10.446,-9.488,3.377,10.49,-9.488,3.243,10.587,-9.573,3.243,10.587,-9.625,3.321,10.587,-9.573,3.227,10.775,-9.651,3.356,10.775,-9.596,3.312,10.775,-9.694,3.227,10.654,-9.651,3.356,10.654,-9.596,3.312,10.654,-9.694,3.227,10.775,-9.542,3.286,10.85,-9.596,3.313,10.775,-9.498,3.227,10.654,-9.542,3.313,10.654,-9.498,3.286,10.579,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly202"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly202_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly202GeoPoints"),
                                  point : new MFVec3f([3.965,9.964,-9.425,4.107,9.594,-9.424,4.139,9.465,-9.701,3.904,10.102,-9.701,3.859,9.701,-9.425,3.794,9.614,-9.702,3.794,9.614,-9.425,3.904,10.102,-9.425,3.821,9.903,-9.425,3.735,9.995,-9.425,3.735,9.995,-9.702,4.139,9.465,-9.424,4,9.503,-9.425,3.962,9.397,-9.425,3.962,9.397,-9.701,3.965,9.964,-9.701,3.86,9.701,-9.701,3.822,9.903,-9.702,4.108,9.594,-9.701,4.001,9.503,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface128"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface128_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface128GeoPoints"),
                                  point : new MFVec3f([4.476,9.404,-9.663,4.501,9.592,-9.625,4.445,9.496,-9.711,4.604,9.404,-9.535,4.635,9.496,-9.488,4.635,9.452,-9.488,4.445,9.452,-9.711,4.604,9.404,-9.663,4.635,9.452,-9.71,4.635,9.496,-9.71,4.476,9.404,-9.535,4.445,9.452,-9.488,4.445,9.496,-9.488,4.579,9.592,-9.573,4.579,9.592,-9.625,4.501,9.592,-9.573,4.595,9.781,-9.651,4.466,9.781,-9.596,4.509,9.781,-9.694,4.595,9.66,-9.651,4.466,9.66,-9.596,4.509,9.66,-9.694,4.595,9.781,-9.542,4.535,9.856,-9.596,4.509,9.781,-9.498,4.595,9.66,-9.542,4.509,9.66,-9.498,4.535,9.585,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly201"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly201_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly201GeoPoints"),
                                  point : new MFVec3f([4.892,9.223,-9.425,5.034,8.853,-9.424,5.066,8.724,-9.701,4.831,9.36,-9.701,4.786,8.959,-9.425,4.721,8.873,-9.702,4.721,8.873,-9.425,4.831,9.36,-9.425,4.748,9.161,-9.425,4.662,9.253,-9.425,4.662,9.253,-9.702,5.066,8.724,-9.424,4.927,8.761,-9.425,4.889,8.655,-9.425,4.889,8.655,-9.701,4.892,9.223,-9.701,4.787,8.959,-9.701,4.749,9.161,-9.702,5.035,8.853,-9.701,4.928,8.761,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface129"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface129_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface129GeoPoints"),
                                  point : new MFVec3f([5.393,8.654,-9.663,5.418,8.842,-9.625,5.362,8.746,-9.711,5.52,8.654,-9.535,5.552,8.746,-9.488,5.552,8.702,-9.488,5.362,8.702,-9.711,5.521,8.654,-9.663,5.552,8.702,-9.71,5.552,8.746,-9.71,5.393,8.654,-9.535,5.361,8.702,-9.488,5.361,8.746,-9.488,5.496,8.842,-9.573,5.496,8.842,-9.625,5.418,8.842,-9.573,5.512,9.031,-9.651,5.382,9.031,-9.596,5.426,9.031,-9.694,5.512,8.91,-9.651,5.382,8.91,-9.596,5.426,8.91,-9.694,5.512,9.031,-9.542,5.452,9.106,-9.596,5.426,9.031,-9.498,5.512,8.91,-9.542,5.426,8.91,-9.498,5.452,8.835,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly200"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly200_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([18,1,12,19,-1,11,2,14,13,-1,6,5,10,9,-1,8,4,6,9,-1,0,8,9,7,-1,10,3,7,9,-1,12,1,11,13,-1,4,12,13,6,-1,14,5,6,13,-1,4,8,17,16,-1,10,5,16,17,-1,15,3,10,17,-1,8,0,15,17,-1,2,18,19,14,-1,19,16,5,14,-1,12,4,16,19,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly200GeoPoints"),
                                  point : new MFVec3f([5.892,8.03,-9.425,6.079,7.431,-9.424,6.121,7.223,-9.701,5.813,8.252,-9.701,5.754,7.603,-9.425,5.669,7.464,-9.702,5.669,7.464,-9.425,5.813,8.252,-9.425,5.704,7.93,-9.425,5.591,8.079,-9.425,5.591,8.079,-9.702,6.121,7.223,-9.424,5.939,7.283,-9.425,5.888,7.112,-9.425,5.889,7.112,-9.701,5.893,8.03,-9.701,5.755,7.603,-9.701,5.705,7.93,-9.702,6.08,7.431,-9.701,5.94,7.283,-9.701])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface130"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface130_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface130GeoPoints"),
                                  point : new MFVec3f([6.351,7.154,-9.663,6.376,7.342,-9.625,6.32,7.246,-9.711,6.479,7.154,-9.535,6.51,7.246,-9.488,6.51,7.202,-9.488,6.32,7.202,-9.711,6.479,7.154,-9.663,6.51,7.202,-9.71,6.51,7.246,-9.71,6.351,7.154,-9.535,6.32,7.202,-9.488,6.32,7.246,-9.488,6.454,7.342,-9.573,6.454,7.342,-9.625,6.376,7.342,-9.573,6.47,7.531,-9.651,6.341,7.531,-9.596,6.384,7.531,-9.694,6.47,7.41,-9.651,6.341,7.41,-9.596,6.384,7.41,-9.694,6.47,7.531,-9.542,6.41,7.606,-9.596,6.384,7.531,-9.498,6.47,7.41,-9.542,6.384,7.41,-9.498,6.41,7.335,-9.596])}))}))})])}),

                    new Transform({
                      DEF : new SFString("nurbsToPoly199"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("nurbsToPoly199_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([20,1,16,21,-1,6,10,19,12,-1,8,7,14,13,-1,4,3,2,5,-1,4,5,0,6,7,-1,17,12,16,-1,8,3,4,7,-1,0,9,10,6,-1,9,2,3,8,10,-1,13,10,8,-1,15,11,18,17,-1,16,1,15,17,-1,18,13,14,17,-1,11,20,21,18,-1,16,12,19,21,-1,19,10,13,18,-1,14,7,6,-1,19,18,21,-1,14,6,12,17,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("nurbsToPoly199GeoPoints"),
                                  point : new MFVec3f([6.879,6.729,-9.421,6.886,5.763,-9.421,6.88,6.729,-9.699,6.719,6.792,-9.7,6.719,6.792,-9.422,6.879,6.729,-9.421,6.7,6.559,-9.421,6.508,6.655,-9.422,6.509,6.655,-9.7,6.88,6.729,-9.699,6.7,6.559,-9.699,6.887,5.763,-9.699,7.242,5.923,-9.421,6.598,6.396,-9.699,6.598,6.396,-9.421,6.886,5.763,-9.421,7.109,5.652,-9.421,7.024,5.947,-9.421,7.025,5.947,-9.699,7.242,5.923,-9.699,6.887,5.763,-9.699,7.11,5.652,-9.699])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polySurface131"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("polySurface131_0Geo"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(2.94297),
                              coordIndex : new MFInt32([6,2,12,11,-1,5,4,9,8,-1,7,3,5,8,-1,0,7,8,6,-1,9,2,6,8,-1,10,0,6,11,-1,3,10,11,5,-1,12,4,5,11,-1,9,4,13,14,-1,2,9,14,1,-1,12,2,1,15,-1,4,12,15,13,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("polySurface131GeoPoints"),
                                  point : new MFVec3f([7.634,5.652,-9.663,7.659,5.84,-9.625,7.603,5.744,-9.711,7.761,5.652,-9.535,7.792,5.744,-9.488,7.792,5.699,-9.488,7.603,5.699,-9.711,7.762,5.652,-9.663,7.793,5.699,-9.71,7.793,5.744,-9.71,7.634,5.652,-9.535,7.602,5.699,-9.488,7.602,5.744,-9.488,7.736,5.84,-9.573,7.737,5.84,-9.625,7.659,5.84,-9.573,7.753,6.029,-9.651,7.623,6.029,-9.596,7.667,6.029,-9.694,7.753,5.907,-9.651,7.623,5.907,-9.596,7.667,5.907,-9.694,7.753,6.029,-9.542,7.693,6.103,-9.596,7.667,6.029,-9.498,7.753,5.907,-9.542,7.667,5.907,-9.498,7.693,5.832,-9.596])}))}))})])})])})])}),

            new Transform({
              DEF : new SFString("polySurface48"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["r-seite.jpg"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("polySurface48_0Geo"),
                      solid : new SFBool(false),
                      convex : new SFBool(false),
                      normalIndex : new MFInt32([42,43,44,45,-1,46,47,48,49,-1,50,51,52,53,-1,54,55,56,57,-1,58,59,60,61,-1,62,63,64,65,-1,66,67,68,69,-1,70,71,72,73,-1,74,75,76,77,-1,78,79,80,81,-1,82,83,84,85,-1,86,87,88,89,-1,90,91,92,93,-1,94,95,96,97,-1,98,99,100,101,-1,102,103,104,105,-1,106,107,108,109,-1,110,111,112,113,-1,114,115,116,117,-1,118,119,120,121,-1,30,31,32,33,34,-1,28,29,30,34,35,36,-1,26,27,28,36,37,38,-1,21,22,23,24,40,41,-1,24,25,26,38,39,40,-1,0,1,2,18,19,20,-1,2,3,4,16,17,18,-1,4,5,6,14,15,16,-1,6,7,8,12,13,14,-1,8,9,10,11,12,-1]),
                      coordIndex : new MFInt32([0,1,22,21,-1,1,2,23,22,-1,2,3,24,23,-1,3,4,25,24,-1,4,5,26,25,-1,5,6,27,26,-1,6,7,28,27,-1,7,8,29,28,-1,8,9,30,29,-1,9,10,31,30,-1,10,11,32,31,-1,11,12,33,32,-1,12,13,34,33,-1,13,14,35,34,-1,14,15,36,35,-1,15,16,37,36,-1,16,17,38,37,-1,17,18,39,38,-1,18,19,40,39,-1,19,20,41,40,-1,12,11,10,9,8,-1,14,13,12,8,7,6,-1,16,15,14,6,5,4,-1,0,20,19,18,2,1,-1,18,17,16,4,3,2,-1,21,22,23,39,40,41,-1,23,24,25,37,38,39,-1,25,26,27,35,36,37,-1,27,28,29,33,34,35,-1,29,30,31,32,33,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.000111039,0,0.0341456,0.297975,0.158188,0.301697,0.180603,0.552185,0.283432,0.552185,0.284973,0.737442,0.379975,0.740051,0.382584,0.862686,0.453033,0.865295,0.453517,0.953876,0.504932,1.00014,0.556346,0.953876,0.553836,0.867904,0.620026,0.870514,0.630463,0.74266,0.719177,0.74266,0.720717,0.557404,0.823547,0.557404,0.836593,0.301697,0.969665,0.301697,0.995758,0.0016332,0,0,0.0340346,0.297975,0.158188,0.301697,0.180603,0.552185,0.283321,0.552185,0.284862,0.737442,0.379863,0.740051,0.382473,0.862686,0.452922,0.865295,0.453406,0.953876,0.504821,1.00014,0.556235,0.953876,0.553725,0.867904,0.620026,0.870514,0.630463,0.74266,0.719177,0.74266,0.720717,0.557404,0.823547,0.557404,0.836593,0.301697,0.969554,0.301697,0.995647,0.0016332])})),
                      normal : new SFNode(
                        new Normal({
                          vector : new MFVec3f([-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,0.001,0,1,-1,0,0.001,-1,0,0.001,-1,0,0.001,-1,0,0.001,-0.005,1,0,-0.005,1,0,-0.005,1,0,-0.005,1,0,-1,0,0.001,-1,0,0.001,-1,0,0.001,-1,0,0.001,0,1,0,0,1,0,0,1,0,0,1,0,-1,0,0.001,-1,0,0.001,-1,0,0.001,-1,0,0.001,0,1,0,0,1,0,0,1,0,0,1,0,-1,0,0.001,-1,0,0.001,-1,0,0.001,-1,0,0.001,0,1,0,0,1,0,0,1,0,0,1,0,-1,0,0.001,-1,0,0.001,-1,0,0.001,-1,0,0.001,-0.533,0.846,0.001,-0.533,0.846,0.001,-0.533,0.846,0.001,-0.533,0.846,0.001,0.533,0.846,-0.001,0.533,0.846,-0.001,0.533,0.846,-0.001,0.533,0.846,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001,0,1,0,0,1,0,0,1,0,0,1,0,1,0,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001,0,1,0,0,1,0,0,1,0,0,1,0,1,0,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001,0,1,0,0,1,0,0,1,0,0,1,0,1,0,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001,0.005,1,0,0.005,1,0,0.005,1,0,0.005,1,0,1,0,-0.001,1,0,-0.001,1,0,-0.001,1,0,-0.001])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("polySurface48GeoPoints"),
                          point : new MFVec3f([-1.261,4.154,-9.42,-1.261,5.654,-9.42,0.044,5.661,-9.422,0.044,7.154,-9.422,0.97,7.154,-9.423,0.97,8.654,-9.423,1.896,8.654,-9.424,1.896,9.404,-9.424,2.822,9.404,-9.426,2.822,10.154,-9.426,3.285,10.445,-9.426,3.748,10.154,-9.427,3.748,9.404,-9.427,4.673,9.404,-9.428,4.673,8.654,-9.428,5.599,8.654,-9.43,5.599,7.154,-9.43,6.525,7.154,-9.431,6.525,5.661,-9.431,7.831,5.654,-9.433,7.831,4.154,-9.433,-1.262,4.154,-9.687,-1.262,5.654,-9.687,0.044,5.661,-9.688,0.044,7.154,-9.688,0.969,7.154,-9.69,0.969,8.654,-9.69,1.895,8.654,-9.691,1.895,9.404,-9.691,2.821,9.404,-9.692,2.821,10.154,-9.692,3.284,10.445,-9.693,3.747,10.154,-9.694,3.747,9.404,-9.694,4.673,9.404,-9.695,4.673,8.654,-9.695,5.599,8.654,-9.696,5.599,7.154,-9.696,6.525,7.154,-9.698,6.525,5.661,-9.698,7.83,5.654,-9.699,7.83,4.154,-9.699])}))}))})])}),

            new Transform({
              DEF : new SFString("vorbau"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("nurbsToPoly77"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0.953235,0.643695])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_3")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly77_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,6,0,3,7,-1,3,10,9,7,-1,2,11,10,3,-1]),
                          coordIndex : new MFInt32([8,2,11,10,-1,6,1,4,7,-1,0,6,7,5,-1,4,8,10,7,-1,10,9,5,7,-1,11,3,9,10,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([-0.708,-0.6,-0.373,-1,0,0.001,-1,0,0.001,-0.714,-0.516,-0.474,1,0,-0.001,1,0,-0.001,0.707,-0.6,-0.375,0.713,-0.516,-0.476,1,0,-0.001,0.706,-0.422,-0.569,-0.708,-0.422,-0.567,-1,0,0.001])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly77GeoPoints"),
                              point : new MFVec3f([2.698,1.935,-9.7,2.698,1.684,-9.7,2.517,1.684,-9.7,2.517,1.935,-9.7,2.698,1.684,-9.7,2.698,1.935,-9.989,2.698,1.802,-9.7,2.698,1.802,-9.89,2.517,1.684,-9.7,2.516,1.935,-9.989,2.517,1.802,-9.89,2.517,1.802,-9.7])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly78"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0.953235,0.643695])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_3")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly78_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,6,0,3,7,-1,3,10,9,7,-1,2,11,10,3,-1]),
                          coordIndex : new MFInt32([8,2,11,10,-1,6,1,4,7,-1,0,6,7,5,-1,4,8,10,7,-1,10,9,5,7,-1,11,3,9,10,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([-0.707,0.6,0.375,-1,0,0.001,-1,0,0.001,-0.713,0.516,0.476,1,0,-0.001,1,0,-0.001,0.708,0.6,0.373,0.714,0.516,0.474,1,0,-0.001,0.708,0.422,0.567,-0.706,0.422,0.569,-1,0,0.001])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly78GeoPoints"),
                              point : new MFVec3f([2.198,1.935,-9.699,2.198,1.684,-9.699,2.38,1.684,-9.699,2.38,1.935,-9.699,2.198,1.684,-9.699,2.198,1.935,-9.988,2.198,1.802,-9.699,2.198,1.802,-9.889,2.38,1.684,-9.699,2.38,1.935,-9.989,2.38,1.802,-9.89,2.38,1.802,-9.699])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly79"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0.953235,0.643695])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_3")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly79_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,4,7,9,-1,6,0,3,7,-1,3,10,9,7,-1,2,11,10,3,-1]),
                          coordIndex : new MFInt32([8,2,11,10,-1,6,1,4,7,-1,0,6,7,5,-1,4,8,10,7,-1,10,9,5,7,-1,11,3,9,10,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([-0.707,0.6,0.375,-1,0,0.001,-1,0,0.001,-0.713,0.516,0.476,1,0,-0.001,1,0,-0.001,0.708,0.6,0.373,0.714,0.516,0.474,1,0,-0.001,0.708,0.422,0.567,-0.706,0.422,0.569,-1,0,0.001])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly79GeoPoints"),
                              point : new MFVec3f([1.87,1.935,-9.699,1.87,1.684,-9.699,2.052,1.684,-9.699,2.052,1.935,-9.699,1.87,1.684,-9.699,1.869,1.935,-9.988,1.87,1.802,-9.699,1.87,1.802,-9.889,2.052,1.684,-9.699,2.051,1.935,-9.988,2.051,1.802,-9.889,2.052,1.802,-9.699])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly80"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0.953235,0.643695])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_4"),
                              url : new MFString(["r_wall.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly80_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,7,6,16,17,-1]),
                          coordIndex : new MFInt32([0,3,2,1,-1,0,1,5,4,-1,1,2,6,5,-1,3,0,4,7,-1,4,5,9,8,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([0,-1,0,0,-1,0,0,-1,0,0,-1,0,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-0.001,0,-1,-1,0,0.002,-1,0,0.002,-1,0,0.002,-1,0,0.002,1,0,-0.002,1,0,-0.002,1,0,-0.002,1,0,-0.002,-0.002,0,-1,-0.002,0,-1])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly80GeoPoints"),
                              point : new MFVec3f([2.771,1.935,-9.99,1.796,1.935,-9.989,1.797,1.935,-9.701,2.772,1.935,-9.702,2.771,3.44,-9.99,1.796,3.44,-9.989,1.797,3.44,-9.701,2.772,3.44,-9.702,2.27,3.687,-9.989,2.27,3.687,-9.989])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly81"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.341818),
                              diffuseColor : new SFColor([0.585106,0.0214792,0])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["dachziegel.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly81_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,2,1,4,7,-1,8,9,10,11,-1,12,13,14,15,-1,10,13,12,11,-1,16,17,13,10,-1,14,13,17,18,-1,10,9,19,16,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,3,2,-1,30,31,7,6,-1,2,7,32,33,-1]),
                          coordIndex : new MFInt32([7,0,4,8,-1,3,1,6,5,-1,4,0,3,5,-1,9,12,11,10,-1,13,16,15,14,-1,11,16,13,10,-1,17,18,16,11,-1,15,16,18,2,-1,11,12,19,17,-1,0,7,1,3,-1,9,10,13,14,-1,17,19,8,4,-1,2,18,5,6,-1,4,5,18,17,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([-0.014,-1,0,-0.006,-0.707,0.707,0.173,-0.673,0.719,0.246,-0.969,0,0.004,0.707,0.707,0,1,0,-0.238,0.971,0,-0.164,0.677,0.718,0.016,-1,0,-0.233,-0.972,0,-0.165,-0.676,0.718,0.007,-0.707,0.707,-0.004,0.707,0.707,0.156,0.68,0.717,0.227,0.974,0,0,1,0,-0.332,-0.625,0.707,0.312,0.634,0.707,0.442,0.897,0,-0.468,-0.884,0,1,-0.01,-0.001,1,-0.01,-0.001,1,-0.01,-0.001,1,-0.01,-0.001,-1,-0.01,-0.001,-1,-0.01,-0.001,-1,-0.01,-0.001,-1,-0.01,-0.001,0.488,-0.873,0,0.488,-0.873,0,-0.462,0.887,0,-0.462,0.887,0,0.001,0,1,0.001,0,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly81GeoPoints"),
                              point : new MFVec3f([1.722,3.498,-10,1.722,3.44,-9.697,2.27,3.687,-9.698,1.721,3.44,-10,1.796,3.497,-10,1.796,3.44,-10,1.796,3.44,-9.698,1.722,3.498,-9.697,1.796,3.497,-9.698,2.833,3.498,-9.697,2.834,3.498,-10,2.771,3.497,-10,2.771,3.497,-9.698,2.834,3.44,-10,2.834,3.44,-9.697,2.771,3.44,-9.698,2.771,3.44,-10,2.271,3.762,-10.001,2.27,3.687,-10.001,2.27,3.762,-9.698])}))}))})])})])}),

            new Transform({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["dachrand.jpg"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.020138,0,0,0.969821,3.81447,0.969821,3.79475,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-1.214,3.592,-9.695,-1.262,4.154,-9.687,7.83,4.154,-9.699,7.783,3.592,-9.708])}))}))})])}),

            new Switch({
              whichChoice : new SFInt32(1),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0,0,-34.9785]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.341818),
                              diffuseColor : new SFColor([0.585106,0.0214792,0])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("polySurface125_0Geo"),
                          solid : new SFBool(false),
                          convex : new SFBool(false),
                          normalIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,-1,67,68,69,-1,70,71,72,-1,73,74,75,76,-1,77,78,79,80,-1,81,82,83,84,-1,85,86,87,88,-1,89,90,91,92,-1,93,94,95,96,-1,97,98,99,100,-1,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,-1,113,114,115,116,-1,117,118,119,120,-1,121,122,123,124,-1,125,126,127,128,-1,129,130,131,132,-1,133,134,135,136,-1,137,138,139,140,-1,141,142,143,144,-1,145,146,147,148,-1,149,150,151,152,-1,153,154,155,156,-1,157,158,159,160,-1,161,162,163,164,-1,165,166,167,168,-1,169,170,171,172,-1,173,174,175,176,-1,177,178,179,180,-1,181,182,183,184,-1,185,186,187,188,-1,189,190,191,192,-1,193,194,195,196,-1,197,198,199,200,-1,201,202,203,204,-1,205,206,207,208,-1,209,210,211,212,-1,213,214,215,216,-1,217,218,219,220,-1,221,222,223,224,-1,225,226,227,228,-1,229,230,231,232,-1,233,234,235,236,-1,237,238,239,240,-1,241,242,243,244,-1,245,246,247,248,-1,249,250,251,252,-1,253,254,255,256,-1,257,258,259,260,-1,261,262,263,264,-1,265,266,267,268,-1,269,270,271,272,-1,273,274,275,-1,276,277,278,-1,279,280,281,282,-1,283,284,285,286,-1,287,288,289,290,-1,291,292,293,294,-1,295,296,297,298,-1,299,300,301,302,-1,303,304,305,306,-1,307,308,309,310,-1,311,312,313,314,-1,315,316,317,318,-1,319,320,321,322,-1,323,324,325,326,-1,327,328,329,330,-1,331,332,333,334,-1,335,336,337,338,-1,339,340,341,342,-1,343,344,345,346,-1,347,348,349,350,-1,351,352,353,354,-1,355,356,357,358,-1,359,360,361,362,-1,363,364,365,366,-1,367,368,369,370,-1,371,372,373,-1,374,375,376,-1,377,378,379,-1,380,381,382,383,-1,384,385,386,387,-1,388,389,390,391,-1,392,393,394,395,-1,396,397,398,399,-1,400,401,402,403,-1,404,405,406,407,-1,408,409,410,411,-1,412,413,414,415,-1,416,417,418,419,-1,420,421,422,423,-1,424,425,426,427,-1,428,429,430,-1,431,432,433,-1,434,435,436,437,-1,438,439,440,-1,441,442,443,-1,444,445,446,447,-1,448,449,450,451,-1,452,453,454,455,-1,456,457,458,459,-1,460,461,462,463,-1,464,465,466,467,-1,468,469,470,471,-1]),
                          coordIndex : new MFInt32([2,3,4,5,-1,36,1,5,4,-1,1,0,6,5,-1,23,24,25,26,-1,27,28,29,30,-1,33,34,32,35,-1,8,13,24,23,-1,14,9,26,25,-1,7,17,28,27,-1,18,12,30,29,-1,19,21,32,31,-1,15,20,34,33,-1,21,16,35,32,-1,13,8,9,14,-1,17,7,12,18,-1,20,15,16,21,-1,20,21,19,-1,32,34,31,-1,2,5,6,-1,31,34,2,6,-1,26,9,11,22,-1,10,11,9,8,-1,24,13,7,27,-1,25,24,27,30,-1,14,25,30,12,-1,13,14,12,7,-1,28,17,15,33,-1,29,28,33,35,-1,18,29,35,16,-1,17,18,16,15,-1,41,42,43,44,-1,45,41,46,47,-1,48,49,50,51,-1,52,48,53,54,-1,39,55,42,41,-1,56,57,44,43,-1,37,39,41,45,-1,57,38,47,46,-1,40,58,49,48,-1,59,60,51,50,-1,55,40,48,52,-1,60,56,54,53,-1,39,37,38,57,-1,55,39,57,56,-1,40,55,56,60,-1,58,40,60,59,-1,65,66,64,67,-1,61,62,64,63,-1,62,93,67,64,-1,74,75,76,77,-1,79,80,81,82,-1,83,79,84,85,-1,86,87,88,89,-1,90,86,91,92,-1,69,71,77,76,-1,71,70,78,77,-1,72,94,80,79,-1,95,96,82,81,-1,68,72,79,83,-1,96,69,85,84,-1,73,97,87,86,-1,98,99,89,88,-1,94,73,86,90,-1,99,95,92,91,-1,68,100,71,69,-1,72,68,69,96,-1,94,72,96,95,-1,73,94,95,99,-1,97,73,99,98,-1,64,66,63,-1,74,77,78,-1,63,66,74,78,-1,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,-1,113,114,115,116,-1,117,118,119,120,-1,121,122,123,124,-1,125,126,127,128,-1,129,130,131,132,-1,133,134,135,136,-1,152,153,154,155,-1,156,157,158,159,-1,160,161,162,163,-1,140,138,153,152,-1,139,141,155,154,-1,143,137,157,156,-1,142,144,159,158,-1,147,145,161,160,-1,146,148,163,162,-1,149,151,165,164,-1,138,140,141,139,-1,137,143,144,142,-1,145,147,148,146,-1,150,151,149,-1,167,168,169,-1,165,166,164,-1,154,153,156,159,-1,153,138,143,156,-1,138,139,144,143,-1,139,154,159,144,-1,157,137,147,160,-1,137,142,148,147,-1,142,158,163,148,-1,158,157,160,163,-1,162,161,166,165,-1,146,162,165,151,-1,145,146,151,150,-1,150,149,169,168,-1,170,171,172,-1,175,176,177,-1,178,179,180,181,-1,182,183,184,-1,185,186,187,-1,188,189,190,191,-1,192,193,194,195,-1,171,170,23,26,-1,195,194,8,23,-1,172,171,167,169,-1,173,174,169,149,-1,164,166,170,172,-1]),
                          normal : new SFNode(
                            new Normal({
                              vector : new MFVec3f([-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,0.997,0.08,0.001,0.997,0.08,0.001,0.997,0.08,0.001,0.997,0.08,0.001,1,0.003,0.001,1,0.003,0.001,1,0.003,0.001,1,0.003,0.001,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,-0.192,0.981,0,-0.192,0.981,0,-0.192,0.981,0,-0.192,0.981,0,-1,0.004,-0.001,-1,0.004,-0.001,-1,0.004,-0.001,-1,0.004,-0.001,0.995,-0.102,0,0.995,-0.102,0,0.995,-0.102,0,0.995,-0.102,0,-0.996,0.085,-0.001,-0.996,0.085,-0.001,-0.996,0.085,-0.001,-0.996,0.085,-0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,0.011,0,1,0.011,0,1,0.011,0,1,0.011,0,1,0.996,0.085,0.001,0.996,0.085,0.001,0.996,0.085,0.001,0.996,0.085,0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,0.185,0.983,0,0.185,0.983,0,0.185,0.983,0,0.185,0.983,0,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.134,-0.991,0,-0.134,-0.991,0,-0.134,-0.991,0,-0.134,-0.991,0,0.198,0.98,0,0.198,0.98,0,0.198,0.98,0,0.198,0.98,0,-0.71,-0.704,0,-0.71,-0.704,0,-0.71,-0.704,0,-0.71,-0.704,0,0.76,0.65,0.001,0.76,0.65,0.001,0.76,0.65,0.001,0.76,0.65,0.001,0.757,-0.654,0,0.757,-0.654,0,0.757,-0.654,0,0.757,-0.654,0,-0.76,0.65,-0.001,-0.76,0.65,-0.001,-0.76,0.65,-0.001,-0.76,0.65,-0.001,0.165,-0.986,0,0.165,-0.986,0,0.165,-0.986,0,0.165,-0.986,0,-0.203,0.979,0,-0.203,0.979,0,-0.203,0.979,0,-0.203,0.979,0,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-1,0.003,-0.001,-1,0.003,-0.001,-1,0.003,-0.001,-1,0.003,-0.001,-0.997,0.08,-0.001,-0.997,0.08,-0.001,-0.997,0.08,-0.001,-0.997,0.08,-0.001,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,0.996,0.085,0.001,0.996,0.085,0.001,0.996,0.085,0.001,0.996,0.085,0.001,1,0.004,0.001,1,0.004,0.001,1,0.004,0.001,1,0.004,0.001,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,0.188,0.982,0,0.188,0.982,0,0.188,0.982,0,0.188,0.982,0,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,-0.189,0.982,0,-0.189,0.982,0,-0.189,0.982,0,-0.189,0.982,0,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.002,0,1,-0.002,0,1,-0.002,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.012,0,1,-0.012,0,1,-0.012,0,1,-0.012,0,1,-0.974,-0.226,0,-0.974,-0.226,0,-0.974,-0.226,0,-0.974,-0.226,0,0.985,-0.173,0,0.985,-0.173,0,0.985,-0.173,0,0.985,-0.173,0,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.988,-0.157,0,-0.988,-0.157,0,-0.988,-0.157,0,-0.988,-0.157,0,0.999,-0.042,0,0.999,-0.042,0,0.999,-0.042,0,0.999,-0.042,0,-0.999,0.034,-0.001,-0.999,0.034,-0.001,-0.999,0.034,-0.001,-0.999,0.034,-0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.999,-0.042,0,-0.999,-0.042,0,-0.999,-0.042,0,-0.999,-0.042,0,0.999,0.034,0.001,0.999,0.034,0.001,0.999,0.034,0.001,0.999,0.034,0.001,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,-0.215,-0.977,0,0.189,0.982,0,0.189,0.982,0,0.189,0.982,0,0.189,0.982,0,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,0.86,-0.51,0,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-0.833,0.553,-0.001,-1,0.004,-0.001,-1,0.004,-0.001,-1,0.004,-0.001,-1,0.004,-0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,-0.86,-0.51,0,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.833,0.553,0.001,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,0.215,-0.977,0,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.189,0.982,0,-0.189,0.982,0,-0.189,0.982,0,-0.189,0.982,0,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.996,0.085,-0.001,-0.996,0.085,-0.001,-0.996,0.085,-0.001,-0.996,0.085,-0.001,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,-0.001,0,1,-0.001,0,1,-0.001,0,1,0.002,0,-1,0.002,0,-1,0.002,0,-1,-0.011,0,-1,-0.011,0,-1,-0.011,0,-1,-0.011,0,-1,0.002,0,-1,0.002,0,-1,0.002,0,-1,0.001,0,-1,0.001,0,-1,0.001,0,-1,0.012,0,-1,0.012,0,-1,0.012,0,-1,0.012,0,-1,0.995,-0.103,0,0.995,-0.103,0,0.995,-0.103,0,0.995,-0.103,0,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.989,-0.149,0,-0.989,-0.149,0,-0.989,-0.149,0,-0.989,-0.149,0,1,0.004,0.001,1,0.004,0.001,1,0.004,0.001,1,0.004,0.001,0,1,0,0,1,0,0,1,0,0,1,0,-0.001,0,1,-0.001,0,1,-0.001,0,1,-0.001,0,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("polySurface125GeoPoints"),
                              point : new MFVec3f([2.963,0.023,25.58,2.961,0.682,25.58,3.179,0.817,25.289,3.087,1.213,25.289,2.932,1.045,25.289,2.961,0.682,25.289,2.964,0.023,25.289,4.227,1.78,25.579,5.234,1.213,25.58,5.008,1.076,25.58,5.293,0.817,25.58,5.044,0.662,25.58,4.227,1.582,25.579,4.998,1.61,25.58,4.735,1.486,25.58,3.22,1.213,25.578,3.464,1.076,25.578,3.455,1.61,25.578,3.737,1.486,25.578,3.426,0.023,25.578,3.179,0.817,25.577,3.429,0.662,25.578,5.044,0.662,25.289,5.234,1.213,25.289,4.998,1.61,25.289,4.736,1.486,25.288,5.009,1.076,25.289,4.227,1.78,25.288,3.455,1.61,25.287,3.738,1.486,25.287,4.227,1.582,25.288,3.427,0.023,25.286,3.429,0.662,25.286,3.22,1.213,25.286,3.179,0.817,25.286,3.465,1.076,25.287,2.932,1.045,25.58,3.087,1.213,25.58,2.932,1.045,25.58,2.806,1.496,25.58,1.719,1.469,25.578,2.806,1.496,25.289,2.292,1.565,25.288,2.292,1.392,25.288,2.708,1.308,25.288,3.087,1.213,25.289,2.708,1.308,25.288,2.932,1.045,25.289,1.719,1.469,25.287,1.497,1.213,25.286,1.663,1.045,25.287,1.887,1.308,25.287,2.292,1.565,25.288,1.887,1.308,25.287,2.292,1.392,25.288,2.292,1.565,25.579,2.292,1.392,25.579,2.708,1.308,25.58,1.497,1.213,25.578,1.662,1.045,25.578,1.887,1.308,25.578,1.631,0.023,25.578,1.633,0.682,25.578,1.632,0.023,25.286,1.634,0.682,25.286,1.497,1.213,25.286,1.428,0.817,25.286,1.663,1.045,25.287,1.365,1.213,25.575,1.13,1.076,25.575,1.168,0.023,25.575,1.165,0.662,25.575,1.129,1.61,25.574,-0.414,1.61,25.573,1.428,0.817,25.284,1.365,1.213,25.284,1.13,1.076,25.283,1.165,0.662,25.283,1.168,0.023,25.283,1.129,1.61,25.283,0.358,1.78,25.282,0.358,1.582,25.282,0.857,1.486,25.283,1.365,1.213,25.284,0.857,1.486,25.283,1.13,1.076,25.283,-0.414,1.61,25.281,-0.65,1.213,25.281,-0.414,1.076,25.281,-0.141,1.486,25.281,0.358,1.78,25.282,-0.141,1.486,25.281,0.358,1.582,25.282,1.662,1.045,25.578,0.358,1.78,25.573,0.358,1.582,25.573,0.857,1.486,25.574,-0.65,1.213,25.572,-0.415,1.076,25.572,-0.142,1.486,25.573,1.428,0.817,25.575,3.179,0.817,25.58,3.087,1.213,25.58,3.087,1.213,25.289,3.179,0.817,25.289,1.497,1.213,25.578,1.428,0.817,25.577,1.428,0.817,25.286,1.497,1.213,25.286,3.087,1.213,25.58,3.179,0.817,25.58,2.961,0.682,25.58,2.932,1.045,25.58,1.428,0.817,25.577,1.497,1.213,25.578,1.662,1.045,25.578,1.633,0.682,25.578,-0.65,1.213,25.281,-0.7,0.023,25.281,-0.45,0.023,25.281,-0.414,1.076,25.281,1.428,0.817,25.575,1.365,1.213,25.575,1.365,1.213,25.284,1.428,0.817,25.284,-0.65,1.213,25.572,-0.7,0.023,25.572,-0.7,0.023,25.281,-0.65,1.213,25.281,-0.45,0.023,25.572,-0.415,1.076,25.572,-0.414,1.076,25.281,-0.45,0.023,25.281,-0.7,0.023,25.572,-0.65,1.213,25.572,-0.415,1.076,25.572,-0.45,0.023,25.572,6.342,1.78,25.582,7.349,1.213,25.583,7.114,1.076,25.583,7.399,0.023,25.583,7.149,0.023,25.583,6.342,1.582,25.582,7.113,1.61,25.583,6.841,1.486,25.583,5.335,1.213,25.58,5.57,1.076,25.581,5.57,1.61,25.581,5.843,1.486,25.581,5.532,0.023,25.581,5.293,0.817,25.58,5.534,0.662,25.581,7.399,0.023,25.292,7.349,1.213,25.292,7.114,1.076,25.292,7.15,0.023,25.292,7.113,1.61,25.291,6.342,1.78,25.291,6.342,1.582,25.291,6.841,1.486,25.291,5.57,1.61,25.29,5.335,1.213,25.289,5.57,1.076,25.289,5.843,1.486,25.29,5.532,0.023,25.289,5.535,0.662,25.289,5.293,0.817,25.289,5.044,0.662,25.58,5.293,0.817,25.58,5.046,0.023,25.58,5.293,0.817,25.289,5.044,0.662,25.289,5.047,0.023,25.289,5.532,0.023,25.289,5.047,0.023,25.289,2.961,0.682,25.58,3.179,0.817,25.58,2.963,0.023,25.58,3.179,0.817,25.577,3.426,0.023,25.578,2.963,0.023,25.58,3.179,0.817,25.58,1.428,0.817,25.577,1.633,0.682,25.578,1.631,0.023,25.578,1.165,0.662,25.575,1.428,0.817,25.575,1.168,0.023,25.575,1.428,0.817,25.577,1.631,0.023,25.578,1.168,0.023,25.575,1.428,0.817,25.575,5.335,1.213,25.289,5.335,1.213,25.58,5.293,0.817,25.58,5.293,0.817,25.289])}))}))})])}),

                new Transform({})])}),

            new Transform({
              translation : new SFVec3f([-2.099,0,-0.00716019]),
              children : new MFNode([
                new Transform({
                  USE : new SFString("_1")})])}),

            new Transform({
              translation : new SFVec3f([-5.9638,0,-0.00716019]),
              children : new MFNode([
                new Transform({
                  USE : new SFString("_1")})])}),

            new Transform({
              translation : new SFVec3f([-3.03249,0.00343657,-0.00715828]),
              scale : new SFVec3f([0.842165,0.92333,1]),
              children : new MFNode([
                new Transform({
                  USE : new SFString("_1")})])}),

            new Transform({
              translation : new SFVec3f([3.25257,1.92678,-9.69998]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([8.98127,0.142962,9.31884]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_4")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1,2,3,5,4,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1,1,1,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-2,0,0.5,-2,0,0.5,2,0,-0.5,2,0,0.5,11.7702,0,-0.5,11.7702,0])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.243637,2.74745,-9.70339]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([2.12489,0.49006,9.31884]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          DEF : new SFString("_5"),
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          DEF : new SFString("_6"),
                          url : new MFString(["r_win.jpg"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([6,4,5,7,-1,8,0,1,9,-1,10,2,3,11,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.823929,0.253038,0.823929,1,0.828696,0.253038,0.828696,1,0.791038,0.253038,0.791038,1,0.173066,0.253038,0.173066,1,0.177459,0.253038,0.177459,1,0.170803,0.253038,0.170803])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([3.12341,1.29572,7.27596e-12,2.37644,1.29572,-3.59377e-12,2.26902,1.31478,7.27596e-12,1.52206,1.31478,-3.59377e-12,0.5,1.16415,0,-0.246962,1.16415,0,0.5,-1.30774,0,-0.246962,-1.30774,0,3.12341,-1.29017,7.27596e-12,2.37644,-1.29017,-3.59377e-12,2.26902,-1.31679,7.27596e-12,1.52206,-1.31679,-3.59377e-12])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.408258,3.61351,-9.70355]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([2.03593,0.282554,5.75262]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          USE : new SFString("_5")})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_6")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.177459,1,0.823929,0.253038,0.823929,0.253038,0.177459,1,0.177459,1,0.823929,0.253038,0.823929,0.253038,0.177459])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([2.16753,3.0051,7.27596e-12,2.16753,5.59098,7.27596e-12,1.42056,5.59098,-3.59377e-12,1.42056,3.0051,-3.59377e-12,1.42675,3.0051,7.27596e-12,1.42675,5.59098,7.27596e-12,0.67979,5.59098,-3.59377e-12,0.67979,3.0051,-3.59377e-12])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.408258,5.28122,-9.70355]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([2.03593,0.282554,5.75262]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_6")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.177459,1,0.823929,0.253038,0.823929,0.253038,0.177459,1,0.177459,1,0.823929,0.253038,0.823929,0.253038,0.177459])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([2.16753,3.0051,7.27596e-12,2.16753,5.59098,7.27596e-12,1.42056,5.59098,-3.59377e-12,1.42056,3.0051,-3.59377e-12,1.42675,3.0051,7.27596e-12,1.42675,5.59098,7.27596e-12,0.67979,5.59098,-3.59377e-12,0.67979,3.0051,-3.59377e-12])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.408258,6.89834,-9.70355]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([2.03593,0.261543,5.75262]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.953235,0.643695])})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_6")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      texCoordIndex : new MFInt32([0,1,4,5,-1,4,2,3,5,-1]),
                      coordIndex : new MFInt32([0,1,2,3,-1,5,4,6,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.177459,1,0.823929,0.253038,0.823929,0.253038,0.177459,0.626519,0.823929,0.626519,0.177459])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([1.94371,3.0051,4.01908e-12,1.94371,5.59098,4.01908e-12,1.57023,5.59098,-1.41578e-12,1.57023,3.0051,-1.41578e-12,0.866122,5.59098,-1.1662e-11,1.2396,5.59098,-6.2271e-12,0.866122,3.0051,-1.1662e-11,1.2396,3.0051,-6.2271e-12])}))}))})])}),

            new Transform({
              translation : new SFVec3f([2.40687,3.01864,-9.99318]),
              rotation : new SFRotation([0,1,0,0.000976562]),
              scale : new SFVec3f([1.5433,0.355794,6.76563]),
              center : new SFVec3f([-0.38656,-0.145934,1.82516e-8]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          USE : new SFString("_5")})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_6")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.173066,1,0.791038,0.609716,0.791038,0.609716,0.173066])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.0136285,-1.30774,0,-0.0136285,1.16415,0,-0.403912,1.16415,0,-0.403912,-1.30774,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());