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
var IndexedFaceSet = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("zoom"),
              translation : new SFVec3f([0.18781,-0.0542612,-0.29764]),
              scale : new SFVec3f([0.0336106,0.0850584,1.06768]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0),
                          diffuseColor : new SFColor([0,0,0]),
                          emissiveColor : new SFColor([1,0.0552964,0]),
                          shininess : new SFFloat(0),
                          transparency : new SFFloat(0.734043)})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["reflect2.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      coordIndex : new MFInt32([1,0,3,2,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.00516611,202.718,0.00516611,158.648,0.247524,-35.8107,0.491422,-21.6497,0.457532,202.718,0.457532,158.648,0.00516611,198.23,0.909898,163.137,0.879118,202.718,0.247524,-35.8107,0.0157531,-35.81])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
