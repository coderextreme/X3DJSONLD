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
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:55 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:55 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new Transform({
                  DEF : new SFString("level2"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("VisibilitySensor"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_1"),
                          size : new SFVec3f([0.7,0.7,0.7])})])}),

                    new Transform({
                      DEF : new SFString("Bonus"),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("rotate"),
                          children : new MFNode([
                            new Group({
                              DEF : new SFString("Bonus_1"),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("Time"),
                                  cycleInterval : new SFTime(10),
                                  loop : new SFBool(true),
                                  startTime : new SFTime(952980662.314819),
                                  stopTime : new SFTime(952972802.072958)})])}),

                            new OrientationInterpolator({
                              DEF : new SFString("BonusRotationInterp"),
                              key : new MFFloat([0,0.25,0.5,0.75,1]),
                              keyValue : new MFRotation([0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0])})])}),

                        new Transform({
                          DEF : new SFString("map"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["map.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  colorIndex : new MFInt32([5,0,0,0,-1,0,0,4,0,-1,4,0,0,4,-1,0,5,4,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,5,1,0,4,-1,1,1,1,0,-1,1,0,0,0,-1,0,4,4,0,-1,0,0,0,0,-1,0,0,4,0,-1,0,1,0,0,-1,0,5,0,0,-1,0,5,0,0,-1,5,1,0,0,-1,0,6,4,0,-1,4,0,0,0,-1,0,4,4,0,-1,4,6,3,4,-1,2,4,4,3,-1,4,0,0,4,-1]),
                                  texCoordIndex : new MFInt32([10,8,16,14,-1,16,7,11,14,-1,12,6,20,22,-1,9,23,21,20,-1,28,7,15,26,-1,8,29,25,15,-1,19,6,27,32,-1,33,9,19,31,-1,23,36,35,21,-1,36,1,18,35,-1,18,4,38,34,-1,38,12,22,34,-1,4,17,39,37,-1,39,13,11,37,-1,17,2,41,40,-1,41,10,13,40,-1,29,44,43,25,-1,44,3,24,43,-1,24,5,45,42,-1,45,28,26,42,-1,27,46,47,32,-1,46,5,30,47,-1,0,49,48,30,-1,49,33,31,48,-1]),
                                  coordIndex : new MFInt32([9,7,12,11,-1,12,6,10,11,-1,10,6,15,16,-1,8,17,16,15,-1,20,6,12,19,-1,7,21,19,12,-1,15,6,20,23,-1,24,8,15,23,-1,17,26,25,16,-1,26,1,14,25,-1,14,4,27,25,-1,27,10,16,25,-1,4,13,28,27,-1,28,11,10,27,-1,13,2,29,28,-1,29,9,11,28,-1,21,31,30,19,-1,31,3,18,30,-1,18,5,32,30,-1,32,20,19,30,-1,20,32,33,23,-1,32,5,22,33,-1,0,34,33,22,-1,34,24,23,33,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0,0.994652,0.0530078,0,0.0802139,0.00427482,0.00268255,0.00534759,0.00185254,0.00657697,0.0855615,0,0.507602,1,0.520794,0.292398,0.582888,0.201927,0.0643812,0.128342,0.0444611])})),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75,0.25,0.125,0.25,0.125,0,0.125,0.5,0.125,0.5,0.125,0.75,0.125,0.75,0.125,1,0.125,0.75,0.875,0.75,0.875,1,0.875,0.5,0.875,0.5,0.875,0.25,0.875,0.25,0.875,0,0.875])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.232,0.273168,-0.226739,-0.333929,-0.162928,0.210846,0.297991,-0.202996,0.285449,0.396579,0.19441,-0.15704,-0.0248242,-0.182538,0.241728,0.0783271,0.20861,-0.219799,0.0239771,-0.021532,-0.0165396,0.337583,-0.0614239,0.0216968,-0.285757,0.0495922,-0.0200782,0.3098,-0.177081,0.128903,-0.00380613,-0.137189,0.0906666,0.152948,-0.145528,0.122294,0.180731,-0.0298708,0.0150882,0.137255,-0.191823,0.273715,-0.172454,-0.187813,0.216983,-0.133622,0.00276077,-0.0311745,-0.161405,-0.112897,0.0760317,-0.31354,-0.0660653,0.087128,0.235573,0.200184,-0.188138,0.211589,0.107577,-0.061054,0.0523191,0.116363,-0.0928517,0.368441,0.0760238,-0.0544453,-0.0775001,0.232477,-0.234434,-0.0962133,0.138475,-0.107489,-0.248897,0.185485,-0.0963427,-0.167935,-0.152967,0.14504,-0.320423,-0.106021,0.156169,-0.0161747,-0.175856,0.159677,0.143522,-0.177102,0.195265,0.300374,-0.208655,0.201874,0.224811,0.161155,-0.119063,0.381663,0.129602,-0.112454,0.0659508,0.169868,-0.150833,-0.0840576,0.192335,-0.16547,-0.236652,0.239316,-0.154331])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("Glow2"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Glow"),
                          children : new MFNode([
                            new Billboard({
                              axisOfRotation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("glow"),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["bm-glow.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          colorIndex : new MFInt32([1,1,1,-1,1,1,1,-1]),
                                          coordIndex : new MFInt32([1,2,0,-1,2,3,0,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.8,0.198115,0,1,0.0603581,0])})),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0])}))}))})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BonusRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BonusRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Bonus"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
