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
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
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
              content : new SFString("Mon, 09 Nov 2015 13:19:33 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 09 Nov 2015 13:19:33 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("TimeSensor_Innertube-TIMER"),
                      cycleInterval : new SFTime(2),
                      loop : new SFBool(true),
                      startTime : new SFTime(1)}),

                    new Transform({
                      DEF : new SFString("Innertube_boolean-ROOT"),
                      translation : new SFVec3f([-0.05191,0,-0.05077]),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Innertube_boolean-TIMER"),
                          cycleInterval : new SFTime(2)}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0]),
                                  emissiveColor : new SFColor([0.007843,0.3922,0.6157]),
                                  shininess : new SFFloat(0)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Innertube_boolean-FACES"),
                              colorIndex : new MFInt32([0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]),
                              coordIndex : new MFInt32([0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Innertube_boolean-COORD"),
                                  point : new MFVec3f([-2.523,0,2.66,2.605,0,2.66,-2.523,0,-5.753,2.605,0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753])}))}))}),

                        new Transform({
                          DEF : new SFString("Innertube-ROOT"),
                          translation : new SFVec3f([0.05259,-0.002682,0.04626]),
                          rotation : new SFRotation([-0.00217899,0.999995,0.00217899,1.571]),
                          scaleOrientation : new SFRotation([0.834748,-0.4924,-0.24645,0.00573601]),
                          children : new MFNode([
                            new OrientationInterpolator({
                              DEF : new SFString("Innertube-ROT-INTERP"),
                              key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                              keyValue : new MFRotation([-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                      shininess : new SFFloat(0.25)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Innertube-FACES"),
                                  creaseAngle : new SFFloat(3),
                                  colorIndex : new MFInt32([0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]),
                                  coordIndex : new MFInt32([0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Innertube-COORD"),
                                      point : new MFVec3f([0,0,-2.37,0,0.4114,-2.237,0,0.4114,-1.104,0,0,-0.9704,0,-0.4114,-1.104,0,-0.6657,-1.454,0,-0.6657,-1.887,0,-0.4114,-2.237,1.676,0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0,0,2.237,0.4114,0,1.104,0.4114,0,0.9704,0,0,1.104,-0.4114,0,1.454,-0.6657,0,1.887,-0.6657,0,2.237,-0.4114,0,1.676,0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0,0,2.37,0,0.4114,2.237,0,0.4114,1.104,0,0,0.9704,0,-0.4114,1.104,0,-0.6657,1.454,0,-0.6657,1.887,0,-0.4114,2.237,-1.676,0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0,0,-2.237,0.4114,0,-1.104,0.4114,0,-0.9704,0,0,-1.104,-0.4114,0,-1.454,-0.6657,0,-1.887,-0.6657,0,-2.237,-0.4114,0,-1.676,0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582])}))}))}),

                            new Transform({
                              DEF : new SFString("Innertube_L_leg-ROOT"),
                              translation : new SFVec3f([2.832,-0.4993,-0.8342]),
                              rotation : new SFRotation([0.0107304,-0.00139006,0.999942,0.3562]),
                              scaleOrientation : new SFRotation([0,-0.0296788,-0.999559,0.0631478]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Innertube_L_leg-POS-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFVec3f([2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("Innertube_L_leg-ROT-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Innertube_L_leg-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      colorIndex : new MFInt32([0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]),
                                      coordIndex : new MFInt32([0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Innertube_L_leg-COORD"),
                                          point : new MFVec3f([0.2432,0,0,0.172,0,-0.172,0,0,-0.2432,-0.172,0,-0.172,-0.2432,0,0,-0.172,0,0.172,0,0,0.2432,0.172,0,0.172,0.2432,1.5,0,0.172,1.5,-0.172,0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0,-0.172,1.5,0.172,0,1.5,0.2432,0.172,1.5,0.172])}))}))}),

                                new Transform({
                                  DEF : new SFString("Innertube_L_flipper-ROOT"),
                                  translation : new SFVec3f([-0.05453,-1.021,-0.05153]),
                                  rotation : new SFRotation([-0.549493,-0.637292,-0.540293,1.897]),
                                  scale : new SFVec3f([1,1.343,0.9976]),
                                  scaleOrientation : new SFRotation([-0.317708,0.946024,-0.0640316,0.2952]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Innertube_L_flipper-POS-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFVec3f([-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_L_flipper-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8941,0.8392,0.6])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Innertube_L_flipper-FACES"),
                                          colorIndex : new MFInt32([8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]),
                                          coordIndex : new MFInt32([8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.6588,0.451,0,0.6588,0.451,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,0.6588,0.451,0,0.6588,0.451,0,0.6588,0.451,0])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Innertube_L_flipper-COORD"),
                                              point : new MFVec3f([-0.3059,0,1.228,0.3059,0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0,0.07611,-1.258,0,0.1522,1.374,0,0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037])}))}))}),

                                    new Transform({
                                      DEF : new SFString("Innertube_foot_L-ROOT"),
                                      translation : new SFVec3f([0.009344,0.2285,1.015]),
                                      rotation : new SFRotation([0.548102,0.543802,-0.635502,2.018]),
                                      scale : new SFVec3f([1.002,1,0.7445]),
                                      scaleOrientation : new SFRotation([-0.0369916,0.178508,-0.983243,0.2825]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Innertube_foot_L-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                              color : new SFNode(
                                                new Color({
                                                  color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Innertube_foot_L-COORD"),
                                                  point : new MFVec3f([0,0.2454,0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0])}))}))})])})])})])}),

                            new Transform({
                              DEF : new SFString("Innertube_R_leg-ROOT"),
                              translation : new SFVec3f([3.222,-0.2834,0.8137]),
                              rotation : new SFRotation([0,0,1,0.6545]),
                              scaleOrientation : new SFRotation([0,-0.00266799,0.999996,0.7854]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Innertube_R_leg-POS-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFVec3f([3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("Innertube_R_leg-ROT-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      USE : new SFString("Innertube_L_leg-FACES")}))}),

                                new Transform({
                                  DEF : new SFString("Innertube_R_flipper-ROOT"),
                                  translation : new SFVec3f([0.7328,-0.7119,0.00338]),
                                  rotation : new SFRotation([-0.255398,-0.938192,-0.233598,1.627]),
                                  scale : new SFVec3f([1,1.343,0.9976]),
                                  scaleOrientation : new SFRotation([-0.317708,0.946024,-0.0640316,0.2952]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Innertube_R_flipper-POS-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFVec3f([0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_R_flipper-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488007,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.8941,0.8392,0.6])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Innertube_L_flipper-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Innertube_foot_R-ROOT"),
                                      translation : new SFVec3f([0.000116,0.2244,0.9932]),
                                      rotation : new SFRotation([0.552227,0.536026,-0.638531,2.029]),
                                      scale : new SFVec3f([1.002,1,0.7445]),
                                      scaleOrientation : new SFRotation([-0.102804,0.168407,-0.980342,0.2838]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Innertube_foot_R-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                              color : new SFNode(
                                                new Color({
                                                  color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Innertube_foot_R-COORD"),
                                                  point : new MFVec3f([0,0.2454,0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0])}))}))})])})])})])}),

                            new Transform({
                              DEF : new SFString("Innertube_Dummy-ROOT"),
                              translation : new SFVec3f([-0.004756,-0.7784,0.073]),
                              rotation : new SFRotation([0.554691,-0.554691,0.62019,2.031]),
                              scaleOrientation : new SFRotation([0.745084,-0.0868981,0.661286,0.1436]),
                              children : new MFNode([
                                new OrientationInterpolator({
                                  DEF : new SFString("Innertube_Dummy-ROT-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581874,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031])}),

                                new Transform({
                                  DEF : new SFString("Innertube_L_butt-ROOT"),
                                  translation : new SFVec3f([-0.4121,0.006308,-0.3326]),
                                  rotation : new SFRotation([-0.992815,-0.0846113,-0.0846113,1.578]),
                                  scale : new SFVec3f([1.47,1.55,1.893]),
                                  children : new MFNode([
                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_L_butt-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.6902,0.102,0.102])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Innertube_L_butt-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          colorIndex : new MFInt32([0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]),
                                          coordIndex : new MFInt32([0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Innertube_L_butt-COORD"),
                                              point : new MFVec3f([-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0,0.3378,0.1463,-0.3416,0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0,-0.2415,-0.3416,0.2415,0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0,0.2415,-0.3416,-0.2415,0,-0.4831,0])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("Innertube_R_butt-ROOT"),
                                  translation : new SFVec3f([0.3298,0.006308,-0.3294]),
                                  rotation : new SFRotation([-0.999996,-0.00210999,-0.00210999,1.571]),
                                  scale : new SFVec3f([1.47,1.55,1.893]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.6902,0.102,0.102])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Innertube_L_butt-FACES")}))})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_flipper-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_flipper-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_leg-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_leg-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_R_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_flipper-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_flipper-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_leg-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_leg-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_Dummy-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_Dummy-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_boolean-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_butt-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Innertube_L_butt-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_butt-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_butt-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube_Dummy-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_Dummy-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Innertube-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube-ROOT"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());