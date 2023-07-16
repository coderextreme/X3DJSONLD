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
              content : new SFString("Sat, 25 Apr 2015 12:38:22 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 27 Apr 2015 08:59:31 GMT")})])})),
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
                      url : new MFString([", ","film4.mp4, ","film4.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film4.mp4"]),
                      loop : new SFBool(true),
                      stopTime : new SFTime(1)}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  solid : new SFBool(false),
                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1]),
                  texCoord : new SFNode(
                    new TextureCoordinate({
                      point : new MFVec2f([0.0056792,0.660608,0.197011,0.660075,0.197608,0.988955,0.00603585,0.987562,0.993506,0.00977662,0.993506,0.63787,0.925412,0.63787,0.925412,0.00977662,0.91662,0.010875,0.91662,0.638969,0.848523,0.638969,0.848523,0.010875,0.838981,0.0100234,0.838981,0.638117,0.770887,0.638117,0.770887,0.0100234,0.764572,0.0104674,0.764572,0.638561,0.696479,0.638561,0.696479,0.0104674,0.686505,0.0107143,0.686505,0.638808,0.618412,0.638808,0.618412,0.0107143,0.610657,0.0106698,0.610657,0.638764,0.542564,0.638764,0.542564,0.0106698,0.456068,0.0122861,0.456068,0.64038,0.387974,0.64038,0.387974,0.0122861,0.37885,0.0122861,0.37885,0.64038,0.310758,0.64038,0.310758,0.0122861,0.303752,0.0119413,0.303752,0.640035,0.235661,0.640035,0.235661,0.0119413,0.225688,0.0115854,0.225688,0.639679,0.157595,0.639679,0.157595,0.0115854,0.149623,0.0122417,0.149623,0.640335,0.0815305,0.640335,0.0815305,0.0122417,0.0734285,0.0121452,0.0734285,0.640239,0.00533576,0.640239,0.00533576,0.0121452,0.994459,0.9849,0.80279,0.986846,0.801713,0.659938,0.993486,0.659938,0.699601,0.659263,0.791608,0.659907,0.791454,0.981607,0.699652,0.980134,0.603646,0.660289,0.695952,0.659888,0.695982,0.980134,0.603795,0.98019,0.404731,0.65889,0.595461,0.658586,0.595461,0.988067,0.404307,0.987524,0.204862,0.659974,0.396351,0.659423,0.396351,0.988057,0.2051,0.988441])})),
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
