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
var Billboard = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:03 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:03 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("NegSFVec3f"),
              url : new MFString(["NegSFVec3f_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_SFVec3f"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("RandomSwitcher"),
              url : new MFString(["RandomSwitcher_proto.x3d"]),
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
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Billboard({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("demo-Else"),
                  bboxSize : new SFVec3f([5,3.8,5]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("nc"),
                      children : new MFNode([
                        new Collision({
                          enabled : new SFBool(false),
                          proxy : new SFNode(
                            new Transform({
                              DEF : new SFString("bil"),
                              children : new MFNode([
                                new LOD({
                                  center : new SFVec3f([0,1.2,0]),
                                  range : new MFFloat([1,6,50]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("nearOff")}),

                                    new Transform({
                                      DEF : new SFString("hi"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("vSens"),
                                          children : new MFNode([
                                            new VisibilitySensor({
                                              DEF : new SFString("_1"),
                                              size : new SFVec3f([1.2,1.7,1.2]),
                                              center : new SFVec3f([0,0.85,0])})])}),

                                        new Transform({
                                          DEF : new SFString("else"),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("BodyO"),
                                              translation : new SFVec3f([4.65661e-10,1.49012e-7,-9.31323e-9]),
                                              scale : new SFVec3f([1,0.999988,0.999988]),
                                              center : new SFVec3f([-0.00316677,0.337015,0.00420856]),
                                              children : new MFNode([
                                                new Group({
                                                  children : new MFNode([
                                                    new Group({
                                                      DEF : new SFString("breath30"),
                                                      children : new MFNode([
                                                        new TimeSensor({
                                                          DEF : new SFString("Time_1"),
                                                          enabled : new SFBool(false),
                                                          cycleInterval : new SFTime(3),
                                                          loop : new SFBool(true),
                                                          startTime : new SFTime(971790484.745182),
                                                          stopTime : new SFTime(1)})])}),

                                                    new OrientationInterpolator({
                                                      DEF : new SFString("BodyORotationInterp"),
                                                      key : new MFFloat([0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1]),
                                                      keyValue : new MFRotation([0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.00182698,-1,0,0,0.00323889,-1,0,0,0.00468343,-1,0,0,0.00636641,-1,0,0,0.00799351,-1,0,0,0.00964279,-1,0,0,0.0112411,-1,0,0,0.0127328,-1,0,0,0.0140842,-1,0,0,0.0151604,-1,0,0,0.016002,-1,0,0,0.0168864,-1,0,0,0.0174966,-1,0,0,0.0178741,-1,0,0,0.0179937,-1,0,0,0.0178741,-1,0,0,0.0174966,-1,0,0,0.0168864,-1,0,0,0.016002,-1,0,0,0.0148264,-1,0,0,0.0132107,-1,0,0,0.0112411,-1,0,0,0.00908256,-1,0,0,0.00687073,-1,0,0,0.00468343,-1,0,0,0.00276214,-1,0,0,0.00119604,0,0,1,0])}),

                                                    new OrientationInterpolator({
                                                      DEF : new SFString("ArmRRotationInterp"),
                                                      key : new MFFloat([0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1]),
                                                      keyValue : new MFRotation([0,0,1,0,1,0,0,0.000690534,1,0,0,0.000976562,1,0,0,0.00195312,1,0,0,0.00292969,1,0,0,0.00396682,1,0,0,0.00497951,1,0,0,0.00605941,1,0,0,0.0070421,1,0,0,0.00799351,1,0,0,0.00881615,1,0,0,0.00946813,1,0,0,0.0100068,1,0,0,0.0105406,1,0,0,0.0109183,1,0,0,0.0111559,1,0,0,0.0112623,1,0,0,0.0111559,1,0,0,0.0109401,1,0,0,0.0105406,1,0,0,0.0100068,1,0,0,0.00929019,1,0,0,0.00825759,1,0,0,0.0070421,1,0,0,0.00565227,1,0,0,0.00425674,1,0,0,0.00292969,1,0,0,0.00169146,1,0,0,0.000690534,0,0,1,0])}),

                                                    new OrientationInterpolator({
                                                      DEF : new SFString("ArmLRotationInterp"),
                                                      key : new MFFloat([0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1]),
                                                      keyValue : new MFRotation([0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.000976562,-1,0,0,0.00195312,-1,0,0,0.00292969,-1,0,0,0.00396682,-1,0,0,0.00497951,-1,0,0,0.00605941,-1,0,0,0.0070421,-1,0,0,0.00799351,-1,0,0,0.00881615,-1,0,0,0.00946813,-1,0,0,0.0100068,-1,0,0,0.0105406,-1,0,0,0.0109183,-1,0,0,0.0111559,-1,0,0,0.0112623,-1,0,0,0.0111559,-1,0,0,0.0109401,-1,0,0,0.0105406,-1,0,0,0.0100068,-1,0,0,0.00929019,-1,0,0,0.00825759,-1,0,0,0.0070421,-1,0,0,0.00565227,-1,0,0,0.00425674,-1,0,0,0.00292969,-1,0,0,0.00169146,-1,0,0,0.000690534,0,0,1,0])}),

                                                    new OrientationInterpolator({
                                                      DEF : new SFString("headORotationInterp"),
                                                      key : new MFFloat([0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1]),
                                                      keyValue : new MFRotation([0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.00138107,-1,0,0,0.00218366,-1,0,0,0.00338291,-1,0,0,0.00442158,-1,0,0,0.00565227,-1,0,0,0.00676583,-1,0,0,0.00775123,-1,0,0,0.00867988,-1,0,0,0.00936687,-1,0,0,0.00981434,-1,0,0,0.0100068,-1,0,0,0.00961803,-1,0,0,0.00867988,-1,0,0,0.00724239,-1,0,0,0.00565227,-1,0,0,0.00390625,-1,0,0,0.00218366,-1,0,0,0.000690534,0,0,1,0,1,0,0,0.000690534,1,0,0,0.000690534,1,0,0,0.000690534,0,0,1,0,0,0,1,0,1,0,0,0.000690534,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

                                                new Transform({
                                                  DEF : new SFString("body"),
                                                  center : new SFVec3f([-0.000208497,0.681873,0.00420851]),
                                                  children : new MFNode([
                                                    new Switch({
                                                      whichChoice : new SFInt32(0),
                                                      children : new MFNode([
                                                        new Transform({
                                                          DEF : new SFString("b0"),
                                                          translation : new SFVec3f([0,-0.00000226496,-1.72294e-8]),
                                                          scale : new SFVec3f([1,1.00001,1.00001]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      ambientIntensity : new SFFloat(0.148936),
                                                                      diffuseColor : new SFColor([1,1,1]),
                                                                      shininess : new SFFloat(0)})),
                                                                  texture : new SFNode(
                                                                    new ImageTexture({
                                                                      DEF : new SFString("_2"),
                                                                      url : new MFString(["shirt7.jpg"])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]),
                                                                  texCoord : new SFNode(
                                                                    new TextureCoordinate({
                                                                      point : new MFVec2f([0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521])}))}))})])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("ArmR"),
                                                  translation : new SFVec3f([-5.96046e-8,3.57628e-7,2.98023e-8]),
                                                  scale : new SFVec3f([1,0.999991,0.999991]),
                                                  center : new SFVec3f([0.289521,1.00008,0.0239703]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("armR"),
                                                      translation : new SFVec3f([-1.49012e-7,-1.78814e-7,7.45058e-8]),
                                                      scale : new SFVec3f([0.999999,0.99999,0.99999]),
                                                      center : new SFVec3f([0.295036,0.973184,0.0197765]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              DEF : new SFString("armR-swing20"),
                                                              children : new MFNode([
                                                                new TimeSensor({
                                                                  DEF : new SFString("Time_2"),
                                                                  enabled : new SFBool(false),
                                                                  cycleInterval : new SFTime(4.5),
                                                                  loop : new SFBool(true),
                                                                  startTime : new SFTime(971790484.745182),
                                                                  stopTime : new SFTime(1)})])}),

                                                            new OrientationInterpolator({
                                                              DEF : new SFString("armRRotationInterp"),
                                                              key : new MFFloat([0,0.0266666,0.0533332,0.0799998,0.106666,0.133333,0.158333,0.183333,0.208333,0.233333,0.258333,0.283333,0.308333,0.333333,0.355555,0.377778,0.4,0.422222,0.444445,0.466667,0.488889,0.511111,0.533334,0.555556,0.578948,0.60234,0.625731,0.649123,0.672515,0.695907,0.719298,0.74269,0.766082,0.789474,0.812866,0.836257,0.859649,0.883041,0.906433,0.929825,0.953216,0.976608,1]),
                                                              keyValue : new MFRotation([0,0,1,0,-1,0,0,0.0110486,-1,0,0,0.0283205,-1,0,0,0.0460809,-1,0,0,0.0585592,-1,0,0,0.0599993,-1,0,0,0.052382,-1,0,0,0.0384355,-1,0,0,0.0202741,0,0,1,0,1,0,0,0.0202741,1,0,0,0.0384355,1,0,0,0.052382,1,0,0,0.0599993,1,0,0,0.0610199,1,0,0,0.0585592,1,0,0,0.0533383,1,0,0,0.0460809,1,0,0,0.0374998,1,0,0,0.0283205,1,0,0,0.0192609,1,0,0,0.0110486,1,0,0,0.00431238,0,0,1,0,-1,0,0,0.00119604,-1,0,0,0.00258374,-1,0,0,0.00338291,-1,0,0,0.00396682,-1,0,0,0.00425674,-1,0,0,0.00436732,-1,0,0,0.00436732,-1,0,0,0.00420035,-1,0,0,0.00390625,-1,0,0,0.00358812,-1,0,0,0.00300997,-1,0,0,0.00258374,-1,0,0,0.00195312,-1,0,0,0.00154408,-1,0,0,0.00119604,-1,0,0,0.000690534,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

                                                        new Transform({
                                                          DEF : new SFString("oarmR"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      DEF : new SFString("_3"),
                                                                      ambientIntensity : new SFFloat(0.255319),
                                                                      diffuseColor : new SFColor([1,0.600935,0.355765]),
                                                                      shininess : new SFFloat(0)}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("handR"),
                                                          center : new SFVec3f([0.386713,0.551949,0.0217319]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_3")}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045])}))}))})])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("ArmL"),
                                                  translation : new SFVec3f([2.98023e-8,0,-2.98023e-8]),
                                                  center : new SFVec3f([-0.298867,0.995243,-0.0108316]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("armL"),
                                                      translation : new SFVec3f([-1.19209e-7,2.38419e-7,9.31323e-10]),
                                                      center : new SFVec3f([-0.305306,0.988041,-0.0116445]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              DEF : new SFString("armL-swing37"),
                                                              children : new MFNode([
                                                                new TimeSensor({
                                                                  DEF : new SFString("Time_3"),
                                                                  enabled : new SFBool(false),
                                                                  cycleInterval : new SFTime(3.7),
                                                                  loop : new SFBool(true),
                                                                  startTime : new SFTime(971790484.745182),
                                                                  stopTime : new SFTime(1)})])}),

                                                            new OrientationInterpolator({
                                                              DEF : new SFString("armLRotationInterp"),
                                                              key : new MFFloat([0,0.0287162,0.0574324,0.0861486,0.114865,0.143581,0.172297,0.201013,0.22973,0.258446,0.287162,0.315878,0.344594,0.37331,0.402027,0.430743,0.459459,0.486486,0.513513,0.54054,0.567567,0.594594,0.621621,0.648648,0.675676,0.702703,0.72973,0.756757,0.783784,0.810811,0.837838,0.864865,0.891892,0.918919,0.945946,0.972973,1]),
                                                              keyValue : new MFRotation([0,0,1,0,0,0,1,0.000690534,0,0,1,0.00138107,0,0,1,0.00239208,0,0,1,0.00371864,0,0,1,0.00497951,0,0,1,0.00636641,0,0,1,0.00775123,0,0,1,0.00913491,0,0,1,0.0105179,0,0,1,0.0118603,0,0,1,0.0130655,0,0,1,0.0141349,0,0,1,0.0150182,0,0,1,0.0157163,0,0,1,0.0161503,0,0,1,0.0162972,0,0,1,0.0161945,0,0,1,0.0159123,0,0,1,0.0154717,0,0,1,0.0148586,0,0,1,0.0141349,0,0,1,0.0132827,0,0,1,0.0123334,0,0,1,0.0113256,0,0,1,0.0102887,0,0,1,0.00916098,0,0,1,0.00802329,0,0,1,0.00690534,0,0,1,0.00581854,0,0,1,0.00468343,0,0,1,0.00371864,0,0,1,0.00267443,0,0,1,0.00195312,0,0,1,0.00119604,0,0,1,0.000690534,0,0,1,0])})])}),

                                                        new Transform({
                                                          DEF : new SFString("oarmL"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_3")}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("handL"),
                                                          translation : new SFVec3f([2.98023e-8,0,4.65661e-10]),
                                                          scale : new SFVec3f([0.999996,0.999998,1]),
                                                          scaleOrientation : new SFRotation([0,0,-1,0.739374]),
                                                          center : new SFVec3f([-0.394827,0.544969,-0.00705719]),
                                                          children : new MFNode([
                                                            new Group({
                                                              children : new MFNode([
                                                                new Group({
                                                                  DEF : new SFString("handR70"),
                                                                  children : new MFNode([
                                                                    new TimeSensor({
                                                                      DEF : new SFString("Time_4"),
                                                                      enabled : new SFBool(false),
                                                                      cycleInterval : new SFTime(7),
                                                                      loop : new SFBool(true),
                                                                      startTime : new SFTime(971790484.745182),
                                                                      stopTime : new SFTime(1)})])}),

                                                                new OrientationInterpolator({
                                                                  DEF : new SFString("handLRotationInterp"),
                                                                  key : new MFFloat([0,0.642857,1]),
                                                                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.179019,0,0,1,0])})])}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_3")}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(3.14159),
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637])}))}))})])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("Head"),
                                                  translation : new SFVec3f([-3.72529e-8,-0.00000107288,1.49012e-8]),
                                                  scale : new SFVec3f([0.999986,0.999952,0.999969]),
                                                  scaleOrientation : new SFRotation([0.274337,0.961459,-0.0183508,0.745642]),
                                                  center : new SFVec3f([-0.00422851,1.04834,0.00417849]),
                                                  children : new MFNode([
                                                    new Group({
                                                      children : new MFNode([
                                                        new Group({
                                                          DEF : new SFString("head"),
                                                          children : new MFNode([
                                                            new TimeSensor({
                                                              DEF : new SFString("Time_5"),
                                                              enabled : new SFBool(false),
                                                              cycleInterval : new SFTime(20),
                                                              loop : new SFBool(true),
                                                              startTime : new SFTime(971790484.745182),
                                                              stopTime : new SFTime(1)})])}),

                                                        new OrientationInterpolator({
                                                          DEF : new SFString("HeadRotationInterp"),
                                                          key : new MFFloat([0,0.05,0.1,0.15,0.2,0.25,0.3,0.366667,0.433333,0.5,0.55,0.65,0.7,0.75,0.8,0.9,0.95,1]),
                                                          keyValue : new MFRotation([0,0,1,0,0.00000827175,0.0000022421,1,0.000976562,0.00000827175,0.0000022421,1,0.00308816,0.00000827175,0.0000022421,1,0.00352105,0,0,1,0,-0.00000827175,-0.0000022421,-1,0.0496813,0,0,1,0,0.349332,0.85517,0.38295,0.0108526,0.374536,0.916873,0.138083,0.0202623,0,0,1,0,-0.377728,-0.92469,-0.0476497,0.271169,-0.377728,-0.92469,-0.0476497,0.271169,-0.24416,0.963031,-0.113827,0.384429,-0.24416,0.963031,-0.113827,0.384429,-0.611809,0.790638,-0.0241082,0.381038,-0.24416,0.963031,-0.113827,0.384429,0,0,1,0,0,0,1,0])})])}),

                                                    new Transform({
                                                      DEF : new SFString("headU"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("_3")}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              solid : new SFBool(false),
                                                              convex : new SFBool(false),
                                                              creaseAngle : new SFFloat(1.53973),
                                                              coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,21,22,8,6,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1,20,6,4,-1,20,21,6,-1,22,23,8,-1,23,10,8,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751])}))}))})])}),

                                                    new Transform({
                                                      DEF : new SFString("headO"),
                                                      translation : new SFVec3f([2.32831e-10,2.38419e-7,3.35276e-8]),
                                                      center : new SFVec3f([-0.00371499,1.24837,0.029451]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          DEF : new SFString("augen_1"),
                                                          center : new SFVec3f([-0.015762,1.38316,0.30789]),
                                                          children : new MFNode([
                                                            new Group({
                                                              children : new MFNode([
                                                                new Group({
                                                                  DEF : new SFString("zwinker"),
                                                                  children : new MFNode([
                                                                    new TimeSensor({
                                                                      DEF : new SFString("Time_6"),
                                                                      enabled : new SFBool(false),
                                                                      cycleInterval : new SFTime(12),
                                                                      loop : new SFBool(true),
                                                                      startTime : new SFTime(971790484.745182),
                                                                      stopTime : new SFTime(1)})])}),

                                                                new ColorInterpolator({
                                                                  DEF : new SFString("augenDiffuseColorInterp"),
                                                                  key : new MFFloat([0,0.14999,0.15,0.166657,0.166667,0.39999,0.4,0.416657,0.416667,0.733323,0.733333,0.74999,0.75,0.766657,0.766667,0.783323,0.783333,0.99999,1]),
                                                                  keyValue : new MFColor([0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765])})])}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      DEF : new SFString("_4"),
                                                                      ambientIntensity : new SFFloat(0.255319),
                                                                      diffuseColor : new SFColor([0,0,0]),
                                                                      shininess : new SFFloat(0)}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(1.60186),
                                                                  coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("ohead"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_3")}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(1.53973),
                                                                  coordIndex : new MFInt32([1,4,5,2,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1,4,6,5,-1,6,7,5,-1,0,2,3,-1,0,1,2,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("_5"),
                                                          translation : new SFVec3f([-5.44125e-7,-0.0000529289,-0.00000404613]),
                                                          scale : new SFVec3f([1.00002,1.00006,1.00004]),
                                                          scaleOrientation : new SFRotation([0.393582,0.918606,-0.0354517,0.468778]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              DEF : new SFString("rink"),
                                                              translation : new SFVec3f([0,0.028349,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          DEF : new SFString("lambert5"),
                                                                          diffuseColor : new SFColor([0,0,0]),
                                                                          shininess : new SFFloat(0)})),
                                                                      texture : new SFNode(
                                                                        new ImageTexture({
                                                                          USE : new SFString("_2")})),
                                                                      textureTransform : new SFNode(
                                                                        new TextureTransform({}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      DEF : new SFString("Zopf_1Geo"),
                                                                      solid : new SFBool(false),
                                                                      convex : new SFBool(false),
                                                                      texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1]),
                                                                      coordIndex : new MFInt32([37,38,45,44,-1,38,39,46,45,-1,39,30,47,46,-1,30,37,44,47,-1,43,42,49,48,-1,42,40,50,49,-1,40,26,51,50,-1,26,43,48,51,-1]),
                                                                      texCoord : new SFNode(
                                                                        new TextureCoordinate({
                                                                          point : new MFVec2f([0.690574,1,0,0,0.567945,0.224343,1,0.86435,0,0,1,0.362955,0.65401,1,0.046135,0.804669,0.679085,0,1,1,0.216635,0.826022,0,0.173867,1,1,0,0.525038,0.022697,0,0.63959,0.312118,0,0.516747,1,0,0.888076,0.696512,0.252242,1,1,0,0.483805,1,0,0.875815,0.30111,0.221757,1,0.44566,0,1,0.266616,0.374904,0.922961,0,0,1,0.259479,0,1,0.155422,0.787196,0.824045])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          DEF : new SFString("ZopfGeoPoints"),
                                                                          point : new MFVec3f([-0.1684,1.1251,-0.1828,-0.258,1.1397,-0.0283,-0.3784,1.3897,-0.0448,-0.247,1.4055,-0.2913,-0.3248,1.1669,0.1848,-0.2812,1.328,0.1869,0.3248,1.1669,0.1848,0.2812,1.328,0.1869,0.258,1.1397,-0.0283,0.3784,1.3897,-0.0448,0.1684,1.1251,-0.1828,0.247,1.4055,-0.2913,0,1.1193,-0.2438,0,1.4118,-0.3886,-0.2167,1.544,0.0203,-0.1414,1.5659,-0.1081,-0.1905,1.519,0.1664,-0.0641,1.4405,0.2202,0.0641,1.4405,0.2202,0.1905,1.519,0.1664,0.2167,1.544,0.0203,0.1414,1.5659,-0.1081,0,1.5746,-0.1588,0,1.5869,0.0664,0.0641,1.4405,0.2202,-0.2862,1.1445,-0.3518,-0.4384,1.1694,-0.0892,-0.4006,1.1915,0.1983,0.4006,1.1915,0.1983,0.332,1.3742,0.2128,0.4384,1.1694,-0.0892,0.2862,1.1445,-0.3518,0,1.1347,-0.4555,-0.0815,1.508,0.2524,0.0815,1.508,0.2524,-0.332,1.3742,0.2128,0.3804,1.2451,0.2026,0.4185,1.2427,-0.0744,0.4034,1.2436,0.0351,0.4229,1.1784,0.0288,-0.4084,1.2795,-0.067,-0.3663,1.2829,0.2056,-0.3874,1.2812,0.0693,-0.4195,1.1804,0.0545,0.4573,1.2409,-0.0555,0.4467,1.2416,0.0213,0.4597,1.1987,0.0171,0.4705,1.1923,-0.0653,-0.4553,1.2049,0.0412,-0.4327,1.275,0.0515,-0.4478,1.2739,-0.0456,-0.4686,1.197,-0.0611,0.602,1.2923,-0.0652,0.5806,1.2838,0.165,0.5761,1.142,0.1513,0.5901,1.1092,-0.1702,-0.574,1.1168,0.1118,-0.6545,1.2285,0.1333,-0.6563,1.2767,-0.0322,-0.5574,1.0654,-0.0724,0.7888,1.1467,-0.1045,0.8171,1.1615,0.1241,0.7001,1.0526,0.1133,0.6497,1.0292,-0.13,-0.6929,1.0444,0.1121,-0.8678,1.1585,0.1286,-0.8314,1.131,-0.0399,-0.6903,1.0759,-0.0569,0.8909,0.9723,0.0492,-0.8608,0.898,0.0533])}))}))})])}),

                                                            new Transform({
                                                              DEF : new SFString("zobb"),
                                                              translation : new SFVec3f([0,0.0292042,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          ambientIntensity : new SFFloat(0.148936),
                                                                          diffuseColor : new SFColor([1,1,1]),
                                                                          shininess : new SFFloat(0)})),
                                                                      texture : new SFNode(
                                                                        new ImageTexture({
                                                                          url : new MFString(["hair3.jpg"])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      DEF : new SFString("Zopf_0Geo"),
                                                                      solid : new SFBool(false),
                                                                      convex : new SFBool(false),
                                                                      creaseAngle : new SFFloat(3.14159),
                                                                      texCoordIndex : new MFInt32([0,1,2,3,4,-1,3,2,5,-1,6,7,8,-1,9,10,11,12,13,-1,10,14,15,11,-1,14,0,4,15,-1,4,3,16,17,-1,3,18,19,16,-1,6,12,20,21,-1,12,11,22,20,-1,11,15,23,22,-1,15,4,17,23,-1,17,16,24,-1,16,19,24,-1,19,25,24,-1,25,26,24,-1,26,21,24,-1,21,20,24,-1,20,22,24,-1,22,23,24,-1,23,17,24,-1,18,25,19,-1,26,6,21,-1,27,28,1,0,-1,28,29,30,31,-1,29,32,18,33,30,-1,34,9,35,-1,36,37,38,7,6,-1,34,39,10,9,-1,39,40,14,10,-1,40,27,0,14,-1,41,42,26,25,-1,42,43,26,-1,32,41,25,18,-1,43,36,6,26,-1,35,8,38,-1,12,8,13,-1,6,8,12,-1,38,8,7,-1,34,35,38,37,-1,33,5,30,-1,3,5,18,-1,18,5,33,-1,30,5,31,-1,28,31,1,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,44,47,51,-1,52,53,54,55,-1,53,56,57,54,-1,56,58,59,57,-1,58,52,55,59,-1,47,46,60,61,-1,46,49,62,60,-1,49,51,63,62,-1,51,47,61,63,-1,55,54,64,65,-1,54,57,66,64,-1,57,59,67,66,-1,59,55,65,67,-1,61,60,68,-1,60,62,68,-1,62,63,68,-1,63,61,68,-1,65,64,69,-1,64,66,69,-1,66,67,69,-1,67,65,69,-1]),
                                                                      coordIndex : new MFInt32([25,26,40,2,3,-1,2,40,42,-1,29,36,38,-1,30,31,11,9,37,-1,31,32,13,11,-1,32,25,3,13,-1,3,2,14,15,-1,2,35,16,14,-1,29,9,20,19,-1,9,11,21,20,-1,11,13,22,21,-1,13,3,15,22,-1,15,14,23,-1,14,16,23,-1,16,33,23,-1,33,34,23,-1,34,19,23,-1,19,20,23,-1,20,21,23,-1,21,22,23,-1,22,15,23,-1,35,33,16,-1,34,29,19,-1,0,1,26,25,-1,1,4,27,43,-1,4,5,35,41,27,-1,8,30,39,-1,7,6,28,36,29,-1,8,10,31,30,-1,10,12,32,31,-1,12,0,25,32,-1,17,24,34,33,-1,24,18,34,-1,5,17,33,35,-1,18,7,29,34,-1,39,38,28,-1,9,38,37,-1,29,38,9,-1,28,38,36,-1,8,39,28,6,-1,41,42,27,-1,2,42,35,-1,35,42,41,-1,27,42,43,-1,1,43,26,-1,44,45,53,52,-1,45,46,54,53,-1,46,47,55,54,-1,47,44,52,55,-1,48,49,57,56,-1,49,50,58,57,-1,50,51,59,58,-1,51,48,56,59,-1,52,53,61,60,-1,53,54,62,61,-1,54,55,63,62,-1,55,52,60,63,-1,56,57,65,64,-1,57,58,66,65,-1,58,59,67,66,-1,59,56,64,67,-1,60,61,68,-1,61,62,68,-1,62,63,68,-1,63,60,68,-1,64,65,69,-1,65,66,69,-1,66,67,69,-1,67,64,69,-1]),
                                                                      texCoord : new SFNode(
                                                                        new TextureCoordinate({
                                                                          point : new MFVec2f([-0.068547,0.872124,-0.020551,0.425052,0.059979,0.393538,0.148429,0.367115,0.198279,0.811704,0.066599,0.189525,0.904281,0.089649,1.0178,0.117728,1.02218,0.342888,1.0796,0.535033,1.1488,1.0005,0.82432,0.924406,0.904327,0.467078,1.02495,0.514031,-0.35648,1.28924,0.458452,1.16062,0.332759,0.281563,0.388526,0.500874,0.163623,0.004864,0.35103,0.060602,0.722095,0.339913,0.723582,0.111419,0.647314,0.546034,0.511997,0.619668,0.530739,0.22761,0.458273,-0.070208,0.63899,-0.045619,-0.148572,0.67691,-0.085115,0.283391,-0.038014,0.000047,-0.005182,0.044134,-0.013473,0.22309,0.138058,-0.029942,0.074425,0.013763,1.14582,0.375798,1.07153,0.360206,0.928249,0.053058,1.08942,0.088695,1.0595,0.138545,1.23813,0.78914,-0.410732,1.03121,0.457308,-0.126729,0.64525,-0.103044,0.64525,-0.103044,1.02619,0.490816,1.02445,0.381282,0.986364,0.278011,0.9959,0.590054,1.05445,0.390603,1.07755,0.288507,1.0599,0.504617,1.10032,0.625072,0.006724,0.254479,0.057637,0.234766,0.065423,0.179132,-0.041901,0.173796,0.053775,0.368203,0.051418,0.435719,0.00092,0.389516,-0.060689,0.47768,1.05807,0.337845,1.06611,0.556562,1.1102,0.313135,1.13038,0.575842,-0.003132,0.239253,-0.062702,0.211561,-0.009185,0.432311,-0.073194,0.453691,1.1199,0.446211,-0.093739,0.311262])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          USE : new SFString("ZopfGeoPoints")}))}))})])})])})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("BeinL"),
                                              center : new SFVec3f([-0.198186,0.30347,-0.0111347]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("beinL"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("_3")}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          convex : new SFBool(false),
                                                          creaseAngle : new SFFloat(3.14159),
                                                          coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464])}))}))})])}),

                                                new Transform({
                                                  DEF : new SFString("fussL"),
                                                  center : new SFVec3f([-0.198186,0.1544,-0.00509336]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              DEF : new SFString("_6"),
                                                              ambientIntensity : new SFFloat(0.148936),
                                                              diffuseColor : new SFColor([1,1,1]),
                                                              shininess : new SFFloat(0)})),
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              DEF : new SFString("_7"),
                                                              url : new MFString(["shoes1.jpg"])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          convex : new SFBool(false),
                                                          creaseAngle : new SFFloat(3.14159),
                                                          coordIndex : new MFInt32([0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1]),
                                                          texCoord : new SFNode(
                                                            new TextureCoordinate({
                                                              point : new MFVec2f([0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572])}))}))})])})])}),

                                            new Transform({
                                              DEF : new SFString("BeinR"),
                                              center : new SFVec3f([0.196713,0.303457,0.0297802]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("beinR"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("_3")}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          convex : new SFBool(false),
                                                          creaseAngle : new SFFloat(3.14159),
                                                          coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619])}))}))})])}),

                                                new Transform({
                                                  DEF : new SFString("fussR"),
                                                  translation : new SFVec3f([-1.49012e-8,-1.49012e-8,-5.58794e-9]),
                                                  scale : new SFVec3f([1,0.999999,0.999999]),
                                                  center : new SFVec3f([0.196713,0.157104,0.00995016]),
                                                  children : new MFNode([
                                                    new Group({
                                                      children : new MFNode([
                                                        new Group({
                                                          DEF : new SFString("fussL94"),
                                                          children : new MFNode([
                                                            new TimeSensor({
                                                              DEF : new SFString("Time_7"),
                                                              enabled : new SFBool(false),
                                                              cycleInterval : new SFTime(9.4),
                                                              loop : new SFBool(true),
                                                              startTime : new SFTime(971790484.745182),
                                                              stopTime : new SFTime(1)})])}),

                                                        new OrientationInterpolator({
                                                          DEF : new SFString("fussLRotationInterp"),
                                                          key : new MFFloat([0,0.0106383,0.0319149,0.0425532,0.0638298,1]),
                                                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.0923411,0,0,1,0,-1,0,0,0.0923411,0,0,1,0,0,0,1,0])})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("_6")})),
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              USE : new SFString("_7")}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          convex : new SFBool(false),
                                                          creaseAngle : new SFFloat(3.14159),
                                                          coordIndex : new MFInt32([0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1]),
                                                          texCoord : new SFNode(
                                                            new TextureCoordinate({
                                                              point : new MFVec2f([0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012])}))}))})])})])})])}),

                                        new Transform({
                                          DEF : new SFString("lightanim"),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("NegSFVec3f"),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("NegSFVec3f"),
                                                  DEF : new SFString("_8")})])}),

                                            new Transform({
                                              DEF : new SFString("glowObj"),
                                              translation : new SFVec3f([-0.33413,0.504434,0.401033]),
                                              children : new MFNode([
                                                new Group({
                                                  children : new MFNode([
                                                    new Group({
                                                      DEF : new SFString("lightAnim"),
                                                      children : new MFNode([
                                                        new TimeSensor({
                                                          DEF : new SFString("Time_8"),
                                                          enabled : new SFBool(false),
                                                          cycleInterval : new SFTime(10),
                                                          loop : new SFBool(true),
                                                          startTime : new SFTime(971790484.745182),
                                                          stopTime : new SFTime(1)})])}),

                                                    new PositionInterpolator({
                                                      DEF : new SFString("glowObjTranslationInterp"),
                                                      key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.1625,0.175,0.1875,0.2,0.2125,0.225,0.2375,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.6125,0.625,0.6375,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                                                      keyValue : new MFVec3f([-0.33413,0.504434,0.401033,-0.366685,0.597163,0.401033,-0.402491,0.688294,0.401033,-0.436671,0.780225,0.401033,-0.464348,0.87535,0.401033,-0.480644,0.976067,0.401033,-0.493855,1.09228,0.401033,-0.507232,1.2224,0.401033,-0.508332,1.35156,0.401033,-0.48471,1.4649,0.401033,-0.423924,1.54755,0.401033,-0.303983,1.59897,0.401033,-0.133183,1.62907,0.401033,0.0554915,1.63866,0.401033,0.229055,1.62857,0.401033,0.354524,1.59959,0.401033,0.438165,1.51958,0.401033,0.47502,1.39778,0.401033,0.483079,1.26852,0.401033,0.480335,1.16611,0.401033,0.453936,1.10362,0.401033,0.400168,1.06144,0.401033,0.350736,1.02488,0.401033,0.337341,0.97925,0.401033,0.371542,0.93221,0.401033,0.43594,0.880849,0.401033,0.509691,0.827639,0.401033,0.571948,0.77505,0.401033,0.601868,0.725554,0.401033,0.576427,0.639923,0.401033,0.509146,0.537981,0.401033,0.439099,0.475437,0.401033,0.405357,0.507998,0.401033,0.424248,0.642987,0.401033,0.471532,0.858511,0.401033,0.526969,1.10724,0.401033,0.57032,1.34185,0.401033,0.581347,1.51502,0.401033,0.540464,1.6423,0.401033,0.462611,1.71775,0.401033,0.370422,1.75673,0.401033,0.28653,1.77466,0.401033,0.230004,1.76519,0.401033,0.174951,1.72786,0.401033,0.119885,1.67931,0.401033,0.0633189,1.6362,0.401033,0.00376511,1.6152,0.401033,-0.0616264,1.62909,0.401033,-0.131865,1.66678,0.401033,-0.202673,1.70906,0.401033,-0.269776,1.73674,0.401033,-0.328897,1.73063,0.401033,-0.380457,1.67929,0.401033,-0.427308,1.59551,0.401033,-0.468816,1.49646,0.401033,-0.504349,1.39926,0.401033,-0.533274,1.32108,0.401033,-0.562405,1.25072,0.401033,-0.583337,1.19383,0.401033,-0.591667,1.14555,0.401033,-0.582988,1.10103,0.401033,-0.552301,1.06948,0.401033,-0.500875,1.04349,0.401033,-0.4449,1.01989,0.401033,-0.400566,0.99549,0.401033,-0.384061,0.967107,0.401033,-0.424511,0.926628,0.401033,-0.511123,0.876176,0.401033,-0.60021,0.82792,0.401033,-0.648084,0.794032,0.401033,-0.611058,0.786681,0.401033,-0.448253,0.822071,0.401033,-0.188794,0.892089,0.401033,0.106001,0.972429,0.401033,0.374813,1.03879,0.401033,0.556325,1.06686,0.401033,0.649525,1.03346,0.401033,0.695294,0.954786,0.401033,0.695145,0.865624,0.401033,0.65059,0.800753,0.401033,0.563142,0.794955,0.401033,0.340559,0.915958,0.401033,0.0141816,1.12557,0.401033,-0.310395,1.32618,0.401033,-0.527574,1.42018,0.401033,-0.589646,1.38078,0.401033,-0.588062,1.27176,0.401033,-0.548995,1.12644,0.401034,-0.498622,0.978172,0.401034,-0.463118,0.86029,0.401034,-0.44145,0.776061,0.401034,-0.416169,0.703257,0.401034,-0.388823,0.636983,0.401033,-0.36096,0.572341,0.401033,-0.33413,0.504434,0.401033])})])}),

                                                new Transform({
                                                  scale : new SFVec3f([0.354068,0.354068,0.354068]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              url : new MFString(["bp-glow.png"])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          solid : new SFBool(false),
                                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                                          texCoord : new SFNode(
                                                            new TextureCoordinate({
                                                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                                        new DirectionalLight({
                                          DEF : new SFString("Light1_1"),
                                          on : new SFBool(false),
                                          color : new SFColor([0.984854,1,0.86639]),
                                          ambientIntensity : new SFFloat(0.83),
                                          direction : new SFVec3f([-0.290119,-0.956991,6.55651e-7])}),

                                        new Transform({
                                          DEF : new SFString("shadow"),
                                          translation : new SFVec3f([0.0606028,0,0]),
                                          center : new SFVec3f([0,0.00748548,0]),
                                          children : new MFNode([
                                            new Group({
                                              children : new MFNode([
                                                new Group({
                                                  USE : new SFString("lightAnim")}),

                                                new PositionInterpolator({
                                                  DEF : new SFString("shadowTranslationInterp"),
                                                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.161111,0.172222,0.183333,0.194444,0.205556,0.216667,0.227778,0.238889,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.561111,0.572222,0.583333,0.594444,0.605555,0.616666,0.627778,0.638889,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                                                  keyValue : new MFVec3f([0.0606028,0,0,0.0620456,0,0,0.0657328,0,0,0.0707025,0,0,0.0759928,0,0,0.0806419,0,0,0.0836878,0,0,0.0841687,0,0,0.0811228,0,0,0.0735881,0,0,0.0606028,0,0,0.0280673,0,0,-0.0273849,0,0,-0.0906162,0,0,-0.146489,0,0,-0.179866,0,0,-0.194758,0,0,-0.20256,0,0,-0.204902,0,0,-0.203415,0,0,-0.199731,0,0,-0.195481,0,0,-0.192295,0,0,-0.191805,0,0,-0.195641,0,0,-0.204941,3.57627e-10,0.00229102,-0.219377,1.07288e-9,0.00687306,-0.236419,1.60932e-9,0.0103096,-0.253537,1.43051e-9,0.00916412,-0.268201,0,0,-0.285397,-5.06405e-9,-0.0324412,-0.302762,-1.25728e-8,-0.0805438,-0.316192,-1.93831e-8,-0.124172,-0.321581,-2.23517e-8,-0.143189,-0.319259,-2.03848e-8,-0.130588,-0.31248,-1.55568e-8,-0.0996596,-0.301524,-9.47714e-9,-0.0607123,-0.286671,-3.75511e-9,-0.0240559,-0.268201,0,0,-0.235508,1.5716e-9,0.010068,-0.193879,1.39698e-9,0.00894931,-0.152292,5.2387e-10,0.003356,-0.119726,0,0,-0.10026,0,0,-0.0819169,0,0,-0.0646286,0,0,-0.0483273,0,0,-0.0329454,0,0,-0.0184151,0,0,-0.0046687,0,0,0.00836163,0,0,0.0207436,0,0,0.0325451,0,0,0.0452685,-1.63523e-10,-0.0000278565,0.0576262,-5.72332e-10,-0.000097498,0.0693452,-1.10378e-9,-0.000188032,0.0801522,-1.63524e-9,-0.000278566,0.0897741,-2.04405e-9,-0.000348208,0.0979377,-2.20758e-9,-0.000376065,0.10437,-2.00318e-9,-0.000341246,0.108797,-1.30821e-9,-0.000222857,0.110947,0,0,0.10567,2.92062e-9,0.000497534,0.091483,7.86779e-9,0.00134029,0.0733361,1.35898e-8,0.00231505,0.0561786,1.8835e-8,0.00320858,0.0449604,2.23517e-8,0.00380766,0.0445898,2.37822e-8,0.00405135,0.0517671,2.3961e-8,0.00408181,0.0591297,2.34246e-8,0.00399043,0.059315,2.27093e-8,0.00386858,0.0449604,2.23517e-8,0.00380766,0.00871627,2.33054e-8,0.00577162,-0.044509,2.52127e-8,0.00969954,-0.103691,2.66432e-8,0.0126455,-0.157805,2.61664e-8,0.0116635,-0.195827,2.23517e-8,0.00380766,-0.219561,1.32918e-8,-0.0180579,-0.236356,-5.95957e-11,-0.0519692,-0.243507,-1.48415e-8,-0.0872225,-0.238305,-2.81929e-8,-0.113114,-0.218046,-3.72529e-8,-0.11894,-0.154854,-4.14438e-8,-0.085552,-0.0596362,-4.09782e-8,-0.0229158,0.0336579,-3.86499e-8,0.0418322,0.0910799,-3.72529e-8,0.0815556,0.0972784,-3.78489e-8,0.0864236,0.0792818,-3.9041e-8,0.0765137,0.0498091,-3.99351e-8,0.0586527,0.0215791,-3.96371e-8,0.0396676,0.00731076,-3.72529e-8,0.026385,0.00919724,-3.21865e-8,0.0192657,0.0187591,-2.5034e-8,0.0137584,0.032707,-1.66893e-8,0.0091723,0.0477513,-8.04667e-9,0.00481645,0.0606028,0,0])})])}),

                                            new Transform({
                                              translation : new SFVec3f([0,0.00748548,0]),
                                              rotation : new SFRotation([1,0,0,4.71239]),
                                              scale : new SFVec3f([1.53335,1.53335,1.53335]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      texture : new SFNode(
                                                        new ImageTexture({
                                                          url : new MFString(["shadow70-128.png"])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      solid : new SFBool(false),
                                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                                      texCoord : new SFNode(
                                                        new TextureCoordinate({
                                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                                    new Transform({
                                      DEF : new SFString("elsemed"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("augen"),
                                          translation : new SFVec3f([-0.00000267476,-0.0000300407,-0.0000121295]),
                                          scale : new SFVec3f([0.999983,0.99994,0.99996]),
                                          scaleOrientation : new SFRotation([0.382989,0.923112,-0.03441,0.475516]),
                                          center : new SFVec3f([-0.015762,1.38316,0.30789]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.255319),
                                                      diffuseColor : new SFColor([0,0,0]),
                                                      shininess : new SFFloat(0)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  solid : new SFBool(false),
                                                  convex : new SFBool(false),
                                                  creaseAngle : new SFFloat(1.60186),
                                                  coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011])}))}))})])}),

                                        new Transform({
                                          DEF : new SFString("wanst"),
                                          translation : new SFVec3f([4.65661e-10,0.00000190739,2.3749e-8]),
                                          scale : new SFVec3f([1,0.999998,0.999998]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.148936),
                                                      diffuseColor : new SFColor([1,1,1]),
                                                      shininess : new SFFloat(0)})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_2")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  convex : new SFBool(false),
                                                  creaseAngle : new SFFloat(3.14159),
                                                  coordIndex : new MFInt32([0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521])}))}))})])}),

                                        new Transform({
                                          DEF : new SFString("fuss"),
                                          translation : new SFVec3f([-1.49012e-8,-1.49012e-8,-5.58794e-9]),
                                          scale : new SFVec3f([1,0.999999,0.999999]),
                                          center : new SFVec3f([0.196713,0.157104,0.00995016]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.148936),
                                                      diffuseColor : new SFColor([1,1,1]),
                                                      shininess : new SFFloat(0)})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_7")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  solid : new SFBool(false),
                                                  convex : new SFBool(false),
                                                  creaseAngle : new SFFloat(3.14159),
                                                  coordIndex : new MFInt32([0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1,11,12,13,-1,14,11,13,15,-1,13,12,16,17,-1,12,11,18,16,-1,11,14,19,18,-1,14,15,20,19,-1,15,13,17,20,-1,17,16,21,-1,16,18,21,-1,20,17,21,-1,18,19,21,-1,19,20,21,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869,0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012,-0.0762838,0.0261304,-0.0433776,-0.12539,0.0261304,0.148428,-0.276072,0.0261304,0.207848,-0.196614,0.0261304,-0.102499,-0.320089,0.0261304,0.0527677,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527677,-0.182733,0.199669,-0.0154572])}))}))})])}),

                                        new Transform({
                                          DEF : new SFString("arm"),
                                          translation : new SFVec3f([-8.9407e-8,0.00000441074,1.21072e-8]),
                                          scale : new SFVec3f([1,0.999988,0.999988]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.255319),
                                                      diffuseColor : new SFColor([1,0.600935,0.355765]),
                                                      shininess : new SFFloat(0)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  solid : new SFBool(false),
                                                  convex : new SFBool(false),
                                                  creaseAngle : new SFFloat(1.83783),
                                                  coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1,18,19,20,21,-1,19,22,23,20,-1,22,24,25,23,-1,24,26,27,25,-1,26,28,29,27,-1,28,18,21,29,-1,21,20,30,31,-1,20,23,32,30,-1,23,25,33,32,-1,25,27,34,33,-1,27,29,35,34,-1,29,21,31,35,-1,36,37,38,-1,36,38,39,-1,37,36,39,-1,40,37,39,-1,41,42,39,-1,39,42,40,-1,40,42,43,-1,42,44,43,-1,37,40,45,-1,40,43,45,-1,37,45,46,-1,46,45,47,-1,43,44,48,-1,44,49,48,-1,44,47,49,-1,47,50,49,-1,48,49,51,-1,49,50,51,-1,43,48,51,-1,47,51,50,-1,45,43,51,-1,45,51,47,-1,41,39,52,-1,38,52,39,-1,41,52,42,-1,42,53,44,-1,44,53,47,-1,53,46,47,-1,46,54,37,-1,54,46,53,-1,37,54,38,-1,53,42,55,-1,42,52,55,-1,55,54,53,-1,55,52,56,-1,57,56,52,-1,38,58,52,-1,52,58,57,-1,58,38,59,-1,38,54,59,-1,54,55,59,-1,55,56,59,-1,56,60,59,-1,56,61,60,-1,57,61,56,-1,57,62,61,-1,58,62,57,-1,58,59,62,-1,60,61,63,-1,61,62,63,-1,59,60,63,-1,59,63,62,-1,64,65,66,-1,64,66,67,-1,65,64,67,-1,68,65,67,-1,69,70,67,-1,67,70,68,-1,68,70,71,-1,70,72,71,-1,65,68,73,-1,68,71,73,-1,65,73,74,-1,74,73,75,-1,71,72,76,-1,72,77,76,-1,72,75,77,-1,75,78,77,-1,76,77,79,-1,77,78,79,-1,71,76,79,-1,75,79,78,-1,73,71,79,-1,73,79,75,-1,69,67,80,-1,66,80,67,-1,69,80,70,-1,70,81,72,-1,72,81,75,-1,81,74,75,-1,74,82,65,-1,82,74,81,-1,65,82,66,-1,81,70,83,-1,70,80,83,-1,83,82,81,-1,83,80,84,-1,85,84,80,-1,66,86,80,-1,80,86,85,-1,86,66,87,-1,66,82,87,-1,82,83,87,-1,83,84,87,-1,84,88,87,-1,84,89,88,-1,85,89,84,-1,85,90,89,-1,86,90,85,-1,86,87,90,-1,88,89,91,-1,89,90,91,-1,87,88,91,-1,87,91,90,-1,92,93,94,95,-1,93,96,97,94,-1,96,98,99,97,-1,98,100,101,99,-1,100,102,103,101,-1,102,92,95,103,-1,104,105,106,107,-1,105,108,109,106,-1,108,110,111,109,-1,110,112,113,111,-1,112,114,115,113,-1,114,104,107,115,-1,117,120,121,118,-1,119,118,124,-1,118,121,125,124,-1,123,125,121,-1,126,127,128,129,-1,127,130,131,128,-1,132,133,134,135,-1,133,136,137,134,-1,136,138,139,137,-1,138,140,141,139,-1,140,142,143,141,-1,142,144,145,143,-1,144,146,147,145,-1,146,148,149,147,-1,148,132,135,149,-1,150,151,133,132,-1,151,152,136,133,-1,153,154,140,138,-1,155,156,144,142,-1,156,157,146,144,-1,157,158,148,146,-1,158,150,132,148,-1,159,135,134,-1,159,149,135,-1,159,134,137,-1,159,147,149,-1,159,137,139,-1,159,145,147,-1,159,139,141,-1,159,143,145,-1,159,141,143,-1,160,161,162,163,-1,164,160,163,165,-1,116,117,119,-1,117,118,119,-1,120,123,121,-1,120,122,123,-1,154,142,140,-1,154,155,142,-1,152,153,136,-1,153,138,136,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742,0.371632,0.51953,-0.0174804,0.416478,0.5272,-0.0152145,0.401579,0.737481,-0.0159672,0.356729,0.729809,-0.0182334,0.436911,0.531038,0.0253191,0.422012,0.741321,0.0245662,0.412496,0.5272,0.0635862,0.397597,0.737481,0.0628337,0.367651,0.51953,0.0613203,0.352747,0.729809,0.0605675,0.347215,0.51569,0.0207869,0.332314,0.725973,0.0200338,0.342185,0.9411,-0.0132199,0.303861,0.934544,-0.0151563,0.359644,0.944377,0.0214146,0.338782,0.9411,0.0541129,0.300459,0.934544,0.0521766,0.282999,0.931265,0.0175419,0.439239,0.562616,0.104029,0.480247,0.455896,0.106101,0.385697,0.541994,0.101323,0.445969,0.562616,-0.0291655,0.486977,0.455896,-0.0270934,0.392428,0.541994,-0.0318708,0.433433,0.435274,-0.0297989,0.46109,0.36634,-0.0270675,0.431046,0.38519,-0.0285858,0.454494,0.36634,0.103466,0.426705,0.435274,0.103396,0.42445,0.38519,0.101948,0.406836,0.339644,-0.0166598,0.390122,0.369792,-0.0175043,0.384904,0.369792,0.0857654,0.401618,0.339643,0.0866099,0.3899,0.541994,0.0181453,0.430908,0.435274,0.0202174,0.409609,0.479758,0.102532,0.413812,0.479758,0.0193535,0.369843,0.472166,0.0298096,0.327615,0.479006,0.0276758,0.324603,0.479006,0.0872905,0.366831,0.472166,0.0894243,0.348305,0.40977,0.0455304,0.32291,0.406297,0.0442472,0.321108,0.406297,0.0799203,0.346503,0.40977,0.0812035,-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339632,-0.0575858,-0.38637,0.36978,-0.0567413,-0.391589,0.36978,0.0465314,-0.408302,0.339632,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406286,0.0114726,-0.327528,0.406286,0.0471469,-0.352923,0.409757,0.0458637,-0.164513,0.106479,-0.0435971,-0.210011,0.106479,-0.0458962,-0.210011,0.316275,-0.0458962,-0.164513,0.316275,-0.0435971,-0.234751,0.106479,-0.00764266,-0.234751,0.316275,-0.00764266,-0.213993,0.106479,0.0329098,-0.213993,0.316275,0.0329098,-0.168495,0.106479,0.0352088,-0.168495,0.316275,0.0352088,-0.143755,0.106479,-0.00304469,-0.143755,0.316275,-0.00304469,0.168078,0.106479,-0.0267915,0.213576,0.106479,-0.0244925,0.213576,0.316275,-0.0244925,0.168078,0.316275,-0.0267915,0.234334,0.106479,0.0160599,0.234334,0.316275,0.01606,0.209594,0.106479,0.0543134,0.209594,0.316275,0.0543134,0.164096,0.106479,0.0520144,0.164096,0.316275,0.0520144,0.143338,0.106479,0.0114619,0.143338,0.316275,0.011462,-0.34079,1.21599,0.175993,-0.148843,1.18853,0.351654,-0.130318,1.356,0.332565,-0.296536,1.38096,0.180226,0.112646,1.18853,0.364866,0.0961394,1.356,0.344007,0.321325,1.21599,0.209449,0.276869,1.38096,0.209197,-0.0769216,1.49601,0.225366,0.0538224,1.49601,0.231971,-0.148843,1.18853,0.351654,-0.34079,1.21599,0.175993,0.321325,1.21599,0.209449,0.112646,1.18853,0.364866,-0.373363,1.26098,-0.0802187,0.379564,1.26098,-0.0421857,-0.185078,1.185,-0.255713,-0.299234,1.15427,-0.0816111,-0.171806,1.07361,-0.0660556,-0.105896,1.09135,-0.166574,-0.273049,1.11933,0.124254,-0.156688,1.05343,0.0528013,-0.118775,1.09653,0.265553,-0.0676163,1.04026,0.134379,0.0914055,1.09653,0.276171,0.053732,1.04026,0.14051,0.25914,1.11932,0.15114,0.150574,1.05343,0.0683244,0.305946,1.15427,-0.0510372,0.177599,1.07361,-0.0484037,0.209923,1.185,-0.235756,0.122159,1.09135,-0.155052,0.0160036,1.19714,-0.316588,0.0101984,1.09836,-0.20172,-0.214726,1.29615,-0.275208,-0.346539,1.26067,-0.0741711,-0.316304,1.22031,0.163539,-0.138161,1.19398,0.326696,0.104528,1.19398,0.338957,0.298214,1.22031,0.194585,0.35226,1.26067,-0.0388675,0.241386,1.29615,-0.252165,0.0174646,1.31016,-0.345501,0.0016046,1.04027,-0.031671,0.298214,1.22031,0.194585,0.104528,1.19398,0.338957,-0.138161,1.19398,0.326696,-0.316304,1.22031,0.163539,0.35226,1.26067,-0.0388675,-0.346539,1.26067,-0.0741711])}))}))})])}),

                                        new Transform({
                                          USE : new SFString("_5")})])}),

                                    new Transform({})])})])}))})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BodyORotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmRRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("headORotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("armRRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("armRRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("armR"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("ArmRRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmR"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("armLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("handLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("handLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("handL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("armLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("armL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("ArmLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_5"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_5"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("HeadRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_6"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_6"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("augenDiffuseColorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("augenDiffuseColorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_diffuseColor")}),

            new ROUTE({
              fromNode : new SFString("headORotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("headO"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("HeadRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Head"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BodyORotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BodyO"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_7"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_7"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_7"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fussLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("fussLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("fussR"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("glowObjTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_8"),
              toField : new SFString("set_SFVec3f")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_8"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_8"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_8"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("glowObjTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("glowObjTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("glowObj"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Light1_1"),
              toField : new SFString("set_on")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Light1_1"),
              toField : new SFString("set_direction")}),

            new ROUTE({
              fromNode : new SFString("Time_8"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("shadowTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("shadowTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("shadow"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());