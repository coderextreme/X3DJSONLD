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
var SFVec3f = require('./x3d.mjs');
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
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
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
              content : new SFString("Fri, 13 Nov 2015 10:12:48 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 13 Nov 2015 10:12:48 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("stamm"),
                      translation : new SFVec3f([0,-0.0075931,0]),
                      scale : new SFVec3f([1,0.826969,1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.223404),
                                  diffuseColor : new SFColor([0.517271,1,0.431241])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["tikirinde1.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  rotation : new SFFloat(1.44513),
                                  scale : new SFVec2f([2.10744,5.89407])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(3.14159),
                              colorIndex : new MFInt32([0,8,6,9,-1,0,15,0,0,-1,0,0,0,0,0,-1,11,11,11,0,-1,11,11,0,0,-1,11,11,0,13,-1,0,11,13,10,-1,11,0,10,0,-1,11,0,0,11,-1,0,11,0,16,-1,0,0,16,0,-1,11,0,0,15,-1,11,11,15,0,-1,7,17,16,8,-1,0,7,8,0,-1,12,0,0,0,-1,17,12,0,16,-1,11,11,11,-1,11,11,11,-1,11,11,7,0,-1,11,11,0,12,-1,11,11,12,7,-1,11,11,17,7,-1,11,11,7,12,-1,11,11,12,17,-1,6,5,2,9,-1,2,2,0,9,-1,3,0,14,-1,0,2,14,-1,2,3,14,-1,4,0,0,-1,0,3,0,-1,3,4,0,-1,8,16,0,6,-1,16,0,0,0,-1,0,4,5,0,-1,5,6,0,-1,0,14,0,-1,0,13,14,-1,13,1,14,-1,1,0,14,-1,1,0,0,-1,1,9,0,-1,1,0,9,-1,0,10,9,-1,10,0,9,-1,10,0,0,-1,15,0,0,-1,0,9,0,-1,0,0,9,-1,0,13,0,0,-1,0,0,10,0,-1,0,10,13,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,1,13,0,-1,0,13,0,0,-1,0,0,1,0,-1,0,0,11,-1,0,0,11,-1,0,0,11,-1,0,0,21,19,-1,21,11,19,-1,0,0,18,22,-1,18,11,22,-1,0,0,23,25,-1,23,11,25,-1,20,24,11,-1,20,0,0,24,-1]),
                              texCoordIndex : new MFInt32([28,44,46,40,-1,45,27,49,0,-1,4,13,2,48,49,-1,21,19,20,22,-1,19,21,39,3,-1,20,19,3,53,-1,22,20,53,52,-1,82,83,88,84,-1,25,23,24,26,-1,73,74,75,76,-1,24,23,6,29,-1,94,95,100,96,-1,25,26,27,45,-1,81,80,76,77,-1,31,35,44,28,-1,97,98,99,100,-1,5,38,29,6,-1,36,34,37,-1,32,30,33,-1,30,32,35,31,-1,33,30,31,38,-1,32,33,38,35,-1,78,79,80,81,-1,37,34,35,38,-1,36,37,38,5,-1,46,47,8,40,-1,8,42,43,40,-1,56,59,9,-1,58,57,9,-1,57,56,9,-1,1,0,49,-1,48,41,49,-1,41,1,49,-1,77,76,10,71,-1,76,75,72,10,-1,72,69,70,10,-1,70,71,10,-1,65,9,59,-1,65,64,9,-1,64,60,9,-1,60,58,9,-1,7,3,39,-1,7,40,43,-1,7,39,40,-1,84,88,85,-1,88,86,85,-1,88,87,86,-1,96,100,93,-1,100,92,93,-1,100,99,92,-1,67,64,65,68,-1,90,87,88,91,-1,15,52,53,11,-1,13,4,14,-1,2,13,14,-1,12,2,14,-1,62,60,64,63,-1,17,53,3,18,-1,18,3,7,16,-1,62,63,61,-1,17,18,55,-1,18,16,54,-1,12,14,104,102,-1,104,50,102,-1,67,68,101,105,-1,101,66,105,-1,15,11,106,108,-1,106,51,108,-1,103,107,89,-1,103,90,91,107,-1]),
                              coordIndex : new MFInt32([12,10,0,8,-1,11,13,9,6,-1,17,48,16,4,9,-1,21,20,22,23,-1,20,21,15,14,-1,22,20,14,18,-1,23,22,18,19,-1,21,23,19,15,-1,27,28,29,30,-1,28,27,11,26,-1,29,28,26,25,-1,30,29,25,13,-1,27,30,13,11,-1,31,32,26,10,-1,33,31,10,12,-1,34,33,12,25,-1,32,34,25,26,-1,39,38,40,-1,35,36,37,-1,36,35,31,33,-1,37,36,33,34,-1,35,37,34,31,-1,38,39,32,31,-1,40,38,31,34,-1,39,40,34,32,-1,0,1,43,8,-1,43,3,2,8,-1,5,4,44,-1,2,3,44,-1,3,5,44,-1,7,6,9,-1,4,5,9,-1,5,7,9,-1,10,26,45,0,-1,26,11,6,45,-1,6,7,1,45,-1,1,0,45,-1,16,44,4,-1,16,18,44,-1,18,41,44,-1,41,2,44,-1,41,14,15,-1,41,8,2,-1,41,15,8,-1,15,19,8,-1,19,9,8,-1,19,17,9,-1,13,25,9,-1,25,8,9,-1,25,12,8,-1,46,18,16,47,-1,49,17,19,50,-1,50,19,18,46,-1,48,17,49,-1,16,48,49,-1,47,16,49,-1,51,41,18,52,-1,52,18,14,53,-1,53,14,41,51,-1,51,52,42,-1,52,53,42,-1,53,51,42,-1,47,49,55,54,-1,55,24,54,-1,46,47,54,56,-1,54,24,56,-1,50,46,56,57,-1,56,24,57,-1,55,57,24,-1,55,49,50,57,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.71123,0.580605,0.343964,0.620321,0.419319,0.198202,0.2078,0.31016,0.114995,0.0990877,0.26738,0.0476075,0.143311,0.213904,0.0793072,0.110572,0.144385,0.0274343,0.594375,0.625668,0.304958,0.696155,0.71123,0.362339,0.71123,0.697836,0.345221,0.71123,0.644574,0.320526,0.515547,0.566845,0.286387,0.283422,0.231369,0.137068,0.71123,0.506591,0.300014,0.197861,0.161522,0.0956893,0.636364,0.519488,0.307758,0.540107,0.420913,0.252499,0.171123,0.139694,0.0827583,0.470588,0.384159,0.227585,0.516876,0.421946,0.249971,0.516876,0.421946,0.249971,0.512338,0.418242,0.247776,0.512338,0.418242,0.247776,0.504641,0.411958,0.244054,0.504641,0.411958,0.244054,0.499112,0.407445,0.24138,0.499112,0.407445,0.24138])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.320546,0.353437,0.280193,0,0.594239,0.792227,0.60048,0.819893,0.51912,0.792227,0.127327,0.838215,0.211976,0.550614,0.557657,0.704589,0.382625,0,0.25476,0.481398,0.256392,0.437294,0.679468,0.972836,0.684808,0.957625,0.55668,0.792227,0.639652,0.972836,0.632,0.978698,0.800893,0.934114,0.803412,0.964137,0.813818,0.979227,0.751288,1.20668,0.751288,1.20668,0.731998,1.20668,0.731998,1.20668,0.0825856,1.08452,0.0993478,1.08452,0.0825856,1.08452,0.0993478,1.08452,0.287095,0.550614,0.287095,0.550614,0.316871,0.563592,0.257855,1.13835,0.202446,0.838215,0.22183,1.13835,0.257855,1.13835,0,1.18891,0.127327,0.838215,0,1.18891,0.0320544,1.18891,0.202446,0.838215,0.552927,0.894118,0.397877,0.400771,0.485057,0,0.518194,0.00200437,0.425523,0.353437,0.211976,0.550614,0.211976,0.550614,0.320546,0.353437,0.280193,0,0.425523,0.353437,0.388792,0.346673,0.746637,1.1185,0.769336,1.12937,0.503816,0.80395,0.5669,0.792227,0.996124,0.916981,1,0.935779,0.412513,0,0.133479,0.00273005,0.183268,0.481398,0.326251,0.481398,0.15066,0.959684,0.0513772,1.26249,0.0873573,1.27231,0.14446,1.3132,0.263023,1.07905,0.365339,1.07905,0.672851,1.52025,0.414016,1.32505,0.476631,1.30433,0.378,0,0.12453,0,0.169758,0.437294,0.299641,0.437294,0.665563,1.34183,0.686302,1.34183,0.335148,0.681253,0.242206,0.681253,0.149264,0.681253,0.178576,1.47099,0.218236,1.47099,0.0929417,1.03709,0,1.03709,0,0.984902,0.0220911,0.984902,0.195223,0.626947,0.290148,0.0619541,0.396982,0,0.443684,0.510259,0.357656,0.523684,0.685614,0.90206,0.545866,0.717097,0.484613,0.723809,0.123643,0.0608414,0.228559,0,0.593616,0.829819,0.574765,0.829819,0.274422,0.229363,0.102988,0.570438,0,0.552815,0.105456,0.229363,0.189939,0.243959,0.565775,1.40243,0.712897,1.03071,0.610836,0.803088,0.68939,1.04056,0.539008,1.41931,0.722866,1.04842,0.584274,0.812191,0.700095,1.0534])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.228233,1.41172,0.233884,-0.389413,5.42659e-10,0.379893,0.19107,1.41172,0.233884,0.561223,0.00800598,0.379893,0.19107,1.41172,-0.185419,0.428866,5.42659e-10,-0.438386,-0.228233,1.41172,-0.185419,-0.389413,5.42659e-10,-0.438386,0.0806466,1.60078,0.235453,0.0443575,1.3847,-0.13716,-0.661891,2.19929,0.300044,-0.661891,2.19929,-0.300044,-0.361847,2.19929,0.300044,-0.361847,2.19929,-0.300044,0.889893,3.27486,0.473702,0.699956,3.57134,0.566525,0.864967,3.16436,-0.300044,0.564923,3.16436,-0.300044,0.755766,3.16436,0,0.503793,3.21118,0,1.49226,4.8198,1.24742,1.41521,4.8198,1.24742,1.49226,4.8198,1.17037,1.41521,4.8198,1.17037,1.93139,4.42109,-1.89374,-0.242911,2.25113,0,-0.661891,2.19929,0,-1.17871,4.33184,-1.43368,-1.17871,4.33184,-1.36673,-1.11176,4.33184,-1.36673,-1.11176,4.33184,-1.43368,-1,3.34805,0.781914,-1,3.34805,0.48187,-0.699956,3.34805,0.674576,-0.699956,3.34805,0.48187,-0.622531,4.54686,1.40067,-0.478638,4.54686,1.40067,-0.478638,4.54686,1.25677,-1.50858,4.74882,0.205416,-1.50858,4.74882,0.0773827,-1.38054,4.74882,0.0773827,0.718849,2.81431,0.329508,3.90238,3.36756,1.01264,0.0197264,5.42659e-10,0.692154,0.343474,1.41172,0.0242326,-0.371208,1.41172,-0.0457976,1.20539,3.88576,-0.442793,1.22672,3.825,-0.626414,0.714945,3.16436,-0.300044,1.04636,3.88576,-0.656429,1.01579,3.90917,-0.442793,1.69039,3.73109,0.515146,1.70046,3.85101,0.347692,1.74202,3.91128,0.482026,1.65089,4.46484,-1.31656,1.56505,4.51271,-1.35055,1.66864,4.53767,-1.26995,1.58632,4.5674,-1.29417])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([0.24532,-4.12215,-0.0228471]),
                  rotation : new SFRotation([0.00153048,0.707106,0.707106,3.14465]),
                  scale : new SFVec3f([4.13193,4.13192,4.13193]),
                  scaleOrientation : new SFRotation([0.580472,-0.287084,0.761994,0.131921]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["baum1shl.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,-1,-1,1,1,-1,1,1,1,1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([1.54337,2.59416,-2.6053]),
                  rotation : new SFRotation([-0.241838,-0.968202,-0.0640334,0.533895]),
                  scale : new SFVec3f([1,0.999998,1]),
                  scaleOrientation : new SFRotation([0.0963277,-0.995345,0.00300406,0.287282]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_2"),
                              url : new MFString(["blatt3-1.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,1,8,7,-1,8,2,5,7,-1,3,9,6,5,-1,9,0,4,6,-1]),
                          coordIndex : new MFInt32([4,1,7,6,-1,7,2,5,6,-1,3,8,6,5,-1,8,0,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([1,0,1,1,0.695312,1,0.695312,0,1,0.5,0.695312,0.5,0.847656,0.5,0.847656,0.5,0.847656,1,0.847656,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.965324,0.907607,1,1,0.781253,-1,0.390625,0.643233,-0.742192,0.390624,0.743985,1,1,0.885647,0,0.390624,1,0,0.695312,1,0,0.695312,0.895606,-1,0.695312,1,1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-1.4656,2.84882,-2.7174]),
                  rotation : new SFRotation([0.445765,0.875745,-0.185375,0.886674]),
                  scale : new SFVec3f([0.999999,1,1]),
                  scaleOrientation : new SFRotation([-0.0878126,-0.987321,-0.132239,0.494886]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,2,8,7,-1,8,3,5,7,-1,0,9,6,5,-1,9,1,4,6,-1]),
                          coordIndex : new MFInt32([4,2,7,6,-1,7,3,5,6,-1,0,8,6,5,-1,8,1,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,0.347656,0,0.347656,1,0.173828,0,0.173828,1,0.173828,0.5,0.173828,0.5,0.347656,0.5,0,0.5])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,-1,-1,1,1,-0.304688,1,1,-0.304688,1,-1,-0.652344,1.13731,1,-0.652344,1,-1,-0.652344,1.13731,0,-0.304688,1,0,-1,1,0])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-2.74709,2.64864,-0.620067]),
                  rotation : new SFRotation([0.332528,0.923068,-0.193316,1.12409]),
                  scale : new SFVec3f([1.19894,1.19894,1.19894]),
                  scaleOrientation : new SFRotation([-0.131112,0.986219,0.100909,0.522615]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,2,8,7,-1,8,3,5,7,-1,0,9,6,5,-1,9,1,4,6,-1]),
                          coordIndex : new MFInt32([4,2,7,6,-1,7,3,5,6,-1,0,8,6,5,-1,8,1,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.347656,0,0.695312,0,0.695312,1,0.347656,1,0.695312,0.5,0.347656,0.5,0.521484,0.5,0.521484,0.5,0.521484,1,0.521484,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.304688,1,1,0.390624,1,1,0.390625,1,-1,-0.304688,1,-1,0.390624,1,0,-0.304688,1,0,-0.0188508,1.44432,2.38419e-7,0.0429684,1,-1,-0.0188508,1.44432,1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-0.308425,2.80232,2.29265]),
                  rotation : new SFRotation([-0.01247,0.990774,-0.134951,3.32419]),
                  scale : new SFVec3f([0.999998,0.999998,0.999998]),
                  scaleOrientation : new SFRotation([0.264941,0.493822,-0.828219,0.390466]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,2,8,7,-1,8,3,5,7,-1,0,9,6,5,-1,9,1,4,6,-1]),
                          coordIndex : new MFInt32([4,2,7,6,-1,7,3,5,6,-1,0,8,6,5,-1,8,1,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.347656,0,0.695312,0,0.695312,1,0.347656,1,0.695312,0.5,0.347656,0.5,0.521484,0.5,0.521484,0.5,0.521484,1,0.521484,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.304688,1,1,0.390624,1,1,0.390625,1,-1,-0.304688,1,-1,0.390624,1,0,-0.304688,1,0,0.0429683,1.1826,0,0.0429684,1,-1,0.0429683,1.1826,1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([2.6678,3.09783,1.80826]),
                  rotation : new SFRotation([-0.0357081,0.991872,-0.122123,3.70614]),
                  scale : new SFVec3f([1,0.999998,1]),
                  scaleOrientation : new SFRotation([0.0341282,-0.995902,0.083751,0.448645]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,1,8,7,-1,8,2,5,7,-1,3,9,6,5,-1,9,0,4,6,-1]),
                          coordIndex : new MFInt32([4,1,7,6,-1,7,2,5,6,-1,3,8,6,5,-1,8,0,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([1,0,1,1,0.695312,1,0.695312,0,1,0.5,0.695312,0.5,0.847656,0.5,0.847656,0.5,0.847656,1,0.847656,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1,1,1,1,1,-1,0.390625,1,-1,0.390624,1,1,1,1,0,0.390624,1,0,0.695312,1.15288,0,0.695312,1,-1,0.695312,1.15288,1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([3.77619,1.50183,1.66059]),
                  rotation : new SFRotation([0.082089,0.991506,0.100879,4.49937]),
                  scale : new SFVec3f([0.999998,1,1]),
                  scaleOrientation : new SFRotation([-0.798559,0.601526,0.02168,0.0527901]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          ccw : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([4,2,8,7,-1,8,3,5,7,-1,0,9,6,5,-1,9,1,4,6,-1]),
                          coordIndex : new MFInt32([4,2,7,6,-1,7,3,5,6,-1,0,8,6,5,-1,8,1,4,6,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,0.347656,0,0.347656,1,0.173828,0,0.173828,1,0.173828,0.5,0.173828,0.5,0.347656,0.5,0,0.5])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,-1,-1,1,1,-0.304688,1,1,-0.304688,1,-1,-0.652344,1.26471,1,-0.652344,1,-1,-0.652344,1.26471,0,-0.304688,1,0,-1,1,0])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());