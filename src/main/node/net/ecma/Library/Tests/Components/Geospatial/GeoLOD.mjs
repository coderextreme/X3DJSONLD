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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var GeoLOD = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
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
              content : new SFString("Sat, 16 Apr 2016 03:08:26 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoLOD.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 16 Apr 2016 10:27:25 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("GeoLOD"),
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
                          value : new MFDouble([3.4243814624459,4.70306799888223,4.97005948513556])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.752038455961314,0.63921920036136,0.160738839876076,0.875970352523691])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          viewpoint : new SFNode(
                            new Viewpoint({
                              DEF : new SFString("_1"),
                              description : new SFString("Viewpoint"),
                              position : new SFVec3f([4.21584,5.79006,6.11876]),
                              orientation : new SFRotation([-0.752038455961314,0.63921920036136,0.160738839876076,0.875970352523691])}))}))}))})])}),

            new NavigationInfo({}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Group({
              children : new MFNode([
                new Group({
                  DEF : new SFString("Animation"),
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("Animation"),
                      DEF : new SFString("Animation_1"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("duration"),
                          DEF : new SFString("duration"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([200])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("framesPerSecond"),
                          DEF : new SFString("framesPerSecond"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([10])}))}),
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("_2"),
                      cycleInterval : new SFTime(20),
                      loop : new SFBool(true),
                      startTime : new SFTime(1460802412.49397),
                      stopTime : new SFTime(1460802412.49396)}),

                    new PositionInterpolator({
                      DEF : new SFString("PositionInterpolator"),
                      key : new MFFloat([0,0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.995,1]),
                      keyValue : new MFVec3f([5.38608,7.39727,7.81721,5.38544,7.39641,7.8163,5.38357,7.39383,7.81357,5.38047,7.38958,7.80908,5.37619,7.38369,7.80286,5.37073,7.37619,7.79494,5.36413,7.36713,7.78536,5.35641,7.35653,7.77416,5.3476,7.34443,7.76137,5.33772,7.33086,7.74703,5.3268,7.31587,7.73119,5.31487,7.29948,7.71386,5.30194,7.28172,7.6951,5.28805,7.26265,7.67494,5.27322,7.24228,7.65342,5.25748,7.22065,7.63057,5.24084,7.19781,7.60642,5.22334,7.17378,7.58103,5.20501,7.14859,7.55442,5.18586,7.12229,7.52662,5.16592,7.09491,7.49769,5.14522,7.06648,7.46765,5.12379,7.03704,7.43653,5.10164,7.00663,7.40439,5.07881,6.97527,7.37125,5.05532,6.943,7.33716,5.03119,6.90987,7.30214,5.00645,6.87589,7.26623,4.98113,6.84111,7.22948,4.95525,6.80557,7.19192,4.92883,6.76929,7.15358,4.90191,6.73232,7.11451,4.87451,6.69468,7.07473,4.84664,6.65641,7.0343,4.81835,6.61755,6.99323,4.78965,6.57814,6.95157,4.76057,6.5382,6.90937,4.73113,6.49777,6.86664,4.70136,6.45688,6.82344,4.67129,6.41558,6.77979,4.64094,6.3739,6.73574,4.61033,6.33186,6.69132,4.5795,6.28952,6.64657,4.54846,6.24689,6.60152,4.51725,6.20402,6.55622,4.48588,6.16094,6.51069,4.45438,6.11768,6.46498,4.42279,6.07429,6.41912,4.39112,6.03079,6.37315,4.35939,5.98722,6.32711,4.32764,5.94361,6.28103,4.2959,5.90001,6.23495,4.26417,5.85644,6.18891,4.2325,5.81294,6.14294,4.2009,5.76955,6.09708,4.16941,5.72629,6.05137,4.13804,5.68321,6.00585,4.10683,5.64034,5.96054,4.07579,5.59771,5.9155,4.04495,5.55537,5.87074,4.01435,5.51333,5.82632,3.984,5.47165,5.78227,3.95392,5.43035,5.73863,3.92416,5.38946,5.69542,3.89472,5.34903,5.6527,3.86564,5.30909,5.61049,3.83694,5.26968,5.56883,3.80864,5.23082,5.52777,3.78078,5.19255,5.48733,3.75338,5.15491,5.44756,3.72646,5.11794,5.40848,3.70004,5.08166,5.37014,3.67416,5.04612,5.33258,3.64884,5.01134,5.29583,3.6241,4.97736,5.25993,3.59997,4.94423,5.22491,3.57648,4.91196,5.19081,3.55365,4.8806,5.15767,3.5315,4.85019,5.12553,3.51007,4.82075,5.09442,3.48937,4.79232,5.06438,3.46943,4.76494,5.03544,3.45028,4.73864,5.00765,3.43194,4.71346,4.98104,3.41445,4.68942,4.95564,3.39781,4.66658,4.9315,3.38207,4.64495,4.90865,3.36724,4.62458,4.88712,3.35335,4.60551,4.86696,3.34042,4.58775,4.8482,3.32849,4.57136,4.83088,3.31757,4.55637,4.81503,3.30769,4.5428,4.8007,3.29888,4.5307,4.78791,3.29116,4.5201,4.77671,3.28456,4.51104,4.76713,3.2791,4.50354,4.75921,3.27481,4.49765,4.75298,3.27172,4.4934,4.74849,3.26984,4.49082,4.74577,3.26921,4.48996,4.74485,3.26984,4.49082,4.74577,3.27172,4.4934,4.74849,3.27481,4.49765,4.75298,3.2791,4.50354,4.75921,3.28456,4.51104,4.76713,3.29116,4.5201,4.77671,3.29888,4.5307,4.78791,3.30769,4.5428,4.8007,3.31757,4.55637,4.81503,3.32849,4.57136,4.83088,3.34042,4.58775,4.8482,3.35335,4.60551,4.86696,3.36724,4.62458,4.88712,3.38207,4.64495,4.90865,3.39781,4.66658,4.9315,3.41445,4.68942,4.95564,3.43194,4.71346,4.98104,3.45028,4.73864,5.00765,3.46943,4.76494,5.03544,3.48937,4.79232,5.06438,3.51007,4.82075,5.09442,3.5315,4.85019,5.12553,3.55365,4.8806,5.15767,3.57648,4.91196,5.19081,3.59997,4.94423,5.22491,3.6241,4.97736,5.25993,3.64884,5.01134,5.29583,3.67416,5.04612,5.33258,3.70004,5.08166,5.37014,3.72646,5.11794,5.40848,3.75338,5.15491,5.44756,3.78078,5.19255,5.48733,3.80864,5.23082,5.52777,3.83694,5.26968,5.56883,3.86564,5.30909,5.61049,3.89472,5.34903,5.6527,3.92416,5.38946,5.69542,3.95392,5.43035,5.73863,3.984,5.47165,5.78227,4.01435,5.51333,5.82632,4.04495,5.55537,5.87074,4.07579,5.59771,5.9155,4.10683,5.64034,5.96054,4.13804,5.68321,6.00585,4.16941,5.72629,6.05137,4.2009,5.76955,6.09708,4.2325,5.81294,6.14294,4.26417,5.85644,6.18891,4.2959,5.90001,6.23495,4.32764,5.94361,6.28103,4.35939,5.98722,6.32711,4.39112,6.03079,6.37315,4.42279,6.07429,6.41912,4.45438,6.11768,6.46498,4.48588,6.16094,6.51069,4.51725,6.20402,6.55622,4.54846,6.24689,6.60152,4.5795,6.28952,6.64657,4.61033,6.33186,6.69132,4.64094,6.3739,6.73574,4.67129,6.41558,6.77979,4.70136,6.45688,6.82344,4.73113,6.49777,6.86664,4.76057,6.5382,6.90937,4.78965,6.57814,6.95157,4.81835,6.61755,6.99323,4.84664,6.65641,7.0343,4.87451,6.69468,7.07473,4.90191,6.73232,7.11451,4.92883,6.76929,7.15358,4.95525,6.80557,7.19192,4.98113,6.84111,7.22948,5.00645,6.87589,7.26623,5.03119,6.90987,7.30214,5.05532,6.943,7.33716,5.07881,6.97527,7.37125,5.10164,7.00663,7.40439,5.12379,7.03704,7.43653,5.14522,7.06648,7.46765,5.16592,7.09491,7.49769,5.18586,7.12229,7.52662,5.20501,7.14859,7.55442,5.22334,7.17378,7.58103,5.24084,7.19781,7.60642,5.25748,7.22065,7.63057,5.27322,7.24228,7.65342,5.28805,7.26265,7.67494,5.30194,7.28172,7.6951,5.31487,7.29948,7.71386,5.3268,7.31587,7.73119,5.33772,7.33086,7.74703,5.3476,7.34443,7.76137,5.35641,7.35653,7.77416,5.36413,7.36713,7.78536,5.37073,7.37619,7.79494,5.37619,7.38369,7.80286,5.38047,7.38958,7.80908,5.38357,7.39383,7.81357,5.38544,7.39641,7.8163,5.38608,7.39727,7.81721]),
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
                              value : new MFInt32([0,100,200])})),
                          value : new SFNode(
                            new MetadataDouble({
                              name : new SFString("keyValue"),
                              DEF : new SFString("keyValue"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFDouble([5.38607549667358,7.39727210998535,7.81721258163452,3.2692129611969,4.4899582862854,4.74485206604004,5.38607549667358,7.39727210998535,7.81721258163452])})),
                          value : new SFNode(
                            new MetadataString({
                              name : new SFString("keyType"),
                              DEF : new SFString("keyType"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFString([", ","SPLINE, ","SPLINESPLINE"])}))})])})])}),

                new Viewpoint({
                  USE : new SFString("_1")})])}),

            new GeoLOD({
              geoSystem : new MFString(["GC"]),
              rootUrl : new MFString(["root.x3dv"]),
              child1Url : new MFString(["child1.x3dv"]),
              child2Url : new MFString(["child2.x3dv"]),
              child3Url : new MFString(["child3.x3dv"]),
              child4Url : new MFString(["child4.x3dv"])}),

            new Transform({
              DEF : new SFString("Cone"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Cone({}))})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("PositionInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PositionInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_position")})])}))});
console.log(X3D0.toXMLNode());