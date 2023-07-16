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
              content : new SFString("Fri, 28 Aug 2015 13:01:11 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 28 Aug 2015 13:01:11 GMT")})])})),
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
                      whichChoice : new SFInt32(9),
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
                                          url : new MFString(["atomic-heroez512.jpg"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.0883475,0.54159,0.626255,0.54159,0.626255,0.991483,0.0883475,0.991483])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.00100192,0.0115181,0.486632,0.0157733,0.485379,0.158772,-0.000251025,0.154517])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.586018,0.544827,0.889917,0.544827,0.889917,0.904686,0.586018,0.904686])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.524055,0.00686112,0.998213,0.00686112,0.998213,0.156264,0.524055,0.156264])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.00523359,0.443556,0.967888,0.443556,0.96803,0.996595,0.0053758,0.996595])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("b6"),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.379979,0.764868,0.600618,0.764868,0.600618,0.903629,0.379979,0.903629])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.00252092,-0.00484368,0.996116,-0.00484368,0.996116,0.98842,0.00252092,0.98842])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.0125727,0.377203,0.961608,0.377203,0.961608,0.988468,0.0125727,0.988468])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.129715,0.690126,0.31433,0.690126,0.31433,0.858322,0.129715,0.858322])})),
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
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,2.98872,0,2.98872,2.99489,0,2.99489])})),
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
                  translation : new SFVec3f([-0.0270824,-0.0553203,0.192404])})])}),

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
