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
              content : new SFString("Mon, 27 Apr 2015 08:59:53 GMT")})])})),
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
                      url : new MFString([", ","film5.mp4, ","film5.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film5.mp4"]),
                      loop : new SFBool(true),
                      stopTime : new SFTime(1)}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  solid : new SFBool(false),
                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1]),
                  texCoord : new SFNode(
                    new TextureCoordinate({
                      point : new MFVec2f([0.0070907,0.658046,0.197683,0.659496,0.19732,0.987053,0.00672835,0.985604,0.994266,0.0149172,0.994266,0.638428,0.924905,0.638428,0.924905,0.0149172,0.917623,0.0154788,0.917623,0.638989,0.848259,0.638989,0.848259,0.0154788,0.840076,0.0157671,0.840076,0.639277,0.770714,0.639277,0.770714,0.0157671,0.765174,0.0154468,0.765174,0.638957,0.695812,0.638957,0.695812,0.0154468,0.687107,0.0153035,0.687107,0.638814,0.617745,0.638814,0.617745,0.0153035,0.610494,0.0158599,0.610494,0.63937,0.541132,0.63937,0.541132,0.0158599,0.53421,0.0152445,0.53421,0.638755,0.464848,0.638755,0.464848,0.0152445,0.458435,0.0159947,0.458435,0.639505,0.389074,0.639505,0.389074,0.0159947,0.381863,0.0159273,0.381863,0.639438,0.312503,0.639438,0.312503,0.0159273,0.304367,0.0151012,0.304367,0.638612,0.235005,0.638612,0.235005,0.0151012,0.228681,0.0150844,0.228681,0.638595,0.15932,0.638595,0.15932,0.0150844,0.152228,0.0144016,0.152228,0.637912,0.0828669,0.637912,0.0828669,0.0144016,0.0753645,0.0144016,0.0753645,0.637912,0.00603318,0.637912,0.00603318,0.0144016,0.802798,0.658929,0.993535,0.660535,0.994412,0.987605,0.803675,0.988629,0.603676,0.657943,0.794207,0.659687,0.793768,0.988511,0.604553,0.986767,0.405077,0.658991,0.594469,0.659697,0.593592,0.987644,0.405439,0.985824,0.207234,0.660359,0.394931,0.659716,0.393844,0.986548,0.206872,0.985742])})),
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