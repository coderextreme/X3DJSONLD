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
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
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
var Billboard = require('./x3d.mjs');
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
            new TimeSensor({
              DEF : new SFString("TimeSensor_Fishswim-TIMER"),
              cycleInterval : new SFTime(1.6),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Transform({
              DEF : new SFString("Fish_Dummy_rotate_Y-ROOT"),
              translation : new SFVec3f([0.02897,-0.005942,-0.01196]),
              rotation : new SFRotation([0.423218,-0.0127905,0.905938,0.0250124]),
              scaleOrientation : new SFRotation([0.19509,0.721735,-0.664108,0.0157011]),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("Fish_Dummy_rotate_Y-TIMER"),
                  cycleInterval : new SFTime(1.6)}),

                new OrientationInterpolator({
                  DEF : new SFString("Fish_Dummy_rotate_Y-ROT-INTERP"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFRotation([0.423218,-0.0127905,0.905938,0.0250124,0.670927,-0.00873856,-0.741472,0.015792,0.258901,0.000228401,-0.965904,0.0409116,0.203419,0.00134412,-0.979091,0.0520578,0.29261,-0.000459915,-0.956232,0.0361926,0.991332,-0.0194008,0.129939,0.0106754,0.272382,-0.0102393,0.962135,0.0388612,0.193107,-0.00884134,0.981138,0.0547807,0.423218,-0.0127905,0.905938,0.0250124])}),

                new Transform({
                  DEF : new SFString("Fish_body-ROOT"),
                  translation : new SFVec3f([-0.03523,-0.007528,0.3114]),
                  rotation : new SFRotation([0.998783,-0.0348794,0.0348794,1.572]),
                  children : new MFNode([
                    new PositionInterpolator({
                      DEF : new SFString("Fish_body-POS-INTERP"),
                      key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                      keyValue : new MFVec3f([-0.03523,-0.007528,0.3114,-0.02274,-0.007528,0.3124,-0.008901,-0.007528,0.313,0.002314,-0.007528,0.313,0.00693,-0.007528,0.3128,0.0003348,-0.007528,0.313,-0.01418,-0.007528,0.3128,-0.02866,-0.007528,0.312,-0.03523,-0.007528,0.3114])}),

                    new OrientationInterpolator({
                      DEF : new SFString("Fish_body-ROT-INTERP"),
                      key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                      keyValue : new MFRotation([0.998783,-0.0348794,0.0348794,1.572,0.999799,-0.01418,0.01418,1.571,0.999924,0.00872621,-0.00872621,1.571,0.999257,0.0272588,-0.0272588,1.572,0.998783,0.0348794,-0.0348794,1.572,0.999424,0.0239906,-0.0239906,1.571,1,0,0,1.571,0.999424,-0.0239906,0.0239906,1.571,0.998783,-0.0348794,0.0348794,1.572])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1]),
                              shininess : new SFFloat(0.25)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("Fish_body-FACES"),
                          creaseAngle : new SFFloat(3),
                          colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1]),
                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1]),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("Fish_body-COORD"),
                              point : new MFVec3f([0,0.7757,0,0,0.6276,-0.456,-0.3147,0.6276,-0.3267,-0.458,0.6276,-0.0002355,-0.266,0.6262,0.4098,0.2454,0.6276,0.4098,0.4796,0.6276,0.0004446,0.3149,0.6276,-0.3296,0,0.2397,-0.7378,-0.5104,0.2397,-0.5294,-0.726,0.2397,-0.0002355,-0.4002,0.237,0.6119,0.3844,0.2397,0.6282,0.7476,0.2397,0.0004445,0.5106,0.2397,-0.5323,0,-0.3025,-0.7095,-0.5072,-0.3025,-0.5067,-0.726,-0.3025,-0.0003116,-0.4052,-0.3025,0.5862,0.3862,-0.3025,0.6052,0.7476,-0.3025,0.0003684,0.5074,-0.3025,-0.5096,0.005317,-0.8264,-0.5359,-0.4599,-0.8226,-0.05375,0,-0.8249,0.4095,0.4793,-0.8227,-0.07221,0,-1.856,-0.391])}))}))}),

                    new Transform({
                      DEF : new SFString("Fish_fin_L-ROOT"),
                      translation : new SFVec3f([0.6627,-0.1276,0.1854]),
                      rotation : new SFRotation([-0.771583,-0.496889,0.397191,3.005]),
                      scaleOrientation : new SFRotation([-0.976546,0,-0.21531,0.6453]),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("Fish_fin_L-ROT-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFRotation([-0.771583,-0.496889,0.397191,3.005,-0.893609,-0.233702,0.383204,2.803,-0.853784,-0.332894,0.400293,2.892,-0.796915,-0.441508,0.412308,2.994,-0.728687,-0.543491,0.416693,3.096,-0.660392,-0.626292,0.414295,3.183,-0.607503,-0.681404,0.408202,3.243,-0.5865,-0.7024,0.4033,3.262,-0.771583,-0.496889,0.397191,3.005])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.25)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Fish_fin_L-FACES"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              coordIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_fin_L-COORD"),
                                  point : new MFVec3f([-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_tail-ROOT"),
                      translation : new SFVec3f([-0.0106,-1.754,-0.3672]),
                      rotation : new SFRotation([-0.998956,0.0322986,-0.0322986,1.572]),
                      scaleOrientation : new SFRotation([0.691482,-0.722394,0,0.0161503]),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("Fish_tail-ROT-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFRotation([-0.998956,0.0322986,-0.0322986,1.572,-0.968493,-0.176099,0.176099,1.603,-0.954267,-0.211393,0.211393,1.618,-0.955761,-0.207992,0.207992,1.616,-0.990687,-0.0962787,0.0962787,1.58,-0.973967,0.160295,-0.160295,1.597,-0.954308,0.211302,-0.211302,1.618,-0.964008,0.188001,-0.188001,1.607,-0.998956,0.0322986,-0.0322986,1.572])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.25)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Fish_tail-FACES"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              coordIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_tail-COORD"),
                                  point : new MFVec3f([-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_fin_R-ROOT"),
                      translation : new SFVec3f([-0.6703,-0.14,0.1409]),
                      rotation : new SFRotation([-0.742578,0.490286,-0.456287,3.094]),
                      scaleOrientation : new SFRotation([0.45042,-0.490922,-0.745733,0.6073]),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("Fish_fin_R-ROT-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFRotation([-0.742578,0.490286,-0.456287,3.094,-0.680792,0.574893,-0.453895,3.193,-0.632455,0.631355,-0.448768,3.262,0.613219,-0.65222,0.445614,2.996,-0.780056,0.434575,-0.450175,3.021,-0.889261,0.179792,-0.420582,2.765,-0.853471,0.27659,-0.441685,2.869,-0.803604,0.386602,-0.452503,2.981,-0.742578,0.490286,-0.456287,3.094])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.25)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Fish_fin_R-FACES"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              coordIndex : new MFInt32([0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_fin_R-COORD"),
                                  point : new MFVec3f([-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_Jaw-ROOT"),
                      translation : new SFVec3f([0,0.5783,0.2942]),
                      rotation : new SFRotation([-1,0,0,0.2631]),
                      scale : new SFVec3f([1,1.188,0.5]),
                      children : new MFNode([
                        new PositionInterpolator({
                          DEF : new SFString("Fish_Jaw-POS-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFVec3f([0,0.5783,0.2942,0,0.5785,0.2948,0,0.5745,0.2802,0,0.5679,0.2594,0,0.5749,0.2815,0,0.5825,0.3119,0,0.5872,0.3364,0,0.5863,0.3308,0,0.5783,0.2942])}),

                        new OrientationInterpolator({
                          DEF : new SFString("Fish_Jaw-ROT-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFRotation([-1,0,0,0.2631,-1,0,0,0.2618,-1,0,0,0.2945,-1,0,0,0.3416,-1,0,0,0.2915,-1,0,0,0.224,-1,0,0,0.170099,-1,0,0,0.182399,-1,0,0,0.2631])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.25)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Fish_Jaw-FACES"),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1]),
                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_Jaw-COORD"),
                                  point : new MFVec3f([0,0.7757,0,0.0072,0.6339,-0.5128,-0.4619,0.4526,-0.4281,-0.5485,0.5485,0,-0.2274,0.5475,0.3934,0.2318,0.5495,0.3825,0.5485,0.5485,0,0.4457,0.4526,-0.4281,0.03296,0.417,-0.1017,-0.5485,0,-0.5485,-0.7757,0,0,-0.325,-0.001422,0.5563,0.3243,0.001427,0.5408,0.7757,0,0,0.5485,0,-0.5485,-0.001625,-0.5596,-0.2906,-0.5485,-0.5485,0,-0.388,-0.5295,0.2488,0.3725,-0.5354,0.2824,0.5485,-0.5485,0])}))}))}),

                        new Transform({
                          DEF : new SFString("Fish_tooth_R-ROOT"),
                          translation : new SFVec3f([-0.176,0.5341,-0.4354]),
                          rotation : new SFRotation([-0.96266,-0.104596,0.24969,1.449]),
                          scale : new SFVec3f([1,2,0.8417]),
                          scaleOrientation : new SFRotation([-0.738145,0.405825,-0.538933,0.2442]),
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
                                  DEF : new SFString("Fish_tooth_R-FACES"),
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(3),
                                  colorIndex : new MFInt32([0,1,3,-1,3,2,0,-1]),
                                  coordIndex : new MFInt32([0,1,3,-1,3,2,0,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Fish_tooth_R-COORD"),
                                      point : new MFVec3f([-0.07413,0,0,0.07413,0,0,-0.07413,0.1322,0,0.07413,0.1322,0])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Fish_tooth_L-ROOT"),
                          translation : new SFVec3f([0.1348,0.5467,-0.4041]),
                          rotation : new SFRotation([-0.953377,0.186195,-0.237494,1.438]),
                          scale : new SFVec3f([1,2,0.8417]),
                          scaleOrientation : new SFRotation([-0.695969,-0.695969,0.176792,0.2577]),
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
                                  DEF : new SFString("Fish_tooth_L-FACES"),
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(3),
                                  colorIndex : new MFInt32([0,1,3,-1,3,2,0,-1]),
                                  coordIndex : new MFInt32([0,1,3,-1,3,2,0,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Fish_tooth_L-COORD"),
                                      point : new MFVec3f([-0.09913,0,0,0.09913,0,0,-0.09913,0.1822,0,0.09913,0.1822,0])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("Fish_eyebag_R2-ROOT"),
                      translation : new SFVec3f([-0.2477,0.592,-0.3411]),
                      rotation : new SFRotation([-0.721002,-0.150001,0.676502,0.5966]),
                      scaleOrientation : new SFRotation([-0.752589,0.65849,0,0.0950596]),
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
                              DEF : new SFString("Fish_eyebag_R2-FACES"),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]),
                              coordIndex : new MFInt32([0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_eyebag_R2-COORD"),
                                  point : new MFVec3f([-0.006808,-0.08231,-0.2931,0,0.07093,-0.1838,0,0,-0.1128,0.1648,-0.03405,-0.196,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2615,-0.01672,-0.007798,0.1838,0.07093,0,0.1128,0,0,0.1784,-0.02396,0.1689,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.06418,0.002961,0.2561,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.283,-0.04801,-0.02239,-0.1838,0.07093,0,-0.1128,0,0,-0.2029,-0.0565,-0.2065,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_eyebag_L2-ROOT"),
                      translation : new SFVec3f([0.279,0.5864,-0.3411]),
                      rotation : new SFRotation([-0.854353,0.112494,-0.507372,0.5078]),
                      scaleOrientation : new SFRotation([-0.390791,-0.920479,0,0.3339]),
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
                              DEF : new SFString("Fish_eyebag_L2-FACES"),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]),
                              coordIndex : new MFInt32([0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_eyebag_L2-COORD"),
                                  point : new MFVec3f([-0.07863,-0.1193,-0.3083,0,0.07093,-0.1838,0,0,-0.1128,0.1764,-0.07652,-0.1929,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2664,-0.1297,-0.0212,0.1838,0.07093,0,0.1128,0,0,0.2249,-0.04408,0.1782,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.0268,-0.02627,0.2698,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.2577,-0.001811,0.00967,-0.1838,0.07093,0,-0.1128,0,0,-0.1941,-0.01375,-0.1532,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_fin_T-ROOT"),
                      translation : new SFVec3f([0.001723,-0.02606,-0.7095]),
                      rotation : new SFRotation([-0.970745,0.21191,0.112905,0.9946]),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("Fish_fin_T-ROT-INTERP"),
                          key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                          keyValue : new MFRotation([-0.970745,0.21191,0.112905,0.9946,-0.974006,0.192001,0.120201,1.012,-0.998335,0.0440315,0.0372613,0.9992,-0.993332,-0.104503,-0.0486916,1.009,-0.97294,-0.204208,-0.108104,1.028,-0.969013,-0.217003,-0.118002,1.029,-0.992327,-0.108003,-0.0601817,0.9994,-0.997094,0.0678296,0.0346898,0.9826,-0.970745,0.21191,0.112905,0.9946])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0.25)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Fish_fin_T-FACES"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              colorIndex : new MFInt32([0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1]),
                              coordIndex : new MFInt32([0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_fin_T-COORD"),
                                  point : new MFVec3f([-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Fish_eyeball_R-ROOT"),
                      translation : new SFVec3f([-0.2795,0.7001,-0.3883]),
                      rotation : new SFRotation([-0.493215,-0.391712,0.776724,0.4104]),
                      scaleOrientation : new SFRotation([0.794274,0.433641,-0.42554,0.032857]),
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
                              DEF : new SFString("Fish_eyeball_R-FACES"),
                              creaseAngle : new SFFloat(3),
                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Fish_eyeball_R-COORD"),
                                  point : new MFVec3f([0,0.1761,0,0,0.08806,-0.1525,-0.1321,0.08806,-0.07626,-0.1321,0.08806,0.07626,0,0.08806,0.1525,0.1321,0.08806,0.07626,0.1321,0.08806,-0.07626,0,-0.08806,-0.1525,-0.1321,-0.08806,-0.07626,-0.1321,-0.08806,0.07626,0,-0.08806,0.1525,0.1321,-0.08806,0.07626,0.1321,-0.08806,-0.07626,0,-0.1761,0])}))}))}),

                        new Billboard({
                          children : new MFNode([
                            new Billboard({
                              axisOfRotation : new SFVec3f([1,0,0]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Fish_pupil_R-ROOT"),
                                  translation : new SFVec3f([0,0,0.1435]),
                                  rotation : new SFRotation([1,0,0,1.57]),
                                  scaleOrientation : new SFRotation([0.812896,0.111699,0.571597,0.0948788]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Fish_pupil_R-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Fish_pupil_R-COORD"),
                                              point : new MFVec3f([0,0.04612,0,0,0.01425,-0.04386,-0.04172,0.01425,-0.01355,-0.02578,0.01425,0.03549,0.02578,0.01425,0.03549,0.04172,0.01425,-0.01355])}))}))})])})])})])})])}),

                    new Transform({
                      DEF : new SFString("Fish_eyeball_L-ROOT"),
                      translation : new SFVec3f([0.3008,0.7041,-0.401]),
                      rotation : new SFRotation([-0.385014,-0.409615,0.827031,0.6245]),
                      scaleOrientation : new SFRotation([-0.189892,0.594875,0.781067,0.6771]),
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
                              USE : new SFString("Fish_eyeball_R-FACES")}))}),

                        new Billboard({
                          axisOfRotation : new SFVec3f([1,0,0]),
                          children : new MFNode([
                            new Billboard({
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Fish_pupil_L-ROOT"),
                                  translation : new SFVec3f([0,0,0.1435]),
                                  rotation : new SFRotation([1,0,0,1.57]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Fish_pupil_R-FACES")}))})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Dummy_rotate_Y-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_Dummy_rotate_Y-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Dummy_rotate_Y-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_body-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_body-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_body-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_body-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_body-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_body-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_body-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_body-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_fin_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_fin_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_tail-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_tail-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_tail-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_tail-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_fin_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_fin_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Jaw-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Jaw-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_Jaw-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Jaw-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Jaw-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Jaw-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_Jaw-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_Jaw-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_Dummy_rotate_Y-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_T-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Fish_fin_T-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fish_fin_T-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Fish_fin_T-ROT-INTERP"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());