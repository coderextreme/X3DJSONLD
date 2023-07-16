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
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:57 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:57 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      ambientIntensity : new SFFloat(0),
                      diffuseColor : new SFColor([0,0.381692,0.638298]),
                      specularColor : new SFColor([0.00833528,0.335313,0.574468]),
                      emissiveColor : new SFColor([0.00138921,0.0558855,0.0957447]),
                      shininess : new SFFloat(0.0425532)}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  solid : new SFBool(false),
                  coordIndex : new MFInt32([0,19,34,35,-1,34,18,3,35,-1,19,11,36,34,-1,36,10,18,34,-1,11,21,37,36,-1,37,20,10,36,-1,21,7,38,37,-1,38,6,20,37,-1,7,23,39,38,-1,39,22,6,38,-1,23,13,40,39,-1,40,12,22,39,-1,13,25,41,40,-1,41,24,12,40,-1,25,5,42,41,-1,42,4,24,41,-1,5,27,43,42,-1,43,26,4,42,-1,27,15,44,43,-1,44,14,26,43,-1,15,29,45,44,-1,45,28,14,44,-1,29,9,46,45,-1,46,8,28,45,-1,9,31,47,46,-1,47,30,8,46,-1,31,17,48,47,-1,48,16,30,47,-1,17,33,49,48,-1,49,32,16,48,-1,33,1,50,49,-1,50,2,32,49,-1]),
                  coord : new SFNode(
                    new Coordinate({
                      point : new MFVec3f([-2.2186,-0.466457,0,2.2186,-0.0429742,0,2.2186,0.5,0,-2.2186,0.5,0,0,0.5,0,0,0.0199192,0,-1.1093,0.5,0,-1.1093,-0.122639,0,1.1093,0.5,0,1.1093,0.0366907,0,-1.66395,0.5,0,-1.66395,-0.252619,0,-0.55465,0.5,0,-0.55465,-0.0303957,0,0.55465,0.5,0,0.55465,0.0408836,0,1.66395,0.5,0,1.66395,0.0115333,0,-1.94128,0.5,0,-1.94128,-0.351057,0,-1.38663,0.5,0,-1.38663,-0.18134,0,-0.831975,0.5,0,-0.831975,-0.0723245,0,-0.277325,0.5,0,-0.277325,-0.00104529,0,0.277325,0.5,0,0.277325,0.0283051,0,0.831975,0.5,0,0.831975,0.0408835,0,1.38663,0.5,0,1.38663,0.0283047,0,1.94128,0.5,0,1.94128,-0.00523812,0,-1.94128,0.0744713,0,-2.2186,0.0167715,0,-1.66395,0.123691,0,-1.38663,0.15933,0,-1.1093,0.18868,0,-0.831975,0.213838,0,-0.55465,0.234802,0,-0.277325,0.249477,0,0,0.25996,0,0.277325,0.264153,0,0.55465,0.270442,0,0.831975,0.270442,0,1.1093,0.268345,0,1.38663,0.264152,0,1.66395,0.255767,0,1.94128,0.247381,0,2.2186,0.228513,0])}))}))}),

            new Transform({
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("light"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_1"),
                              cycleInterval : new SFTime(50),
                              loop : new SFBool(true),
                              startTime : new SFTime(974704573.545383),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("Light1LocationInterp_1"),
                          key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                          keyValue : new MFVec3f([-2.18119,0.746135,2.07582,-2.00021,0.745245,2.07031,-1.80697,0.744294,2.06442,-1.60312,0.743291,2.05821,-1.39036,0.742244,2.05172,-1.17034,0.741162,2.04502,-0.944747,0.740052,2.03815,-0.715249,0.738923,2.03115,-0.483521,0.737782,2.02409,-0.251235,0.73664,2.01701,-0.0200639,0.735502,2.00997,0.208318,0.734379,2.00301,0.432239,0.733277,1.99619,0.650025,0.732205,1.98955,0.860003,0.731172,1.98316,1.0605,0.730186,1.97705,1.24984,0.729254,1.97128,1.42636,0.728386,1.9659,1.58837,0.727589,1.96096,1.73421,0.726871,1.95652,1.86221,0.726241,1.95262,1.97068,0.725708,1.94931,2.05796,0.725278,1.94665,2.12238,0.724961,1.94469,2.16226,0.724765,1.94348,2.17592,0.724698,1.94306,2.16226,0.724765,1.94348,2.12238,0.724961,1.94469,2.05796,0.725278,1.94665,1.97068,0.725708,1.94931,1.86221,0.726241,1.95262,1.73421,0.726871,1.95652,1.58837,0.727589,1.96096,1.42636,0.728386,1.9659,1.24984,0.729254,1.97128,1.0605,0.730186,1.97705,0.860005,0.731172,1.98316,0.650028,0.732205,1.98955,0.432242,0.733277,1.99619,0.208322,0.734379,2.00301,-0.0200602,0.735502,2.00997,-0.251231,0.73664,2.01701,-0.483517,0.737782,2.02409,-0.715245,0.738923,2.03115,-0.944743,0.740052,2.03815,-1.17034,0.741162,2.04502,-1.39035,0.742244,2.05172,-1.60312,0.743291,2.05821,-1.80696,0.744294,2.06442,-2.00021,0.745245,2.07031,-2.18119,0.746135,2.07582])})])}),

                    new SpotLight({
                      DEF : new SFString("Light1_1"),
                      location : new SFVec3f([-2.18119,0.746135,2.07582]),
                      direction : new SFVec3f([-0.0304552,-0.314654,-0.948708]),
                      beamWidth : new SFFloat(0.500735)})])}),

                new Transform({
                  DEF : new SFString("vs"),
                  children : new MFNode([
                    new VisibilitySensor({
                      DEF : new SFString("_1"),
                      size : new SFVec3f([5,1,0.1])})])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Light1LocationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Light1_1"),
              toField : new SFString("set_on")}),

            new ROUTE({
              fromNode : new SFString("Light1LocationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Light1_1"),
              toField : new SFString("set_location")})])}))});
console.log(X3D0.toXMLNode());
