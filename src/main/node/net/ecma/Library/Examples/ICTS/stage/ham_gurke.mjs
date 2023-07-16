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
              DEF : new SFString("gurke"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0.000574281,-5.80335e-10,-0.00857843]),
                  rotation : new SFRotation([0,1,0,3.35421]),
                  scale : new SFVec3f([0.876871,0.87687,0.87687]),
                  scaleOrientation : new SFRotation([0,1,0,0.517921]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("_1"),
                      translation : new SFVec3f([0.0364191,-0.00170928,0.0149654]),
                      rotation : new SFRotation([-1,0,0,1.5708]),
                      scale : new SFVec3f([0.0832053,0.0832053,0.0832053]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["gurke.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,9,8,10,11,-1,11,10,12,13,-1,13,12,14,15,-1,15,14,16,17,-1,17,16,18,19,-1,19,18,20,21,-1,21,20,22,23,-1,23,22,24,25,-1,25,24,26,27,-1,27,26,28,29,-1,29,28,30,31,-1,31,30,1,0,-1,32,30,28,-1,32,1,30,-1,32,28,26,-1,32,26,24,-1,32,24,22,-1,32,22,20,-1,32,20,18,-1,32,18,16,-1,32,16,14,-1,32,14,12,-1,32,12,10,-1,32,10,8,-1,32,8,6,-1,32,6,4,-1,32,4,2,-1,32,2,1,-1,33,0,3,-1,33,31,0,-1,33,3,5,-1,33,5,7,-1,33,7,9,-1,33,9,11,-1,33,11,13,-1,33,13,15,-1,33,15,17,-1,33,17,19,-1,33,19,21,-1,33,21,23,-1,33,23,25,-1,33,25,27,-1,33,27,29,-1,33,29,31,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.490312,0.996266,0.490312,0.996266,0.677726,0.959883,0.677726,0.959883,0.836555,0.856275,0.836555,0.856275,0.942681,0.701214,0.942681,0.701214,0.979947,0.518307,0.979947,0.518307,0.942681,0.3354,0.942681,0.3354,0.836555,0.180339,0.836555,0.180339,0.677726,0.0767304,0.677726,0.0767304,0.490312,0.0403481,0.490312,0.0403481,0.312252,0.0767304,0.312252,0.0767304,0.161299,0.180339,0.161299,0.180339,0.0604357,0.3354,0.0604357,0.3354,0.0250175,0.518307,0.0250175,0.518307,0.0604361,0.701214,0.0604361,0.701214,0.161299,0.856275,0.161299,0.856275,0.312252,0.959883,0.312252,0.959883,0.490312,0.518307,0.490312,0.518307])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0.033173,0.464535,-0.00797164,0.033173,0.464535,0.0490569,0.175181,0.449364,0.0490569,0.175181,0.449364,-0.00797163,0.322014,0.348452,0.049057,0.322014,0.348452,-0.00797156,0.420732,0.200711,0.0490571,0.420732,0.200711,-0.00797145,0.463033,0.0264382,0.0490572,0.463033,0.0264381,-0.00797133,0.419486,-0.147319,0.0490574,0.419486,-0.147319,-0.0079712,0.318591,-0.292152,0.0490575,0.318591,-0.292152,-0.0079711,0.17759,-0.402302,0.0490576,0.17759,-0.402302,-0.00797102,3.36984e-7,-0.428958,0.0490576,3.36984e-7,-0.428958,-0.007971,-0.174272,-0.394294,0.0490576,-0.174272,-0.394294,-0.00797102,-0.322014,-0.295576,0.0490575,-0.322014,-0.295576,-0.00797109,-0.419785,-0.147443,0.0490574,-0.419785,-0.147443,-0.0079712,-0.455396,0.0264382,0.0490572,-0.455396,0.0264382,-0.00797133,-0.414793,0.198251,0.0490571,-0.414793,0.198251,-0.00797145,-0.307175,0.370659,0.049057,-0.307175,0.370659,-0.00797157,-0.174272,0.44717,0.0490569,-0.174272,0.44717,-0.00797163,2.68221e-7,0.0264382,0.0490572,2.68221e-7,0.0264382,-0.00797133])}))}))})])})])}),

                new Transform({
                  USE : new SFString("_1")})])})])}))});
console.log(X3D0.toXMLNode());
