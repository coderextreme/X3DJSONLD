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
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
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
              content : new SFString("Fri, 13 Nov 2015 10:12:58 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 13 Nov 2015 10:12:58 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("JumpPlatform"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("platformLOD"),
                  children : new MFNode([
                    new LOD({
                      range : new MFFloat([2.5]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("platformAnim"),
                          center : new SFVec3f([0.0393472,-0.651559,-0.0115353]),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("UnnamedAnimation2"),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("Time"),
                                      cycleInterval : new SFTime(1.5),
                                      stopTime : new SFTime(1)})])}),

                                new PositionInterpolator({
                                  DEF : new SFString("platformAnimTranslationInterp"),
                                  key : new MFFloat([0,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1]),
                                  keyValue : new MFVec3f([0,0,0,0,-2.28722,0,0,-2.20818,0,0,-1.99582,0,0,-1.68724,0,0,-1.31955,0,0,-0.929871,0,0,-0.555311,0,0,-0.232983,0,0,0,0,0,0.123708,0,0,0.109962,0,0,0.0412359,0,0,0,0])})])}),

                            new Transform({
                              DEF : new SFString("platform"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("stone"),
                                  translation : new SFVec3f([-0.0705032,-0.371576,0.0145798]),
                                  rotation : new SFRotation([0,-1,0,0.374402]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.433333),
                                              diffuseColor : new SFColor([0.957447,0.642839,0.0227095])})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_1"),
                                              url : new MFString(["fels1.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          colorIndex : new MFInt32([1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]),
                                          texCoordIndex : new MFInt32([0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1]),
                                          coordIndex : new MFInt32([1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.957447,0.642839,0.0227095,0,0.946524,0.280331])})),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,1,0,0,1,1,0.5,0,0.5,1,0.5,0,0.5,1,1,0.5,0,0.5,0,0.5,1,0.5,1,0.5,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0,0.371576,-1.66309,0,0.371576,1.53413,0.931543,0,-0.931536,1.49983,0,0.523687,-0.931543,0,0.931536,-1.31445,0,-0.491099,0,0,-1.66309,0,0,1.53413,0.0606067,-0.931541,0.00472414])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("grass"),
                                  translation : new SFVec3f([-0.0705032,-0.371576,0.0145798]),
                                  rotation : new SFRotation([0,-1,0,0.374402]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.358095),
                                              diffuseColor : new SFColor([0,0.446809,0.132331])})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_2"),
                                              url : new MFString(["grass.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          colorIndex : new MFInt32([0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1]),
                                          texCoordIndex : new MFInt32([0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1]),
                                          coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0,0.446809,0.132331,0.957447,0.642839,0.0227095])})),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0.136057,0.214122,0.467063,0,0,0.719628,0.467063,0.550267,1,0.359043,0.798069,0.876129,0.467063,1.13607])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.931543,0.371576,0.931536,0,0.371576,1.53413,0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0,0.371576,-1.66309])}))}))})])})])}),

                            new Transform({
                              translation : new SFVec3f([-0.07416,1.25831,-0.0698821]),
                              scale : new SFVec3f([0.627701,3.17401,0.743179]),
                              children : new MFNode([
                                new ProximitySensor({
                                  DEF : new SFString("_3"),
                                  size : new SFVec3f([3.7886,1.30312,4.00496]),
                                  center : new SFVec3f([-0.0393303,-0.199244,0.0114513])})])})])}),

                        new Transform({
                          DEF : new SFString("platform_1"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-0.0705032,-0.371576,0.0145798]),
                              rotation : new SFRotation([0,-1,0,0.374402]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.433333),
                                          diffuseColor : new SFColor([0.957447,0.642839,0.0227095])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_1")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      colorIndex : new MFInt32([1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]),
                                      texCoordIndex : new MFInt32([0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1]),
                                      coordIndex : new MFInt32([1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.957447,0.642839,0.0227095,0,0.946524,0.280331])})),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,1,0,0,1,1,0.5,0,0.5,1,0.5,0,0.5,1,1,0.5,0,0.5,0,0.5,1,0.5,1,0.5,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0,0.371576,-1.66309,0,0.371576,1.53413,0.931543,0,-0.931536,1.49983,0,0.523687,-0.931543,0,0.931536,-1.31445,0,-0.491099,0,0,-1.66309,0,0,1.53413,0.0606067,-0.931541,0.00472414])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-0.0705032,-0.371576,0.0145798]),
                              rotation : new SFRotation([0,-1,0,0.374402]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.358095),
                                          diffuseColor : new SFColor([0,0.446809,0.132331])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_2")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      colorIndex : new MFInt32([0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1]),
                                      texCoordIndex : new MFInt32([0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1]),
                                      coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0,0.446809,0.132331,0.957447,0.642839,0.0227095])})),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.136057,0.214122,0.467063,0,0,0.719628,0.467063,0.550267,1,0.359043,0.798069,0.876129,0.467063,1.13607])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.931543,0.371576,0.931536,0,0.371576,1.53413,0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0,0.371576,-1.66309])}))}))})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("platformAnimTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("platformAnimTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("platformAnim"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
