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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:14 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:14 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("keyValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("mov"),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("movie"),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_1"),
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("off"),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("_2")}),

                                new Transform({
                                  DEF : new SFString("still"),
                                  translation : new SFVec3f([-0.00202584,5.52632,0.0279587]),
                                  scale : new SFVec3f([7.69785,7.69784,7.69785]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["mib.jpg"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,3,-1,7,6,5,4,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.6667,-0.5,0,0.6667,-0.5,0,0.6667,0.5,0,-0.6667,0.5,0,-0.6667,-0.944511,0,0.6667,-0.944511,0,0.6667,-1.94583,0,-0.6667,-1.94583,0])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("on"),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("_3")}),

                                new Transform({
                                  DEF : new SFString("vs"),
                                  children : new MFNode([
                                    new VisibilitySensor({
                                      DEF : new SFString("_4"),
                                      size : new SFVec3f([12.866,21.3536,1.73049]),
                                      center : new SFVec3f([0.00397962,-0.604586,-2.38419e-7])})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.00202584,5.52632,0.0279587]),
                                  scale : new SFVec3f([7.69785,7.69784,7.69785]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new MovieTexture({
                                              DEF : new SFString("_5"),
                                              url : new MFString(["mib.mov"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,3,-1,7,6,5,4,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.6667,-0.5,0,0.6667,-0.5,0,0.6667,0.5,0,-0.6667,0.5,0,-0.6667,-0.944511,0,0.6667,-0.944511,0,0.6667,-1.94583,0,-0.6667,-1.94583,0])}))}))})])})])})])})])}),

                    new Transform({
                      DEF : new SFString("offInt"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Int"),
                          DEF : new SFString("_6")})])}),

                    new Transform({
                      DEF : new SFString("onInt"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Int"),
                          DEF : new SFString("_7"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("keyValue"),
                              value : new SFString("1")})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_5"),
              toField : new SFString("set_loop")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_5"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_5"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_6"),
              toField : new SFString("startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_6"),
              toField : new SFString("startTime")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_7"),
              toField : new SFString("startTime")})])}))});
console.log(X3D0.toXMLNode());
