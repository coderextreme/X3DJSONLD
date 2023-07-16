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
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Random"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("numValues"),
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
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Import"),
              url : new MFString([", ","Import_proto.x3dhttp://vr.create3000.tv/vrml/protos1.1/Import/Import_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("url"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("parameter"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("World"),
              url : new MFString([", ","http://vr.create3000.tv/vrml/protos1.1/World/World_proto.x3dWorld_proto.x3d"]),
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
                  name : new SFString("scene"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("images"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("imageSwitch"),
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("_1"),
                      whichChoice : new SFInt32(0),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("b1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("busy-ape"),
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          DEF : new SFString("_2"),
                                          url : new MFString(["fuck2000-512.jpg"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.127981,0.642594,0.495544,0.642594,0.495544,0.943376,0.127981,0.943376])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b2"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.165226,0.179163,0.816381,0.179163,0.816381,0.627073,0.165226,0.627073])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b3"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.50878,0.710921,0.697553,0.710921,0.697553,0.955188,0.50878,0.955188])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b4"),
                          translation : new SFVec3f([0.00122404,0.021184,0]),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.313272,0.859763,0.632335,0.859763,0.632335,0.999829,0.313272,0.999829])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b5"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.0855851,0.20142,0.869854,0.199958,0.863913,0.932262,0.0796437,0.933725])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b6"),
                          translation : new SFVec3f([-0.0329717,0.00328829,-0.00000150874]),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.0234936,0.00361292,0.386726,0.00361292,0.386726,0.19957,0.0234936,0.19957])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b7"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.469851,0,0.949498,0.000914961,0.949498,0.202009,0.469851,0.201094])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b8"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.00164229,0.000905187,0.994963,0.0026198,0.997617,0.998598,0.0042969,0.996884])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b9"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.133117,0.661176,0.690556,0.661176,0.690556,0.918871,0.133117,0.918871])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b10"),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([12.57,8.426,4.32121]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.137234,0.656148,0.291324,0.656148,0.291324,0.878755,0.137234,0.878755])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])})])})])}),

            new Transform({
              DEF : new SFString("Random"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Random"),
                  DEF : new SFString("_3"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("value"),
                      value : new SFString("9")}),

                    new fieldValue({
                      name : new SFString("numValues"),
                      value : new SFString("9")})])})])}),

            new Transform({
              DEF : new SFString("Door"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Import"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Import"),
                      DEF : new SFString("_4"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("url"),
                          value : new SFString("\"schachttor.x3d\"")}),

                        new fieldValue({
                          name : new SFString("startTime"),
                          value : new SFString("1")})])})])}),

                new Transform({
                  DEF : new SFString("World"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("World"),
                      DEF : new SFString("_5")})])}),

                new Transform({
                  DEF : new SFString("door"),
                  translation : new SFVec3f([-0.376395,-0.0552998,0.113209])})])}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("children_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_scene")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("children_changed"),
              toNode : new SFString("door"),
              toField : new SFString("set_children")})])}))});
console.log(X3D0.toXMLNode());
