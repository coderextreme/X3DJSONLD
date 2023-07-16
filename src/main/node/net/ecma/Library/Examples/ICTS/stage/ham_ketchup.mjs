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
var ImageTexture = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:05 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:05 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("ketchup"),
              translation : new SFVec3f([0,-0.0445648,0]),
              scale : new SFVec3f([3.78678,3.78678,3.78678]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["ketchup.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([10,8,16,14,-1,4,17,13,11,-1,18,4,12,22,-1,9,23,21,20,-1,24,5,28,26,-1,8,29,25,15,-1,27,5,30,32,-1,33,9,19,31,-1,17,3,13,-1,3,10,13,-1,0,31,30,-1,0,33,31,-1,23,1,21,-1,1,18,21,-1,29,2,25,-1,2,24,25,-1,19,6,32,-1,6,27,32,-1,16,7,14,-1,7,11,14,-1,12,6,22,-1,6,20,22,-1,28,7,26,-1,7,15,26,-1]),
                      coordIndex : new MFInt32([9,7,12,11,-1,4,13,11,10,-1,14,4,10,16,-1,8,17,16,15,-1,18,5,20,19,-1,7,21,19,12,-1,20,5,22,23,-1,24,8,15,23,-1,13,1,11,-1,1,9,11,-1,3,23,22,-1,3,24,23,-1,17,0,16,-1,0,14,16,-1,21,2,19,-1,2,18,19,-1,15,6,23,-1,6,20,23,-1,12,6,11,-1,6,10,11,-1,10,6,16,-1,6,15,16,-1,20,6,19,-1,6,12,19,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,-0.01,-0.01,0.01,-0.01,0,0.01,0.01,0,0.01,-0.01,0,0.013539,0,0.01,0.01,0,-0.01,0.01,0,0.01,0.01,0.005,0,0.0120447,0.005,0.005,0.0120447,0.005,0.005,0.0120447,0,0.005,0.01,0.01,-0.005,0.01,0.01,-0.005,0.0120447,0,-0.005,0.0120447,0.005,-0.01,0.01,0.005,0.005,0.01,-0.01,0.005,0.0120447,-0.005,0,0.0120447,-0.005,0.01,0.01,-0.005,-0.005,0.01,-0.01,-0.005,0.0120447,-0.005,-0.01,0.01,-0.005])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
