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
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
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
              content : new SFString("Mon, 09 Nov 2015 13:19:34 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 09 Nov 2015 13:19:34 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("TimeSensor_gullswim-TIMER"),
                      cycleInterval : new SFTime(2.867),
                      loop : new SFBool(true),
                      startTime : new SFTime(1)}),

                    new Script({
                      DEF : new SFString("TimeSensor_gullswim-SCRIPT"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fractionOut"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fractionIn"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                      ]),javascript:
    , function fractionIn(i) {
    fractionOut = 0.9773 * i + 0.02273;
  })}),

                    new Transform({
                      DEF : new SFString("Seagull_Wake-ROOT"),
                      translation : new SFVec3f([-0.609,0.001503,-0.1034]),
                      rotation : new SFRotation([-1,0,0,3.142]),
                      scaleOrientation : new SFRotation([0.151899,0.988396,0,0.264]),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Seagull_Wake-TIMER"),
                          cycleInterval : new SFTime(2.933)}),

                        new PositionInterpolator({
                          DEF : new SFString("Seagull_Wake-POS-INTERP"),
                          key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                          keyValue : new MFVec3f([-0.609,0.001503,-0.1034,-0.609,0.005823,-0.1034,-0.609,0.03287,-0.1034,-0.609,0.07513,-0.1034,-0.609,0.125,-0.1034,-0.609,0.1749,-0.1034,-0.609,0.2171,-0.1034,-0.609,0.2442,-0.1034,-0.609,0.2485,-0.1034,-0.609,0.2282,-0.1034,-0.609,0.1902,-0.1034,-0.609,0.142,-0.1034,-0.609,0.09128,-0.1034,-0.609,0.04564,-0.1034,-0.609,0.01268,-0.1034,-0.609,0.001503,-0.1034])}),

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
                              DEF : new SFString("Seagull_Wake-FACES"),
                              colorIndex : new MFInt32([3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1]),
                              coordIndex : new MFInt32([3,2,6,-1,7,0,6,-1,12,5,2,-1,20,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,10,7,6,-1,10,5,9,-1,7,11,0,-1,5,6,2,-1,3,6,0,-1,7,14,11,-1,8,7,10,-1,6,5,10,-1,9,5,13,-1,5,12,13,-1,14,7,8,-1,10,9,17,-1,17,16,10,-1,8,10,16,-1,16,15,8,-1,9,13,17,-1,14,8,15,-1,12,2,1,-1,20,0,11,-1,21,1,20,-1,13,21,14,-1,21,11,14,-1,18,13,14,-1,14,19,18,-1,18,17,13,-1,19,14,15,-1,0,20,4,-1,20,11,21,-1,13,12,21,-1,12,1,21,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.3373,0.7569,1,0.3373,0.7569,1,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Seagull_Wake-COORD"),
                                  point : new MFVec3f([0.4789,0,0.1587,-0.4416,0,-1.221,-0.4745,0,0.1822,0.0002296,0,0.9222,0,0,0.2742,-0.941,0,0.04356,0.0205,0,1.298,0.8532,0,0.0152,1.643,0,-0.2488,-1.736,0,-0.184,0.02957,0,1.537,0.6059,0,-2.16,-0.7499,0,-2.121,-1.12,0,-3.384,1.051,0,-3.422,1.291,-0.4378,-1.615,0.02957,-0.4378,1.537,-1.372,-0.4378,-1.566,-1.12,-0.4249,-3.384,1.051,-0.4249,-3.422,0.3244,0,-1.224,-0.05201,0,-3.066])}))}))}),

                        new Transform({
                          DEF : new SFString("Seagull-ROOT"),
                          translation : new SFVec3f([-0.01265,0.06479,0.0434]),
                          rotation : new SFRotation([-0.999749,0.0149807,0.0166408,1.676]),
                          scale : new SFVec3f([0.1698,0.2668,0.1103]),
                          children : new MFNode([
                            new PositionInterpolator({
                              DEF : new SFString("Seagull-POS-INTERP"),
                              key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                              keyValue : new MFVec3f([-0.01265,0.06479,0.0434,-0.008224,0.06479,0.04328,0.0003215,0.06479,0.04321,0.007576,0.06479,0.04332,0.01064,0.06479,0.04342,0.006287,0.06479,0.04329,-0.002903,0.06479,0.04321,-0.01112,0.06479,0.04335,-0.01086,0.06479,0.04334,-0.002527,0.06479,0.04321,0.005481,0.06479,0.04328,0.01026,0.06479,0.0434,0.008561,0.06479,0.04335,0.0003394,0.06479,0.04321,-0.00885,0.06479,0.04329,-0.01265,0.06479,0.0434])}),

                            new OrientationInterpolator({
                              DEF : new SFString("Seagull-ROT-INTERP"),
                              key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                              keyValue : new MFRotation([-0.999749,0.0149807,0.0166408,1.676,-0.999906,0.00915006,0.0101601,1.676,-0.999995,-0.00211299,-0.00234699,1.676,-0.999848,-0.0116806,-0.0129706,1.676,-0.999724,-0.0157104,-0.0174504,1.676,-0.999889,-0.00997589,-0.0110799,1.676,-0.999995,0.00213699,0.00237399,1.676,-0.999812,0.0129702,0.0144102,1.676,-0.999822,0.0126203,0.0140203,1.676,-0.999997,0.001641,0.00182299,1.676,-0.999911,-0.0089131,-0.00989911,1.676,-0.999741,-0.0152206,-0.0169007,1.676,-0.999812,-0.0129702,-0.0144102,1.676,-0.999995,-0.00213699,-0.00237299,1.676,-0.999889,0.00997589,0.0110799,1.676,-0.999749,0.0149807,0.0166408,1.676])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      shininess : new SFFloat(0.25)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Seagull-FACES"),
                                  creaseAngle : new SFFloat(3),
                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Seagull-COORD"),
                                      point : new MFVec3f([0,3.719,0,0,2.63,-2.63,-1.859,2.63,-1.859,-2.63,2.63,0,-1.859,2.63,1.859,0,2.63,2.63,1.859,2.63,1.859,2.63,2.63,0,1.859,2.63,-1.859,0,0,-3.719,-2.63,0,-2.63,-3.719,0,0,-2.63,0,2.63,0,0,3.719,2.63,0,2.63,3.719,0,0,2.63,0,-2.63,0,-2.63,-2.63,-1.859,-2.63,-1.859,-2.63,-2.63,0,-1.859,-2.63,1.859,0,-2.63,2.63,1.859,-2.63,1.859,2.63,-2.63,0,1.859,-2.63,-1.859,0,-3.719,0])}))}))}),

                            new Transform({
                              DEF : new SFString("Dummy_Seagull_Thigh_L-ROOT"),
                              translation : new SFVec3f([-1.857,0.4801,1.367]),
                              rotation : new SFRotation([0.0522582,0.0522582,-0.997265,1.574]),
                              scale : new SFVec3f([0.4132,0.6494,1]),
                              scaleOrientation : new SFRotation([0,-1,0,0.1047]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Seagull_Thigh_L-ROOT"),
                                  translation : new SFVec3f([-1.832,0.4286,0.2694]),
                                  rotation : new SFRotation([-0.555013,-0.555013,0.619614,2.032]),
                                  scale : new SFVec3f([1,1,1.7]),
                                  scaleOrientation : new SFRotation([0,0,-1,0.0668495]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Seagull_Thigh_L-POS-INTERP"),
                                      key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                      keyValue : new MFVec3f([-1.832,0.4286,0.2694,-1.823,0.4286,0.3345,-1.825,0.4286,0.325,-1.839,0.4286,0.08741,-1.821,0.4286,-0.08178,-1.834,0.4286,0.01766,-1.84,0.4286,0.1317,-1.835,0.4286,0.2389,-1.826,0.4286,0.3179,-1.821,0.4286,0.3487,-1.839,0.4286,0.1795,-1.825,0.4286,-0.05814,-1.83,0.4286,-0.01815,-1.839,0.4286,0.09338,-1.837,0.4286,0.2052,-1.832,0.4286,0.2694])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Seagull_Thigh_L-ROT-INTERP"),
                                      key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                      keyValue : new MFRotation([-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.608107,-0.608107,0.510306,2.198,-0.594508,-0.594508,0.541407,2.149,-0.577617,-0.577617,0.576817,2.095,-0.560236,-0.560236,0.61014,2.046,-0.546379,-0.546379,0.634776,2.01,-0.54071,-0.54071,0.644411,1.997,-0.570095,-0.570095,0.591594,2.073,-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.555013,-0.555013,0.619614,2.032])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Seagull_Thigh_L-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Seagull_Thigh_L-COORD"),
                                              point : new MFVec3f([0,2.261,0,0,1.599,-1.599,-1.131,1.599,-1.131,-1.599,1.599,0,-1.131,1.599,1.131,0,1.599,1.599,1.131,1.599,1.131,1.599,1.599,0,1.131,1.599,-1.131,0,0,-2.261,-1.599,0,-1.599,-2.261,0,0,-1.599,0,1.599,0,0,2.261,1.599,0,1.599,2.261,0,0,1.599,0,-1.599,0,-1.599,-1.599,-1.131,-1.599,-1.131,-1.599,-1.599,0,-1.131,-1.599,1.131,0,-1.599,1.599,1.131,-1.599,1.131,1.599,-1.599,0,1.131,-1.599,-1.131,0,-2.261,0])}))}))}),

                                    new Transform({
                                      DEF : new SFString("Dummy_Seagull_Leg_L-ROOT"),
                                      translation : new SFVec3f([-0.4286,-1.131,1.712]),
                                      rotation : new SFRotation([-0.57735,-0.57735,0.57735,4.189]),
                                      scale : new SFVec3f([0.5882,1,1]),
                                      scaleOrientation : new SFRotation([1,0,0,0.030092]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("Seagull_leg_L-ROOT"),
                                          translation : new SFVec3f([-0.05102,0.007231,-0.02075]),
                                          rotation : new SFRotation([0.346396,0.346396,0.871791,1.708]),
                                          scale : new SFVec3f([1,0.9826,1.018]),
                                          scaleOrientation : new SFRotation([-1,0,0,0.2494]),
                                          children : new MFNode([
                                            new OrientationInterpolator({
                                              DEF : new SFString("Seagull_leg_L-ROT-INTERP"),
                                              key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                              keyValue : new MFRotation([0.346396,0.346396,0.871791,1.708,0.272405,0.272405,0.922817,1.651,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.698638,-0.698638,-0.154308,3.448,-0.69702,-0.69702,-0.168305,3.475,-0.664392,-0.664392,-0.342296,3.801,0.458866,0.458866,0.760844,1.841,0.286594,0.286594,0.914181,1.66,0.270093,0.270093,0.924175,1.65,0.543872,0.543872,0.639067,2.004,-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.346396,0.346396,0.871791,1.708])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,0.9176,0]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  DEF : new SFString("Seagull_leg_L-FACES"),
                                                  creaseAngle : new SFFloat(3),
                                                  coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      DEF : new SFString("Seagull_leg_L-COORD"),
                                                      point : new MFVec3f([0,0,0,0.3363,0,0,0.1682,0,-0.2913,-0.1682,0,-0.2913,-0.3363,0,0,-0.1682,0,0.2913,0.1682,0,0.2913,0.3363,3.878,0,0.1682,3.878,-0.2913,-0.1682,3.878,-0.2913,-0.3363,3.878,0,-0.1682,3.878,0.2913,0.1682,3.878,0.2913,0,3.878,0])}))}))}),

                                            new Transform({
                                              DEF : new SFString("Seagull_heel_L-ROOT"),
                                              translation : new SFVec3f([-0.01118,4.034,-0.01929]),
                                              rotation : new SFRotation([-1,0,0,1.287]),
                                              scale : new SFVec3f([1,1.018,0.9826]),
                                              scaleOrientation : new SFRotation([1,0,0,0.773]),
                                              children : new MFNode([
                                                new OrientationInterpolator({
                                                  DEF : new SFString("Seagull_heel_L-ROT-INTERP"),
                                                  key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                                  keyValue : new MFRotation([-1,0,0,1.287,-1,0,0,1.399,-1,0,0,1.963,-1,0,0,3.41,-1,0,0,3.83,-1,0,0,2.286,-1,0,0,1.508,-1,0,0,1.3,-1,0,0,1.338,-1,0,0,1.586,-1,0,0,3.119,-1,0,0,3.779,-1,0,0,2.779,-1,0,0,1.638,-1,0,0,1.34,-1,0,0,1.287])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([1,0.9176,0]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Seagull_heel_L-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Seagull_heel_L-COORD"),
                                                          point : new MFVec3f([0,0.48,0,0,0.24,-0.4157,-0.36,0.24,-0.2078,-0.36,0.24,0.2078,0,0.24,0.4157,0.36,0.24,0.2078,0.36,0.24,-0.2078,0,-0.24,-0.4157,-0.36,-0.24,-0.2078,-0.36,-0.24,0.2078,0,-0.24,0.4157,0.36,-0.24,0.2078,0.36,-0.24,-0.2078,0,-0.48,0])}))}))}),

                                                new Transform({
                                                  DEF : new SFString("Seagull_foot_LR-ROOT"),
                                                  translation : new SFVec3f([0.00778,-0.5223,5.095]),
                                                  rotation : new SFRotation([-0.99627,-0.066098,0.0554783,1.433]),
                                                  scale : new SFVec3f([1.5,1.526,1.474]),
                                                  scaleOrientation : new SFRotation([1,0,0,0.632]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              diffuseColor : new SFColor([0.8784,0.7765,0.3412])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          DEF : new SFString("Seagull_foot_LR-FACES"),
                                                          creaseAngle : new SFFloat(3),
                                                          coordIndex : new MFInt32([0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              DEF : new SFString("Seagull_foot_LR-COORD"),
                                                              point : new MFVec3f([0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917])}))}))})])}),

                                                new Transform({
                                                  DEF : new SFString("Seagull_foot_LL-ROOT"),
                                                  translation : new SFVec3f([-2.201,-0.08551,5.213]),
                                                  rotation : new SFRotation([-0.991214,0.101301,-0.0850512,1.438]),
                                                  scale : new SFVec3f([1.5,1.526,1.474]),
                                                  scaleOrientation : new SFRotation([1,0,0,0.632]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              diffuseColor : new SFColor([0.8784,0.7765,0.3412])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          DEF : new SFString("Seagull_foot_LL-FACES"),
                                                          creaseAngle : new SFFloat(3),
                                                          coordIndex : new MFInt32([0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              DEF : new SFString("Seagull_foot_LL-COORD"),
                                                              point : new MFVec3f([1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974])}))}))})])})])})])})])})])})])}),

                            new Transform({
                              DEF : new SFString("Dummy_Seagull_Thigh_R-ROOT"),
                              translation : new SFVec3f([1.639,0.4801,1.367]),
                              rotation : new SFRotation([0.0522582,0.0522582,-0.997265,1.574]),
                              scale : new SFVec3f([0.4132,0.6494,1]),
                              scaleOrientation : new SFRotation([0,-1,0,0.1047]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Seagull_Thigh_R-ROOT"),
                                  translation : new SFVec3f([-1.824,-0.136,-0.06297]),
                                  rotation : new SFRotation([-0.604981,-0.604981,0.517684,2.186]),
                                  scale : new SFVec3f([1,1,1.7]),
                                  scaleOrientation : new SFRotation([-0.00001597,0,-1,0.00539324]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Seagull_Thigh_R-POS-INTERP"),
                                      key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                      keyValue : new MFVec3f([-1.824,-0.136,-0.06297,-1.83,-0.136,-0.02197,-1.839,-0.136,0.09238,-1.837,-0.136,0.2071,-1.829,-0.136,0.3001,-1.821,-0.136,0.3503,-1.833,-0.136,0.267,-1.833,-0.136,-0.0001516,-1.825,-0.136,-0.05621,-1.837,-0.136,0.05313,-1.839,-0.136,0.1702,-1.832,-0.136,0.2728,-1.823,-0.136,0.3396,-1.824,-0.136,0.3298,-1.839,-0.136,0.08625,-1.824,-0.136,-0.06297])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Seagull_Thigh_R-ROT-INTERP"),
                                      key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                      keyValue : new MFRotation([-0.604981,-0.604981,0.517684,2.186,-0.599526,-0.599526,0.530223,2.167,-0.583484,-0.583484,0.564884,2.113,-0.565865,-0.565865,0.599662,2.061,-0.550322,-0.550322,0.627926,2.02,-0.541383,-0.541383,0.64328,1.998,-0.55598,-0.55598,0.617878,2.035,-0.596595,-0.596595,0.536795,2.156,-0.60408,-0.60408,0.519783,2.183,-0.589133,-0.589133,0.553031,2.131,-0.571696,-0.571696,0.588496,2.078,-0.555013,-0.555013,0.619614,2.032,-0.543314,-0.543314,0.640016,2.003,-0.54509,-0.54509,0.636988,2.007,-0.584362,-0.584362,0.563064,2.116,-0.604981,-0.604981,0.517684,2.186])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Seagull_Thigh_L-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Dummy_Seagull_Leg_R-ROOT"),
                                      translation : new SFVec3f([0.136,-1.131,1.712]),
                                      rotation : new SFRotation([0.57735,0.57735,-0.57735,2.094]),
                                      scale : new SFVec3f([0.5882,1,1]),
                                      scaleOrientation : new SFRotation([1,0,0,0.0334468]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("Seagull_leg_R-ROOT"),
                                          translation : new SFVec3f([0.03961,-0.02924,0.02399]),
                                          rotation : new SFRotation([-0.693279,-0.693279,-0.196794,3.53]),
                                          scale : new SFVec3f([1,0.9826,1.018]),
                                          scaleOrientation : new SFRotation([-1,0,0,0.2494]),
                                          children : new MFNode([
                                            new OrientationInterpolator({
                                              DEF : new SFString("Seagull_leg_R-ROT-INTERP"),
                                              key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                              keyValue : new MFRotation([-0.693279,-0.693279,-0.196794,3.53,-0.69523,-0.69523,-0.182508,3.503,-0.660403,-0.660403,-0.357402,3.828,0.492572,0.492572,0.717458,1.897,0.3038,0.3038,0.903001,1.673,0.270203,0.270203,0.924111,1.65,0.429886,0.429886,0.793975,1.8,-0.672729,-0.672729,-0.308013,3.739,-0.698616,-0.698616,-0.154504,3.448,-0.69332,-0.69332,-0.196506,3.53,-0.623085,-0.623085,-0.472789,4.025,0.377005,0.377005,0.846011,1.737,0.273492,0.273492,0.922174,1.652,0.319204,0.319204,0.89231,1.685,-0.626196,-0.626196,-0.464497,4.011,-0.693279,-0.693279,-0.196794,3.53])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,0.9176,0]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("Seagull_leg_L-FACES")}))}),

                                            new Transform({
                                              DEF : new SFString("Seagull_heel_R-ROOT"),
                                              translation : new SFVec3f([0.01347,4.034,0.001056]),
                                              rotation : new SFRotation([-1,0,0,3.79]),
                                              scale : new SFVec3f([1,1.018,0.9826]),
                                              scaleOrientation : new SFRotation([1,0,0,0.773]),
                                              children : new MFNode([
                                                new OrientationInterpolator({
                                                  DEF : new SFString("Seagull_heel_R-ROT-INTERP"),
                                                  key : new MFFloat([0,0.06818,0.1364,0.2045,0.2727,0.3409,0.4091,0.4773,0.5455,0.6136,0.6818,0.75,0.8182,0.8864,0.9545,1]),
                                                  keyValue : new MFRotation([-1,0,0,3.79,-1,0,0,2.777,-1,0,0,1.638,-1,0,0,1.353,-1,0,0,1.329,-1,0,0,1.529,-1,0,0,2.683,-1,0,0,3.672,-1,0,0,3.297,-1,0,0,1.882,-1,0,0,1.417,-1,0,0,1.31,-1,0,0,1.44,-1,0,0,2.028,-1,0,0,3.475,-1,0,0,3.79])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([1,0.9176,0]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Seagull_heel_L-FACES")}))}),

                                                new Transform({
                                                  DEF : new SFString("Seagull_foot_RR-ROOT"),
                                                  translation : new SFVec3f([-0.02591,-0.6629,4.973]),
                                                  rotation : new SFRotation([-0.981125,-0.149704,0.122403,1.422]),
                                                  scale : new SFVec3f([1.5,1.526,1.474]),
                                                  scaleOrientation : new SFRotation([1,0,0,0.6058]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              diffuseColor : new SFColor([0.8784,0.7765,0.3412])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          DEF : new SFString("Seagull_foot_RR-FACES"),
                                                          creaseAngle : new SFFloat(3),
                                                          coordIndex : new MFInt32([0,2,3,-1,0,3,1,-1,0,4,2,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              DEF : new SFString("Seagull_foot_RR-COORD"),
                                                              point : new MFVec3f([0,3.476,0,0.003385,0.6796,0,1.499,0.6796,0,0,3.45,-0.4106,0.624,0.925,-0.02917])}))}))})])}),

                                                new Transform({
                                                  DEF : new SFString("Seagull_foot_RL-ROOT"),
                                                  translation : new SFVec3f([-2.228,-0.1134,5.082]),
                                                  rotation : new SFRotation([-0.989385,0.111298,-0.0934386,1.44]),
                                                  scale : new SFVec3f([1.5,1.526,1.474]),
                                                  scaleOrientation : new SFRotation([1,0,0,0.632]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              diffuseColor : new SFColor([0.8784,0.7765,0.3412])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          DEF : new SFString("Seagull_foot_RL-FACES"),
                                                          creaseAngle : new SFFloat(3),
                                                          coordIndex : new MFInt32([0,4,2,-1,0,2,3,-1,3,1,0,-1,3,2,4,-1,4,0,1,-1,3,4,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              DEF : new SFString("Seagull_foot_RL-COORD"),
                                                              point : new MFVec3f([1.493,3.476,0,0.003385,0.6796,0,1.497,0.6939,-0.07582,1.518,3.467,-0.4058,0.7503,0.9574,-0.02974])}))}))})])})])})])})])})])})])}),

                            new Transform({
                              DEF : new SFString("Dummy_Seagull_Tail-ROOT"),
                              translation : new SFVec3f([-0.00128,3.212,0.6723]),
                              rotation : new SFRotation([0.0522582,0.0522582,-0.997265,1.574]),
                              scale : new SFVec3f([0.4132,0.6494,1]),
                              scaleOrientation : new SFRotation([0,-1,0,0.1047]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Seagull_tail-ROOT"),
                                  translation : new SFVec3f([-1.021,0.01607,0.4184]),
                                  rotation : new SFRotation([-0.610897,-0.610897,0.503597,2.209]),
                                  scale : new SFVec3f([1.11,1.11,1.11]),
                                  scaleOrientation : new SFRotation([-0.527693,0.162798,-0.833689,0.3343]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Seagull_tail-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          coordIndex : new MFInt32([2,3,1,-1,1,5,4,-1,1,3,5,-1,3,2,4,-1,4,5,3,-1,0,4,2,-1,1,0,2,-1,0,1,4,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Seagull_tail-COORD"),
                                              point : new MFVec3f([-0.7399,0.3406,1.973,0.8892,0.363,2.014,-2.033,0,-1.322,2.033,0,-1.322,-2.033,1.196,-1.322,2.033,1.196,-1.322])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("Seagull_Neck-ROOT"),
                              translation : new SFVec3f([0.01038,-2.978,0.1783]),
                              rotation : new SFRotation([-0.91916,0.292687,-0.263589,1.55]),
                              scale : new SFVec3f([5.89,9.07,3.748]),
                              scaleOrientation : new SFRotation([-0.179598,-0.982392,-0.0514896,0.568]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Seagull_Neck-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,1,8,7,-1,1,2,8,-1,2,9,8,-1,2,3,9,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,13,7,8,-1,13,8,9,-1,13,9,10,-1,13,10,11,-1,13,11,12,-1,13,12,7,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Seagull_Neck-COORD"),
                                          point : new MFVec3f([0,0,0,0.1965,0,0,0.09825,0,-0.1702,-0.09825,0,-0.1702,-0.1965,0,0,-0.09825,0,0.1702,0.09825,0,0.1702,0.1965,0.234,0,0.09825,0.234,-0.1702,-0.09825,0.234,-0.1702,-0.1965,0.234,0,-0.09825,0.234,0.1702,0.09825,0.234,0.1702,0,0.234,0])}))}))})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              toField : new SFString("fractionIn")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_Wake-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_Wake-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_Thigh_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_Thigh_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_Thigh_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_Thigh_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_heel_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_heel_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_heel_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_heel_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_leg_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_leg_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Thigh_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_Thigh_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Thigh_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_Thigh_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_Thigh_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_Thigh_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_Thigh_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_Thigh_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seagull_heel_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Seagull_heel_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seagull_heel_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_heel_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_leg_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_leg_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Thigh_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_Thigh_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Thigh_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_Thigh_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seagull-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seagull_Wake-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seagull_Wake-ROOT"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());