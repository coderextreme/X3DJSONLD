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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:21 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 27 Apr 2015 08:52:30 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  texture : new SFNode(
                    new MovieTexture({
                      DEF : new SFString("Movie"),
                      url : new MFString([", ","film6.mp4, ","film6.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film6.mp4"]),
                      loop : new SFBool(true),
                      stopTime : new SFTime(1)}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  solid : new SFBool(false),
                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1]),
                  texCoord : new SFNode(
                    new TextureCoordinate({
                      point : new MFVec2f([0.0074811,0.6582,0.198034,0.657821,0.198418,0.987556,0.0074811,0.987556,0.991803,0.0148148,0.991803,0.639895,0.925257,0.639895,0.925257,0.0148148,0.916065,0.0166621,0.916065,0.641742,0.849517,0.641742,0.849517,0.0166621,0.839336,0.0166932,0.839336,0.641773,0.772792,0.641773,0.772792,0.0166932,0.764317,0.0158941,0.764317,0.640974,0.697773,0.640974,0.697773,0.0158941,0.685345,0.0158941,0.685345,0.640974,0.618801,0.640974,0.618801,0.0158941,0.611043,0.0149704,0.611043,0.64005,0.544498,0.64005,0.544498,0.0149704,0.532803,0.0156866,0.532803,0.640766,0.466258,0.640766,0.466258,0.0156866,0.455676,0.0147629,0.455676,0.639843,0.389132,0.639843,0.389132,0.0147629,0.380983,0.0162469,0.380983,0.641327,0.314441,0.641327,0.314441,0.0162469,0.303019,0.0146695,0.303019,0.639749,0.236475,0.639749,0.236475,0.0146695,0.228203,0.0165168,0.228203,0.641597,0.161659,0.641597,0.161659,0.0165168,0.150096,0.0159667,0.150096,0.641047,0.083553,0.641047,0.083553,0.0159667,0.0738421,0.0153319,0.0738421,0.640412,0.00732705,0.640412,0.00732705,0.0153319,0.802986,0.658478,0.994183,0.657686,0.994183,0.989293,0.802611,0.988585,0.602047,0.657939,0.795711,0.658268,0.794961,0.986873,0.603341,0.987362,0.407288,0.659608,0.594848,0.658108,0.594848,0.985963,0.407663,0.982962,0.207168,0.657728,0.396582,0.65799,0.395853,0.985584,0.206813,0.985322])})),
                  coord : new SFNode(
                    new Coordinate({
                      point : new MFVec3f([-10.3922,19.5508,0.00432408,-10.3922,17.011,0.00431478,-7.63772,17.011,0.00431478,-7.63772,19.5508,0.00432408,25.5518,0.433584,0.303677,25.5518,3.61268,0.303688,23.7736,3.61268,0.303688,23.7736,0.433584,0.303677,23.0008,0.433584,0.303677,23.0008,3.61268,0.303688,21.2225,3.61268,0.303688,21.2225,0.433584,0.303677,20.45,0.433584,0.303677,20.45,3.61268,0.303688,18.6718,3.61268,0.303688,18.6718,0.433584,0.303677,17.8931,0.433584,0.303677,17.8931,3.61268,0.303688,16.1149,3.61268,0.303688,16.1149,0.433584,0.303677,15.3497,0.433584,0.303677,15.3497,3.61268,0.303688,13.5715,3.61268,0.303688,13.5715,0.433584,0.303677,12.7981,0.433584,0.303677,12.7981,3.61268,0.303688,11.0199,3.61268,0.303688,11.0199,0.433584,0.303677,10.2448,0.433584,0.303677,10.2448,3.61268,0.303688,8.46658,3.61268,0.303688,8.46658,0.433584,0.303677,7.69545,0.433584,0.303677,7.69545,3.61268,0.303688,5.91727,3.61268,0.303688,5.91727,0.433584,0.303677,5.14532,0.433584,0.303677,5.14532,3.61268,0.303688,3.36718,3.61268,0.303688,3.36718,0.433584,0.303677,2.60324,0.433584,0.303677,2.60324,3.61268,0.303688,0.825047,3.61268,0.303688,0.825047,0.433584,0.303677,0.0533123,0.433584,0.303677,0.0533123,3.61268,0.303688,-1.72488,3.61268,0.303688,-1.72488,0.433584,0.303677,-2.50931,0.433584,0.303677,-2.50931,3.61268,0.303688,-4.28749,3.61268,0.303688,-4.28749,0.433584,0.303677,-5.05642,0.433584,0.303677,-5.05642,3.61268,0.303688,-6.83384,3.61268,0.303688,-6.83384,0.433584,0.303677,-10.3922,6.93197,0.00427747,-10.3922,4.07543,0.00426698,-7.63772,4.07543,0.00426698,-7.63772,6.93197,0.00427747,-10.3922,10.1666,0.00428939,-10.3922,7.32427,0.0042789,-7.63772,7.32427,0.0042789,-7.63772,10.1666,0.00428939,-10.3922,13.4117,0.00430143,-10.3922,10.5694,0.00429094,-7.63772,10.5694,0.00429094,-7.63772,13.4117,0.00430143,-10.3922,16.6242,0.00431335,-10.3922,13.8278,0.00430298,-7.63772,13.8278,0.00430298,-7.63772,16.6242,0.00431335])}))}))}),

            new VisibilitySensor({
              DEF : new SFString("VisibilitySensor"),
              size : new SFVec3f([1000,1000,1000])}),

            new ROUTE({
              fromNode : new SFString("VisibilitySensor"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Movie"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("VisibilitySensor"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Movie"),
              toField : new SFString("set_stopTime")})])}))});
console.log(X3D0.toXMLNode());
