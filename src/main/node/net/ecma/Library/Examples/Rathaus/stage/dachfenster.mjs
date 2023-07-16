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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 Mar 2015 09:33:32 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 Mar 2015 09:33:32 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("nurbsToPoly141"),
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
                              DEF : new SFString("_1"),
                              url : new MFString(["dachziegel.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly141_0Geo"),
                          convex : new SFBool(false),
                          texCoordIndex : new MFInt32([8,1,2,9,-1,0,10,11,3,-1,4,6,7,5,-1]),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,0,0,1,0.410596,1,0.410596,0,1.03747,0.99853,1.03894,0.00146949,0,1,0.0014694,0,0.455482,1,0.866814,0,0.455482,1,0.866814])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly141GeoPoints"),
                              point : new MFVec3f([-0.69,4.401,-8.965,-0.688,4.401,-7.553,0.671,4.959,-7.555,0.669,4.959,-8.967,-0.69,5.02,-8.965,0.669,5.579,-8.967,-0.688,5.02,-7.553,0.671,5.579,-7.555])}))}))}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_2"),
                              diffuseColor : new SFColor([1,0.794631,0.389824])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["r_win_lower3.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly141_1Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([4,0,1,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.995874,0.0544366,0.00573361,0.0338087,0.00141633,0.395184,1.00142,0.395184,0.987623,0.974442,1.00142,0.834278,0.00573361,0.95794,0.00141633,0.834278])})),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("nurbsToPoly141GeoPoints")}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly140"),
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
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly140_0Geo"),
                          convex : new SFBool(false),
                          texCoordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1]),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,0,0,1,0.410596,1,0.410596,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly140GeoPoints"),
                              point : new MFVec3f([1.165,6.286,-8.464,1.165,6.286,-8.097,2.222,6.72,-8.099,2.222,6.72,-8.466,1.165,6.768,-8.464,2.222,7.203,-8.466,1.165,6.768,-8.097,2.222,7.203,-8.099])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly144"),
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
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly144_0Geo"),
                          convex : new SFBool(false),
                          texCoordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1]),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,0,0,1,0.411543,1,0.411543,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly144GeoPoints"),
                              point : new MFVec3f([2.061,7.648,-8.464,2.061,7.648,-8.097,3.118,8.083,-8.099,3.118,8.083,-8.466,2.061,8.13,-8.464,3.118,8.565,-8.466,2.061,8.13,-8.097,3.118,8.565,-8.099])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_3"),
                              url : new MFString(["r_win_upper.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.999196,0.995874,1,0,0,0,-0.000804007,0.995874])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([2.061,8.13,-8.464,2.061,7.648,-8.464,2.061,7.648,-8.097,2.061,8.13,-8.097])}))}))})])}),

                new Transform({
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
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([3,2,1,0,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.0049296,0.995874,0,0,1,0,0.99507,0.995874])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1.165,6.768,-8.097,1.165,6.286,-8.097,1.165,6.286,-8.464,1.165,6.768,-8.464])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
