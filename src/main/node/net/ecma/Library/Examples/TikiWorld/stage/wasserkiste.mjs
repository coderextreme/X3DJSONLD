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
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
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
var ProximitySensor = require('./x3d.mjs');
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
              content : new SFString("Fri, 13 Nov 2015 10:12:49 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 13 Nov 2015 10:12:49 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new LOD({
              range : new MFFloat([4,70]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("kisteAnim"),
                  translation : new SFVec3f([0,0.997337,0]),
                  scale : new SFVec3f([0.999995,0.999989,0.999994]),
                  scaleOrientation : new SFRotation([0.0234423,-0.58967,-0.807304,0.129457]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("kistenwackel"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time"),
                              cycleInterval : new SFTime(4),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("kisteTranslationInterp"),
                          key : new MFFloat([0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1]),
                          keyValue : new MFVec3f([0,0.997337,0,0,0.630868,0,0,0.264399,0,0,0.0397889,0,-0.000238661,-0.039851,0.0000431382,-0.000715984,-0.045923,0.000129415,-0.00107398,-0.0121751,0.000194122,-0.000954645,0.0276448,0.000172553,0,0.0397889,0,0.00426809,0.0133565,-0.00107543,0.0118596,-0.0313111,-0.00305554,0.0186843,-0.0746269,-0.00474508,0.0206523,-0.0970042,-0.0049488,0.0136733,-0.0788561,-0.00247146,-0.0234373,0.08041,0.00761828,-0.0778261,0.315975,0.022942,-0.115342,0.444246,0.0379466,-0.10559,0.205764,0.0565961,-0.0792289,-0.0083617,0.0657472,-0.0701991,0.0494958,0.0618534,-0.0609667,0.133751,0.0562805,-0.0517,0.238064,0.049435,-0.0425672,0.356095,0.0417229,-0.0337363,0.481504,0.0335504,-0.0253758,0.607953,0.0253238,-0.0176537,0.7291,0.0174493,-0.0107382,0.838606,0.010333,-0.00479759,0.930131,0.00438117,0,0.997337,0,0.00329477,1.03916,-0.00273412,0.00504511,1.06138,-0.00418663,0.00555992,1.06791,-0.00461384,0.00514808,1.06268,-0.00427208,0.00411847,1.04962,-0.00341766,0.00277997,1.03262,-0.00230693,0.00144147,1.01563,-0.00119619,0.000411852,1.00256,-0.00034177,0,0.997337,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("kisteRotationInterp"),
                          key : new MFFloat([0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1]),
                          keyValue : new MFRotation([0,0,1,0,0.0226815,0.565605,-0.824365,0.0488928,0.0244738,0.578268,-0.81548,0.113574,0.0353393,0.65288,-0.756637,0.142832,0.0562912,0.776626,-0.627441,0.124671,0.0989135,0.96478,-0.243753,0.0962019,0.125794,0.90597,0.404221,0.0959015,0.113435,0.677287,0.726922,0.125097,0.10384,0.619815,0.777848,0.148611,0.106036,0.755426,0.646597,0.156861,0.105279,0.931101,0.349238,0.171857,0.0911407,0.994997,0.0409265,0.203508,0.071203,0.98526,-0.155538,0.235293,0.0475507,0.969881,-0.238893,0.241297,-0.0836639,0.979703,-0.182158,0.162999,-0.685793,0.537125,0.491106,0.0670668,-0.482976,-0.559639,0.673453,0.121116,-0.0299324,-0.840106,0.541596,0.190268,0.227273,-0.870925,0.435703,0.218472,0.242113,-0.871374,0.426718,0.210072,0.252606,-0.871534,0.42026,0.194121,0.260009,-0.871567,0.415651,0.172305,0.265002,-0.871552,0.412518,0.146336,0.267898,-0.871529,0.410691,0.117933,0.268702,-0.871521,0.410183,0.0888262,0.267054,-0.871537,0.411224,0.0607497,0.261966,-0.871565,0.414425,0.0354269,0.251001,-0.871518,0.421254,0.0145996,0,0,1,0,-0.227273,0.870925,-0.435703,0.00959321,-0.227273,0.870925,-0.435703,0.014681,-0.227273,0.870925,-0.435703,0.0161798,-0.227273,0.870925,-0.435703,0.0149864,-0.227273,0.870925,-0.435703,0.0119803,-0.227273,0.870925,-0.435703,0.0080825,-0.227273,0.870925,-0.435703,0.00420035,-0.227273,0.870925,-0.435703,0.00119604,0,0,1,0])})])}),

                    new Transform({
                      DEF : new SFString("kisteShape"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.36023),
                                  diffuseColor : new SFColor([0.627659,0.524538,0.321273]),
                                  specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                  shininess : new SFFloat(0.078125)})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["bretter_swm.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-8.5628e-7,2.57056,-6.50935e-8]),
                      scale : new SFVec3f([0.999995,2.0897,0.999994]),
                      scaleOrientation : new SFRotation([-1.3971e-7,-1,0.00000595333,0.110657]),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("_2"),
                          size : new SFVec3f([2,2,2])})])})])}),

                new Transform({
                  DEF : new SFString("kiste"),
                  translation : new SFVec3f([0,0.997337,0]),
                  scale : new SFVec3f([0.999995,0.99999,0.999994]),
                  scaleOrientation : new SFRotation([0.0503735,-0.457369,-0.887849,0.113109]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.36023),
                              diffuseColor : new SFColor([0.627659,0.524538,0.321273]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,0.997337,0]),
                  scale : new SFVec3f([0.999995,0.99999,0.999994]),
                  scaleOrientation : new SFRotation([0.054827,-0.415386,-0.907991,0.111561]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.36023),
                              diffuseColor : new SFColor([0.627659,0.524538,0.321273]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["bretter_swl.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("kisteTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("kisteRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("kisteTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("kisteAnim"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("kisteRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("kisteAnim"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
