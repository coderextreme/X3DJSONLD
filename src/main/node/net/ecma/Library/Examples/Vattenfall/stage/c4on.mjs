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
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:19 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:19 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in CosmoWorldsPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("c4"),
              translation : new SFVec3f([0.0862359,0.114095,-0.299906]),
              scale : new SFVec3f([0.163145,0.0203932,0.0318644]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["menu-cam-on.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      colorPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0]),
                      coordIndex : new MFInt32([3,0,1,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,1,1])})),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0,1,1,0.902474,1,0.902474,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0.5,-0.5,0,0.5,0.5,0,0.402474,0.5,0,0.402474,-0.5,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
