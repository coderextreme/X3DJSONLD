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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
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
              DEF : new SFString("DropMarker"),
              children : new MFNode([
                new Switch({
                  whichChoice : new SFInt32(1),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("borderShape"),
                      translation : new SFVec3f([0,1.05704,0.00542445]),
                      scale : new SFVec3f([2.19152,1.05704,0.532585]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.170909),
                                  diffuseColor : new SFColor([0.325457,0.93617,0.0809836]),
                                  emissiveColor : new SFColor([0,0.266752,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])}),

                    new Transform({})])})])}),

            new Transform({
              DEF : new SFString("JumpSkull"),
              children : new MFNode([
                new LOD({
                  range : new MFFloat([40]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Skull_ON"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("JumpSkull_1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("skullHorizontalAnim"),
                              center : new SFVec3f([-0.00436014,0.633252,0.125815]),
                              children : new MFNode([
                                new Group({
                                  children : new MFNode([
                                    new Group({
                                      DEF : new SFString("horizontal"),
                                      children : new MFNode([
                                        new TimeSensor({
                                          DEF : new SFString("Time"),
                                          cycleInterval : new SFTime(3.7),
                                          loop : new SFBool(true),
                                          startTime : new SFTime(958599924.155),
                                          stopTime : new SFTime(1)})])}),

                                    new PositionInterpolator({
                                      DEF : new SFString("skullHorizontalAnimTranslationInterp"),
                                      key : new MFFloat([0,0.0324324,0.0648648,0.0972972,0.12973,0.162162,0.193694,0.225225,0.256756,0.288288,0.31982,0.351351,0.385135,0.418918,0.452702,0.486486,0.513513,0.54054,0.567568,0.594595,0.621622,0.648649,0.68018,0.711712,0.743244,0.774775,0.806307,0.837838,0.87027,0.902703,0.935135,0.967568,1]),
                                      keyValue : new MFVec3f([0,0,0,-0.377012,0,0,-0.825372,0,0,-1.23806,0,0,-1.50805,0,0,-1.52832,0,0,-1.22849,0,0,-0.682969,0,0,-0.0135763,0,0,0.657854,0,0,1.20949,0,0,1.5195,0,0,1.42241,0,0,0.974765,0,0,0.419613,0,0,0,0,0,-0.227434,0,0,-0.458097,0,0,-0.664528,0,0,-0.819265,0,0,-0.894844,0,0,-0.863805,0,0,-0.644793,0,0,-0.262207,0,0,0.199537,0,0,0.656019,0,0,1.02282,0,0,1.21553,0,0,1.17904,0,0,0.961765,0,0,0.641177,0,0,0.294762,0,0,0,0,0])})])}),

                                new Transform({
                                  DEF : new SFString("shadowVerticalAnim"),
                                  scale : new SFVec3f([1.87714,1.87714,1.87714]),
                                  center : new SFVec3f([0,0.00821206,0]),
                                  children : new MFNode([
                                    new Group({
                                      children : new MFNode([
                                        new Group({
                                          DEF : new SFString("vertical"),
                                          children : new MFNode([
                                            new TimeSensor({
                                              DEF : new SFString("Time_1"),
                                              cycleInterval : new SFTime(2.3),
                                              loop : new SFBool(true),
                                              startTime : new SFTime(958599924.155),
                                              stopTime : new SFTime(1)})])}),

                                        new PositionInterpolator({
                                          DEF : new SFString("shadowVerticalAnimScaleFactorInterp"),
                                          key : new MFFloat([0,0.0869565,0.152174,0.217391,0.26087,0.304348,0.391304,0.434782,0.478261,0.521739,0.565217,0.608696,0.695652,0.73913,0.782609,0.847826,0.913043,0.956522,1]),
                                          keyValue : new MFVec3f([1.87714,1.87714,1.87714,3.79584,3.79584,3.79584,2.90333,2.90333,2.90333,1.87714,1.87714,1.87714,2.34634,2.34634,2.34634,2.90465,2.90465,2.90465,1.87714,1.87714,1.87714,1.71196,1.71196,1.71196,1.68379,1.68379,1.68379,1.87714,1.87714,1.87714,2.79095,2.79095,2.79095,3.53861,3.53861,3.53861,1.87714,1.87714,1.87714,1.69583,1.69583,1.69583,1.87714,1.87714,1.87714,2.76798,2.76798,2.76798,3.42642,3.42642,3.42642,2.84544,2.84544,2.84544,1.87714,1.87714,1.87714])})])}),

                                    new Transform({
                                      DEF : new SFString("shadow"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("shadowShape"),
                                          translation : new SFVec3f([0,-0.357346,0]),
                                          scale : new SFVec3f([3.65559,3.65558,3.65559]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["shadow.png"])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  creaseAngle : new SFFloat(0.5),
                                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,-0.1])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("skullVerticalAnim"),
                                  translation : new SFVec3f([0,-0.272788,0]),
                                  center : new SFVec3f([-0.0043602,0.90604,0.125815]),
                                  children : new MFNode([
                                    new Group({
                                      children : new MFNode([
                                        new Group({
                                          USE : new SFString("vertical")}),

                                        new PositionInterpolator({
                                          DEF : new SFString("skullVerticalAnimTranslationInterp"),
                                          key : new MFFloat([0,0.0869565,0.152174,0.217391,0.26087,0.304348,0.391304,0.434782,0.478261,0.521739,0.565217,0.608696,0.695652,0.73913,0.782609,0.847826,0.913043,0.956522,1]),
                                          keyValue : new MFVec3f([0,-0.272788,0,0,0.540838,0,0,0.155838,0,0,-0.272788,0,0,-0.0267661,0,0,0.249999,0,0,-0.259513,0,0,-0.341914,0,0,-0.357559,0,0,-0.272788,0,0,0.135901,0,0,0.47149,0,0,-0.272788,0,0,-0.350793,0,0,-0.272788,0,0,0.0893181,0,0,0.356962,0,0,0.120806,0,0,-0.272788,0])})])}),

                                    new Transform({
                                      DEF : new SFString("Switch_Norm-Freeze"),
                                      center : new SFVec3f([-0.00586528,0.932163,0.15668]),
                                      children : new MFNode([
                                        new Switch({
                                          whichChoice : new SFInt32(0),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("skull_Norm"),
                                              center : new SFVec3f([0.00000190735,0.935473,0.145708]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("skull"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("skullShape"),
                                                      translation : new SFVec3f([-19.5668,-10.6345,-47.5113]),
                                                      center : new SFVec3f([19.5329,11.5643,47.6742]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([19.5757,11.0525,47.8027]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      ambientIntensity : new SFFloat(0.226102),
                                                                      diffuseColor : new SFColor([1,0,0.0146904]),
                                                                      specularColor : new SFColor([1,1,1]),
                                                                      emissiveColor : new SFColor([0.170213,0.00377935,0]),
                                                                      shininess : new SFFloat(0.265957)})),
                                                                  texture : new SFNode(
                                                                    new ImageTexture({
                                                                      url : new MFString(["fels1.png"])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  texCoordIndex : new MFInt32([46,37,49,-1,37,36,49,-1,46,49,51,-1,3,50,2,-1,47,38,4,-1,45,6,10,-1,42,45,10,-1,42,10,40,-1,10,33,40,-1,33,36,40,-1,11,12,22,-1,32,22,16,-1,32,11,22,-1,15,26,27,-1,15,23,26,-1,23,24,25,-1,23,12,24,-1,50,49,2,-1,49,34,2,-1,3,38,51,-1,38,46,51,-1,45,4,6,-1,45,47,4,-1,58,53,48,-1,58,48,35,-1,33,58,35,-1,7,62,60,-1,7,8,62,-1,8,63,62,-1,33,60,58,-1,33,7,60,-1,53,66,48,-1,53,64,66,-1,66,34,48,-1,66,0,34,-1,18,17,7,-1,18,32,16,-1,18,7,32,-1,17,19,21,-1,19,20,21,-1,65,1,0,-1,64,63,9,-1,63,8,9,-1,65,64,1,-1,64,9,1,-1,67,68,68,67,-1,69,67,67,69,-1,70,69,69,70,-1,71,70,70,71,-1,72,71,71,72,-1,73,72,72,73,-1,74,73,73,74,-1,75,74,74,75,-1,76,75,75,76,-1,75,76,77,-1,72,73,77,-1,74,75,77,-1,73,74,77,-1,77,76,76,77,-1,78,68,68,78,-1,79,77,77,79,-1,80,79,79,80,-1,81,80,80,81,-1,82,81,81,82,-1,83,81,81,83,-1,84,83,83,84,-1,85,84,84,85,-1,86,85,85,86,-1,87,86,86,87,-1,88,87,87,88,-1,89,88,88,89,-1,90,89,89,90,-1,91,90,90,91,-1,92,91,91,92,-1,93,92,92,93,-1,93,82,82,93,-1,94,93,82,-1,94,81,83,-1,94,87,88,-1,94,86,87,-1,94,88,89,-1,94,89,90,-1,94,90,91,-1,94,91,92,-1,94,92,93,-1,94,85,86,-1,94,84,85,-1,94,83,84,-1,78,68,95,96,82,-1,95,77,79,80,81,96,-1,97,72,77,-1,97,69,70,-1,97,70,71,-1,97,71,72,-1,28,29,15,-1,29,19,15,-1,67,69,68,-1,69,97,68,-1]),
                                                                  coordIndex : new MFInt32([31,26,32,-1,26,25,32,-1,31,32,33,-1,3,33,2,-1,31,27,4,-1,30,5,9,-1,29,30,9,-1,29,9,28,-1,9,23,28,-1,23,25,28,-1,9,10,16,-1,23,16,11,-1,23,9,16,-1,11,19,20,-1,11,16,19,-1,16,17,18,-1,16,10,17,-1,33,32,2,-1,32,24,2,-1,3,27,33,-1,27,31,33,-1,30,4,5,-1,30,31,4,-1,35,34,32,-1,35,32,25,-1,23,35,25,-1,6,37,36,-1,6,7,37,-1,7,38,37,-1,23,36,35,-1,23,6,36,-1,34,40,32,-1,34,39,40,-1,40,24,32,-1,40,0,24,-1,13,12,6,-1,13,23,11,-1,13,6,23,-1,12,13,15,-1,13,14,15,-1,40,1,0,-1,39,38,8,-1,38,7,8,-1,40,39,1,-1,39,8,1,-1,41,42,43,44,-1,45,41,44,46,-1,47,45,46,48,-1,49,47,48,50,-1,51,49,50,52,-1,53,51,52,54,-1,55,53,54,56,-1,57,55,56,58,-1,59,57,58,60,-1,57,59,61,-1,51,53,61,-1,55,57,61,-1,53,55,61,-1,61,59,60,62,-1,42,63,64,43,-1,65,61,62,66,-1,67,65,66,68,-1,69,67,68,70,-1,63,71,72,64,-1,73,69,70,74,-1,75,73,74,76,-1,77,75,76,78,-1,79,77,78,80,-1,81,79,80,82,-1,83,81,82,84,-1,85,83,84,86,-1,87,85,86,88,-1,89,87,88,90,-1,91,89,90,92,-1,93,91,92,94,-1,71,93,94,72,-1,95,93,71,-1,95,69,73,-1,95,81,83,-1,95,79,81,-1,95,83,85,-1,95,85,87,-1,95,87,89,-1,95,89,91,-1,95,91,93,-1,95,77,79,-1,95,75,77,-1,95,73,75,-1,63,42,96,95,71,-1,96,61,65,67,69,95,-1,96,51,61,-1,96,45,47,-1,96,47,49,-1,96,49,51,-1,21,22,11,-1,22,13,11,-1,41,45,42,-1,45,96,42,-1]),
                                                                  texCoord : new SFNode(
                                                                    new TextureCoordinate({
                                                                      point : new MFVec2f([0.625471,0.962222,0.812735,0.885793,0.324709,0.959695,0.0710967,0.845171,0.0939856,0.772855,0.450894,0.566416,0.229922,0.694228,0.580161,0.706635,0.648257,0.692177,0.847468,0.758627,0.333465,0.697896,0.333465,0.697896,0.332838,0.684864,0.578735,0.652995,0.578735,0.652995,0.468042,0.667341,0.468042,0.667341,0.57936,0.676519,0.539984,0.673273,0.539984,0.673273,0.553002,0.642463,0.578629,0.649016,0.384786,0.678132,0.384786,0.678132,0.330957,0.645779,0.364728,0.638418,0.390491,0.604096,0.455984,0.595073,0.490472,0.61755,0.531303,0.628863,0.187534,0.897751,0.732009,0.91874,0.456813,0.702266,0.456813,0.702266,0.47509,0.960958,0.459566,0.741228,0.459566,0.741228,0.325125,0.777201,0.0794491,0.818783,0.186509,0.719339,0.392261,0.735833,0.0890324,0.788504,0.322949,0.747872,0.172776,0.802987,0.172776,0.802987,0.290762,0.759685,0.274509,0.785768,0.274509,0.785768,0.46813,0.862446,0.46813,0.862446,0.285602,0.854504,0.285602,0.854504,0.816662,0.871418,0.564237,0.779389,0.828471,0.828183,0.458534,0.72663,0.458534,0.72663,0.505281,0.749963,0.505281,0.749963,0.712198,0.713506,0.543162,0.743289,0.837969,0.793405,0.600042,0.752958,0.63832,0.773986,0.640311,0.793437,0.632891,0.87783,0.632891,0.87783,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.298994,0.411635,0.755024,0.424254])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.110405,0.841788,-0.237501,0.21585,0.731281,-0.227798,-0.154585,0.835635,-0.233615,-0.265114,0.691961,-0.230242,-0.288793,0.509673,-0.245409,-0.235711,0.404156,-0.141072,0.0674488,0.358012,-0.0515823,0.127557,0.364806,-0.0921264,0.237717,0.491609,-0.257022,-0.181029,0.371436,-0.0695539,-0.151542,0.350471,-0.0543398,-0.0292647,0.31706,-0.000579407,0.0672483,0.329411,-0.0451259,0.0325478,0.317369,-0.0296691,0.0484802,0.26256,-0.046725,0.070443,0.278584,-0.0551211,-0.105209,0.337145,-0.0311992,-0.14777,0.277962,-0.067387,-0.117235,0.26376,-0.0532698,-0.0899637,0.19965,-0.051412,-0.0317591,0.181868,-0.0358799,-0.00398623,0.22976,-0.0481929,0.0311702,0.256889,-0.0477668,-0.0404813,0.382955,7.47313e-9,-0.021432,0.838709,-0.165185,-0.0377285,0.45647,7.6821e-9,-0.141338,0.539613,-0.052842,-0.273755,0.625443,-0.235776,-0.0980858,0.446029,-0.0296912,-0.14112,0.455766,-0.0511925,-0.185125,0.49778,-0.0682051,-0.183779,0.558297,-0.0742021,-0.0291645,0.685182,-1.25592e-9,-0.170736,0.690484,-0.0701952,0.0543608,0.528943,-0.0490673,0.00242253,0.473158,-0.0216999,0.0355712,0.460742,-0.0401538,0.0855176,0.479246,-0.067194,0.12043,0.519083,-0.0836102,0.121171,0.555795,-0.0851941,0.115402,0.714964,-0.0787549,-0.274161,0.397509,-0.0759497,-0.258126,0.344094,-0.0760598,-0.241332,0.368051,-0.110422,-0.257591,0.424726,-0.110422,-0.309989,0.396351,-0.0753589,-0.311879,0.418144,-0.109721,-0.332971,0.367755,-0.0760598,-0.34802,0.379475,-0.110422,-0.332164,0.341819,-0.0760598,-0.346997,0.346582,-0.110422,-0.315219,0.322627,-0.0760598,-0.322029,0.321948,-0.110422,-0.333408,0.306626,-0.075989,-0.349312,0.301925,-0.110351,-0.331727,0.290716,-0.0759741,-0.354056,0.279599,-0.110337,-0.316053,0.264959,-0.075947,-0.330444,0.245891,-0.110309,-0.277865,0.270282,-0.075656,-0.280637,0.252638,-0.110018,-0.259482,0.301926,-0.075656,-0.255699,0.295567,-0.110018,0.138441,0.355145,-0.0762625,0.140803,0.370382,-0.110625,-0.225975,0.305419,-0.0760598,-0.228147,0.291405,-0.110422,0.141887,0.314284,-0.0762625,0.139715,0.300269,-0.110625,0.166443,0.307338,-0.0765573,0.157688,0.298797,-0.11092,0.171443,0.364492,-0.0770387,0.164966,0.370646,-0.111401,0.179997,0.272009,-0.0762625,0.17879,0.253754,-0.110625,0.224875,0.243447,-0.0784859,0.229916,0.22437,-0.112848,0.257635,0.2816,-0.0762625,0.268387,0.266644,-0.110625,0.248452,0.322473,-0.0737841,0.257466,0.313261,-0.108147,0.223118,0.332189,-0.0762625,0.225383,0.329673,-0.110625,0.229813,0.338609,-0.0719985,0.238138,0.338651,-0.106361,0.247059,0.369658,-0.0719985,0.259625,0.377335,-0.106361,0.247404,0.383719,-0.0716961,0.260631,0.399299,-0.106059,0.237191,0.409732,-0.0732986,0.245806,0.430173,-0.107661,0.214892,0.411247,-0.0745307,0.216048,0.4303,-0.108893,0.190738,0.394235,-0.0770387,0.184366,0.407331,-0.111401,0.182767,0.336477,-0.059575,-0.254049,0.323621,-0.0710882])}))}))})])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("wings"),
                                                  translation : new SFVec3f([0,0.272788,0]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("f1"),
                                                      translation : new SFVec3f([-0.00000101328,-2.38419e-7,6.55651e-7]),
                                                      scale : new SFVec3f([1,1,0.999999]),
                                                      scaleOrientation : new SFRotation([0.115357,0.278496,-0.953485,0.819646]),
                                                      center : new SFVec3f([-0.1705,0.909488,0.0927509]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              DEF : new SFString("wings_1"),
                                                              children : new MFNode([
                                                                new TimeSensor({
                                                                  DEF : new SFString("Time_2"),
                                                                  cycleInterval : new SFTime(0.6),
                                                                  loop : new SFBool(true),
                                                                  startTime : new SFTime(958599924.155),
                                                                  stopTime : new SFTime(1)})])}),

                                                            new OrientationInterpolator({
                                                              DEF : new SFString("f1RotationInterp"),
                                                              key : new MFFloat([0,0.166667,0.333333,0.5,0.666667,0.833333,1]),
                                                              keyValue : new MFRotation([0,0,1,0,0.747409,-0.196416,-0.634666,0.349266,0.747409,-0.196416,-0.634666,0.814955,0.747409,-0.196416,-0.634666,1.0478,0.747409,-0.196416,-0.634666,0.814955,0.747409,-0.196416,-0.634666,0.349266,0,0,1,0])})])}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.393212,0.980911,-0.00724912]),
                                                          rotation : new SFRotation([0,0,1,1.27876]),
                                                          scale : new SFVec3f([3.06449,1.26549,0.999999]),
                                                          center : new SFVec3f([-0.0149836,0.0460329,0.1]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      DEF : new SFString("_1"),
                                                                      ambientIntensity : new SFFloat(0.664894),
                                                                      diffuseColor : new SFColor([0.8,0.373192,0.349306]),
                                                                      emissiveColor : new SFColor([0.308511,0.143917,0.134706])})),
                                                                  texture : new SFNode(
                                                                    new ImageTexture({
                                                                      DEF : new SFString("_2"),
                                                                      url : new MFString(["skullwing.png"])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  colorIndex : new MFInt32([1,1,1,-1,0,1,1,-1,0,1,1,-1,0,1,1,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]),
                                                                  texCoordIndex : new MFInt32([12,9,8,-1,18,12,8,-1,18,8,7,-1,18,7,0,-1,18,0,1,-1,16,19,15,-1,1,5,15,-1,19,1,15,-1,19,18,1,-1,6,2,4,-1,2,3,4,-1]),
                                                                  coordIndex : new MFInt32([8,7,6,-1,11,8,6,-1,11,6,5,-1,11,5,0,-1,11,0,1,-1,10,12,9,-1,1,4,9,-1,12,1,9,-1,12,11,1,-1,4,1,3,-1,1,2,3,-1]),
                                                                  color : new SFNode(
                                                                    new Color({
                                                                      color : new MFColor([0.8,0.8,0.8,0.8,0,0.0209248])})),
                                                                  texCoord : new SFNode(
                                                                    new TextureCoordinate({
                                                                      point : new MFVec2f([0.356681,1,0.63697,0.677329,0.63697,0.677329,0.960898,0.634832,0.988551,0.572329,0.940554,0.327839,0.940554,0.327839,0.303086,1,0.0689046,0.504903,0.0344523,0.432065,0.398346,1,0.398346,0,0.134045,0.313815,0.53041,1,0.53041,0,0.858475,0.262231,0.867119,0.208996,0.231292,0.239947,0.494418,0.0400775,0.675777,0.0423422])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.02329,-0.0374336,0.1,0.00168681,0.103469,0.1,0.00390457,0.260481,0.1,-0.000750042,0.274923,0.1,-0.0217119,0.256082,0.1,0.0223446,-0.0632876,0.1,-0.0225201,-0.167523,0.1,-0.0291206,-0.182857,0.1,-0.0370926,-0.132728,0.1,-0.0285576,0.217645,0.1,-0.032785,0.222754,0.1,-0.0532571,0.0459435,0.1,-0.0498716,0.133391,0.1])}))}))})])})])}),

                                                    new Transform({
                                                      DEF : new SFString("f2"),
                                                      translation : new SFVec3f([-7.15256e-7,0.00000107288,-2.98023e-7]),
                                                      scale : new SFVec3f([1,1,0.999999]),
                                                      scaleOrientation : new SFRotation([-0.11113,-0.942637,-0.314777,0.299228]),
                                                      center : new SFVec3f([0.190979,0.872976,0.092751]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              USE : new SFString("wings_1")}),

                                                            new OrientationInterpolator({
                                                              DEF : new SFString("f2RotationInterp"),
                                                              key : new MFFloat([0,0.166667,0.333333,0.5,0.666667,0.833333,1]),
                                                              keyValue : new MFRotation([0,0,1,0,0.618463,0.109738,0.778114,0.283405,0.618463,0.109738,0.778114,0.661279,0.618463,0.109738,0.778114,0.850215,0.618463,0.109738,0.778114,0.661279,0.618463,0.109738,0.778114,0.283405,0,0,1,0])})])}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.413459,0.980829,-0.00724902]),
                                                          rotation : new SFRotation([0,0,1,0.358836]),
                                                          scale : new SFVec3f([3.06449,1.26549,1]),
                                                          center : new SFVec3f([0.00230039,0.00400775,0.1]),
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
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  colorIndex : new MFInt32([1,1,1,-1,1,1,0,-1,1,1,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]),
                                                                  texCoordIndex : new MFInt32([8,9,12,-1,8,12,18,-1,7,8,18,-1,0,7,18,-1,1,0,18,-1,15,19,16,-1,15,5,1,-1,15,1,19,-1,1,18,19,-1,4,2,6,-1,4,3,2,-1]),
                                                                  coordIndex : new MFInt32([6,7,8,-1,6,8,11,-1,5,6,11,-1,0,5,11,-1,1,0,11,-1,9,12,10,-1,9,4,1,-1,9,1,12,-1,1,11,12,-1,3,1,4,-1,3,2,1,-1]),
                                                                  color : new SFNode(
                                                                    new Color({
                                                                      color : new MFColor([0.8,0.8,0.8,0.8,0,0.0209248])})),
                                                                  texCoord : new SFNode(
                                                                    new TextureCoordinate({
                                                                      point : new MFVec2f([0.356681,1,0.63697,0.677329,0.63697,0.677329,0.960898,0.634832,0.988551,0.572329,0.940554,0.327839,0.940554,0.327839,0.303086,1,0.0689046,0.504903,0.0344523,0.432065,0.398346,1,0.398346,0,0.134045,0.313815,0.53041,1,0.53041,0,0.858475,0.262231,0.867119,0.208996,0.231292,0.239947,0.494418,0.0400775,0.675777,0.0423422])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0286638,0.1,0.1,0.0273939,0.0354657,0.1,0.0921796,0.0269664,0.1,0.0977103,0.0144657,0.1,0.0881108,-0.0344322,0.1,-0.0393828,0.1,0.1,-0.0862191,0.000980511,0.1,-0.0931095,-0.013587,0.1,-0.0731911,-0.037237,0.1,0.071695,-0.0475538,0.1,0.0734238,-0.0582008,0.1,-0.00111641,-0.0919845,0.1,0.0351553,-0.0915316,0.1])}))}))})])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("glow"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("glowShape"),
                                                      translation : new SFVec3f([0.00000190735,0.935473,0]),
                                                      scale : new SFVec3f([1.80083,1.80082,1.80087]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              texture : new SFNode(
                                                                new ImageTexture({
                                                                  url : new MFString(["glow_red.png"])}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              solid : new SFBool(false),
                                                              texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                                              texCoord : new SFNode(
                                                                new TextureCoordinate({
                                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("skull_freeze"),
                                              translation : new SFVec3f([0,-0.759082,0.010972]),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.00586526,1.69125,1.4808e-7]),
                                                  scale : new SFVec3f([1.91928,1.91928,1.91928]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              url : new MFString(["glow_blue.png"])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                                          texCoord : new SFNode(
                                                            new TextureCoordinate({
                                                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                                new Transform({
                                                  translation : new SFVec3f([0,-0.0122347,0]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.412476,2.02879,-0.007249]),
                                                      rotation : new SFRotation([0,0,1,0.358836]),
                                                      scale : new SFVec3f([3.06449,1.26549,1]),
                                                      center : new SFVec3f([0.00230039,0.00400775,0.1]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              DEF : new SFString("ice"),
                                                              children : new MFNode([
                                                                new TimeSensor({
                                                                  DEF : new SFString("Time_3"),
                                                                  cycleInterval : new SFTime(10),
                                                                  stopTime : new SFTime(1)})])}),

                                                            new Group({
                                                              children : new MFNode([
                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_3"),
                                                                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]),
                                                                  keyValue : new MFFloat([1,0.98,0.96,0.94,0.92,0.9,0.88,0.86,0.84,0.82,0.8,0.78,0.76,0.74,0.72,0.7,0.68,0.66,0.64,0.62,0.6,0.58,0.56,0.54,0.52,0.5,0.48,0.46,0.44,0.42,0.4,0.38,0.36,0.34,0.32,0.3,0.28,0.26,0.24,0.22,0.2,0.18,0.16,0.14,0.12,0.1,0.0800003,0.0600003,0.0400004,0.0200004,3.72529e-7,-0.0199997,-0.0399997,-0.0599996,-0.0799996,-0.0999994,-0.12,-0.14,-0.159999,-0.179999,-0.199999,-0.219999,-0.239999,-0.259999,-0.279999,-0.299999,-0.319999,-0.339999,-0.359999,-0.379999,-0.399999,-0.419999,-0.439999,-0.459999,-0.479999,-0.499999,-0.519999,-0.539999,-0.559999,-0.579999,-0.599999,-0.619999,-0.639999,-0.659999,-0.679999,-0.699999,-0.719999,-0.739999,-0.759999,-0.779999,-0.799999,-0.819999,-0.839999,-0.859999,-0.879999,-0.899999,-0.919999,-0.939999,-0.959999,-0.979999,-1])}),

                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_4"),
                                                                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]),
                                                                  keyValue : new MFFloat([1,0.98,0.96,0.94,0.92,0.9,0.88,0.86,0.84,0.82,0.8,0.78,0.76,0.74,0.72,0.7,0.68,0.66,0.64,0.62,0.6,0.58,0.56,0.54,0.52,0.5,0.48,0.46,0.44,0.42,0.4,0.38,0.36,0.34,0.32,0.3,0.28,0.26,0.24,0.22,0.2,0.18,0.16,0.14,0.12,0.1,0.0800003,0.0600003,0.0400004,0.0200004,3.72529e-7,-0.0199997,-0.0399997,-0.0599996,-0.0799996,-0.0999994,-0.12,-0.14,-0.159999,-0.179999,-0.199999,-0.219999,-0.239999,-0.259999,-0.279999,-0.299999,-0.319999,-0.339999,-0.359999,-0.379999,-0.399999,-0.419999,-0.439999,-0.459999,-0.479999,-0.499999,-0.519999,-0.539999,-0.559999,-0.579999,-0.599999,-0.619999,-0.639999,-0.659999,-0.679999,-0.699999,-0.719999,-0.739999,-0.759999,-0.779999,-0.799999,-0.819999,-0.839999,-0.859999,-0.879999,-0.899999,-0.919999,-0.939999,-0.959999,-0.979999,-1])}),

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
                                                                  ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])})])}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  ambientIntensity : new SFFloat(0.664894),
                                                                  diffuseColor : new SFColor([0.8,0.373192,0.349306]),
                                                                  emissiveColor : new SFColor([0.308511,0.143917,0.134706])})),
                                                              texture : new SFNode(
                                                                new ImageTexture({
                                                                  url : new MFString(["icesplatm.png"])})),
                                                              textureTransform : new SFNode(
                                                                new TextureTransform({
                                                                  DEF : new SFString("_6"),
                                                                  translation : new SFVec2f([1,1]),
                                                                  scale : new SFVec2f([2,2])}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              creaseAngle : new SFFloat(0.5),
                                                              colorIndex : new MFInt32([1,1,1,-1,1,1,0,-1,1,1,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,2,-1,2,2,2,-1,2,2,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,3,3,3,-1,3,3,3,-1,4,4,4,-1,3,3,3,-1,3,4,4,-1,3,4,4,-1,3,4,4,-1,3,4,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]),
                                                              texCoordIndex : new MFInt32([8,9,12,-1,8,12,18,-1,7,8,18,-1,0,7,18,-1,1,0,18,-1,15,19,16,-1,15,5,1,-1,15,1,19,-1,1,18,19,-1,4,2,6,-1,4,3,2,-1,20,21,22,-1,21,23,24,-1,23,25,24,-1,26,27,28,-1,29,27,30,-1,29,30,31,-1,32,29,33,-1,32,33,34,-1,35,36,32,-1,36,23,32,-1,37,26,28,-1,37,28,38,-1,20,37,38,-1,20,22,37,-1,39,40,41,-1,40,42,41,-1,43,39,41,-1,44,45,39,-1,44,46,45,-1,43,44,39,-1,47,48,46,-1,44,47,46,-1,49,50,51,-1,50,42,51,-1,51,52,53,-1,49,51,54,-1,55,51,53,-1,48,49,54,-1,56,55,53,-1,56,48,54,-1,57,58,59,-1,57,59,60,-1,40,57,60,-1,40,22,61,-1,40,61,57,-1,22,62,61,-1,22,63,62,-1,63,64,62,-1,64,63,65,-1,66,64,65,-1,66,65,67,-1,58,68,59,-1,58,66,68,-1,68,52,59,-1,69,66,67,-1,68,70,52,-1,69,67,70,-1,71,72,72,71,-1,71,73,72,-1,73,71,71,73,-1,74,73,73,74,-1,75,74,74,75,-1,76,75,75,76,-1,77,76,76,77,-1,78,77,77,78,-1,79,78,78,79,-1,80,79,79,80,-1,79,80,81,-1,78,79,81,-1,76,77,81,-1,77,78,81,-1,81,80,80,81,-1,82,72,72,82,-1,83,81,81,83,-1,84,83,83,84,-1,85,84,84,85,-1,86,85,85,86,-1,87,85,85,87,-1,88,87,87,88,-1,89,88,88,89,-1,90,89,89,90,-1,91,90,90,91,-1,92,91,91,92,-1,93,92,92,93,-1,94,93,93,94,-1,95,94,94,95,-1,96,95,95,96,-1,97,96,96,97,-1,97,86,86,97,-1,98,97,86,-1,98,96,97,-1,98,85,87,-1,98,87,88,-1,98,91,92,-1,98,90,91,-1,98,92,93,-1,98,89,90,-1,98,93,94,-1,98,94,95,-1,98,95,96,-1,98,88,89,-1,82,72,99,100,86,-1,73,101,72,-1,99,81,83,84,85,100,-1,101,76,81,-1,101,75,76,-1,101,73,74,-1,101,74,75,-1,102,103,104,-1,105,102,104,-1,106,107,108,-1,109,110,111,-1,112,106,108,-1,112,108,113,-1,112,113,114,-1,112,114,109,-1,115,116,111,-1,116,109,111,-1,116,112,109,-1]),
                                                              coordIndex : new MFInt32([6,7,8,-1,6,8,11,-1,5,6,11,-1,0,5,11,-1,1,0,11,-1,9,12,10,-1,9,4,1,-1,9,1,12,-1,1,11,12,-1,3,1,4,-1,3,2,1,-1,13,14,15,-1,14,13,16,-1,13,17,16,-1,18,19,20,-1,20,19,21,-1,20,21,22,-1,23,20,24,-1,23,24,25,-1,26,27,23,-1,27,13,23,-1,28,18,20,-1,28,20,23,-1,13,28,23,-1,13,15,28,-1,18,28,29,-1,28,30,29,-1,31,18,29,-1,32,33,18,-1,32,34,33,-1,31,32,18,-1,35,36,34,-1,32,35,34,-1,35,37,38,-1,37,30,38,-1,38,39,40,-1,35,38,41,-1,41,38,40,-1,36,35,41,-1,42,41,40,-1,42,36,41,-1,43,44,38,-1,43,38,30,-1,28,43,30,-1,28,15,45,-1,28,45,43,-1,15,46,45,-1,15,47,46,-1,47,48,46,-1,48,47,49,-1,50,48,49,-1,50,49,51,-1,44,52,38,-1,44,50,52,-1,52,39,38,-1,52,50,51,-1,52,53,39,-1,52,51,53,-1,54,55,56,57,-1,54,58,55,-1,58,54,57,59,-1,60,58,59,61,-1,62,60,61,63,-1,64,62,63,65,-1,66,64,65,67,-1,68,66,67,69,-1,70,68,69,71,-1,72,70,71,73,-1,70,72,74,-1,68,70,74,-1,64,66,74,-1,66,68,74,-1,74,72,73,75,-1,55,76,77,56,-1,78,74,75,79,-1,80,78,79,81,-1,82,80,81,83,-1,76,84,85,77,-1,86,82,83,87,-1,88,86,87,89,-1,90,88,89,91,-1,92,90,91,93,-1,94,92,93,95,-1,96,94,95,97,-1,98,96,97,99,-1,100,98,99,101,-1,102,100,101,103,-1,104,102,103,105,-1,106,104,105,107,-1,84,106,107,85,-1,108,106,84,-1,108,104,106,-1,108,82,86,-1,108,86,88,-1,108,94,96,-1,108,92,94,-1,108,96,98,-1,108,90,92,-1,108,98,100,-1,108,100,102,-1,108,102,104,-1,108,88,90,-1,76,55,109,108,84,-1,58,109,55,-1,109,74,78,80,82,108,-1,109,64,74,-1,109,62,64,-1,109,58,60,-1,109,60,62,-1,110,111,112,-1,113,110,112,-1,114,115,116,-1,110,113,117,-1,118,114,116,-1,118,116,119,-1,118,119,120,-1,118,120,110,-1,121,122,117,-1,122,110,117,-1,122,118,110,-1]),
                                                              color : new SFNode(
                                                                new Color({
                                                                  color : new MFColor([0.8,0.8,0.8,0.8,0,0.0209248,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0,0.0209248])})),
                                                              texCoord : new SFNode(
                                                                new TextureCoordinate({
                                                                  point : new MFVec2f([0.189388,0.312108,0.338214,0.2114,0.338214,0.2114,0.510212,0.198136,0.524895,0.178628,0.49941,0.102321,0.49941,0.102321,0.160931,0.312108,0.0365866,0.157584,0.0344523,0.432065,0.398346,1,0.398346,0,0.0711742,0.0979442,0.53041,1,0.53041,0,0.455828,0.0818443,0.460418,0.0652294,0.231292,0.239947,0.262523,0.0125085,0.35882,0.0132153,0.539984,0.673273,0.57936,0.676519,0.580161,0.706635,0.539984,0.673273,0.578629,0.649016,0.553002,0.642463,0.333465,0.697896,0.332838,0.684864,0.384786,0.678132,0.384786,0.678132,0.330957,0.645779,0.364728,0.638418,0.468042,0.667341,0.390491,0.604096,0.455984,0.595073,0.490472,0.61755,0.531303,0.628863,0.456813,0.702266,0.468042,0.667341,0.333465,0.697896,0.456813,0.702266,0.392261,0.735833,0.459566,0.741228,0.322949,0.747872,0.290762,0.759685,0.229922,0.694228,0.0939856,0.772855,0.274509,0.785768,0.0794491,0.818783,0.274509,0.785768,0.325125,0.777201,0.46813,0.862446,0.47509,0.960958,0.324709,0.959695,0.285602,0.854504,0.285602,0.854504,0.0710967,0.845171,0.505281,0.749963,0.564237,0.779389,0.46813,0.862446,0.459566,0.741228,0.543162,0.743289,0.600042,0.752958,0.648257,0.692177,0.63832,0.773986,0.847468,0.758627,0.640311,0.793437,0.812735,0.885793,0.632891,0.87783,0.632891,0.87783,0.625471,0.962222,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.298994,0.411635,0.755024,0.424254,0.388869,0.297427,0.215427,0.286718,0.20062,0.270967,0.22632,0.209358,0.658151,0.205824,0.0344523,0.432065,0.693029,0.253977,0.388869,0.297427,0.22632,0.209358,0.270268,0.192825,0.465195,0.136844,0.567641,0.378738,0.538944,0.378738,0.265639,0.17941,0.36809,0.137415])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0286638,0.1,0.1,0.0273939,0.0354657,0.1,0.0921796,0.0269664,0.1,0.0977103,0.0144657,0.1,0.0881108,-0.0344322,0.1,-0.0393828,0.1,0.1,-0.0862191,0.000980511,0.1,-0.0931095,-0.013587,0.1,-0.0731911,-0.037237,0.1,0.071695,-0.0475538,0.1,0.0734238,-0.0582008,0.1,-0.00111641,-0.0919845,0.1,0.0351553,-0.0915316,0.1,-0.172032,-0.281476,0.268996,-0.16005,-0.282196,0.253539,-0.156711,-0.26109,0.247083,-0.164899,-0.320688,0.243544,-0.173445,-0.326449,0.25194,-0.231091,-0.182203,0.229111,-0.224484,-0.205898,0.244325,-0.211855,-0.228615,0.267466,-0.231641,-0.260592,0.231278,-0.223939,-0.279574,0.245395,-0.190953,-0.264551,0.298086,-0.222954,-0.334575,0.247253,-0.207208,-0.363884,0.262785,-0.193234,-0.336157,0.250472,-0.179384,-0.325841,0.250898,-0.186829,-0.212684,0.298665,-0.197201,-0.150031,0.268974,-0.177563,-0.159056,0.298665,-0.209233,-0.130885,0.247473,-0.217864,-0.087588,0.23046,-0.244049,-0.14282,0.157593,-0.248175,-0.0500199,0.0532562,-0.210517,-0.0431865,0.224463,-0.230313,0.0314623,0.0628892,-0.199691,-0.0687881,0.245823,-0.148737,0.00778574,0.298665,-0.12878,0.119231,0.13348,-0.169815,0.153907,0.0650502,-0.191384,0.0509958,0.22847,-0.22005,0.0782793,0.0684232,-0.163383,-0.157851,0.276965,-0.141122,-0.130991,0.249598,-0.154678,-0.176237,0.258511,-0.137297,-0.176406,0.231471,-0.137567,-0.272744,0.206539,-0.122065,-0.156621,0.215055,-0.0893785,-0.209496,0.0416432,-0.117632,-0.129664,0.213471,-0.0685937,-0.0261004,0.0708672,-0.101154,-0.0102978,0.21991,-0.0881468,0.0849229,0.0611642,-0.256558,-0.137068,0.222715,-0.25778,-0.181038,0.222605,-0.249904,-0.167973,0.188243,-0.248376,-0.121529,0.188243,-0.267637,-0.127982,0.223306,-0.265718,-0.111333,0.188944,-0.277936,-0.142762,0.222605,-0.281191,-0.129914,0.188243,-0.280662,-0.162175,0.222605,-0.284648,-0.154535,0.188243,-0.277684,-0.181077,0.222605,-0.279843,-0.17969,0.188243,-0.285075,-0.187868,0.222676,-0.290473,-0.186933,0.188314,-0.286385,-0.200106,0.222691,-0.294481,-0.202135,0.188328,-0.284548,-0.223513,0.222718,-0.29113,-0.233627,0.188356,-0.27227,-0.230172,0.223009,-0.275139,-0.242457,0.188647,-0.263027,-0.211861,0.223009,-0.2626,-0.217615,0.188647,-0.135349,-0.282912,0.222403,-0.132881,-0.272294,0.18804,-0.252389,-0.218575,0.222605,-0.254659,-0.228341,0.188243,-0.138979,-0.314101,0.222403,-0.141249,-0.323867,0.18804,-0.132272,-0.326054,0.222108,-0.135926,-0.329944,0.187745,-0.124195,-0.285155,0.221626,-0.125468,-0.278804,0.187264,-0.13218,-0.355955,0.222403,-0.13464,-0.369126,0.18804,-0.121741,-0.389541,0.220179,-0.122387,-0.405055,0.185817,-0.107359,-0.370404,0.222403,-0.105788,-0.384453,0.18804,-0.105481,-0.337615,0.224881,-0.103783,-0.346932,0.190518,-0.112108,-0.323395,0.222403,-0.111704,-0.325886,0.18804,-0.109327,-0.320503,0.226667,-0.106779,-0.322783,0.192304,-0.1005,-0.302317,0.226667,-0.0957804,-0.300124,0.192304,-0.0987827,-0.292009,0.226969,-0.092956,-0.284153,0.192606,-0.0989221,-0.269929,0.225367,-0.0939475,-0.257196,0.191004,-0.105562,-0.26262,0.224134,-0.103025,-0.248844,0.189772,-0.114891,-0.268503,0.221626,-0.115337,-0.257046,0.187264,-0.123945,-0.309025,0.23909,-0.258881,-0.197317,0.227577,-0.257881,0.301021,0.0999999,-0.30812,0.400424,0.0999998,-0.315685,0.400207,0.0999998,-0.322196,0.348409,0.0999998,-0.20378,0.083205,0.0999999,-0.182481,0.068191,0.0999999,-0.18352,0.0901978,0.0999999,-0.313716,0.311932,0.0999998,-0.272272,0.160318,0.0999999,-0.190581,0.239783,0.0999999,-0.198502,0.257269,0.0999999,-0.317956,0.306884,0.0999998,-0.29895,0.219823,0.0999998])}))}))})])})])})])})])})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("vSens"),
                          translation : new SFVec3f([0,1.0619,0.00946464]),
                          scale : new SFVec3f([4.39647,2.13168,1.064]),
                          children : new MFNode([
                            new VisibilitySensor({
                              DEF : new SFString("_7"),
                              size : new SFVec3f([1,1,1])})])})])}),

                    new Transform({
                      DEF : new SFString("OFF")})])})])}),

            new TimeSensor({
              DEF : new SFString("enterWorldTimeSensor"),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("enterWorldScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("firstTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("triggerIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),vrmlscript:, function triggerIn(value, time) {

         // fire off a single round                                     
         startTime = value;                                             
         firstTime = FALSE;                                             
       })}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("skullHorizontalAnimTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("shadowVerticalAnimScaleFactorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("shadowVerticalAnimScaleFactorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("shadowVerticalAnim"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("skullVerticalAnimTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("f1RotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("f1RotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("f1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("f2RotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("f2RotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("f2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
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
              fromNode : new SFString("_5"),
              fromField : new SFString("vec"),
              toNode : new SFString("_6"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("skullVerticalAnimTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("skullVerticalAnim"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("skullHorizontalAnimTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("skullHorizontalAnim"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("firstTime"),
              toNode : new SFString("enterWorldTimeSensor"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("enterWorldTimeSensor"),
              fromField : new SFString("time"),
              toNode : new SFString("enterWorldScript"),
              toField : new SFString("triggerIn")})])}))});
console.log(X3D0.toXMLNode());