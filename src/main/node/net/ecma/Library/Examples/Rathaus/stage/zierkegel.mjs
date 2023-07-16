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
              content : new SFString("Sun, 15 Mar 2015 09:37:03 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 Mar 2015 09:37:03 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("zierkegel"),
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
                      DEF : new SFString("polySurface98_0Geo"),
                      convex : new SFBool(false),
                      creaseAngle : new SFFloat(1.76331),
                      coordIndex : new MFInt32([11,12,2,6,-1,8,9,4,5,-1,8,5,3,7,-1,6,8,7,0,-1,8,6,2,9,-1,11,6,0,10,-1,5,11,10,3,-1,11,5,4,12,-1,14,13,4,9,-1,1,14,9,2,-1,15,1,2,12,-1,13,15,12,4,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("polySurface98GeoPoints"),
                          point : new MFVec3f([-0.696,6.076,-7.18,-0.671,6.225,-7.142,-0.727,6.149,-7.227,-0.568,6.076,-7.051,-0.537,6.149,-7.004,-0.537,6.114,-7.004,-0.727,6.114,-7.227,-0.568,6.076,-7.18,-0.537,6.114,-7.227,-0.537,6.149,-7.227,-0.696,6.076,-7.052,-0.727,6.114,-7.004,-0.727,6.149,-7.004,-0.593,6.225,-7.089,-0.593,6.225,-7.142,-0.671,6.225,-7.089,-0.577,6.374,-7.167,-0.706,6.374,-7.113,-0.662,6.374,-7.211,-0.577,6.278,-7.167,-0.706,6.278,-7.113,-0.662,6.278,-7.211,-0.577,6.374,-7.058,-0.636,6.433,-7.113,-0.663,6.374,-7.014,-0.577,6.278,-7.058,-0.663,6.278,-7.014,-0.636,6.219,-7.113])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
