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
var SFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
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
                      DEF : new SFString("TimeSensor01-TIMER"),
                      cycleInterval : new SFTime(4),
                      loop : new SFBool(true),
                      startTime : new SFTime(1)}),

                    new Transform({
                      DEF : new SFString("Seaweed01-ROOT"),
                      translation : new SFVec3f([-0.02971,1.236,-0.02574]),
                      rotation : new SFRotation([0.430281,-0.622973,0.653271,2.375]),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Seaweed01-TIMER"),
                          cycleInterval : new SFTime(4)}),

                        new PositionInterpolator({
                          DEF : new SFString("Seaweed01-POS-INTERP"),
                          key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                          keyValue : new MFVec3f([-0.02971,1.236,-0.02574,-0.1194,1.231,-0.02574,-0.2155,1.217,-0.02574,-0.2544,1.21,-0.02574,-0.1983,1.22,-0.02574,-0.09911,1.232,-0.02574,0.02576,1.236,-0.02574,0.1625,1.226,-0.02574,0.2968,1.2,-0.02574,0.415,1.165,-0.02574,0.5053,1.128,-0.02574,0.5766,1.094,-0.02574,0.6385,1.059,-0.02574,0.6827,1.031,-0.02574,0.7021,1.018,-0.02574,0.6888,1.027,-0.02574,0.6244,1.067,-0.02574,0.4847,1.137,-0.02574,0.295,1.201,-0.02574,0.09374,1.233,-0.02574,-0.02971,1.236,-0.02574])}),

                        new OrientationInterpolator({
                          DEF : new SFString("Seaweed01-ROT-INTERP"),
                          key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                          keyValue : new MFRotation([0.430281,-0.622973,0.653271,2.375,0.448413,-0.601317,0.661319,2.423,0.467288,-0.577785,0.669183,2.475,0.474716,-0.56812,0.672223,2.497,0.463927,-0.582034,0.667839,2.466,0.444391,-0.606187,0.659586,2.412,0.418681,-0.636271,0.64797,2.346,0.388817,-0.668929,0.633527,2.275,0.357188,-0.701076,0.617179,2.206,0.326921,-0.729546,0.600738,2.145,0.301896,-0.751589,0.586492,2.098,0.280687,-0.769265,0.573974,2.061,0.261002,-0.784805,0.562103,2.028,0.246189,-0.796065,0.552876,2.005,0.239509,-0.801031,0.548621,1.994,0.244112,-0.797639,0.551527,2.001,0.265589,-0.781267,0.564876,2.036,0.307689,-0.746573,0.589878,2.109,0.357618,-0.700635,0.617431,2.207,0.404113,-0.652521,0.641021,2.31,0.430281,-0.622973,0.653271,2.375])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.1098,0.349,0.6941])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Seaweed01-FACES"),
                              colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,3,2,1,-1,4,3,1,-1,4,0,3,-1,4,1,0,-1]),
                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,3,2,1,-1,4,3,1,-1,4,0,3,-1,4,1,0,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,0.5137,0.03529,0,0.3725,0.6627,0,0.3725,0.6627,0,0.3725,0.6627,0,0.3725,0.6627])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Seaweed01-COORD"),
                                  point : new MFVec3f([0.126,0.126,0.5941,0.04385,0.04379,-1.343,-0.1855,0.1237,0.6651,0.04385,0.04379,1.343,0.1176,-0.1794,0.6651])}))}))}),

                        new Transform({
                          DEF : new SFString("Seaweed02-ROOT"),
                          translation : new SFVec3f([-0.04319,-0.1943,-2.567]),
                          rotation : new SFRotation([-0.876071,0.144295,-0.460085,0.1839]),
                          scaleOrientation : new SFRotation([0.394606,0.274104,0.877014,0.8427]),
                          children : new MFNode([
                            new PositionInterpolator({
                              DEF : new SFString("Seaweed02-POS-INTERP"),
                              key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                              keyValue : new MFVec3f([-0.04319,-0.1943,-2.567,-0.06646,-0.2469,-2.555,-0.09138,-0.3031,-2.539,-0.1012,-0.3253,-2.531,-0.08654,-0.2922,-2.542,-0.06234,-0.2376,-2.557,-0.03196,-0.1689,-2.572,0.002529,-0.09062,-2.583,0.0389,-0.007903,-2.588,0.07483,0.07404,-2.587,0.108,0.15,-2.58,0.146,0.2371,-2.565,0.1909,0.3403,-2.537,0.2324,0.4362,-2.5,0.2616,0.5039,-2.468,0.2706,0.5249,-2.457,0.2484,0.4733,-2.484,0.1871,0.3317,-2.54,0.1011,0.1341,-2.582,0.01066,-0.07215,-2.585,-0.04321,-0.1943,-2.567])}),

                            new OrientationInterpolator({
                              DEF : new SFString("Seaweed02-ROT-INTERP"),
                              key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                              keyValue : new MFRotation([-0.876071,0.144295,-0.460085,0.1839,-0.907578,0.193595,-0.372591,0.2263,-0.924174,0.228094,-0.306391,0.2742,-0.928193,0.238398,-0.285698,0.2936,-0.921808,0.222402,-0.317503,0.2647,-0.903511,0.186402,-0.385905,0.2186,-0.84999,0.110899,-0.514994,0.164499,-0.659187,-0.0623988,-0.749385,0.1135,-0.0711122,-0.365911,-0.927929,0.091901,0.504506,-0.495306,-0.707209,0.120801,0.717686,-0.48849,-0.49629,0.172399,0.811819,-0.464511,-0.353808,0.2419,0.858696,-0.442398,-0.258699,0.3306,0.88045,-0.427776,-0.204488,0.4173,0.890171,-0.419886,-0.176894,0.481,0.892612,-0.417706,-0.169602,0.5012,0.886171,-0.423286,-0.188494,0.4519,0.856069,-0.443884,-0.26479,0.3229,0.688398,-0.492498,-0.532498,0.160599,-0.568692,-0.124398,-0.813089,0.1047,-0.876112,0.144302,-0.460006,0.1839])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.1098,0.349,0.6941])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Seaweed01-FACES")}))}),

                            new Transform({
                              DEF : new SFString("Seaweed03-ROOT"),
                              translation : new SFVec3f([-0.04831,-0.0669,-2.462]),
                              rotation : new SFRotation([-0.212606,0.0791522,-0.973927,0.305]),
                              scaleOrientation : new SFRotation([0,-0.658972,-0.752168,0.3532]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Seaweed03-POS-INTERP"),
                                  key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                  keyValue : new MFVec3f([-0.04831,-0.0669,-2.462,-0.08597,-0.1786,-2.445,-0.1249,-0.2948,-2.416,-0.1456,-0.3568,-2.394,-0.1372,-0.3316,-2.403,-0.1157,-0.2672,-2.424,-0.08596,-0.1785,-2.445,-0.05172,-0.07699,-2.461,-0.01719,0.02478,-2.467,0.01319,0.1139,-2.464,0.03507,0.1778,-2.458,0.04801,0.2154,-2.453,0.05495,0.2356,-2.449,0.05673,0.2408,-2.448,0.0542,0.2334,-2.45,0.04815,0.2158,-2.453,0.03739,0.1845,-2.457,0.01786,0.1275,-2.463,-0.006604,0.05589,-2.467,-0.0315,-0.01731,-2.465,-0.04831,-0.06691,-2.462])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("Seaweed03-ROT-INTERP"),
                                  key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                  keyValue : new MFRotation([-0.212606,0.0791522,-0.973927,0.305,-0.472782,0.122195,-0.872666,0.3382,-0.657621,0.150205,-0.738223,0.3964,-0.725661,0.159691,-0.669264,0.4349,-0.700176,0.156195,-0.696676,0.4187,-0.621171,0.144893,-0.770164,0.3808,-0.472704,0.122201,-0.872707,0.3382,-0.239096,0.0836885,-0.967383,0.3069,0.0422514,0.0338911,-0.998532,0.2987,0.281802,-0.0112401,-0.959407,0.3117,0.428076,-0.0401678,-0.90285,0.3318,0.501574,-0.0551571,-0.863355,0.3472,0.536983,-0.062518,-0.841273,0.3564,0.545703,-0.0643404,-0.835505,0.3588,0.533286,-0.0617484,-0.843678,0.3553,0.50231,-0.055321,-0.862916,0.3473,0.441994,-0.0429794,-0.895988,0.3343,0.315218,-0.017761,-0.948853,0.3153,0.129096,0.0178295,-0.991472,0.3011,-0.0766019,0.0553513,-0.995524,0.299,-0.212606,0.0791522,-0.973927,0.305])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.1098,0.349,0.6941])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      USE : new SFString("Seaweed01-FACES")}))}),

                                new Transform({
                                  DEF : new SFString("Seaweed04-ROOT"),
                                  translation : new SFVec3f([-0.07361,-0.1399,-2.448]),
                                  rotation : new SFRotation([-0.513175,0.182491,-0.838659,0.2393]),
                                  scaleOrientation : new SFRotation([0.482308,0.146802,0.863614,0.3148]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Seaweed04-POS-INTERP"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFVec3f([-0.07361,-0.1399,-2.448,-0.07392,-0.1505,-2.447,-0.07444,-0.1683,-2.444,-0.07454,-0.1719,-2.443,-0.07361,-0.1399,-2.448,-0.07146,-0.06609,-2.456,-0.06849,0.03331,-2.46,-0.06507,0.1457,-2.455,-0.06157,0.258,-2.439,-0.0584,0.3574,-2.416,-0.05596,0.4324,-2.393,-0.05466,0.4719,-2.378,-0.05487,0.4657,-2.381,-0.05624,0.4239,-2.396,-0.05831,0.3603,-2.415,-0.06057,0.2896,-2.432,-0.06282,0.2182,-2.446,-0.06556,0.1298,-2.456,-0.06855,0.0315,-2.46,-0.07148,-0.06705,-2.456,-0.07361,-0.1399,-2.448])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Seaweed04-ROT-INTERP"),
                                      key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                      keyValue : new MFRotation([-0.513175,0.182491,-0.838659,0.2393,-0.539304,0.176501,-0.823406,0.2439,-0.579688,0.166797,-0.797584,0.2521,-0.587306,0.164802,-0.792409,0.2538,-0.513175,0.182491,-0.838659,0.2393,-0.291805,0.223004,-0.930118,0.2148,0.0868647,0.259414,-0.961852,0.2062,0.469097,0.257099,-0.844895,0.2326,0.69967,0.22989,-0.676471,0.2873,0.810475,0.204594,-0.548883,0.35,0.861299,0.1881,-0.471999,0.4032,0.881089,0.180398,-0.437194,0.4328,0.878191,0.181598,-0.442496,0.4281,0.856534,0.189808,-0.479919,0.3969,0.812875,0.203894,-0.545583,0.352,0.742069,0.221491,-0.632673,0.3061,0.634009,0.240403,-0.73501,0.2655,0.424093,0.259696,-0.867585,0.2268,0.0797762,0.259088,-0.962554,0.2061,-0.295191,0.222493,-0.929171,0.214999,-0.513175,0.182491,-0.838659,0.2393])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.1098,0.349,0.6941])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Seaweed01-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Seaweed05-ROOT"),
                                      translation : new SFVec3f([-0.05995,0.2236,-2.402]),
                                      rotation : new SFRotation([0.488583,0.198793,-0.849569,0.3441]),
                                      scaleOrientation : new SFRotation([0,0.159905,0.987132,0.4307]),
                                      children : new MFNode([
                                        new PositionInterpolator({
                                          DEF : new SFString("Seaweed05-POS-INTERP"),
                                          key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                          keyValue : new MFVec3f([-0.05995,0.2236,-2.402,-0.0529,0.1838,-2.408,-0.04573,0.1431,-2.413,-0.0391,0.105,-2.416,-0.03401,0.07557,-2.418,-0.03266,0.06774,-2.418,-0.02749,0.03761,-2.419,-0.01744,-0.02154,-2.418,-0.005854,-0.09069,-2.414,0.004712,-0.1547,-2.406,0.01191,-0.1989,-2.399,0.01351,-0.2088,-2.397,-0.002632,-0.1101,-2.412,-0.03219,0.06502,-2.418,-0.05149,0.1759,-2.409,-0.06275,0.2392,-2.399,-0.07145,0.2877,-2.389,-0.07885,0.3284,-2.379,-0.08618,0.3684,-2.367,-0.09663,0.4248,-2.349,-0.05995,0.2236,-2.402])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("Seaweed05-ROT-INTERP"),
                                          key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1]),
                                          keyValue : new MFRotation([0.488583,0.198793,-0.849569,0.3441,0.414413,0.175905,-0.892927,0.3296,0.328702,0.149001,-0.932606,0.3176,0.240706,0.121003,-0.963026,0.3094,0.168299,0.0975695,-0.980895,0.3051,0.148598,0.0911588,-0.984687,0.3042,0.0714576,0.0658678,-0.995266,0.3023,-0.0812683,0.0149997,-0.996579,0.3044,-0.249699,-0.0423898,-0.967395,0.3164,-0.385511,-0.0897626,-0.918327,0.3359,-0.465508,-0.118202,-0.877115,0.3535,-0.481826,-0.124007,-0.867448,0.3578,-0.293297,-0.0574795,-0.954292,0.3215,0.141701,0.0889108,-0.985909,0.304,0.398502,0.170901,-0.901104,0.327,0.515209,0.206904,-0.831715,0.3505,0.588495,0.228998,-0.775393,0.3728,0.640378,0.244291,-0.728175,0.3939,0.683694,0.256798,-0.683094,0.4167,0.733834,0.271013,-0.622929,0.4517,0.488583,0.198793,-0.849569,0.3441])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.1098,0.349,0.6941])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Seaweed01-FACES")}))})])})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed03-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed03-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed04-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed04-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed04-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed04-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed05-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed05-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed05-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Seaweed05-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Seaweed05-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed05-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed05-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed05-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed04-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed04-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed04-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed04-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed03-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed03-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Seaweed01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Seaweed01-ROOT"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
