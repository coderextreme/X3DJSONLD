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
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
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
              content : new SFString("Thu, 12 Mar 2015 07:12:37 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 12 Mar 2015 07:12:37 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("geistAnim"),
              center : new SFVec3f([0,0.642037,-0.0786901]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("trans"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time"),
                          cycleInterval : new SFTime(10),
                          loop : new SFBool(true),
                          startTime : new SFTime(1007135509.21195),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("figurTranslationInterp"),
                      key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.112,0.124,0.136,0.148,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.311111,0.322222,0.333333,0.344444,0.355556,0.366667,0.377778,0.388889,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.610769,0.621539,0.632308,0.643077,0.653846,0.664616,0.675385,0.686154,0.696923,0.707693,0.718462,0.729231,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.811111,0.822222,0.833333,0.844444,0.855555,0.866666,0.877778,0.888889,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                      keyValue : new MFVec3f([0,0,0,0,-0.0025385,0,0,-0.00902576,0,0,-0.0177695,0,0,-0.0270773,0,0,-0.0352569,0,0,-0.0406159,0,0,-0.0414621,0,0,-0.0361031,0,0,-0.0228465,0,0,0,0,0,0.0687725,0,0,0.183753,0,0,0.309476,0,0,0.410476,0,0,0.451288,0,0,0.444779,0,0,0.428094,0,0,0.402737,0,0,0.370213,0,0,0.332025,0,0,0.289677,0,0,0.244673,0,0,0.198516,0,0,0.152711,0,0,0.108761,0,0,0.0681711,0,0,0.0324439,0,0,0.0030838,0,0,-0.0184054,0,0,-0.034691,0,0,-0.0455584,0,0,-0.0508655,0,0,-0.0504698,0,0,-0.0442292,0,0,-0.0320014,0,0,-0.013644,0,0,0.0109851,0,0,0.0420283,0,0,0.0759947,0,0,0.115637,0,0,0.160171,0,0,0.208817,0,0,0.26079,0,0,0.315308,0,0,0.37159,0,0,0.428852,0,0,0.486312,0,0,0.543187,0,0,0.598695,0,0,0.652053,0,0,0.70248,0,0,0.749191,0,0,0.791406,0,0,0.82834,0,0,0.859213,0,0,0.883241,0,0,0.899641,0,0,0.907632,0,0,0.901487,0,0,0.877206,0,0,0.837406,0,0,0.784706,0,0,0.721723,0,0,0.651076,0,0,0.575384,0,0,0.497263,0,0,0.419333,0,0,0.344212,0,0,0.274516,0,0,0.212866,0,0,0.161879,0,0,0.12498,0,0,0.0973397,0,0,0.078786,0,0,0.0691476,0,0,0.0682531,0,0,0.0759311,0,0,0.096282,0,0,0.128286,0,0,0.168059,0,0,0.211718,0,0,0.25538,0,0,0.295162,0,0,0.32718,0,0,0.347552,0,0,0.352393,0,0,0.342622,0,0,0.322161,0,0,0.292896,0,0,0.256714,0,0,0.2155,0,0,0.171143,0,0,0.125527,0,0,0.0805407,0,0,0.0380696,0,0,0,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("shadow70-128ScaleFactorInterp"),
                      key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.112,0.124,0.136,0.148,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.311111,0.322222,0.333333,0.344444,0.355556,0.366667,0.377778,0.388889,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.610769,0.621539,0.632308,0.643077,0.653846,0.664616,0.675385,0.686154,0.696923,0.707693,0.718462,0.729231,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.811111,0.822222,0.833333,0.844444,0.855555,0.866666,0.877778,0.888889,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                      keyValue : new MFVec3f([1.10647,1.10647,0.864427,1.10476,1.10476,0.863093,1.1004,1.1004,0.859683,1.09452,1.09452,0.855088,1.08825,1.08825,0.850195,1.08275,1.08275,0.845896,1.07915,1.07915,0.84308,1.07858,1.07858,0.842635,1.08218,1.08218,0.845452,1.0911,1.0911,0.852419,1.10647,1.10647,0.864427,1.15507,1.15507,0.902394,1.23708,1.23708,0.966468,1.32516,1.32515,1.03528,1.39194,1.39194,1.08745,1.41008,1.41007,1.10162,1.39232,1.39231,1.08774,1.36549,1.36548,1.06678,1.331,1.33099,1.03984,1.29028,1.29027,1.00802,1.24473,1.24472,0.972442,1.19578,1.19577,0.934197,1.14483,1.14483,0.894397,1.09331,1.0933,0.854146,1.04263,1.04262,0.814551,0.994202,0.994196,0.776717,0.949445,0.949439,0.74175,0.909772,0.909767,0.710756,0.876601,0.876596,0.684841,0.851346,0.851341,0.665111,0.832061,0.832056,0.650045,0.820205,0.820201,0.640782,0.815363,0.815359,0.637,0.817118,0.817114,0.638371,0.825054,0.82505,0.644571,0.838755,0.83875,0.655274,0.857803,0.857798,0.670156,0.881783,0.881779,0.68889,0.910279,0.910274,0.711152,0.940724,0.940719,0.734937,0.976459,0.976453,0.762854,1.01674,1.01673,0.794324,1.06083,1.06082,0.828766,1.10797,1.10797,0.8656,1.15744,1.15744,0.904247,1.20849,1.20848,0.944127,1.26037,1.26037,0.984659,1.31235,1.31234,1.02526,1.36367,1.36367,1.06536,1.41361,1.4136,1.10437,1.46141,1.4614,1.14172,1.50634,1.50633,1.17682,1.54764,1.54764,1.20909,1.58459,1.58458,1.23795,1.61644,1.61643,1.26283,1.64244,1.64243,1.28314,1.66185,1.66184,1.29831,1.67393,1.67392,1.30775,1.67794,1.67793,1.31088,1.66776,1.66775,1.30293,1.63958,1.63957,1.28091,1.59606,1.59605,1.24691,1.53985,1.53984,1.203,1.4736,1.47359,1.15124,1.39998,1.39997,1.09372,1.32163,1.32162,1.03251,1.24121,1.2412,0.969688,1.16138,1.16137,0.907319,1.08478,1.08478,0.847481,1.01409,1.01408,0.792249,0.951939,0.951932,0.743697,0.900998,0.900991,0.7039,0.865418,0.865411,0.676103,0.841098,0.841092,0.657104,0.827836,0.82783,0.646744,0.825429,0.825423,0.644863,0.833671,0.833665,0.651303,0.852361,0.852355,0.665904,0.886652,0.886646,0.692694,0.933822,0.933815,0.729544,0.989798,0.98979,0.773275,1.05051,1.0505,0.820703,1.11188,1.11187,0.868648,1.16984,1.16983,0.913927,1.22031,1.2203,0.95336,1.25923,1.25922,0.983765,1.28252,1.28251,1.00196,1.28947,1.28946,1.00739,1.28611,1.2861,1.00476,1.27426,1.27425,0.995509,1.25575,1.25574,0.981045,1.23238,1.23238,0.962793,1.20599,1.20598,0.942173,1.17838,1.17838,0.920605,1.15138,1.15138,0.899511,1.1268,1.1268,0.880312,1.10647,1.10647,0.864427])})])}),

                new Transform({
                  DEF : new SFString("figur"),
                  rotation : new SFRotation([0,1,0,3.14159]),
                  scale : new SFVec3f([1,0.999999,1]),
                  center : new SFVec3f([0.0326369,0.642037,-0.0786902]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["kind.x3d"]),
                      bboxSize : new SFVec3f([1.07902,1.63698,1.60866]),
                      bboxCenter : new SFVec3f([0.0186297,0.692334,-0.0573816])}),

                    new Transform({
                      DEF : new SFString("tv"),
                      translation : new SFVec3f([1.05279e-7,0.530363,-0.234166]),
                      rotation : new SFRotation([0,1,0,3.14159]),
                      scale : new SFVec3f([1,0.999999,1]),
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["geist-tv1.x3d"]),
                          bboxSize : new SFVec3f([0.337524,0.291134,0.19459]),
                          bboxCenter : new SFVec3f([7.45058e-8,0.145567,4.47035e-8])})])})])}),

                new Transform({
                  DEF : new SFString("shadow70-128"),
                  translation : new SFVec3f([0,0.00803815,-1.85602e-7]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([1.10647,1.10647,0.864427]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["shadow70-128.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

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

            new Transform({
              DEF : new SFString("vs_handle"),
              translation : new SFVec3f([0,1.12968,0]),
              scale : new SFVec3f([2.01905,2.25936,2.01309]),
              children : new MFNode([
                new Switch({
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Transform({}),

                    new Inline({
                      url : new MFString(["cube.x3d"]),
                      bboxSize : new SFVec3f([1,1,1])})])})])}),

            new Transform({
              DEF : new SFString("vs"),
              children : new MFNode([
                new VisibilitySensor({
                  DEF : new SFString("_1"),
                  size : new SFVec3f([2.01905,2.25936,2.01309]),
                  center : new SFVec3f([0,1.12968,0])})])}),

            new Transform({}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("figurTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("shadow70-128ScaleFactorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("figurTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("figur"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("shadow70-128ScaleFactorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("shadow70-128"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("firstTime"),
              toNode : new SFString("enterWorldTimeSensor"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("enterWorldTimeSensor"),
              fromField : new SFString("time"),
              toNode : new SFString("enterWorldScript"),
              toField : new SFString("triggerIn")}),

            new ROUTE({
              fromNode : new SFString("vs_handle"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("vs_handle"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_size")})])}))});
console.log(X3D0.toXMLNode());