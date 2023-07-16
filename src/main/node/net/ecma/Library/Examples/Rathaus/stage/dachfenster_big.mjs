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
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 Mar 2015 09:33:53 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 Mar 2015 09:33:53 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("nurbsToPoly162"),
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
                          DEF : new SFString("nurbsToPoly162_0Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly162GeoPoints"),
                              point : new MFVec3f([-0.683,4.401,13.552,-0.681,4.401,15.434,0.678,4.959,15.432,0.675,4.959,13.55,-0.683,5.02,13.552,0.675,5.579,13.55,-0.681,5.02,15.434,0.678,5.579,15.432])}))}))}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_1"),
                              diffuseColor : new SFColor([1,0.794631,0.389824])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly162_1Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([1,6,4,0,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("nurbsToPoly162GeoPoints")}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly154"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_2"),
                              ambientIntensity : new SFFloat(0.341818),
                              diffuseColor : new SFColor([0.585106,0.0214792,0])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly154_0Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly154GeoPoints"),
                              point : new MFVec3f([1.165,6.286,14.27,1.165,6.286,14.637,2.222,6.72,14.636,2.222,6.72,14.269,1.165,6.768,14.27,2.222,7.203,14.269,1.165,6.768,14.637,2.222,7.203,14.636])}))}))})])}),

                new Transform({
                  DEF : new SFString("nurbsToPoly153"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly153_0Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly153GeoPoints"),
                              point : new MFVec3f([2.061,7.648,14.27,2.061,7.648,14.637,3.118,8.083,14.636,3.118,8.083,14.269,2.061,8.13,14.27,3.118,8.565,14.269,2.061,8.13,14.637,3.118,8.565,14.636])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1.165,6.768,14.27,1.165,6.286,14.27,1.165,6.286,14.637,1.165,6.768,14.637])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([2.061,8.13,14.27,2.061,7.648,14.27,2.061,7.648,14.637,2.061,8.13,14.637])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
