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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
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
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:04 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:04 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("RandomSwitcher"),
              url : new MFString(["RandomSwitcher_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("minValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("maxValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              bboxSize : new SFVec3f([6.67,6.67,6.67]),
              children : new MFNode([
                new Billboard({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("_1"),
                          cycleInterval : new SFTime(0.1),
                          loop : new SFBool(true),
                          startTime : new SFTime(968922869.685071)}),

                        new Transform({
                          DEF : new SFString("fireSwitch"),
                          children : new MFNode([
                            new Switch({
                              DEF : new SFString("_2"),
                              whichChoice : new SFInt32(0),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.136771,-0.0738408,-0.443054]),
                                  rotation : new SFRotation([1,0,0,0.207709]),
                                  scale : new SFVec3f([1.98355,1,1]),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.0362256,0.901673,1.68843]),
                                      rotation : new SFRotation([1,0,0,1.65743]),
                                      scale : new SFVec3f([0.722581,2.25045,0.999999]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["blitz.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-0.108338,1.01425,0.758368]),
                                      scale : new SFVec3f([0.504147,1,1]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_3"),
                                                  url : new MFString(["light7.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([0.254031,1.01425,0.758368]),
                                      scale : new SFVec3f([0.504147,1,1]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_3")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                                new Transform({}),

                                new Transform({}),

                                new Transform({})])})])}),

                        new Transform({
                          DEF : new SFString("RandomSwitcher"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("RandomSwitcher"),
                              DEF : new SFString("_4"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("maxValue"),
                                  value : new SFString("3")})])})])}),

                        new Transform({
                          children : new MFNode([
                            new VisibilitySensor({
                              DEF : new SFString("_5"),
                              size : new SFVec3f([1,1,1]),
                              center : new SFVec3f([0,1,0])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_4"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
