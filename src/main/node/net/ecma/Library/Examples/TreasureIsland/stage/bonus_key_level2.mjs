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
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:54 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:54 GMT")})])})),
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
                                  startTime : new SFTime(952980617.71),
                                  stopTime : new SFTime(952972802.073)})])}),

                            new OrientationInterpolator({
                              DEF : new SFString("BonusRotationInterp"),
                              key : new MFFloat([0,0.25,0.5,0.75,1]),
                              keyValue : new MFRotation([0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0])})])}),

                        new Transform({
                          DEF : new SFString("Key"),
                          translation : new SFVec3f([0,-0.350102,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  colorIndex : new MFInt32([1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,7,1,7,-1,1,7,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1,0,1,7,-1,1,0,7,-1,1,1,0,-1,1,0,7,-1,0,1,7,-1,1,1,0,-1,3,3,3,3,-1,3,3,3,3,-1,1,7,0,-1,5,5,5,5,-1,1,7,7,-1,5,5,5,5,-1,7,7,1,-1,0,7,1,-1,2,2,2,2,-1,0,1,1,-1,3,3,3,3,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,3,3,3,3,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,6,6,6,6,-1,0,1,0,-1,3,3,3,3,-1,6,6,6,6,-1,1,0,1,-1,5,5,5,5,-1,0,7,1,-1,5,5,5,5,-1,0,1,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1]),
                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,7,5,-1,0,4,7,-1,8,9,10,-1,11,8,10,-1,6,5,12,-1,5,13,12,-1,14,6,12,-1,15,11,10,-1,13,15,12,-1,13,11,15,-1,9,16,10,-1,16,14,12,-1,9,14,16,-1,17,18,15,10,-1,19,17,10,16,-1,20,17,19,-1,21,20,9,8,-1,20,21,17,-1,22,21,8,11,-1,17,21,22,-1,18,17,22,-1,23,22,11,13,-1,18,22,23,-1,24,23,13,5,-1,25,24,5,7,-1,26,25,7,4,-1,27,26,4,3,-1,28,27,3,2,-1,29,28,2,1,-1,30,29,1,0,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,25,26,30,-1,24,25,30,-1,31,30,0,6,-1,24,30,31,-1,32,31,6,14,-1,32,14,9,20,-1,20,19,32,-1,33,19,16,12,-1,19,33,32,-1,18,33,12,15,-1,18,23,33,-1,24,31,33,-1,31,32,33,-1,23,24,33,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0,0.910982,0.962567,0,0.662992,0.700535,0,0.308722,0.326203,0,0.334027,0.352941,0,0.288478,0.304813,0,0.60226,0.636364,0,0.556711,0.588235,0.755923,0.969105,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.153333,0.0353757,0.0928724,-0.309791,0.130475,0.0513265,-0.279367,0.172506,0.0329643,-0.237645,0.147146,0.0440432,-0.207221,0.189178,0.0256809,0.0274742,0.409666,-0.0706439,0.0900571,0.371627,-0.0540255,-0.155069,0.157478,0.0395296,0.19154,0.574078,-0.14247,0.325234,0.426781,-0.0781208,0.158346,0.52822,-0.122436,-0.00854155,0.629659,-0.166752,0.0919591,0.436504,-0.0823686,-0.0749286,0.537943,-0.126684,0.258847,0.335066,-0.038053,-0.0000131198,0.558441,-0.135639,0.250318,0.406283,-0.0691658,0.158346,0.563389,-0.0419336,-0.0000131198,0.59361,-0.0551364,0.250318,0.441452,0.0113371,0.325234,0.46195,0.00238207,0.19154,0.609247,-0.0619675,-0.00854153,0.664828,-0.0862492,-0.0749286,0.573112,-0.0461814,0.0274742,0.444836,0.00985895,-0.155069,0.192647,0.120032,-0.207221,0.224347,0.106184,-0.237645,0.182315,0.124546,-0.279367,0.207675,0.113467,-0.309791,0.165644,0.131829,-0.153333,0.0705449,0.173375,0.0900571,0.406796,0.0264773,0.258847,0.370235,0.0424499,0.0919591,0.471674,-0.00186576])}))}))})])})])}),

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
                                              url : new MFString(["bk-glow.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          colorIndex : new MFInt32([1,1,1,-1,1,1,1,-1]),
                                          texCoordIndex : new MFInt32([1,2,0,-1,2,3,0,-1]),
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
