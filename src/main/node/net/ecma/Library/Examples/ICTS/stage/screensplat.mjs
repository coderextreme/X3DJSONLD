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
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Switcher"),
              url : new MFString(["Switcher_proto.x3d"]),
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
                  name : new SFString("prev"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("next"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("offset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

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
              DEF : new SFString("screensplat"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("_1"),
                  loop : new SFBool(true),
                  startTime : new SFTime(974763620.45387)}),

                new Transform({
                  DEF : new SFString("MSwitch"),
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("_2"),
                      whichChoice : new SFInt32(1),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("zoom"),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("Time_1"),
                                      cycleInterval : new SFTime(4),
                                      loop : new SFBool(true),
                                      startTime : new SFTime(974763620.45387),
                                      stopTime : new SFTime(1)})])}),

                                new Group({
                                  children : new MFNode([
                                    new ScalarInterpolator({
                                      DEF : new SFString("_3"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFFloat([0.5,0.5545,0.616,0.6815,0.748,0.8125,0.872,0.9235,0.964,0.9905,1,0.9905,0.964,0.9235,0.872,0.8125,0.748,0.6815,0.616,0.5545,0.5])}),

                                    new ScalarInterpolator({
                                      DEF : new SFString("_4"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFFloat([0.5,0.5545,0.616,0.6815,0.748,0.8125,0.872,0.9235,0.964,0.9905,1,0.9905,0.964,0.9235,0.872,0.8125,0.748,0.6815,0.616,0.5545,0.5])}),

                                    new Script({
                                      DEF : new SFString("_5"),
                                      field : new MFNode([
                                        new field({
                                          type : field.TYPE_SFVEC2F,
                                          name : new SFString("vec"),
                                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("xIn"),
                                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("yIn"),
                                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("xBuf"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("yBuf"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                      ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])}),

                                new Group({
                                  children : new MFNode([
                                    new ScalarInterpolator({
                                      DEF : new SFString("_6"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFFloat([-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5])}),

                                    new ScalarInterpolator({
                                      DEF : new SFString("_7"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFFloat([-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5])}),

                                    new Script({
                                      DEF : new SFString("_8"),
                                      field : new MFNode([
                                        new field({
                                          type : field.TYPE_SFVEC2F,
                                          name : new SFString("vec"),
                                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("xIn"),
                                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("yIn"),
                                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("xBuf"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                        new field({
                                          type : field.TYPE_SFFLOAT,
                                          name : new SFString("yBuf"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                      ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])})])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["cmaxx1.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      DEF : new SFString("t"),
                                      scale : new SFVec2f([0.5,0.5]),
                                      center : new SFVec2f([-0.5,-0.5])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("i"),
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["cmaxx3.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["fball2__2.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["mbenz1.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["mbenz4__2.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["mcdon3__2.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["pbank1__2.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["pbank5.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["pman3__2.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["pman4.jpg"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("t")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("i")}))})])}),

                        new Transform({
                          DEF : new SFString("s1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("splat"),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("_9"),
                                  cycleInterval : new SFTime(0.25),
                                  loop : new SFBool(true),
                                  startTime : new SFTime(974760807.698432)}),

                                new Transform({
                                  DEF : new SFString("splatswitch"),
                                  children : new MFNode([
                                    new Switch({
                                      DEF : new SFString("_10"),
                                      whichChoice : new SFInt32(0),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.1.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.2.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.3.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.4.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.5.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.6.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.7.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-0.063843,-0.0512635,-0.0515666]),
                                          scale : new SFVec3f([0.945694,0.828292,0.894065]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["fx.8.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      USE : new SFString("t")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("i")}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("Switcher"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Switcher"),
                                      DEF : new SFString("_11"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("maxValue"),
                                          value : new SFString("7")})])})])}),

                                new Transform({
                                  DEF : new SFString("vs_1"),
                                  children : new MFNode([
                                    new VisibilitySensor({
                                      DEF : new SFString("_12"),
                                      size : new SFVec3f([1,0.8,0.01]),
                                      center : new SFVec3f([-0.05,-0.05,-0.05])})])})])})])}),

                        new Transform({
                          DEF : new SFString("s2"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])}),

                        new Transform({
                          DEF : new SFString("s3"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])}),

                        new Transform({
                          DEF : new SFString("s4"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])}),

                        new Transform({
                          DEF : new SFString("s5"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])}),

                        new Transform({
                          DEF : new SFString("s6"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])}),

                        new Transform({
                          DEF : new SFString("s7"),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("splat")})])})])})])}),

                new Transform({
                  DEF : new SFString("vs"),
                  children : new MFNode([
                    new VisibilitySensor({
                      DEF : new SFString("_13"),
                      size : new SFVec3f([1,0.8,0.05]),
                      center : new SFVec3f([0,-0.05,-0.05])})])}),

                new Transform({
                  DEF : new SFString("RandomSwitcher"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("RandomSwitcher"),
                      DEF : new SFString("_14"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("maxValue"),
                          value : new SFString("12")})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_8"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_8"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("vec"),
              toNode : new SFString("t"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("vec"),
              toNode : new SFString("t"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_9"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_9"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_10"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_11"),
              toField : new SFString("set_next")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("_14"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
