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
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
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
              DEF : new SFString("cheese"),
              translation : new SFVec3f([0,-0.0000011838,0]),
              scale : new SFVec3f([1.3115,1.3115,1.3115]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      convex : new SFBool(false),
                      colorIndex : new MFInt32([0,1,1,-1,0,1,1,-1,2,0,0,-1,0,2,0,-1,1,0,0,-1,0,1,1,-1,0,1,1,-1,1,1,1,-1,0,1,1,-1,1,1,1,-1,1,1,0,-1,1,1,1,-1,1,0,1,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,1,0,-1,0,0,1,-1,1,1,0,-1,1,0,1,-1,0,1,0,-1,2,0,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,1,-1,0,0,2,-1,2,0,0,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,0,2,-1,0,0,1,-1,0,0,2,-1,0,0,0,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,2,0,-1,0,2,0,-1,0,0,1,-1,0,0,3,-1,0,1,3,-1,0,3,0,-1,1,1,3,-1,1,0,3,-1,0,0,0,-1,0,2,0,-1,0,0,2,-1,0,0,0,-1,0,0,3,-1,0,0,3,-1,0,3,1,-1,0,0,3,-1,0,1,3,-1]),
                      coordIndex : new MFInt32([0,1,2,-1,3,4,5,-1,6,7,8,-1,7,9,8,-1,10,11,12,-1,13,14,15,-1,0,2,16,-1,2,10,16,-1,0,16,5,-1,16,17,5,-1,5,17,3,-1,10,18,16,-1,10,12,18,-1,16,18,17,-1,18,19,17,-1,18,12,19,-1,17,19,3,-1,12,13,19,-1,19,15,3,-1,19,13,15,-1,0,5,20,-1,6,8,21,-1,10,2,21,-1,3,15,22,-1,13,12,23,-1,22,24,7,-1,24,22,15,-1,7,24,9,-1,9,24,23,-1,23,24,25,-1,24,15,25,-1,23,25,13,-1,15,14,25,-1,14,13,25,-1,20,26,6,-1,26,20,5,-1,26,7,6,-1,26,22,7,-1,22,26,27,-1,26,5,27,-1,22,27,3,-1,5,4,27,-1,4,3,27,-1,20,6,28,-1,28,6,21,-1,28,21,2,-1,20,28,29,-1,28,2,29,-1,20,29,0,-1,2,1,29,-1,1,0,29,-1,21,8,30,-1,8,9,30,-1,23,30,9,-1,30,23,12,-1,21,30,31,-1,30,12,31,-1,21,31,10,-1,12,11,31,-1,11,10,31,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0.741976,0,0.614973,0.369265,0,1,0.899544,0,0.68984,0.243298,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.0229925,0.00603508,0.0689762,-0.0597941,-0.0102309,0.0597941,-0.0689762,0.00603508,0.0229925,0.0689762,0.00603508,0.0229925,0.0597941,-0.0102309,0.0597941,0.0229925,0.00603508,0.0689762,-0.0229925,0.0102385,0.0229925,0.0229925,0.0102385,0.0229925,-0.0229925,0.0102385,-0.0229925,0.0229925,0.0102385,-0.0229925,-0.0689762,0.00603508,-0.0229925,-0.0597941,-0.0102309,-0.0597941,-0.0229925,0.00603508,-0.0689762,0.0229925,0.00603508,-0.0689762,0.0597941,-0.0102309,-0.0597941,0.0689762,0.00603508,-0.0229925,-0.0229925,0.00603508,0.0229925,0.0229925,0.00603508,0.0229925,-0.0229925,0.00603508,-0.0229925,0.0229925,0.00603508,-0.0229925,-0.0236257,0.00991431,0.0696108,-0.0696108,0.00991431,-0.0236257,0.0696108,0.00991431,0.0236257,0.0236257,0.00991431,-0.0696108,0.0696108,0.00991431,-0.0236257,0.0616964,-0.00700004,-0.0616965,0.0236257,0.00991431,0.0696108,0.0616964,-0.00700004,0.0616965,-0.0696108,0.00991431,0.0236257,-0.0616964,-0.00700004,0.0616965,-0.0236257,0.00991431,-0.0696108,-0.0616964,-0.00700004,-0.0616965])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
