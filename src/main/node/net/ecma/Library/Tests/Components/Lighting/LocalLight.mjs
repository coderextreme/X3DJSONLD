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
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ElevationGrid = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataFloat = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
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
              content : new SFString("Tue, 22 Sep 2015 03:19:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V2.0.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Lighting/LocalLight.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 20 Oct 2016 11:00:29 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("LocalLight"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([38.5307998657227,38.1931991577148,54.2624015808105])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.873252862989652,0.462253895384657,0.154112859561057,0.974525034427643])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([20,0,20])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("_1"),
                              family : new MFString(["SANS"]),
                              justify : new MFString(["END"])}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("LayerSet"),
                      DEF : new SFString("LayerSet"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeLayer"),
                          DEF : new SFString("activeLayer"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([-1])}))}))})])}),
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(1),
              order : new MFInt32([1,2]),
              layers : new SFNode(
                new Layer({
                  children : new MFNode([
                    new Background({
                      DEF : new SFString("Gray"),
                      skyColor : new MFColor([0.2,0.2,0.2])}),

                    new NavigationInfo({
                      type : ["EXAMINE"],
                      headlight : new SFBool(false)}),

                    new Viewpoint({
                      description : new SFString("Home"),
                      position : new SFVec3f([38.5308,38.1932,54.2624]),
                      orientation : new SFRotation([-0.873252834390235,0.462253912334941,0.15411297077294,0.974525]),
                      centerOfRotation : new SFVec3f([20,0,20])}),

                    new Transform({
                      DEF : new SFString("GlobalLight"),
                      translation : new SFVec3f([8.04568,10.189,9.98222]),
                      children : new MFNode([
                        new PointLight({
                          intensity : new SFFloat(0.0650888)})])}),

                    new Transform({
                      DEF : new SFString("Tile1"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_2"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([10,10,10]),
                              rotation : new SFRotation([-1,-2.09955e-10,-1.12942e-9,1.57]),
                              scaleOrientation : new SFRotation([0.991022590991182,-0.0697250712234926,0.114072952920504,0.180415999999999]),
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("LightAnim"),
                                  metadata : new MFNode([
                                    new MetadataSet({
                                      name : new SFString("Animation"),
                                      value : new SFNode(
                                        new MetadataInteger({
                                          name : new SFString("duration"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFInt32([120])})),
                                      value : new SFNode(
                                        new MetadataInteger({
                                          name : new SFString("framesPerSecond"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFInt32([10])}))}),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("_3"),
                                      cycleInterval : new SFTime(12),
                                      loop : new SFBool(true)}),

                                    new PositionInterpolator({
                                      DEF : new SFString("DirectionInterpolator"),
                                      key : new MFFloat([0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]),
                                      keyValue : new MFVec3f([-0.475709,-0.436148,-0.763856,-0.487436,-0.421618,-0.765291,-0.497508,-0.404542,-0.767164,-0.505976,-0.385102,-0.769443,-0.512895,-0.363478,-0.772098,-0.518318,-0.339852,-0.775096,-0.522298,-0.314407,-0.778408,-0.524889,-0.287322,-0.782,-0.526143,-0.25878,-0.785843,-0.526115,-0.228962,-0.789906,-0.524858,-0.19805,-0.794156,-0.522425,-0.166225,-0.798563,-0.518869,-0.133668,-0.803095,-0.514244,-0.100561,-0.807722,-0.508603,-0.0670861,-0.812411,-0.502,-0.0334238,-0.817133,-0.494488,0.000244015,-0.821855,-0.48612,0.033736,-0.826547,-0.476949,0.0668705,-0.831177,-0.46703,0.0994663,-0.835714,-0.456415,0.131342,-0.840127,-0.445158,0.162316,-0.844384,-0.433312,0.192206,-0.848455,-0.42093,0.220832,-0.852308,-0.408067,0.248011,-0.855912,-0.394774,0.273563,-0.859236,-0.381107,0.297306,-0.862248,-0.367117,0.319059,-0.864918,-0.352859,0.338639,-0.867214,-0.338385,0.355866,-0.869105,-0.323749,0.370557,-0.870559,-0.30804,0.383454,-0.871636,-0.290405,0.39542,-0.872423,-0.270987,0.406458,-0.872936,-0.249929,0.416571,-0.87319,-0.227372,0.425762,-0.873199,-0.20346,0.434035,-0.872978,-0.178336,0.441394,-0.872543,-0.152141,0.44784,-0.871907,-0.125019,0.453379,-0.871087,-0.0971121,0.458012,-0.870096,-0.068563,0.461743,-0.86895,-0.0395143,0.464577,-0.867663,-0.0101085,0.466514,-0.866251,0.0195116,0.46756,-0.864728,0.0492035,0.467718,-0.863109,0.0788245,0.46699,-0.861409,0.108232,0.46538,-0.859642,0.137284,0.462891,-0.857825,0.165836,0.459527,-0.85597,0.193748,0.45529,-0.854095,0.220876,0.450185,-0.852212,0.247077,0.444214,-0.850338,0.272209,0.437381,-0.848486,0.296129,0.429689,-0.846672,0.318695,0.42114,-0.844911,0.339763,0.41174,-0.843218,0.359193,0.40149,-0.841607,0.37684,0.390394,-0.840093,0.392562,0.378456,-0.838692,0.406216,0.365678,-0.837417,0.418519,0.351213,-0.836202,0.430263,0.334325,-0.834969,0.441423,0.315187,-0.833719,0.451974,0.293971,-0.832454,0.461892,0.27085,-0.831175,0.471151,0.245997,-0.829883,0.479726,0.219585,-0.82858,0.487593,0.191785,-0.827266,0.494725,0.162772,-0.825943,0.501099,0.132717,-0.824612,0.506688,0.101792,-0.823274,0.511469,0.0701721,-0.821931,0.515416,0.0380281,-0.820583,0.518504,0.00553328,-0.819233,0.520707,-0.0271398,-0.81788,0.522002,-0.0598185,-0.816527,0.522363,-0.0923301,-0.815174,0.521764,-0.124502,-0.813823,0.520181,-0.156161,-0.812475,0.517589,-0.187136,-0.811131,0.513963,-0.217253,-0.809793,0.509278,-0.246339,-0.808461,0.503508,-0.274222,-0.807137,0.496629,-0.300729,-0.805823,0.488615,-0.325689,-0.804518,0.479443,-0.348927,-0.803225,0.469085,-0.370271,-0.801945,0.457519,-0.389549,-0.800679,0.444717,-0.406588,-0.799428,0.430657,-0.421215,-0.798193,0.414373,-0.434177,-0.796897,0.395065,-0.44633,-0.79547,0.372955,-0.45767,-0.793927,0.348264,-0.468191,-0.792284,0.321213,-0.477887,-0.790555,0.292022,-0.486753,-0.788756,0.260913,-0.494784,-0.786903,0.228107,-0.501973,-0.785009,0.193824,-0.508316,-0.78309,0.158286,-0.513806,-0.781162,0.121714,-0.518439,-0.779239,0.084329,-0.522208,-0.777337,0.0463515,-0.525109,-0.77547,0.00800288,-0.527135,-0.773654,-0.0304959,-0.528282,-0.771904,-0.0689239,-0.528543,-0.770235,-0.10706,-0.527913,-0.768663,-0.144683,-0.526387,-0.767201,-0.181573,-0.523959,-0.765867,-0.217507,-0.520624,-0.764673,-0.252266,-0.516375,-0.763637,-0.285627,-0.511209,-0.762772,-0.317371,-0.505118,-0.762094,-0.347276,-0.498098,-0.761619,-0.37512,-0.490143,-0.76136,-0.400684,-0.481247,-0.761334,-0.423746,-0.471405,-0.761556,-0.444085,-0.460612,-0.76204,-0.461479,-0.448861,-0.762801,-0.475709,-0.436148,-0.763856]),
                                      metadata : new MFNode([
                                        new MetadataSet({
                                          name : new SFString("Interpolator"),
                                          value : new SFNode(
                                            new MetadataInteger({
                                              name : new SFString("key"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFInt32([0,30,60,90,120])})),
                                          value : new SFNode(
                                            new MetadataDouble({
                                              name : new SFString("keyValue"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFDouble([-0.475708842277527,-0.436148166656494,-0.763855934143066,-0.323749333620071,0.370557337999344,-0.870559394359589,0.406216442584991,0.365678489208221,-0.837417185306549,0.430656850337982,-0.421214938163757,-0.798193275928497,-0.475708842277527,-0.436148166656494,-0.763855934143066])})),
                                          value : new SFNode(
                                            new MetadataString({
                                              name : new SFString("keyType"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFString([", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"])}))})])}),

                                    new ColorInterpolator({
                                      DEF : new SFString("ColorInterpolator"),
                                      key : new MFFloat([0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]),
                                      keyValue : new MFColor([1,0,0,1,0.0499985,0,1,0.0999942,0,1,0.149987,0,1,0.199979,0,1,0.249968,0,1,0.299955,0,1,0.349942,0,1,0.399927,0,1,0.449912,0,1,0.499897,0,1,0.549881,0,1,0.599866,0,1,0.649852,0,1,0.699838,0,1,0.749826,0,1,0.799815,0,1,0.849806,0,1,0.899799,0,1,0.949795,0,1,0.999793,0,0.950205,1,0,0.9002,1,0,0.850191,1,0,0.800179,1,0,0.750161,1,0,0.70014,1,0,0.650113,1,0,0.600081,1,0,0.550043,1,0,0.5,1,0,0.449945,1,0,0.399873,1,0,0.349786,1,0,0.299686,1,0,0.249573,1,0,0.19945,1,0,0.149318,1,0,0.0991781,1,0,0.0490322,1,0,0,1,0.00111821,0,1,0.0512717,0,1,0.101427,0,1,0.151582,0,1,0.201736,0,1,0.251887,0,1,0.302034,0,1,0.352174,0,1,0.402308,0,1,0.452432,0,1,0.502546,0,1,0.552649,0,1,0.602738,0,1,0.652812,0,1,0.702869,0,1,0.752909,0,1,0.80293,0,1,0.85293,0,1,0.902907,0,1,0.952861,0,0.997211,1,0,0.94731,1,0,0.897438,1,0,0.847593,1,0,0.797772,1,0,0.747975,1,0,0.698198,1,0,0.648441,1,0,0.598701,1,0,0.548976,1,0,0.499265,1,0,0.449566,1,0,0.399877,1,0,0.350197,1,0,0.300522,1,0,0.250852,1,0,0.201185,1,0,0.151518,1,0,0.101851,1,0,0.0521804,1,0,0.00250527,1,0.0471765,0,1,0.0968666,0,1,0.146567,0,1,0.19628,0,1,0.246006,0,1,0.295748,0,1,0.345508,0,1,0.395287,0,1,0.445088,0,1,0.494912,0,1,0.544754,0,1,0.594609,0,1,0.644476,0,1,0.694353,0,1,0.744242,0,1,0.79414,0,1,0.844047,0,1,0.893963,0,1,0.943887,0,1,0.993818,0,1,1,0,0.956244,1,0,0.906301,1,0,0.856352,1,0,0.806399,1,0,0.756441,1,0,0.706481,1,0,0.656518,1,0,0.606552,1,0,0.556586,1,0,0.506619,1,0,0.456652,1,0,0.406685,1,0,0.35672,1,0,0.306757,1,0,0.256796,1,0,0.206839,1,0,0.156885,1,0,0.106937,1,0,0.0569931,1,0,0.00705553]),
                                      metadata : new MFNode([
                                        new MetadataSet({
                                          name : new SFString("Interpolator"),
                                          value : new SFNode(
                                            new MetadataInteger({
                                              name : new SFString("key"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFInt32([0,30,60,90,120])})),
                                          value : new SFNode(
                                            new MetadataDouble({
                                              name : new SFString("keyValue"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFDouble([1,0,0,0.5,1,0,0,0.997210741043091,1,0.494911581277847,0,1,1,0,0.00705553032457829])})),
                                          value : new SFNode(
                                            new MetadataString({
                                              name : new SFString("keyType"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFString([", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"])}))})])}),

                                    new ScalarInterpolator({
                                      DEF : new SFString("BeamWidthInterpolator"),
                                      key : new MFFloat([0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]),
                                      keyValue : new MFFloat([0.5,0.499596,0.498403,0.496448,0.493757,0.490359,0.48628,0.481548,0.47619,0.470232,0.463704,0.45663,0.44904,0.44096,0.432416,0.423438,0.41405,0.404282,0.39416,0.383711,0.372963,0.361942,0.350677,0.339194,0.32752,0.315683,0.30371,0.291627,0.279464,0.267245,0.255,0.242755,0.230536,0.218372,0.20629,0.194317,0.18248,0.170806,0.159323,0.148058,0.137037,0.126289,0.11584,0.105718,0.0959496,0.0865625,0.0775837,0.0690405,0.06096,0.0533695,0.0462963,0.0397675,0.0338104,0.0284521,0.02372,0.0196412,0.016243,0.0135525,0.011597,0.0104038,0.01,0.0104038,0.011597,0.0135525,0.016243,0.0196412,0.02372,0.0284521,0.0338104,0.0397675,0.0462963,0.0533695,0.06096,0.0690405,0.0775837,0.0865625,0.0959496,0.105718,0.11584,0.126289,0.137037,0.148058,0.159323,0.170806,0.18248,0.194317,0.20629,0.218372,0.230536,0.242755,0.255,0.267245,0.279464,0.291627,0.30371,0.315683,0.32752,0.339194,0.350677,0.361942,0.372963,0.383711,0.39416,0.404282,0.41405,0.423438,0.432416,0.44096,0.44904,0.45663,0.463704,0.470232,0.47619,0.481548,0.48628,0.490359,0.493757,0.496448,0.498403,0.499596,0.5]),
                                      metadata : new MFNode([
                                        new MetadataSet({
                                          name : new SFString("Interpolator"),
                                          DEF : new SFString("Interpolator"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new SFNode(
                                            new MetadataInteger({
                                              name : new SFString("key"),
                                              DEF : new SFString("key"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFInt32([0,60,120])})),
                                          value : new SFNode(
                                            new MetadataDouble({
                                              name : new SFString("keyValue"),
                                              DEF : new SFString("keyValue"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFDouble([0.5,0.00999999977648258,0.5])})),
                                          value : new SFNode(
                                            new MetadataString({
                                              name : new SFString("keyType"),
                                              DEF : new SFString("keyType"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFString([", ","SPLINE, ","SPLINESPLINE"])}))})])}),

                                    new ScalarInterpolator({
                                      DEF : new SFString("CutOffAngleInterpolator"),
                                      key : new MFFloat([0,0.00833333,0.0166667,0.025,0.0333333,0.0416667,0.05,0.0583333,0.0666667,0.075,0.0833333,0.0916667,0.1,0.108333,0.116667,0.125,0.133333,0.141667,0.15,0.158333,0.166667,0.175,0.183333,0.191667,0.2,0.208333,0.216667,0.225,0.233333,0.241667,0.25,0.258333,0.266667,0.275,0.283333,0.291667,0.3,0.308333,0.316667,0.325,0.333333,0.341667,0.35,0.358333,0.366667,0.375,0.383333,0.391667,0.4,0.408333,0.416667,0.425,0.433333,0.441667,0.45,0.458333,0.466667,0.475,0.483333,0.491667,0.5,0.508333,0.516667,0.525,0.533333,0.541667,0.55,0.558333,0.566667,0.575,0.583333,0.591667,0.6,0.608333,0.616667,0.625,0.633333,0.641667,0.65,0.658333,0.666667,0.675,0.683333,0.691667,0.7,0.708333,0.716667,0.725,0.733333,0.741667,0.75,0.758333,0.766667,0.775,0.783333,0.791667,0.8,0.808333,0.816667,0.825,0.833333,0.841667,0.85,0.858333,0.866667,0.875,0.883333,0.891667,0.9,0.908333,0.916667,0.925,0.933333,0.941667,0.95,0.958333,0.966667,0.975,0.983333,0.991667,1]),
                                      keyValue : new MFFloat([1.5708,1.56967,1.56633,1.56086,1.55333,1.54382,1.53241,1.51918,1.50419,1.48752,1.46926,1.44947,1.42823,1.40563,1.38173,1.35661,1.33035,1.30302,1.2747,1.24547,1.2154,1.18457,1.15306,1.12093,1.08828,1.05516,1.02167,0.987865,0.953836,0.919655,0.885398,0.851141,0.81696,0.782931,0.749131,0.715635,0.68252,0.649862,0.617737,0.586222,0.555392,0.525323,0.496092,0.467775,0.440448,0.414187,0.389068,0.365168,0.342563,0.321328,0.30154,0.283276,0.266611,0.251621,0.238382,0.226972,0.217465,0.209938,0.204468,0.20113,0.2,0.20113,0.204468,0.209938,0.217465,0.226972,0.238382,0.251621,0.266611,0.283276,0.30154,0.321328,0.342563,0.365168,0.389068,0.414187,0.440448,0.467775,0.496092,0.525323,0.555392,0.586222,0.617737,0.649862,0.68252,0.715635,0.749131,0.782931,0.81696,0.851141,0.885398,0.919655,0.953836,0.987865,1.02167,1.05516,1.08828,1.12093,1.15306,1.18457,1.2154,1.24547,1.2747,1.30302,1.33035,1.35661,1.38173,1.40563,1.42823,1.44947,1.46926,1.48752,1.50419,1.51918,1.53241,1.54382,1.55333,1.56086,1.56633,1.56967,1.5708]),
                                      metadata : new MFNode([
                                        new MetadataSet({
                                          name : new SFString("Interpolator"),
                                          DEF : new SFString("Interpolator_1"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new SFNode(
                                            new MetadataInteger({
                                              name : new SFString("key"),
                                              DEF : new SFString("key_1"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFInt32([0,60,120])})),
                                          value : new SFNode(
                                            new MetadataDouble({
                                              name : new SFString("keyValue"),
                                              DEF : new SFString("keyValue_1"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFDouble([1.57079601287842,0.200000002980232,1.57079601287842])})),
                                          value : new SFNode(
                                            new MetadataString({
                                              name : new SFString("keyType"),
                                              DEF : new SFString("keyType_1"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFString([", ","SPLINE, ","SPLINESPLINE"])}))})])})])}),

                                new SpotLight({
                                  DEF : new SFString("_4"),
                                  global : new SFBool(false),
                                  color : new SFColor([1,0,0.439812]),
                                  intensity : new SFFloat(0.485207),
                                  direction : new SFVec3f([-0.26351,-0.514634,-0.763345]),
                                  beamWidth : new SFFloat(0.47224),
                                  cutOffAngle : new SFFloat(1.49314)}),

                                new Transform({
                                  DEF : new SFString("ElevationGrid"),
                                  translation : new SFVec3f([-10,9.99203,-10.008]),
                                  rotation : new SFRotation([1,1.00032e-9,3.08126e-10,1.57]),
                                  scaleOrientation : new SFRotation([0.991100738221959,0.113549970008207,0.069467481651652,0.181206]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new ElevationGrid({
                                          xDimension : new SFInt32(20),
                                          zDimension : new SFInt32(20)}))})])}),

                                new Transform({
                                  DEF : new SFString("Cone"),
                                  rotation : new SFRotation([0.890101675582162,-0.455762007110978,0,2.49335868029868]),
                                  scaleOrientation : new SFRotation([-0.546046080148377,0.18703802745335,-0.816609119861487,0.459043]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("Cone_1"),
                                      rotation : new SFRotation([-0.999999999993436,-0.00000362331999997622,8.16271999994642e-11,1.5708]),
                                      scaleOrientation : new SFRotation([0.999999999986922,0.00000161480999997888,0.00000485263999993654,0.785375]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_5"),
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([1,0,0.439812]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Cone({}))})])})])}),

                                new Script({
                                  DEF : new SFString("RotationScript"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("set_direction"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                    new field({
                                      type : field.TYPE_SFROTATION,
                                      name : new SFString("rotation_changed"),
                                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                                  ]),
ecmascript:eval (0

, function set_direction (value)
{
	rotation_changed = new SFRotation (new SFVec3f (0, 0, 1), value);
})})])}),

                            new Transform({
                              DEF : new SFString("Box"),
                              translation : new SFVec3f([4.28962,1.06325,4.82481]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new Box({}))})])})])})])}),

                    new Transform({
                      DEF : new SFString("Tile2"),
                      translation : new SFVec3f([20,0,0]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("_2")})])}),

                    new Transform({
                      DEF : new SFString("Tile3"),
                      translation : new SFVec3f([20,0,20]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("_2")})])}),

                    new Transform({
                      DEF : new SFString("Tile4"),
                      translation : new SFVec3f([0,0,20]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("_2")})])})])})),
              layers : new SFNode(
                new Layer({
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("Titania"),
                      DEF : new SFString("Titania_1"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("Grid"),
                          DEF : new SFString("Grid"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([true])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("rotation"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([1,0,0,1.5708])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("scale"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([0.049,0.049,0.049])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("dimension"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([73,10,41])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("majorLineEvery"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([5,5,5,5,0,5])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("majorLineOffset"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([0,0,-5,-1,0,-6])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("lineColor"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([1,0.7,0.7,0.0588235])}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("AngleGrid"),
                          DEF : new SFString("AngleGrid"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([false])}))}))}),
                  children : new MFNode([
                    new OrthoViewpoint({}),

                    new Transform({
                      DEF : new SFString("Geometry3D"),
                      translation : new SFVec3f([-1.6905,0.955504,-1]),
                      scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Local Light"]),
                              solid : new SFBool(true),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(1.61),
                                  justify : new MFString([", ","BEGINBEGIN"])}))}))})])}),

                    new Transform({
                      DEF : new SFString("LightMenu"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Text"),
                          translation : new SFVec3f([1.6905,-0.661496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Artdeco31"),
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["SpotLight"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      style : new SFString("BOLD"),
                                      size : new SFFloat(0.68),
                                      justify : new MFString(["END"])}))}))})])}),

                        new Transform({
                          DEF : new SFString("GlobalButton"),
                          translation : new SFVec3f([1.51582,-0.734328,-0.00000269843]),
                          scale : new SFVec3f([0.227685,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      transparency : new SFFloat(1)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_6")})])}),

                        new Transform({
                          DEF : new SFString("Text_1"),
                          translation : new SFVec3f([1.6905,-0.759496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Text({
                                  DEF : new SFString("_7"),
                                  string : new MFString(["global false"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      justify : new MFString(["END"])}))}))})])})])}),

                    new Group({
                      DEF : new SFString("ShadingMenu"),
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("ShadingScript"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_pointset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_wireframe"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_flat"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_gouraud"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_phong"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                          ]),javascript:

, function set_pointset ()
{
	Browser .setBrowserOption ("Shading", "POINTSET");
	Browser .setDescription ("Shading: Pointset");
}

, function set_wireframe ()
{
	Browser .setBrowserOption ("Shading", "WIREFRAME");
	Browser .setDescription ("Shading: Wirefrane");
}

, function set_flat ()
{
	Browser .setBrowserOption ("Shading", "FLAT");
	Browser .setDescription ("Shading: Flat");
}

, function set_gouraud ()
{
	Browser .setBrowserOption ("Shading", "GOURAUD");
	Browser .setDescription ("Shading: Gouraud");
}

, function set_phong ()
{
	Browser .setBrowserOption ("Shading", "PHONG");
	Browser .setDescription ("Shading: Phong");
})}),

                        new Transform({
                          DEF : new SFString("Text_2"),
                          translation : new SFVec3f([1.6905,-0.857496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Artdeco31_1"),
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Shading"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      style : new SFString("BOLD"),
                                      size : new SFFloat(0.68),
                                      justify : new MFString(["END"])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Text_3"),
                          translation : new SFVec3f([1.6905,-0.955496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pointset Wireframe Flat Gouraud Phong"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("_1")}))}))})])}),

                        new Transform({
                          DEF : new SFString("Pointset"),
                          translation : new SFVec3f([0.436176,-0.916146,0]),
                          scale : new SFVec3f([0.139972,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_8"),
                                      transparency : new SFFloat(1)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_9")})])}),

                        new Transform({
                          DEF : new SFString("Wireframe"),
                          translation : new SFVec3f([0.77569,-0.916146,0]),
                          scale : new SFVec3f([0.177062,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_10")})])}),

                        new Transform({
                          DEF : new SFString("Flat"),
                          translation : new SFVec3f([1.04432,-0.916146,0]),
                          scale : new SFVec3f([0.0743511,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_11")})])}),

                        new Transform({
                          DEF : new SFString("Gouraud"),
                          translation : new SFVec3f([1.27986,-0.916146,0]),
                          scale : new SFVec3f([0.142825,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_12")})])}),

                        new Transform({
                          DEF : new SFString("Phong"),
                          translation : new SFVec3f([1.55457,-0.916146,0]),
                          scale : new SFVec3f([0.111441,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_8")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_13")})])})])}),

                    new Script({
                      DEF : new SFString("ToggleScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_touchTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("string_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("light"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new SpotLight({
                              USE : new SFString("_4")})])}),
                      ]),javascript:

, function initialize ()
{
	eventsProcessed ();
}

, function set_touchTime ()
{
	light .global = ! light .global;
}

, function eventsProcessed ()
{
	string_changed = new MFString ("global " + light .global);
})})])}))})]),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("DirectionInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("DirectionInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_direction")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ColorInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("ColorInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_color")}),

            new ROUTE({
              fromNode : new SFString("ToggleScript"),
              fromField : new SFString("string_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("set_string")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ToggleScript"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("RotationScript"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Cone"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("direction_changed"),
              toNode : new SFString("RotationScript"),
              toField : new SFString("set_direction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("color_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_emissiveColor")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BeamWidthInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BeamWidthInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_beamWidth")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("CutOffAngleInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("CutOffAngleInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_cutOffAngle")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_flat")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_wireframe")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_pointset")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_phong")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_gouraud")})}))});
console.log(X3D0.toXMLNode());
