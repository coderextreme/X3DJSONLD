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
var MetadataSet = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var Script = require('./x3d.mjs');
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
              content : new SFString("Fri, 28 Aug 2015 13:01:11 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.0.6a, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Examples/Schacht/stage/schachttor.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 02 Mar 2018 12:26:48 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Unless"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Unless/Unless_proto.x3dUnless_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("touchTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Counter"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Counter/Counter_proto.x3dCounter_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("offset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Or"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Or/Or_proto.x3dOr_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Bool"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Bool/Bool_proto.x3dBool_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("bool"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Bool2Int"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Bool2Int/Bool2Int_proto.x3dBool2Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("int"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Door"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Door/Door_proto.x3dDoor_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("offset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Not"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Not/Not_proto.x3dNot_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Scene"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Scene/Scene_proto.x3dScene_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"]),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("selectGeometry"),
                          DEF : new SFString("selectGeometry"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de")}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Page"),
                      DEF : new SFString("Page"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeView"),
                          DEF : new SFString("activeView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([1])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("multiView"),
                          DEF : new SFString("multiView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([0])}))}))})])}),

            new Transform({
              DEF : new SFString("rahmen"),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([8.70869,-0.00000236742,0.490862]),
                      scale : new SFVec3f([0.75,10.5322,0.75]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["rivoted.jpg"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([1,10])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,4,3,2,6,-1,0,1,8,9,-1,7,2,14,2,2,10,-1,1,1,12,1,5,1,-1,4,6,0,1,-1,0,1,11,13,-1,11,3,2,13,-1]),
                              coordIndex : new MFInt32([2,3,5,4,-1,6,1,0,7,-1,4,5,8,9,-1,7,0,11,2,4,9,-1,5,3,10,1,6,8,-1,6,7,9,8,-1,0,1,10,11,-1,10,3,2,11,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0,0,0.5,1,1,1,0.5,0,0.5,1,1,1,0.5,0,0,0,0.5,1,1,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1.51221,1,-1,-1.51221,-1,-1,0,-1,1,0,0,-1,-1.51221,0,1,-1.51221,0,-1,1.98391,0,1,1.98391])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-0.0118644,-9.78194,-0.411172]),
                  rotation : new SFRotation([7.91898e-14,-2.39354e-13,-1,1.5708]),
                  scale : new SFVec3f([0.445256,8.42318,0.152131]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              translation : new SFVec2f([0,-0.02]),
                              scale : new SFVec2f([0.5,8])}))})),
                      geometry : new SFNode(
                        new Box({}))})])}),

                new Transform({
                  translation : new SFVec3f([-0.0118621,9.67197,-0.411172]),
                  rotation : new SFRotation([7.91898e-14,-2.39354e-13,-1,1.5708]),
                  scale : new SFVec3f([0.445256,8.42318,0.152131]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              translation : new SFVec2f([0,-0.02]),
                              scale : new SFVec2f([0.5,8])}))})),
                      geometry : new SFNode(
                        new Box({}))})])}),

                new Transform({
                  translation : new SFVec3f([-8.70869,-0.00000236742,0.490862]),
                  scale : new SFVec3f([0.75,10.5322,0.75]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([1,10])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,4,6,-1,8,3,2,10,-1,2,2,14,2,7,2,-1,5,1,12,1,1,9,-1,2,6,4,3,-1,0,1,11,13,-1,11,3,2,13,-1]),
                          coordIndex : new MFInt32([4,5,1,0,-1,2,3,6,7,-1,8,5,4,9,-1,4,0,11,2,7,9,-1,6,3,10,1,5,8,-1,9,7,6,8,-1,0,1,10,11,-1,10,3,2,11,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0,0,0,0.5,1,1,1,0.5,0,0,0,0.5,1,0.5,0,0,0,0.5,1,1,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,-1.51221,-1,-1,-1.51221,1,-1,0,1,1,0,0,-1,-1.51221,0,1,-1.51221,0,-1,1.98391,0,1,1.98391])}))}))})])})])}),

            new Transform({
              DEF : new SFString("doorOpenClose"),
              bboxSize : new SFVec3f([17,21,1]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("doorOpen"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_2"),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("doorObenTranslationInterp_3"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,0,0.479328,0,0,0.958656,0,0,1.43798,0,0,1.91731,0,0,2.39664,0,0,2.87597,0,0,3.3553,0,0,3.83462,0,0,4.31395,0,0,4.79328,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("doorUntenTranslationInterp_4"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,0,-0.519487,0,0,-1.03897,0,0,-1.55846,0,0,-2.07795,0,0,-2.59743,0,0,-3.11692,0,0,-3.63641,0,0,-4.1559,0,0,-4.67538,0,0,-5.19487,0])})])}),

                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("doorClose"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_5"),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("doorObenTranslationInterp_6"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,4.79328,0,0,4.31395,0,0,3.83462,0,0,3.3553,0,0,2.87597,0,0,2.39664,0,0,1.91731,0,0,1.43798,0,0,0.958656,0,0,0.479328,0,0,0,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("doorUntenTranslationInterp_7"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,-5.19487,0,0,-4.67538,0,0,-4.1559,0,0,-3.63641,0,0,-3.11692,0,0,-2.59743,0,0,-2.07795,0,0,-1.55846,0,0,-1.03897,0,0,-0.519487,0,0,0,0])})])}),

                new Transform({
                  DEF : new SFString("doorOben"),
                  center : new SFVec3f([-4.76837e-7,2.93616,0.346488]),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("_8")}),

                    new TouchSensor({
                      DEF : new SFString("_9"),
                      enabled : new SFBool(false)}),

                    new Transform({
                      translation : new SFVec3f([-4.54485e-7,2.93616,0.215953]),
                      rotation : new SFRotation([1,0,0,1.5708]),
                      scale : new SFVec3f([7.95869,0.235682,2.8179]),
                      center : new SFVec3f([0,0,0.130535]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_10"),
                                  url : new MFString(["wall1.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,7,2,-1,0,5,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,6,4,2,-1,6,1,3,4,-1]),
                              coordIndex : new MFInt32([4,5,7,6,-1,6,7,1,9,0,-1,2,8,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,0,9,8,2,-1,9,1,3,8,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,0,1.26107,-1,0,1.26107])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Pfeil_11"),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_12"),
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Transform({}),

                            new Switch({
                              DEF : new SFString("_13"),
                              whichChoice : new SFInt32(0),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.257185,2.78224,0.801082]),
                                  rotation : new SFRotation([1,0,0,1.5708]),
                                  scale : new SFVec3f([0.55255,0.103483,0.600411]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8,0.426738,0]),
                                              emissiveColor : new SFColor([0.617021,0.329133,0]),
                                              transparency : new SFFloat(0.670213)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-3.46545,1,2.16771,-3.46545,-1,2.16771,2.5838,1,2.16771,2.5838,-1,2.16771,-3.46545,-1,-0.303164,-3.46545,1,-0.303164,2.5838,-1,-0.303164,2.5838,1,-0.303164,-5.46545,-1,-0.303164,-5.46545,1,-0.303164,4.53455,-1,-0.303164,4.53455,1,-0.303164,-0.465452,-1,-2.77404,-0.465451,0.999999,-2.77404])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.257185,3.14628,0.801083]),
                                  rotation : new SFRotation([-0.00000371598147765511,0.707105281179478,0.707108281180671,3.1416]),
                                  scale : new SFVec3f([0.55255,0.103483,0.600412]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8,0.426738,0]),
                                              emissiveColor : new SFColor([0.617021,0.329133,0]),
                                              transparency : new SFFloat(0.670213)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-3.46545,1,2.16771,-3.46545,-1,2.16771,2.5838,1,2.16771,2.5838,-1,2.16771,-3.46545,-1,-0.303164,-3.46545,1,-0.303164,2.5838,-1,-0.303164,2.5838,1,-0.303164,-5.46545,-1,-0.303164,-5.46545,1,-0.303164,4.53455,-1,-0.303164,4.53455,1,-0.303164,-0.465452,-1,-2.77404,-0.465451,0.999999,-2.77404])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("Unless"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Unless"),
                                      DEF : new SFString("_14")})])}),

                                new Transform({
                                  DEF : new SFString("Counter"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Counter"),
                                      DEF : new SFString("_15"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("value"),
                                          value : new SFString("1")}),

                                        new fieldValue({
                                          name : new SFString("startTime"),
                                          value : new SFString("1")})])})])})])}),

                            new Transform({
                              DEF : new SFString("Or"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Or"),
                                  DEF : new SFString("_16"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("children"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_17")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_18")})])})])})])}),

                            new Transform({
                              DEF : new SFString("Bool2Int"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Bool2Int"),
                                  DEF : new SFString("_19")})])})])})])})])}),

                new Transform({
                  DEF : new SFString("doorUnten"),
                  center : new SFVec3f([2.38419e-7,-2.85131,0.346489]),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("_20")}),

                    new TouchSensor({
                      DEF : new SFString("_21"),
                      enabled : new SFBool(false)}),

                    new Transform({
                      translation : new SFVec3f([1.1029e-7,-2.85131,0.215954]),
                      rotation : new SFRotation([1.86262942361128e-8,0.707106781186547,0.707106781186547,3.14159]),
                      scale : new SFVec3f([7.9587,0.235682,2.81789]),
                      center : new SFVec3f([0,0,0.130535]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_10")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,7,2,-1,0,5,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,6,4,2,-1,6,1,3,4,-1]),
                              coordIndex : new MFInt32([4,5,7,6,-1,6,7,1,9,0,-1,2,8,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,0,9,8,2,-1,9,1,3,8,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,0,1.26107,-1,0,1.26107])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Pfeil"),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_22"),
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Transform({}),

                            new Switch({
                              DEF : new SFString("_23"),
                              whichChoice : new SFInt32(0),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.257184,-2.55538,0.801065]),
                                  rotation : new SFRotation([-7.93487754455796e-7,0.707106781186325,0.707106781186325,3.14159]),
                                  scale : new SFVec3f([0.552549,0.103483,0.600413]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8,0.426738,0]),
                                              emissiveColor : new SFColor([0.617021,0.329133,0]),
                                              transparency : new SFFloat(0.670213)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-3.46545,1,2.16771,-3.46545,-1,2.16771,2.5838,1,2.16771,2.5838,-1,2.16771,-3.46545,-1,-0.303164,-3.46545,1,-0.303164,2.5838,-1,-0.303164,2.5838,1,-0.303164,-5.46545,-1,-0.303164,-5.46545,1,-0.303164,4.53455,-1,-0.303164,4.53455,1,-0.303164,-0.465452,-1,-2.77404,-0.465451,0.999999,-2.77404])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([0.257184,-2.91943,0.801066]),
                                  rotation : new SFRotation([0.999999999997485,-0.00000204183999999486,9.28232999997665e-7,1.5708]),
                                  scale : new SFVec3f([0.552549,0.103483,0.600412]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8,0.426738,0]),
                                              emissiveColor : new SFColor([0.617021,0.329133,0]),
                                              transparency : new SFFloat(0.670213)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,1,0,5,-1,2,3,6,7,-1,9,8,4,5,-1,10,11,7,6,-1,9,5,13,-1,4,8,12,-1,8,9,13,12,-1,7,11,13,-1,5,0,2,7,13,-1,10,6,12,-1,6,3,1,4,12,-1,13,11,10,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-3.46545,1,2.16771,-3.46545,-1,2.16771,2.5838,1,2.16771,2.5838,-1,2.16771,-3.46545,-1,-0.303164,-3.46545,1,-0.303164,2.5838,-1,-0.303164,2.5838,1,-0.303164,-5.46545,-1,-0.303164,-5.46545,1,-0.303164,4.53455,-1,-0.303164,4.53455,1,-0.303164,-0.465452,-1,-2.77404,-0.465451,0.999999,-2.77404])}))}))})])})])})])})])})])})])}),

            new Sound({
              DEF : new SFString("e-door-close"),
              minBack : new SFFloat(25.1),
              minFront : new SFFloat(25.1),
              maxBack : new SFFloat(251),
              maxFront : new SFFloat(251),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("e-door-close_24"),
                  description : new SFString("e-door-close"),
                  url : new MFString(["e-door-close.wav"]),
                  pitch : new SFFloat(0.7)}))}),

            new Sound({
              DEF : new SFString("e-door-open"),
              minBack : new SFFloat(25.2),
              minFront : new SFFloat(25.2),
              maxBack : new SFFloat(252),
              maxFront : new SFFloat(252),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("e-door-open_25"),
                  description : new SFString("e-door-open"),
                  url : new MFString(["e-door-open.wav"]),
                  pitch : new SFFloat(0.7)}))}),

            new Transform({
              DEF : new SFString("Door"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Door"),
                  DEF : new SFString("_26")})])}),

            new Transform({
              DEF : new SFString("Not"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Not"),
                  DEF : new SFString("_27")})])}),

            new Transform({
              DEF : new SFString("Scene"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Scene"),
                  DEF : new SFString("_28")})])}),

            new Script({
              DEF : new SFString("Debug"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_SFBool"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_or"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),vrmlscript:
, function set_SFBool (value, time)
{
	//print (time + ': ' + value);
}
, function set_or (value, time)
{
	//print (time + ': or ' + value);
})}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("doorObenTranslationInterp_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("doorUntenTranslationInterp_4"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Time_5"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("doorObenTranslationInterp_6"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("doorUntenTranslationInterp_7"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_27"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_8"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_9"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_14"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_14"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_15"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_13"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_17"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_17"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_17"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_17"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_18"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_21"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_18"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_18"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_18"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_19"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_19"),
              fromField : new SFString("int"),
              toNode : new SFString("_12"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("doorObenTranslationInterp_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("doorOben"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("doorObenTranslationInterp_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("doorOben"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_27"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_20"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_21"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_23"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_19"),
              fromField : new SFString("int"),
              toNode : new SFString("_22"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("doorUntenTranslationInterp_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("doorUnten"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("doorUntenTranslationInterp_7"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("doorUnten"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("e-door-close_24"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("e-door-open_25"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_26"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_26"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_21"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_27"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_28"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_28"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("isOver"),
              toNode : new SFString("Debug"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("isOver"),
              toNode : new SFString("Debug"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Debug"),
              toField : new SFString("set_or")})])}))});
console.log(X3D0.toXMLNode());
