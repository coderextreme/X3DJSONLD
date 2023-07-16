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
var SFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:00 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:00 GMT")})])})),
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

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              bboxSize : new SFVec3f([79.18,8.643,80.31]),
              bboxCenter : new SFVec3f([40.37,4.268,-39.8]),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("s1"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([125.37,0,-14.9781]),
                          rotation : new SFRotation([0,1,0,3.1416]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_1"),
                              translation : new SFVec3f([62.6844,2.97856,-0.126466]),
                              rotation : new SFRotation([2.14324e-7,1,-7.05434e-7,3.14159]),
                              scale : new SFVec3f([0.999997,0.999999,0.999997]),
                              scaleOrientation : new SFRotation([-4.92972e-8,1,-1.5979e-7,2.35619]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["statue.x3d"]),
                                  bboxSize : new SFVec3f([2.53738,8.17662,1.36748]),
                                  bboxCenter : new SFVec3f([-0.000528336,1.06796,0.197238])})])})])}),

                        new Transform({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      DEF : new SFString("s2"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([64.9331,0.0381114,19.3544]),
                          rotation : new SFRotation([0,1,0,1.57079]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_1")})])}),

                        new Transform({
                          translation : new SFVec3f([54.9862,0.0380814,-109.304]),
                          rotation : new SFRotation([-6.43132e-7,-1,6.57961e-7,1.5708]),
                          scaleOrientation : new SFRotation([5.0504e-7,1,-1.29424e-7,2.35619]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_1")})])}),

                        new Transform({
                          translation : new SFVec3f([-4.33523,0.0380588,-34.9976]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_1")})])})])}),

                    new Transform({
                      DEF : new SFString("c1"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("cat1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_2"),
                              translation : new SFVec3f([18.2842,0.0195997,-64.4897]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["katze.x3d"]),
                                  bboxSize : new SFVec3f([8.13439,3.42439,1.81039]),
                                  bboxCenter : new SFVec3f([0.239496,1.51194,5.96046e-8])})])})])}),

                        new Transform({
                          DEF : new SFString("cat2"),
                          translation : new SFVec3f([0,0,4.04162]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_2")})])})])}),

                    new Transform({
                      DEF : new SFString("c2"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("cat3"),
                          translation : new SFVec3f([9.95345,0,0]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_3"),
                              translation : new SFVec3f([55.4477,0.0226387,-76.2775]),
                              rotation : new SFRotation([0,1,0,4.71239]),
                              scale : new SFVec3f([0.999998,0.999999,0.999998]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["katze.x3d"]),
                                  bboxSize : new SFVec3f([8.13439,3.42439,1.81039]),
                                  bboxCenter : new SFVec3f([0.239496,1.51194,5.96046e-8])})])})])}),

                        new Transform({
                          DEF : new SFString("cat4"),
                          translation : new SFVec3f([14.1683,0,0]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("_3")})])})])})])}),

                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("o2"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("osiris3"),
                              translation : new SFVec3f([44.8772,-0.191987,-5.01077]),
                              rotation : new SFRotation([0,-1,0,1.57079]),
                              scale : new SFVec3f([0.999999,0.999999,0.999999]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("_4"),
                                  translation : new SFVec3f([2.63757,4.50009,-34.9554]),
                                  scale : new SFVec3f([3.29392,3.29392,3.29393]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.16),
                                              diffuseColor : new SFColor([1,1,1])})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_5"),
                                              url : new MFString(["osiris-bump1.png"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              scale : new SFVec2f([-1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("osiris4"),
                              translation : new SFVec3f([10.4897,3.32269,-62.3195]),
                              rotation : new SFRotation([0,-1,0,1.5708]),
                              scale : new SFVec3f([2.53623,2.53622,2.53619]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_5")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      ccw : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0])}))}))})])}),

                            new Transform({
                              DEF : new SFString("o1"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.662268,0.128732,-6.7524]),
                                  scale : new SFVec3f([0.807081,0.807081,0.807058]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_4")})])}),

                                new Transform({
                                  translation : new SFVec3f([29.8905,0.256301,-0.0143967]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_4")})])})])}),

                            new Transform({
                              DEF : new SFString("osiris5"),
                              translation : new SFVec3f([62.4756,4.59252,-74.97]),
                              scale : new SFVec3f([3.77149,3.31668,2.87925]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_5")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("p2"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("paint3"),
                              translation : new SFVec3f([39.9659,4.63138,-17.3407]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([6.1494,7.70085,3.18781]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1]),
                                          specularColor : new SFColor([1,1,1]),
                                          shininess : new SFFloat(0.329787)})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          DEF : new SFString("_6"),
                                          url : new MFString(["wallpaint1.jpg"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      ccw : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0])}))}))})])}),

                            new Transform({
                              DEF : new SFString("paint2"),
                              translation : new SFVec3f([35.0232,4.63138,-17.3407]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([6.1494,7.70085,3.18781]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_6")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("hy1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("hyroglyphen3"),
                              translation : new SFVec3f([27.6082,4.46924,-79.9542]),
                              scale : new SFVec3f([5.92555,3.78984,3.56043]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          DEF : new SFString("_7"),
                                          url : new MFString(["schrift.jpg"])})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([3,2])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0])}))}))})])}),

                            new Transform({
                              DEF : new SFString("hyroglyphen4"),
                              translation : new SFVec3f([37.6913,4.6328,-79.9542]),
                              scale : new SFVec3f([3.68301,3.62628,3.56043]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_7")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([2,2])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([13,2,11,-1,2,9,11,-1,4,13,10,-1,13,11,10,-1,14,4,16,-1,4,10,16,-1,17,14,16,-1,17,1,14,-1,9,12,11,-1,9,7,12,-1,21,18,19,-1,21,3,18,-1,7,19,12,-1,7,21,19,-1,12,6,11,-1,6,10,11,-1,10,15,16,-1,10,6,15,-1,8,16,15,-1,8,17,16,-1,18,5,19,-1,5,20,19,-1,20,12,19,-1,20,6,12,-1,15,6,23,-1,6,20,23,-1,24,15,23,-1,24,8,15,-1,20,22,23,-1,20,5,22,-1,0,23,22,-1,0,24,23,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0])}))}))})])}),

                            new Transform({
                              DEF : new SFString("hyroglyphen2"),
                              translation : new SFVec3f([39.872,4.6328,-77.6183]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([3.68301,3.62628,3.56043]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_7")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          DEF : new SFString("_8"),
                                          scale : new SFVec2f([2,2])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      ccw : new SFBool(false),
                                      coordIndex : new MFInt32([13,9,11,-1,13,2,9,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,17,1,16,-1,1,14,16,-1,9,7,11,-1,7,12,11,-1,21,3,19,-1,3,18,19,-1,7,21,12,-1,21,19,12,-1,12,10,11,-1,12,6,10,-1,10,6,16,-1,6,15,16,-1,8,17,15,-1,17,16,15,-1,18,20,19,-1,18,5,20,-1,20,6,19,-1,6,12,19,-1,15,20,23,-1,15,6,20,-1,24,8,23,-1,8,15,23,-1,20,5,23,-1,5,22,23,-1,0,24,22,-1,24,23,22,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0])}))}))})])}),

                            new Transform({
                              DEF : new SFString("hyroglyphen1"),
                              translation : new SFVec3f([2.6231,4.6328,-79.9542]),
                              scale : new SFVec3f([3.68301,3.62628,3.56043]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_7")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          USE : new SFString("_8")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("paint1_1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("paint1"),
                              translation : new SFVec3f([79.9639,4.54995,-42.4807]),
                              rotation : new SFRotation([0,1,0,4.71239]),
                              scale : new SFVec3f([16.1839,7.73213,3.74369]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("_9"),
                                          ambientIntensity : new SFFloat(0.16),
                                          diffuseColor : new SFColor([1,1,1])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          DEF : new SFString("_10"),
                                          url : new MFString(["wallpaint1.jpg"])})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          DEF : new SFString("_11"),
                                          scale : new SFVec2f([4,2])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,5,7,-1,5,6,7,-1,6,1,7,-1,6,4,1,-1,5,3,6,-1,3,8,6,-1,8,4,6,-1,8,2,4,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,0,1,0.25,1,0.25,0,0.125,1,0.125,0,0.125,0.5,0,0.5,0.25,0.5])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-2.0078,-0.5,0,-2.0078,0.5,0,-1.0039,0.5,0,-1.0039,-0.5,0,-1.50585,0.5,0,-1.50585,-0.5,0,-1.50585,0,0,-2.0078,0,0,-1.0039,0,0])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([79.9639,4.54995,-42.4807]),
                              rotation : new SFRotation([0,1,0,4.71239]),
                              scale : new SFVec3f([16.1839,7.73213,3.74369]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_10")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          USE : new SFString("_11")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.25,0,0.375,0,0.25,0.5,0.375,0.5,0.5,0,0.25,1,0.375,1,0.5,0.5,0.5,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1.0039,-0.5,0,-0.50195,-0.5,0,-1.0039,0,0,-0.50195,0,0,0,-0.5,0,-1.0039,0.5,0,-0.50195,0.5,0,0,0,0,0,0.5,0])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([79.9639,4.54995,-42.4807]),
                              rotation : new SFRotation([0,1,0,4.71239]),
                              scale : new SFVec3f([16.1839,7.73213,3.74369]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_10")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          USE : new SFString("_11")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.5,0,0.625,0,0.5,0.5,0.625,0.5,0.75,0,0.5,1,0.625,1,0.75,0.5,0.75,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-0.5,0,0.50195,-0.5,0,0,0,0,0.50195,0,0,1.0039,-0.5,0,0,0.5,0,0.50195,0.5,0,1.0039,0,0,1.0039,0.5,0])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([79.9639,4.54995,-42.4807]),
                              rotation : new SFRotation([0,1,0,4.71239]),
                              scale : new SFVec3f([16.1839,7.73213,3.74369]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          USE : new SFString("_10")})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          USE : new SFString("_11")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0.75,0,0.875,0,0.75,0.5,0.875,0.5,1,0,0.75,1,0.875,1,1,0.5,1,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([1.0039,-0.5,0,1.50585,-0.5,0,1.0039,0,0,1.50585,0,0,2.0078,-0.5,0,1.0039,0.5,0,1.50585,0.5,0,2.0078,0,0,2.0078,0.5,0])}))}))})])})])})])}))})])})])}))});
console.log(X3D0.toXMLNode());
