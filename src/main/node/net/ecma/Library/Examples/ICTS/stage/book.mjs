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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:58 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:58 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Not"),
              url : new MFString(["Not_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_SFBool"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("bbox"),
              bboxSize : new SFVec3f([0.6,0.1,0.4])}),

            new Transform({
              DEF : new SFString("book"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0,0.0057869,0]),
                  scale : new SFVec3f([0.0469265,0.0578693,1.58083]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_1"),
                              url : new MFString(["reflect1.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.0728729,0.372773,0.103089,0.0803465,0.146945,0.372773,0.177162,0.0803465])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1])}))}))})])}),

                new Transform({
                  DEF : new SFString("page4"),
                  translation : new SFVec3f([2.56114e-9,-0.000322939,0]),
                  scale : new SFVec3f([0.999999,0.999999,0.999999]),
                  center : new SFVec3f([0,0.00213197,0]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("aufklapp-p4"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_1"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("frontRotationInterp_1"),
                          key : new MFFloat([0]),
                          keyValue : new MFRotation([0,0,1,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_1"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,1.5708,0,0,1,3.14159])}),

                        new PositionInterpolator({
                          DEF : new SFString("page4TranslationInterp_1"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,-0.000322939,0,2.56114e-9,0.00155101,0,2.56114e-9,0.00342495,0])})])}),

                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("zuklapp-p4"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_2"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_2"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,3.14159,0,0,1,1.5708,0,0,1,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("page4TranslationInterp_2"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,0.00342495,0,2.56114e-9,0.00155101,0,2.56114e-9,-0.000322939,0])})])}),

                    new Transform({
                      DEF : new SFString("front_1"),
                      center : new SFVec3f([0.109583,0.00336227,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_1")}),

                        new Transform({
                          DEF : new SFString("f"),
                          translation : new SFVec3f([0.109583,0.00336227,4.15064e-9]),
                          rotation : new SFRotation([-1,-1.45502e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-9.19798e-14,-5.94339e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["nposter5.jpg"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("back_1"),
                      center : new SFVec3f([0.109583,0.000901929,1.49012e-8]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_2")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.000901929,1.95053e-8]),
                          rotation : new SFRotation([-1,-1.4552e-8,-1.67464e-7,1.57076]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-1.33242e-12,-3.23498e-13,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["poster2.jpg"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                new Transform({
                  DEF : new SFString("page3"),
                  translation : new SFVec3f([2.56114e-9,0.00248178,0]),
                  scale : new SFVec3f([1,1,0.999999]),
                  center : new SFVec3f([0,0.00213197,0]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("aufklapp-p3"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_3"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("frontRotationInterp_2"),
                          key : new MFFloat([0]),
                          keyValue : new MFRotation([0,0,1,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_3"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,1.5708,0,0,1,3.14159])}),

                        new PositionInterpolator({
                          DEF : new SFString("page3TranslationInterp_1"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,0.00248178,0,2.56114e-9,0.00216769,0,2.56114e-9,0.00185361,0])})])}),

                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("zuklapp-p3"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_4"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_4"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,3.14159,0,0,1,1.5708,0,0,1,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("page3TranslationInterp_2"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,0.00185361,0,2.56114e-9,0.00216769,0,2.56114e-9,0.00248178,0])})])}),

                    new Transform({
                      DEF : new SFString("front_2"),
                      center : new SFVec3f([0.109583,0.00336227,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_3")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.00336227,4.15064e-9]),
                          rotation : new SFRotation([-1,-1.45502e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-9.19798e-14,-5.94339e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["nposter7.jpg"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("back_2"),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_4")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.000901929,1.95053e-8]),
                          rotation : new SFRotation([-1,-1.455e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-1.79204e-13,6.48902e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_1")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.0686541,0.0246341,0.16719,0.0246341,0.225948,0.290612,0.127412,0.290612])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                new Transform({
                  DEF : new SFString("page2"),
                  translation : new SFVec3f([2.56114e-9,0.00455024,0]),
                  scale : new SFVec3f([1,1,0.999999]),
                  center : new SFVec3f([0,0.00213197,0]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("aufklapp-p2"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_5"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("frontRotationInterp_3"),
                          key : new MFFloat([0]),
                          keyValue : new MFRotation([0,0,1,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_5"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,1.5708,0,0,1,3.14159])}),

                        new PositionInterpolator({
                          DEF : new SFString("page2TranslationInterp_1"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,0.00455024,0,2.56113e-9,0.00265246,0,2.56113e-9,0.00075468,0])})])}),

                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("zuklapp-p2"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_6"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_6"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,3.14159,0,0,1,1.5708,0,0,1,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("page2TranslationInterp_2"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56113e-9,0.00075468,0,2.56113e-9,0.00265246,0,2.56114e-9,0.00455024,0])})])}),

                    new Transform({
                      DEF : new SFString("front_3"),
                      center : new SFVec3f([0.109583,0.00336227,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_5")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.00336227,4.15064e-9]),
                          rotation : new SFRotation([-1,-1.45502e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-8.7009e-14,-3.81901e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_2"),
                                      url : new MFString(["nposter2.jpg"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.478181,0.00252134,0.997479,0.00252134,0.997479,0.998515,0.478181,0.998515])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("back_3"),
                      center : new SFVec3f([0.109583,0.000901929,1.49012e-8]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_6")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.000901929,1.95053e-8]),
                          rotation : new SFRotation([-1,-1.45527e-8,-1.67465e-7,1.57074]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-1.54436e-12,-2.75076e-13,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_1")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.0787102,0.208577,0.177246,0.208577,0.236004,0.474555,0.137468,0.474555])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                new Transform({
                  DEF : new SFString("page1"),
                  translation : new SFVec3f([2.56114e-9,0.00645655,0]),
                  scale : new SFVec3f([1,1,0.999999]),
                  center : new SFVec3f([0,0.00213197,0]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("aufklapp-p1"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_7"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("frontRotationInterp_4"),
                          key : new MFFloat([0]),
                          keyValue : new MFRotation([0,0,1,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_7"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,1.5708,0,0,1,3.14159])}),

                        new PositionInterpolator({
                          DEF : new SFString("page1TranslationInterp_1"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([2.56114e-9,0.00645655,0,-1.22092e-9,0.00277808,0,-5.00297e-9,-0.00090039,0])})])}),

                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("zuklapp-p1"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_8"),
                              cycleInterval : new SFTime(2),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("page1RotationInterp_8"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,1,3.14159,0,0,1,1.5708,0,0,1,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("page1TranslationInterp_2"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFVec3f([-5.00297e-9,-0.00090039,0,-1.22092e-9,0.00277808,0,2.56114e-9,0.00645655,0])})])}),

                    new Transform({
                      DEF : new SFString("front_4"),
                      center : new SFVec3f([0.109583,0.00336227,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_7")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.00336227,4.15064e-9]),
                          rotation : new SFRotation([-1,-1.45502e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-9.19798e-14,-5.94339e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["poster1.jpg"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("back"),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("touchSensorTrigger_8")}),

                        new Transform({
                          translation : new SFVec3f([0.109583,0.000901929,1.95053e-8]),
                          rotation : new SFRotation([-1,-1.45501e-8,-1.67461e-7,1.57079]),
                          scale : new SFVec3f([0.2083,0.313,0.313]),
                          scaleOrientation : new SFRotation([1,-2.06631e-13,8.62823e-14,4.71239]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_2")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0.482545,0.00252134,0.000339419,0.00101823,0.00252134,0.993794,0.480363,0.988751])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                new Transform({
                  DEF : new SFString("Not_1"),
                  translation : new SFVec3f([0,1,0]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Not"),
                      DEF : new SFString("_3")})])}),

                new Transform({
                  DEF : new SFString("Not"),
                  translation : new SFVec3f([0,1,0]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Not"),
                      DEF : new SFString("_4")})])})])}),

            new Transform({
              DEF : new SFString("backpage"),
              translation : new SFVec3f([0.109583,-0.0000548903,-1.68163e-8]),
              rotation : new SFRotation([-1,-1.45521e-8,-1.67464e-7,1.57076]),
              scale : new SFVec3f([0.2083,0.313,0.313]),
              scaleOrientation : new SFRotation([1,-1.415e-12,-3.57256e-13,4.71239]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["reflect2.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.198755,4.28397,0.322734,4.28318,0.475755,13.5529,0.336888,13.7365])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("frontRotationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page4TranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page4TranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("frontRotationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("front_1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("page4TranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page4"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page4TranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page4"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("frontRotationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page3TranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_4"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_4"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page3TranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_3"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("frontRotationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("front_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_4"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("page3TranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page3"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page3TranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page3"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_5"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_5"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("frontRotationInterp_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_5"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page2TranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_6"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_6"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_6"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page2TranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_5"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("frontRotationInterp_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("front_3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_6"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("page2TranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page2TranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_5"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_7"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_7"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_7"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("frontRotationInterp_4"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_7"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_7"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_7"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1TranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_8"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_8"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_8"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1RotationInterp_8"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_8"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("page1TranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_7"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("frontRotationInterp_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("front_4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("touchSensorTrigger_8"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("page1TranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page1TranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_7"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("page1RotationInterp_8"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("page1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_3"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_3"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_3"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_3"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_4"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_4"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_4"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("Time_8"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_4"),
              toField : new SFString("set_SFBool")})])}))});
console.log(X3D0.toXMLNode());
