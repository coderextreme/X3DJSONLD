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
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:57 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:57 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

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
                                  startTime : new SFTime(952972804.863),
                                  stopTime : new SFTime(952972802.073)})])}),

                            new OrientationInterpolator({
                              DEF : new SFString("BonusRotationInterp"),
                              key : new MFFloat([0,0.25,0.5,0.75,1]),
                              keyValue : new MFRotation([0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0])})])}),

                        new Transform({
                          DEF : new SFString("xform"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  colorPerVertex : new SFBool(false),
                                  colorIndex : new MFInt32([0,1,2,2,1,0,3,4,5,5,4,6]),
                                  coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,0,2,4,5,-1,3,6,4,2,-1,4,7,5,-1,6,7,4,-1,7,6,8,-1,6,3,8,-1,5,7,8,-1,3,1,8,-1,5,8,0,-1,1,0,8,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([1,0.544676,0,1,0.347574,0,0.8,0.462602,0,1,0.719854,0,1,0.691608,0,1,0.456295,0,1,0.780794,0])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.2,0.0965052,-0.1,-0.3,0.0965052,0,-0.2,0.205105,0,-0.2,0.0965052,0.1,0.2,0.205105,0,0.2,0.0965052,-0.1,0.2,0.0965052,0.1,0.3,0.0965052,0,0,-0.302545,0])}))}))})])})])}),

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
                                              url : new MFString(["bp-glow.png"])}))})),
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
