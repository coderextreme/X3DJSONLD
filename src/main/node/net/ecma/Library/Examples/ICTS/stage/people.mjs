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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
var SFRotation = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
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

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("people"),
              bboxSize : new SFVec3f([5,3.8,5]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("RandomSwitcherHair"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("RandomSwitcher"),
                      DEF : new SFString("_1"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("maxValue"),
                          value : new SFString("3")})])})])}),

                new Transform({
                  DEF : new SFString("RandomSwitcherBody"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("RandomSwitcher"),
                      DEF : new SFString("_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("maxValue"),
                          value : new SFString("9")})])})])})])}),

            new Transform({
              DEF : new SFString("nc"),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("bil"),
                              children : new MFNode([
                                new LOD({
                                  center : new SFVec3f([0,1.2,0]),
                                  range : new MFFloat([0.660001,40]),
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
                                              DEF : new SFString("_3"),
                                              size : new SFVec3f([1.2,1.7,1.2]),
                                              center : new SFVec3f([0,0.85,0])})])}),

                                        new Transform({
                                          DEF : new SFString("else"),
                                          translation : new SFVec3f([0,-4.76837e-7,0]),
                                          center : new SFVec3f([-0.000758275,0.842724,0.00417924]),
                                          children : new MFNode([
                                            new Group({
                                              children : new MFNode([
                                                new Group({
                                                  DEF : new SFString("hupf"),
                                                  children : new MFNode([
                                                    new TimeSensor({
                                                      DEF : new SFString("Time_1"),
                                                      startTime : new SFTime(973451004.016792),
                                                      stopTime : new SFTime(1)})])}),

                                                new OrientationInterpolator({
                                                  DEF : new SFString("ArmLRotationInterp"),
                                                  key : new MFFloat([0,0.1,0.2,0.3,0.5,0.7,0.9,1]),
                                                  keyValue : new MFRotation([0,0,1,0,0.537984,0.0664556,0.840332,4.29341,-0.603678,0.0699418,-0.794154,2.31096,0.644597,-0.175593,0.744085,3.92248,0.561529,0.0208846,0.827194,4.23437,0.644597,-0.175593,0.744085,3.92248,0.537984,0.0664556,0.840332,4.29341,0,0,1,0])}),

                                                new PositionInterpolator({
                                                  DEF : new SFString("ArmLScaleFactorInterp"),
                                                  key : new MFFloat([0]),
                                                  keyValue : new MFVec3f([1,0.999981,1])}),

                                                new OrientationInterpolator({
                                                  DEF : new SFString("ArmLScaleOrientationInterp_1"),
                                                  key : new MFFloat([0]),
                                                  keyValue : new MFRotation([0.875324,0.477336,-0.0771937,0.370578])}),

                                                new PositionInterpolator({
                                                  DEF : new SFString("ArmLScaleInterp"),
                                                  key : new MFFloat([0]),
                                                  keyValue : new MFVec3f([1,0.999981,1])}),

                                                new OrientationInterpolator({
                                                  DEF : new SFString("ArmLScaleOrientationInterp_2"),
                                                  key : new MFFloat([0]),
                                                  keyValue : new MFRotation([0.914246,0.397429,-0.078765,0.367275])}),

                                                new PositionInterpolator({
                                                  DEF : new SFString("elseTranslationInterp"),
                                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9]),
                                                  keyValue : new MFVec3f([0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0])})])}),

                                            new Transform({
                                              DEF : new SFString("BodyO"),
                                              translation : new SFVec3f([4.65661e-10,1.49012e-7,-9.31323e-9]),
                                              scale : new SFVec3f([1,0.999988,0.999988]),
                                              center : new SFVec3f([-0.00316677,0.337015,0.00420856]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("body"),
                                                  center : new SFVec3f([-0.000208497,0.681873,0.00420851]),
                                                  children : new MFNode([
                                                    new Switch({
                                                      DEF : new SFString("_4"),
                                                      whichChoice : new SFInt32(1),
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
                                                                      point : new MFVec3f([-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b1"),
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
                                                                      url : new MFString(["army1.jpg"])}))})),
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
                                                                      DEF : new SFString("hbco"),
                                                                      point : new MFVec3f([-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521])}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b2"),
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
                                                                      url : new MFString(["cyber2.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b3"),
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
                                                                      url : new MFString(["shirt8.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b4"),
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
                                                                      url : new MFString(["shirt9.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b5"),
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
                                                                      url : new MFString(["shirt5.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b6"),
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
                                                                      url : new MFString(["shirt4.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b7"),
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
                                                                      url : new MFString(["shirt2.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b8"),
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
                                                                      url : new MFString(["cyber4.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])}),

                                                        new Transform({
                                                          DEF : new SFString("b9"),
                                                          translation : new SFVec3f([0,2.86491e-11,2.16716e-13]),
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
                                                                      url : new MFString(["shirt3.jpg"])}))})),
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
                                                                      USE : new SFString("hbco")}))}))})])})])})])}),

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
                                                        new Transform({
                                                          DEF : new SFString("oarmR"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      DEF : new SFString("_5"),
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
                                                                      USE : new SFString("_5")}))})),
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
                                                  translation : new SFVec3f([0.00000184774,0.0000013113,2.98023e-7]),
                                                  scale : new SFVec3f([1,0.999981,1]),
                                                  scaleOrientation : new SFRotation([0.875324,0.477336,-0.0771937,0.370578]),
                                                  center : new SFVec3f([-0.298867,0.995243,-0.0108316]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("armL"),
                                                      translation : new SFVec3f([-1.19209e-7,2.38419e-7,9.31323e-10]),
                                                      center : new SFVec3f([-0.305306,0.988041,-0.0116445]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          DEF : new SFString("oarmL"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_5")}))})),
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
                                                          scaleOrientation : new SFRotation([0,0,-1,0.725978]),
                                                          center : new SFVec3f([-0.394827,0.544969,-0.00705719]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_5")}))})),
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
                                                  scaleOrientation : new SFRotation([0.272252,0.962065,-0.0175875,0.748075]),
                                                  center : new SFVec3f([-0.00422851,1.04834,0.00417849]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("headU"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("_5")}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              solid : new SFBool(false),
                                                              convex : new SFBool(false),
                                                              creaseAngle : new SFFloat(1.53973),
                                                              coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,20,21,6,4,-1,21,22,8,6,-1,22,23,10,8,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751])}))}))})])}),

                                                    new Transform({
                                                      DEF : new SFString("headO"),
                                                      translation : new SFVec3f([2.32831e-10,2.38419e-7,3.35276e-8]),
                                                      center : new SFVec3f([-0.00371499,1.24837,0.029451]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          DEF : new SFString("augen"),
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
                                                          DEF : new SFString("haar"),
                                                          children : new MFNode([
                                                            new Switch({
                                                              DEF : new SFString("_6"),
                                                              whichChoice : new SFInt32(1),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  DEF : new SFString("h1"),
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
                                                                              url : new MFString(["hair1.jpg"])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          solid : new SFBool(false),
                                                                          convex : new SFBool(false),
                                                                          creaseAngle : new SFFloat(3.14159),
                                                                          coordIndex : new MFInt32([0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]),
                                                                          texCoord : new SFNode(
                                                                            new TextureCoordinate({
                                                                              point : new MFVec2f([-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              DEF : new SFString("hhco"),
                                                                              point : new MFVec3f([0.238211,1.471,-0.220467,0.198251,1.55876,0.0313386,0.377841,1.43577,-0.00714531,0.134999,1.579,-0.0903402,-0.18314,1.60778,0.146798,-0.247618,1.60732,0.00880936,-0.411981,1.43577,-0.0470541,-0.214767,1.471,-0.243355,-0.125196,1.579,-0.103488,0.0158279,1.48493,-0.313164,0.00725975,1.58699,-0.143594,-0.00227428,1.65935,0.0674612,0.277193,1.31523,-0.28818,0.404551,1.27447,-0.0431701,0.349909,1.23012,0.213632,-0.369653,1.23012,0.177274,-0.340793,1.21799,0.175881,-0.296545,1.38244,0.180247,-0.313821,1.40203,0.187276,-0.39813,1.27447,-0.0837286,-0.246724,1.31523,-0.314648,0.0199828,1.33133,-0.395392,-0.101431,1.54401,0.270843,-0.0769222,1.4973,0.225338,0.0538245,1.4973,0.231944,0.293354,1.40203,0.217955,0.350422,1.14933,-0.0780944,0.332594,1.1399,-0.0774054,0.263445,1.1857,-0.274314,0.321337,1.21799,0.209338,0.37957,1.26148,-0.042198,0.307546,1.09211,0.193511,0.329131,1.10101,0.196722,-0.364571,1.14933,-0.114222,-0.340485,1.10101,0.162887,-0.318688,1.09211,0.161868,-0.346907,1.1399,-0.11174,-0.373375,1.26148,-0.0802434,-0.224667,1.19678,-0.311133,-0.213683,1.1857,-0.298422,0.0189626,1.21513,-0.375202,0.0181397,1.20332,-0.358916,0.275653,1.19678,-0.285857,0.0803699,1.55286,0.386279,0.0342505,1.58699,0.341122,-0.00180715,1.38328,0.368284,0.145419,1.52038,0.403749,0.149685,1.48603,0.349656,0.052231,1.44079,0.328486,-0.0276137,1.65405,0.180214,0.0210674,1.63967,0.24235,0.16156,1.59305,0.254132,0.216021,1.45452,0.294783,0.213277,1.43423,0.279438,0.276874,1.38244,0.209221,0.0328324,1.49261,0.284621,0.16156,1.59305,0.254132,0.0214095,1.6383,0.244912,0.293354,1.40203,0.217955,0.216021,1.45452,0.294783,0.216021,1.45452,0.294783,0.276874,1.38244,0.209221,0.218313,1.45296,0.292504,0.219894,1.45189,0.290931])}))}))})])}),

                                                                new Transform({
                                                                  DEF : new SFString("h2"),
                                                                  translation : new SFVec3f([2.32831e-10,-0.00000274181,-5.7742e-8]),
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
                                                                              url : new MFString(["hair2.jpg"])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          solid : new SFBool(false),
                                                                          convex : new SFBool(false),
                                                                          creaseAngle : new SFFloat(3.14159),
                                                                          coordIndex : new MFInt32([0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]),
                                                                          texCoord : new SFNode(
                                                                            new TextureCoordinate({
                                                                              point : new MFVec2f([-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              USE : new SFString("hhco")}))}))})])}),

                                                                new Transform({
                                                                  DEF : new SFString("h3"),
                                                                  translation : new SFVec3f([2.32831e-10,-0.00000274181,-5.7742e-8]),
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
                                                                              url : new MFString(["hair3.jpg"])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          solid : new SFBool(false),
                                                                          convex : new SFBool(false),
                                                                          creaseAngle : new SFFloat(3.14159),
                                                                          coordIndex : new MFInt32([0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]),
                                                                          texCoord : new SFNode(
                                                                            new TextureCoordinate({
                                                                              point : new MFVec2f([-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              USE : new SFString("hhco")}))}))})])}),

                                                                new Transform({
                                                                  DEF : new SFString("h4"),
                                                                  translation : new SFVec3f([2.32831e-10,-0.00000274181,-5.7742e-8]),
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
                                                                              url : new MFString(["hair4.jpg"])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          solid : new SFBool(false),
                                                                          convex : new SFBool(false),
                                                                          creaseAngle : new SFFloat(3.14159),
                                                                          coordIndex : new MFInt32([0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1]),
                                                                          texCoord : new SFNode(
                                                                            new TextureCoordinate({
                                                                              point : new MFVec2f([-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              USE : new SFString("hhco")}))}))})])})])})])}),

                                                        new Transform({
                                                          DEF : new SFString("ohead"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("_5")}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  solid : new SFBool(false),
                                                                  convex : new SFBool(false),
                                                                  creaseAngle : new SFFloat(1.53973),
                                                                  coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829])}))}))})])})])})])})])}),

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
                                                              USE : new SFString("_5")}))})),
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
                                                              DEF : new SFString("_7"),
                                                              ambientIntensity : new SFFloat(0.148936),
                                                              diffuseColor : new SFColor([1,1,1]),
                                                              shininess : new SFFloat(0)})),
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              DEF : new SFString("_8"),
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
                                                              USE : new SFString("_5")}))})),
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
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("_7")})),
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              USE : new SFString("_8")}))})),
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
                                          DEF : new SFString("shadow"),
                                          translation : new SFVec3f([0.0606028,0,0]),
                                          center : new SFVec3f([0,0.00748548,0]),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0,0.00748548,0]),
                                              rotation : new SFRotation([-1,0,0,1.5708]),
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

                                    new Transform({})])})])})])})])}))})])}),

            new Viewpoint({
              DEF : new SFString("VP1"),
              position : new SFVec3f([-0.372997,1.43562,2.55648]),
              orientation : new SFRotation([-0.823815,-0.566765,-0.0103506,0.245828])}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLScaleFactorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLScaleOrientationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLScaleInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ArmLScaleOrientationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("elseTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("ArmLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("ArmLScaleFactorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmL"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("ArmLScaleOrientationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmL"),
              toField : new SFString("set_scaleOrientation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("elseTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("else"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());