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
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
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
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              DEF : new SFString("Background"),
              children : new MFNode([
                new Background({
                  skyAngle : new MFFloat([0.8,1.3,1.4,1.5708]),
                  skyColor : new MFColor([0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]),
                  groundAngle : new MFFloat([0.6,1.2,1.3,1.5708]),
                  groundColor : new MFColor([0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98])})])}),

            new Transform({
              DEF : new SFString("schatten_1"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["pilzshadow.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547])}))}))})])}),

            new Transform({
              DEF : new SFString("schatten"),
              translation : new SFVec3f([6,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["pilzshadow.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
