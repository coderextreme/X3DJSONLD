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
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
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
var TextureTransform = require('./x3d.mjs');
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
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("tormann"),
              children : new MFNode([
                new LOD({
                  range : new MFFloat([25]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("on"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("els"),
                          center : new SFVec3f([-0.195395,1.01582,-0.205052]),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("hupf"),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("Time_1"),
                                      cycleInterval : new SFTime(1.42857),
                                      loop : new SFBool(true),
                                      startTime : new SFTime(967123092.439519),
                                      stopTime : new SFTime(1)})])}),

                                new PositionInterpolator({
                                  DEF : new SFString("elsTranslationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFVec3f([0,0,0,0,0.135247,0,0,0,0,0,0.135247,0,0,0,0,0,0.135247,0,0,0,0,0,0.282791,0,0,0,0,0,0.135247,0,0,0,0])}),

                                new PositionInterpolator({
                                  DEF : new SFString("CapTranslationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9]),
                                  keyValue : new MFVec3f([0,0,0,0,0.038009,0,0,0,0,0,0.038009,0,0,0,0,0,0.0618006,0,0,0,0,0,0.159947,1.49012e-8,0,0,0,0,0.038009,0])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("ArmRRotationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("ArmLRotationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874])}),

                                new PositionInterpolator({
                                  DEF : new SFString("beineTranslationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFVec3f([0,0,0,0,-0.0354014,0,0,0,0,0,-0.0354014,0,0,0,0,0,-0.0354014,0,0,0,0,0,-0.0354014,0,0,0,0,0,-0.0354014,0,0,0,0])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("FussLRotationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.28457,0,0,1,0,1,0,0,0.28457,0,0,1,0,1,0,0,0.28457,0,0,1,0,1,0,0,0.509882,0,0,1,0,1,0,0,0.28457,0,0,1,0])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("FussRRotationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.279404,0,0,1,0,1,0,0,0.279404,0,0,1,0,1,0,0,0.279404,0,0,1,0,1,0,0,0.527085,0,0,1,0,1,0,0,0.279404,0,0,1,0])})])}),

                            new Transform({
                              DEF : new SFString("Body"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("bauch"),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.617021),
                                              diffuseColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0)})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_1"),
                                              url : new MFString(["fussballshirt2.jpg"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          convex : new SFBool(false),
                                          creaseAngle : new SFFloat(3.14159),
                                          texCoordIndex : new MFInt32([0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,9,10,11,12,-1,10,13,14,11,-1,13,15,16,14,-1,4,5,17,18,-1,5,6,19,17,-1,6,7,20,19,-1,7,8,21,20,-1,8,2,22,21,-1,12,11,23,24,-1,11,14,25,23,-1,14,16,26,25,-1,18,17,27,28,-1,17,19,29,27,-1,19,20,30,29,-1,20,21,31,30,-1,21,22,32,31,-1,24,23,33,34,-1,23,25,35,33,-1,25,26,36,35,-1,28,27,37,38,-1,27,29,39,37,-1,29,30,40,39,-1,30,31,41,40,-1,31,32,42,41,-1]),
                                          coordIndex : new MFInt32([0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0.504979,0.0148622,0.614985,0.0148622,0.820563,0.00274757,0.394973,0.0148622,0.200426,0.0135764,0.202237,0.00274757,0.391296,0.00117418,0.611307,0.00117418,0.820563,0.00274757,0.200426,0.00569296,0.397565,0.00105438,0.388918,0.348564,0.205175,0.348564,0.607391,0.00105438,0.616038,0.348564,0.820563,0.000776738,0.817416,0.347311,0.193246,0.347454,0.193246,0.347454,0.385908,0.347454,0.624051,0.347454,0.816712,0.347454,0.816712,0.347454,0.397565,0.696074,0.227809,0.696074,0.607391,0.696074,0.777147,0.696074,0.216978,0.680047,0.216978,0.680047,0.394973,0.680047,0.614985,0.680047,0.79298,0.680047,0.79298,0.680047,0.428632,0.990688,0.309148,0.990688,0.576324,0.990688,0.695808,0.990688,0.302265,0.962014,0.302265,0.962014,0.427548,0.962014,0.58241,0.962014,0.707693,0.962014,0.707693,0.962014])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.180989,0.29048,-0.291293,-0.0710534,0.29048,-0.495268,0.106829,0.29048,-0.417356,-0.290925,0.29048,-0.495268,-0.468807,0.29048,-0.417356,-0.468807,0.29048,-0.16523,-0.290925,0.29048,-0.0873185,-0.0710534,0.29048,-0.0873185,0.106829,0.29048,-0.16523,-0.0619925,0.564054,-0.512075,0.130546,0.564054,-0.427744,-0.299985,0.564054,-0.512075,-0.492524,0.564054,-0.427744,-0.492524,0.564054,-0.154842,-0.299985,0.564054,-0.0705113,-0.0619925,0.564054,-0.0705113,0.130546,0.564054,-0.154842,-0.0710534,0.837629,-0.495268,0.106829,0.837629,-0.417356,-0.290925,0.837629,-0.495268,-0.468807,0.837629,-0.417356,-0.468807,0.837629,-0.16523,-0.290925,0.837629,-0.0873185,-0.0710534,0.837629,-0.0873185,0.106829,0.837629,-0.16523,-0.103608,1.06956,-0.434864,0.0215962,1.06956,-0.380025,-0.25837,1.06956,-0.434864,-0.383574,1.06956,-0.380025,-0.383574,1.06956,-0.202561,-0.25837,1.06956,-0.147722,-0.103608,1.06956,-0.147722,0.0215962,1.06956,-0.202561])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("ArmR"),
                                  translation : new SFVec3f([-0.00124139,-0.0214972,0.00679928]),
                                  rotation : new SFRotation([0.991597,0.0944415,0.0884048,4.59405]),
                                  scale : new SFVec3f([0.999994,0.999988,0.999986]),
                                  scaleOrientation : new SFRotation([0.923021,-0.118766,0.365959,0.652974]),
                                  center : new SFVec3f([0.128521,0.984616,-0.291293]),
                                  children : new MFNode([
                                    new Transform({
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_2"),
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([1,1,1]),
                                                  shininess : new SFFloat(0)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_1")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,-1,4,7,8,-1,4,6,7,-1,9,0,3,10,-1,11,9,10,12,-1,4,8,13,-1,14,11,12,15,-1]),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,1,0,-1,4,5,6,-1,4,0,5,-1,5,0,3,7,-1,6,5,7,8,-1,4,6,9,-1,9,6,8,10,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.963327,0.938699,0.82397,0.94241,0.827507,0.77953,0.990035,0.779163,0.665307,0.982106,0.67291,0.890808,0.822811,0.917169,0.858335,0.931766,0.822811,0.922024,0.996654,0.946248,1.06233,0.780193,0.963503,0.943599,0.990035,0.779163,0.67291,0.890808,0.82397,0.94241,0.827507,0.77953])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.136642,1.03267,-0.226823,-0.0131647,1.01099,-0.226823,-0.00306417,0.879917,-0.207057,0.171499,0.908409,-0.207057,-0.0207623,1.08609,-0.291239,0.172142,1.04468,-0.291293,0.136642,1.03667,-0.355763,0.236692,0.940267,-0.291293,0.171499,0.908409,-0.375529,-0.0131647,1.01099,-0.355763,-0.00306417,0.879917,-0.375529])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("armR"),
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
                                                  point : new MFVec3f([0.19152,0.516686,-0.331964,0.236693,0.524403,-0.331964,0.221686,0.735973,-0.331964,0.176509,0.728252,-0.331964,0.259281,0.528265,-0.292275,0.244275,0.739835,-0.292275,0.236693,0.524403,-0.252585,0.221686,0.735972,-0.252585,0.19152,0.516686,-0.252585,0.176509,0.728252,-0.252585,0.168931,0.512824,-0.292275,0.153921,0.724393,-0.292275,0.16215,0.940838,-0.326188,0.123546,0.934241,-0.326188,0.18145,0.944134,-0.292275,0.16215,0.940838,-0.258361,0.123546,0.934241,-0.258361,0.104246,0.930941,-0.292275])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("HandR"),
                                      translation : new SFVec3f([-0.0195431,-0.00654498,-0.023027]),
                                      rotation : new SFRotation([-0.462372,-0.858384,0.222236,1.28324]),
                                      scale : new SFVec3f([0.999997,0.999998,1]),
                                      scaleOrientation : new SFRotation([0.102181,-0.114868,-0.988112,0.729911]),
                                      center : new SFVec3f([0.235007,0.53565,-0.277635]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("handR"),
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
                                                      point : new MFVec3f([0.265624,0.56003,-0.213307,0.306931,0.452655,-0.213307,0.21169,0.539282,-0.213307,0.265624,0.56003,-0.347479,0.306931,0.452655,-0.347479,0.21169,0.539282,-0.347479,0.252997,0.431907,-0.347479,0.280923,0.362551,-0.346139,0.25066,0.381516,-0.346139,0.280923,0.362551,-0.214647,0.252997,0.431907,-0.213307,0.25066,0.381516,-0.214647,0.226939,0.335692,-0.332927,0.210104,0.366024,-0.332927,0.210104,0.366024,-0.228899,0.226939,0.335692,-0.228899,0.21169,0.539282,-0.297096,0.252997,0.431907,-0.297096,0.235777,0.476665,-0.213307,0.235777,0.476665,-0.297096,0.192132,0.469025,-0.284357,0.149593,0.475906,-0.284357,0.149593,0.475906,-0.224305,0.192132,0.469025,-0.224305,0.171288,0.406246,-0.267468,0.145707,0.402753,-0.267468,0.145707,0.402753,-0.231533,0.171288,0.406246,-0.231533])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("ArmL"),
                                  translation : new SFVec3f([7.7486e-7,-4.76837e-7,9.53674e-7]),
                                  rotation : new SFRotation([0.987669,-0.123238,-0.0965556,4.45874]),
                                  scale : new SFVec3f([0.999996,0.999981,0.999987]),
                                  scaleOrientation : new SFRotation([-0.967838,0.174123,-0.181578,0.794895]),
                                  center : new SFVec3f([-0.484014,0.988261,-0.291293]),
                                  children : new MFNode([
                                    new Transform({
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_2")})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_1")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,8,0,3,9,-1,10,11,12,-1,11,13,12,-1,13,14,12,-1,14,15,12,-1]),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,8,0,3,9,-1,7,6,10,-1,6,9,10,-1,9,3,10,-1,3,2,10,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.055592,0.786127,0.186486,0.78569,0.189496,0.869771,0.07726,0.868392,0.186486,0.78569,0.055592,0.786127,0.0771227,0.870922,0.189496,0.869771,0.0018344,0.78663,0.0504269,0.872418,0.337048,0.890808,0.187147,0.922024,0.344651,0.982106,0.151624,0.931766,0.187147,0.917169,0.337048,0.890808])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.533477,0.908409,-0.207057,-0.358914,0.879917,-0.207057,-0.348813,1.01099,-0.226823,-0.49862,1.03267,-0.226823,-0.358914,0.879917,-0.375529,-0.533477,0.908409,-0.375529,-0.49862,1.03667,-0.355763,-0.348813,1.01099,-0.355763,-0.59867,0.940267,-0.291293,-0.53412,1.04468,-0.291293,-0.341216,1.08609,-0.291239])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("armL"),
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
                                                  point : new MFVec3f([-0.553497,0.516684,-0.331965,-0.59867,0.524401,-0.331965,-0.583664,0.735971,-0.331965,-0.538487,0.72825,-0.331965,-0.621259,0.528263,-0.292275,-0.606253,0.739833,-0.292275,-0.59867,0.524401,-0.252585,-0.583664,0.735971,-0.252585,-0.553497,0.516684,-0.252585,-0.538487,0.72825,-0.252585,-0.530908,0.512821,-0.292275,-0.515898,0.724391,-0.292275,-0.524127,0.940837,-0.326189,-0.485523,0.93424,-0.326189,-0.543427,0.944133,-0.292275,-0.524127,0.940837,-0.258361,-0.485523,0.93424,-0.258361,-0.466223,0.93094,-0.292275])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("HandL"),
                                      translation : new SFVec3f([0.0321293,-0.0237494,-0.0472086]),
                                      rotation : new SFRotation([-0.309756,0.854417,-0.417161,0.772718]),
                                      scaleOrientation : new SFRotation([0.505384,-0.571804,0.646241,0.731144]),
                                      center : new SFVec3f([-0.579546,0.526603,-0.275245]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("handL"),
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
                                                      point : new MFVec3f([-0.627601,0.560028,-0.213307,-0.668908,0.452653,-0.213307,-0.573667,0.53928,-0.213307,-0.627601,0.560028,-0.34748,-0.668908,0.452653,-0.34748,-0.573667,0.53928,-0.34748,-0.614975,0.431905,-0.34748,-0.6429,0.362548,-0.34614,-0.612637,0.381513,-0.34614,-0.6429,0.362548,-0.214647,-0.614975,0.431905,-0.213307,-0.612637,0.381513,-0.214647,-0.588916,0.335689,-0.332928,-0.572081,0.366021,-0.332928,-0.572081,0.366021,-0.228899,-0.588916,0.335689,-0.228899,-0.573667,0.53928,-0.297096,-0.614975,0.431905,-0.297096,-0.597754,0.476662,-0.213307,-0.597754,0.476662,-0.297096,-0.554109,0.469022,-0.284358,-0.51157,0.475904,-0.284358,-0.51157,0.475904,-0.224305,-0.554109,0.469022,-0.224305,-0.533265,0.406243,-0.267468,-0.507684,0.40275,-0.267468,-0.507684,0.40275,-0.231533,-0.533265,0.406243,-0.231533])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("beine"),
                                  center : new SFVec3f([-0.361107,0.166233,-0.21749]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("BeinL"),
                                      center : new SFVec3f([-0.361107,0.166233,-0.21749]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("FussL"),
                                          translation : new SFVec3f([1.19209e-7,-2.98023e-8,-8.9407e-8]),
                                          center : new SFVec3f([-0.361107,0.154101,-0.300968]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("fussL"),
                                              center : new SFVec3f([-0.361107,0.107574,-0.21749]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          DEF : new SFString("_4"),
                                                          ambientIntensity : new SFFloat(0),
                                                          diffuseColor : new SFColor([1,1,1]),
                                                          specularColor : new SFColor([0.25,0.25,0.25]),
                                                          shininess : new SFFloat(1)})),
                                                      texture : new SFNode(
                                                        new ImageTexture({
                                                          DEF : new SFString("_5"),
                                                          url : new MFString(["shoes1.jpg"])})),
                                                      textureTransform : new SFNode(
                                                        new TextureTransform({
                                                          DEF : new SFString("_6")}))})),
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
                                                          point : new MFVec3f([-0.294381,0.0202746,-0.375511,-0.251992,0.0202746,-0.180886,-0.360669,0.0202746,-0.0594685,-0.429255,0.0202746,-0.374377,-0.470223,0.0202746,-0.179051,-0.251992,0.0941865,-0.180886,-0.360669,0.0941865,-0.0594685,-0.294381,0.0941865,-0.375511,-0.429255,0.0941865,-0.374377,-0.470223,0.0941865,-0.179051,-0.3775,0.194873,-0.302374])}))}))})])})])}),

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
                                                      point : new MFVec3f([-0.348501,0.101116,-0.330984,-0.394331,0.101116,-0.330984,-0.394331,0.312191,-0.330984,-0.348501,0.312191,-0.330984,-0.417247,0.101116,-0.291293,-0.417247,0.312191,-0.291293,-0.394331,0.101116,-0.251602,-0.394331,0.312191,-0.251602,-0.348501,0.101116,-0.251602,-0.348501,0.312191,-0.251602,-0.325585,0.101116,-0.291293,-0.325585,0.312191,-0.291293])}))}))})])})])}),

                                    new Transform({
                                      DEF : new SFString("BeinR"),
                                      center : new SFVec3f([0.0193775,0.166233,-0.21749]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("FussR"),
                                          translation : new SFVec3f([-2.23517e-8,-2.98023e-7,3.8743e-7]),
                                          scale : new SFVec3f([0.999999,0.999999,0.999999]),
                                          center : new SFVec3f([0.0193775,0.145404,-0.283224]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("fussR"),
                                              center : new SFVec3f([0.0193775,0.107574,-0.21749]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("_4")})),
                                                      texture : new SFNode(
                                                        new ImageTexture({
                                                          USE : new SFString("_5")})),
                                                      textureTransform : new SFNode(
                                                        new TextureTransform({
                                                          USE : new SFString("_6")}))})),
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
                                                          point : new MFVec3f([0.0861042,0.0202746,-0.375511,0.128493,0.0202746,-0.180886,0.0198162,0.0202746,-0.0594685,-0.0487697,0.0202746,-0.374377,-0.089738,0.0202746,-0.179051,0.128493,0.0941865,-0.180886,0.0198162,0.0941865,-0.0594685,0.0861042,0.0941865,-0.375511,-0.0487697,0.0941865,-0.374377,-0.089738,0.0941865,-0.179051,0.00298554,0.194873,-0.302374])}))}))})])})])}),

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
                                                      point : new MFVec3f([-0.0134769,0.101116,-0.330984,0.0323538,0.101116,-0.330984,0.0323538,0.312191,-0.330984,-0.0134769,0.312191,-0.330984,0.0552692,0.101116,-0.291293,0.0552692,0.312191,-0.291293,0.0323538,0.101116,-0.251602,0.0323538,0.312191,-0.251602,-0.0134769,0.101116,-0.251602,-0.0134769,0.312191,-0.251602,-0.0363922,0.101116,-0.291293,-0.0363922,0.312191,-0.291293])}))}))})])})])})])})])}),

                            new Transform({
                              DEF : new SFString("Head"),
                              translation : new SFVec3f([3.42727e-7,-0.00000202656,2.98023e-7]),
                              rotation : new SFRotation([-0.768557,-0.638163,0.0454833,0.184941]),
                              scale : new SFVec3f([0.999998,0.999999,0.999999]),
                              scaleOrientation : new SFRotation([-0.823404,0.371392,-0.429038,0.42547]),
                              center : new SFVec3f([-0.174956,1.06357,-0.157485]),
                              children : new MFNode([
                                new Group({
                                  children : new MFNode([
                                    new Group({
                                      DEF : new SFString("head10"),
                                      children : new MFNode([
                                        new TimeSensor({
                                          DEF : new SFString("Time_2"),
                                          cycleInterval : new SFTime(10),
                                          loop : new SFBool(true),
                                          startTime : new SFTime(967123092.439519),
                                          stopTime : new SFTime(1)})])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("HeadRotationInterp"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.7,0.9,1]),
                                      keyValue : new MFRotation([0,0,1,0,0,0,1,0.00878907,0,0,1,0,0,0,-1,0.140662,0,0,1,0.120193,0,0,1,0,0.666755,0.741904,0.0708235,0.284414,-0.768557,-0.638163,0.0454833,0.184941,0,0,1,0])})])}),

                                new Transform({
                                  DEF : new SFString("HeadO"),
                                  translation : new SFVec3f([5.96046e-8,4.76837e-7,2.98023e-7]),
                                  scale : new SFVec3f([0.999995,0.999992,0.999994]),
                                  scaleOrientation : new SFRotation([0.00953886,-0.744196,0.667893,0.035968]),
                                  center : new SFVec3f([-0.18099,1.26447,-0.194326]),
                                  children : new MFNode([
                                    new Group({
                                      children : new MFNode([
                                        new Group({
                                          DEF : new SFString("mouth13"),
                                          children : new MFNode([
                                            new TimeSensor({
                                              DEF : new SFString("Time_3"),
                                              cycleInterval : new SFTime(6.5),
                                              loop : new SFBool(true),
                                              startTime : new SFTime(967123092.439519),
                                              stopTime : new SFTime(1)})])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("HeadORotationInterp"),
                                          key : new MFFloat([0,0.0769231,0.153846,0.230769,0.307692,0.384616,0.461539,0.538462,0.615385,0.692308,0.846154,1]),
                                          keyValue : new MFRotation([0,0,1,0,-1,-1.20492e-7,3.45555e-8,0.170499,0,0,1,0,1,1.20492e-7,-3.45555e-8,0.013637,1,1.20492e-7,-3.45555e-8,0.0204613,1,1.20492e-7,-3.45555e-8,0.0204613,1,1.20492e-7,-3.45555e-8,0.013637,0,0,1,0,-1,-1.20492e-7,3.45555e-8,0.170499,-1,-1.20492e-7,3.45555e-8,0.170499,0,0,1,0,-1,-1.20492e-7,3.45555e-8,0.170499])})])}),

                                    new Transform({
                                      DEF : new SFString("augen"),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  specularColor : new SFColor([0.0638298,0.0638298,0.0638298]),
                                                  shininess : new SFFloat(0.712766)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.297166,1.42708,-0.0154432,-0.269645,1.42075,0.00939035,-0.292714,1.36657,-0.00734124,-0.280138,1.37926,0.0389142,-0.335188,1.39193,-0.010753,-0.345682,1.35044,0.0187708,-0.31816,1.3441,0.0436044,-0.318049,1.39881,0.02896,-0.0648112,1.42708,-0.0154428,-0.0923325,1.42075,0.00939074,-0.0692626,1.36657,-0.00734085,-0.0818392,1.37926,0.0389146,-0.0267888,1.39193,-0.0107526,-0.0162955,1.35044,0.0187712,-0.0438168,1.3441,0.0436048,-0.0439285,1.39881,0.0289603])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("locke"),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.211831),
                                                  diffuseColor : new SFColor([0.755319,0.755319,0.755319]),
                                                  specularColor : new SFColor([0.25,0.25,0.25]),
                                                  shininess : new SFFloat(1)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["hair2.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              coordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,4,5,6,-1,4,7,5,-1,7,8,5,-1,7,9,8,-1,9,10,8,-1,9,2,10,-1,2,3,10,-1,3,1,11,-1,10,3,11,-1,8,10,11,-1,6,5,11,-1,5,8,11,-1,12,0,2,-1,13,0,12,-1,13,14,0,-1,15,16,14,-1,17,18,19,-1,19,4,20,-1,20,4,6,-1,20,17,19,-1,21,4,19,-1,7,4,22,-1,21,22,4,-1,22,23,7,-1,23,9,7,-1,23,2,9,-1,12,2,23,-1,20,6,24,-1,24,6,11,-1,20,24,17,-1,25,17,24,-1,26,25,24,-1,27,26,24,-1,16,26,27,-1,14,28,0,-1,28,14,16,-1,28,1,0,-1,28,16,27,-1,29,30,31,-1,1,29,31,-1,32,30,29,-1,30,32,33,-1,29,1,34,-1,34,1,28,-1,34,32,29,-1,27,34,28,-1,32,34,27,-1,11,35,24,-1,11,33,35,-1,27,24,35,-1,33,32,35,-1,35,32,27,-1,1,31,36,-1,36,31,30,-1,1,36,11,-1,33,36,30,-1,36,33,11,-1,14,13,37,-1,38,39,37,-1,40,39,38,-1,41,39,40,-1,41,15,39,-1,42,39,15,-1,37,39,43,-1,39,42,43,-1,43,14,37,-1,15,43,42,-1,14,43,15,-1,21,19,44,-1,45,44,19,-1,19,18,45,-1,18,46,45,-1,44,45,47,-1,46,47,45,-1,46,18,47,-1,18,48,47,-1,48,49,47,-1,21,44,50,-1,22,21,50,-1,50,44,51,-1,47,51,44,-1,49,51,47,-1,50,51,52,-1,22,50,52,-1,23,22,52,-1,23,52,12,-1,51,53,52,-1,49,53,51,-1,53,38,52,-1,40,38,53,-1,54,53,49,-1,54,40,53,-1,55,38,37,-1,55,52,38,-1,13,55,37,-1,12,52,55,-1,12,55,13,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([-0.031153,0.475058,0.134139,0.410225,-0.078562,0.934321,0.173678,0.828794,1.03115,0.475058,0.836758,0.456265,0.751218,0.149792,1.08024,0.94078,0.820858,0.836429,-0.487702,1.3526,0.48963,1.17199,0.495426,0.309519,-0.224903,0.859446,-0.149927,0.471418,-0.149453,0.113573,-0.169275,0.098692,-0.040147,0.057141,1.04084,0.051769,1.17138,0.095305,1.15124,0.110286,1.01664,0.064166,1.15153,0.471135,1.2279,0.862599,-0.496601,1.09392,0.620147,-0.138745,0.706603,-0.246724,0.281581,-0.24,0.368273,-0.156726,-0.01637,0.06927,0.212111,0.135703,0.424405,0.323043,0.281031,0.353442,0.338531,0.09775,0.387608,0.304135,0.164237,0.040405,0.491292,0.28297,0.384216,0.305379,-0.243758,0.47296,-0.300561,0.74517,-0.256177,0.467415,-0.242297,0.836079,-0.165947,0.462516,-0.251363,0.128446,-0.236332,0.13454,1.23539,0.473707,1.24192,0.129063,1.25735,0.12307,1.24736,0.468294,1.16778,0.462142,1.24553,0.839007,1.3059,0.771591,1.3166,0.752928,-0.497671,0.922532,-0.49772,0.893837,-0.496744,1.05375,-0.290257,0.763018])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.592296,1.43852,-0.321891,-0.381768,1.56226,-0.274111,-0.409135,1.47398,-0.529139,-0.312038,1.58263,-0.393157,0.235343,1.43852,-0.321891,0.0673617,1.61112,-0.274111,-0.004428,1.61158,-0.138737,0.0471568,1.47398,-0.529139,-0.0499401,1.58263,-0.393157,-0.180989,1.48798,-0.610991,-0.180989,1.59068,-0.440175,-0.180989,1.6378,-0.231548,-0.444862,1.31724,-0.599154,-0.585265,1.27624,-0.359448,-0.543403,1.23162,-0.0986466,-0.514476,1.21942,-0.101512,-0.469796,1.38488,-0.0993744,0.107818,1.38488,-0.0993743,0.152498,1.21942,-0.101512,0.181425,1.23162,-0.0986466,0.124819,1.40459,-0.0914341,0.223287,1.27624,-0.359448,0.0828841,1.31724,-0.59915,-0.180989,1.33344,-0.693817,-0.107351,1.57995,0.0104996,-0.115137,1.50043,-0.065218,-0.246841,1.50043,-0.065218,-0.254627,1.5707,0.0222791,-0.486797,1.40459,-0.0914341,-0.39305,1.60135,-0.115085,-0.264004,1.79812,-0.138737,-0.368794,1.6886,-0.201597,-0.301198,1.64951,-0.0932709,-0.269272,1.69962,-0.185143,-0.374397,1.53996,-0.107707,-0.183261,1.63573,-0.22372,-0.272102,1.69931,-0.185612,-0.529105,1.15034,-0.391786,-0.431754,1.18692,-0.584525,-0.51123,1.14085,-0.390192,-0.428512,1.30163,-0.582057,-0.560216,1.26316,-0.357203,-0.499816,1.09277,-0.116714,-0.521666,1.10172,-0.114585,0.191117,1.15034,-0.391786,0.152848,1.10172,-0.114585,0.130999,1.09277,-0.116714,0.173242,1.14085,-0.390192,0.198237,1.26316,-0.357203,0.0665338,1.30163,-0.582053,0.0605458,1.19808,-0.59674,0.0488626,1.18692,-0.584525,-0.180989,1.21653,-0.673482,-0.180989,1.20466,-0.657077,-0.180989,1.31682,-0.670855,-0.443434,1.19808,-0.596743])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("Cap"),
                                      center : new SFVec3f([-0.18099,1.66129,-0.155752]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("basecap"),
                                          center : new SFVec3f([-0.18099,1.66129,-0.155752]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.37234),
                                                      diffuseColor : new SFColor([1,1,1]),
                                                      shininess : new SFFloat(0)})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_1")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  solid : new SFBool(false),
                                                  convex : new SFBool(false),
                                                  creaseAngle : new SFFloat(3.14159),
                                                  texCoordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,0,2,-1,5,6,2,-1,6,7,2,-1,7,4,2,-1,8,9,10,-1,10,9,11,-1,10,11,12,-1,11,13,12,-1,11,14,13,-1,15,11,9,-1,16,11,15,-1,17,18,19,-1,20,21,22,-1,23,24,25,-1,20,26,27,-1,20,28,21,-1,20,27,28,-1,28,29,21,-1,27,30,28,-1,30,8,28,-1,28,31,29,-1,31,28,8,-1,31,32,29,-1,31,8,10,-1,31,12,32,-1,10,12,31,-1,3,33,2,-1,17,34,18,-1,17,35,34,-1,35,36,34,-1,33,37,2,-1,38,34,36,-1,37,5,2,-1,23,38,36,-1,23,25,38,-1,39,40,41,-1,41,40,42,-1,41,42,43,-1,39,41,44,-1,45,39,44,-1,46,41,43,-1,41,46,44,-1,46,43,47,-1,48,46,47,-1,44,46,49,-1,48,49,46,-1,44,49,45,-1,16,49,48,-1,16,45,49,-1,42,50,43,-1,40,50,42,-1,51,50,40,-1,50,52,43,-1,50,51,52,-1,47,43,52,-1,51,26,52,-1,26,47,52,-1]),
                                                  coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,0,2,-1,5,6,2,-1,6,7,2,-1,7,4,2,-1,8,9,10,-1,10,9,11,-1,10,11,0,-1,11,1,0,-1,11,3,1,-1,12,11,9,-1,13,11,12,-1,13,3,11,-1,14,6,5,-1,15,14,5,-1,14,15,16,-1,14,17,6,-1,14,16,17,-1,17,7,6,-1,16,18,17,-1,18,8,17,-1,17,19,7,-1,19,17,8,-1,19,4,7,-1,19,8,10,-1,19,0,4,-1,10,0,19,-1,3,20,2,-1,13,20,3,-1,13,21,20,-1,21,22,20,-1,20,23,2,-1,23,20,22,-1,23,5,2,-1,15,23,22,-1,15,5,23,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,24,26,29,-1,30,24,29,-1,31,26,28,-1,26,31,29,-1,31,28,22,-1,21,31,22,-1,29,31,32,-1,21,32,31,-1,29,32,30,-1,13,32,21,-1,13,30,32,-1,27,33,28,-1,25,33,27,-1,34,33,25,-1,33,35,28,-1,33,34,35,-1,22,28,35,-1,34,15,35,-1,15,22,35,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0.350489,0.823646,0.278995,0.684169,0.513265,0.625861,0.284043,0.51605,0.501329,0.897954,0.723249,0.521317,0.745636,0.691561,0.654371,0.828459,0.493811,0.291576,0.6849,0.297254,0.701303,0.431193,0.812681,0.443959,0.646283,0.514332,0.727865,0.519044,0.710327,0.473214,0.786576,0.31163,0.75754,0.255933,0.251618,0.285196,0.297704,0.465936,0.191256,0.396348,0.193928,0.448908,0.260065,0.519044,0.290996,0.473214,0.753115,0.285196,0.813477,0.397606,0.707028,0.465936,0.243783,0.255933,0.201044,0.31163,0.286626,0.431193,0.341646,0.514332,0.302723,0.297254,0.493965,0.427314,0.493965,0.513525,0.395373,0.449853,0.38519,0.481938,0.440817,0.356118,0.563916,0.356118,0.634861,0.453647,0.619543,0.481938,0.550277,0.292852,0.451046,0.292852,0.539318,0.361339,0.45335,0.35936,0.44126,0.367854,0.694759,0.317998,0.718106,0.245182,0.5514,0.369748,0.437607,0.341194,0.563716,0.341194,0.702494,0.327919,0.306564,0.317998,0.28291,0.245182,0.303544,0.325478])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.383155,1.88086,-0.454316,-0.491434,1.85775,-0.2675,-0.180989,1.9377,-0.188969,-0.459268,1.83976,-0.0682143,-0.18099,1.89189,-0.527638,0.0972902,1.83976,-0.0682165,0.129455,1.85775,-0.267503,0.0211747,1.88086,-0.454318,-0.180991,1.47094,-0.690351,-0.434613,1.4645,-0.590399,-0.456181,1.74587,-0.578209,-0.604007,1.72776,-0.332134,-0.569562,1.44821,-0.337304,-0.521931,1.43236,-0.0727347,0.242028,1.72776,-0.315522,0.159954,1.43236,-0.0727374,0.207587,1.44821,-0.337307,0.0942002,1.74587,-0.578212,0.0726322,1.46451,-0.590401,-0.180991,1.75552,-0.677208,-0.340314,1.86335,0.0051221,-0.264677,1.56969,0.0607477,-0.0972995,1.56969,0.0607471,-0.0216633,1.86335,0.00512084,-0.24684,1.50043,-0.0652165,-0.115137,1.50043,-0.065217,-0.232294,1.55317,0.378541,-0.118193,1.5494,0.378848,-0.102147,1.56643,0.372543,-0.438603,1.47363,0.367575,-0.469795,1.38488,-0.0993756,-0.248329,1.56999,0.372539,-0.448869,1.49319,0.362144,0.0766288,1.47363,0.367572,0.107818,1.38488,-0.0993779,0.0806374,1.48861,0.362142])}))}))})])})])}),

                                    new Transform({
                                      DEF : new SFString("oberkiefer"),
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
                                              creaseAngle : new SFFloat(1.52734),
                                              coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.514476,1.21943,-0.101513,-0.312692,1.19088,0.0653795,-0.295048,1.36016,0.0451552,-0.469795,1.38489,-0.0993757,-0.0492849,1.19088,0.0653795,-0.0669291,1.36016,0.0451552,0.152499,1.21943,-0.101513,0.107818,1.38489,-0.0993756,-0.24684,1.50044,-0.0652193,-0.115137,1.50044,-0.0652193,-0.312692,1.19088,0.0653795,-0.514476,1.21943,-0.101513,0.152499,1.21943,-0.101513,-0.0492849,1.19088,0.0653795,-0.560215,1.26317,-0.357204,0.198238,1.26317,-0.357204])}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("unterkiefer"),
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
                                          coordIndex : new MFInt32([0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,3,2,18,19,-1,2,5,20,18,-1,5,7,21,20,-1,7,9,22,21,-1,9,11,23,22,-1,11,13,24,23,-1,13,15,25,24,-1,15,17,26,25,-1,17,3,19,26,-1,1,0,27,-1,0,16,27,-1,4,1,27,-1,16,14,27,-1,6,4,27,-1,8,6,27,-1,10,8,27,-1,12,10,27,-1,14,12,27,-1,28,29,30,31,-1,32,28,31,33,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.295853,1.092,-0.457527,-0.356972,1.07415,-0.353183,-0.485799,1.15531,-0.362344,-0.379938,1.18623,-0.543072,-0.335747,1.05385,-0.234525,-0.449036,1.12015,-0.156824,-0.242108,1.0406,-0.157078,-0.28685,1.09721,-0.0226825,-0.119869,1.0406,-0.157078,-0.0751272,1.09721,-0.0226825,-0.0262303,1.05385,-0.234525,0.0870591,1.12015,-0.156824,-0.00500487,1.07415,-0.353183,0.123822,1.15531,-0.362344,-0.0661242,1.092,-0.457527,0.0179611,1.18623,-0.543072,-0.180989,1.09905,-0.498734,-0.180989,1.19844,-0.614446,-0.532952,1.26236,-0.352466,-0.410717,1.29806,-0.561155,-0.490501,1.22176,-0.115155,-0.303223,1.19526,0.0397384,-0.0587538,1.19526,0.0397384,0.128524,1.22176,-0.115155,0.170975,1.26236,-0.352466,0.0487402,1.29806,-0.561155,-0.180989,1.31216,-0.643569,-0.180989,1.04061,-0.327436,-0.490501,1.22176,-0.115155,-0.303223,1.19526,0.0397384,-0.0587538,1.19526,0.0397384,0.128524,1.22176,-0.115155,-0.532952,1.26236,-0.352466,0.170975,1.26236,-0.352466])}))}))})])})])})])}),

                        new Transform({
                          DEF : new SFString("vSens"),
                          children : new MFNode([
                            new VisibilitySensor({
                              DEF : new SFString("_7"),
                              size : new SFVec3f([1.27817,2.09218,1.36408]),
                              center : new SFVec3f([-0.139086,1.05999,-0.182041])})])}),

                        new Transform({
                          DEF : new SFString("Shadow"),
                          center : new SFVec3f([-0.182549,0.0190474,0.348487]),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Group({
                                  USE : new SFString("hupf")}),

                                new PositionInterpolator({
                                  DEF : new SFString("ShadowTranslationInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.600001,0.700001,0.800001,0.900001,1]),
                                  keyValue : new MFVec3f([0,0,0,1.49012e-8,1.86265e-9,0.0988316,0,0,0,1.49012e-8,1.86265e-9,0.0988316,0,0,0,1.49012e-8,1.86265e-9,0.0988316,0,0,0,1.49012e-8,1.86265e-9,0.30715,0,0,0,1.49012e-8,1.86265e-9,0.0988316,0,0,0])}),

                                new PositionInterpolator({
                                  DEF : new SFString("ShadowScaleFactorInterp"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.600001,0.700001,0.800001,0.900001,1]),
                                  keyValue : new MFVec3f([1,1,1,0.946498,0.946498,0.946498,1,1,1,0.946498,0.946498,0.946498,1,1,1,0.946498,0.946498,0.946498,1,1,1,0.946498,0.946498,1.10298,1,1,1,0.946498,0.946498,0.946498,1,1,1])})])}),

                            new Transform({
                              translation : new SFVec3f([-0.182549,0.0190474,0.348487]),
                              rotation : new SFRotation([1,-3.58126e-8,2.90268e-7,1.5708]),
                              scale : new SFVec3f([1.15094,1.15094,1.15094]),
                              scaleOrientation : new SFRotation([0.701186,-0.701186,-0.129141,1.30887]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["sh1.png"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      ccw : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5861,0,0.5,-0.5861,0,0.5,0.5861,0,-0.5,0.5861,0])}))}))})])})])})])}),

                    new Transform({
                      DEF : new SFString("off")})])})])}),

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
              toNode : new SFString("elsTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("CapTranslationInterp"),
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
              toNode : new SFString("beineTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("FussLRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("FussRRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("ArmRRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmR"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("ArmLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ArmL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("FussLRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("FussL"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("FussRRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("FussR"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("beineTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("beine"),
              toField : new SFString("set_translation")}),

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
              toNode : new SFString("HeadRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("HeadORotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("CapTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cap"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("HeadORotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("HeadO"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("HeadRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Head"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("elsTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("els"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ShadowTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ShadowScaleFactorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("ShadowTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shadow"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("ShadowScaleFactorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shadow"),
              toField : new SFString("set_scale")})])}))});
console.log(X3D0.toXMLNode());