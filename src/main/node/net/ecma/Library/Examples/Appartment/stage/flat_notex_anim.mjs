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
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
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
              content : new SFString("Wed, 26 Aug 2015 12:17:05 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 26 Aug 2015 12:17:05 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("wohnung"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("floor_1"),
                  children : new MFNode([
                    new Collision({
                      enabled : new SFBool(false),
                      proxy : new SFNode(
                        new Transform({
                          DEF : new SFString("text"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("txt-flur"),
                              translation : new SFVec3f([-2.30927,-1.38851,-0.672463]),
                              rotation : new SFRotation([-1,0,0,1.5708]),
                              scale : new SFVec3f([0.0338453,0.0338453,0.0338453]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString([", ","FLUR5,2 qm"]),
                                      length : new MFFloat([0]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          family : new MFString(["SANS"]),
                                          size : new SFFloat(24)}))}))})])}),

                            new Transform({
                              DEF : new SFString("txt-bad"),
                              translation : new SFVec3f([-7.23306,-1.38851,-0.672463]),
                              rotation : new SFRotation([-1,0,0,1.5708]),
                              scale : new SFVec3f([0.0338453,0.0338453,0.0338453]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString([", ","BAD7 qm"]),
                                      length : new MFFloat([0]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          family : new MFString(["SANS"]),
                                          size : new SFFloat(24)}))}))})])}),

                            new Transform({
                              DEF : new SFString("txt-schlafen"),
                              translation : new SFVec3f([-5.03582,-1.38851,3.32777]),
                              rotation : new SFRotation([-1,0,0,1.5708]),
                              scale : new SFVec3f([0.0338453,0.0338453,0.0338453]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString([", ","SCHLAFEN14 qm"]),
                                      length : new MFFloat([0]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          family : new MFString(["SANS"]),
                                          size : new SFFloat(24),
                                          justify : new MFString(["MIDDLE"])}))}))})])}),

                            new Transform({
                              DEF : new SFString("txt-wohnen"),
                              translation : new SFVec3f([0.830791,-1.38851,3.17479]),
                              rotation : new SFRotation([-1,0,0,1.5708]),
                              scale : new SFVec3f([0.0338453,0.0338453,0.0338453]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString([", ","WOHNEN19,5 qm"]),
                                      length : new MFFloat([0]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          family : new MFString(["SANS"]),
                                          size : new SFFloat(24)}))}))})])})])})),
                      proxy : new SFNode(
                        new Transform({
                          DEF : new SFString("floor"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-1.32382,-2.95784,-0.616061]),
                              rotation : new SFRotation([0,1,0,3.14159]),
                              scale : new SFVec3f([2.2153,1.41953,1.76419]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.250001),
                                          diffuseColor : new SFColor([0.845242,0.805714,0.544078]),
                                          shininess : new SFFloat(0.078125)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-6.18752,-2.95784,-0.616061]),
                              rotation : new SFRotation([0,1,0,3.14159]),
                              scale : new SFVec3f([2.62836,1.41953,1.76419]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.250001),
                                          diffuseColor : new SFColor([0.434977,0.456711,0.845242]),
                                          shininess : new SFFloat(0.078125)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-4.79598,-2.95784,3.3361]),
                              rotation : new SFRotation([0,1,0,3.14159]),
                              scale : new SFVec3f([4.18476,1.41953,2.17788]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.250001),
                                          diffuseColor : new SFColor([0.607151,0.845242,0.621794]),
                                          shininess : new SFFloat(0.078125)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([2.43648,-2.95784,1.56487]),
                              rotation : new SFRotation([0,1,0,3.14159]),
                              scale : new SFVec3f([2.93924,1.41953,3.94911]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0.250001),
                                          diffuseColor : new SFColor([0.845242,0.402292,0.339054]),
                                          shininess : new SFFloat(0.078125)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,3,5,4,-1,6,2,4,5,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,1,-1,-1,1,1,1,1,-1,0.527074,1,1,0.474142,1,-1,0.527074,1,0.113149,1,1,0.113149])}))}))})])})])}))})])}),

                new Transform({
                  DEF : new SFString("walls_1"),
                  children : new MFNode([
                    new Collision({
                      proxy : new SFNode(
                        new Transform({
                          DEF : new SFString("all_wall"),
                          center : new SFVec3f([-1.73584,0.294882,1.59514]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("door1_1"),
                              translation : new SFVec3f([2.07972,-0.00410406,2.66504]),
                              rotation : new SFRotation([-0.000506469,1,0.000731444,4.71238]),
                              scale : new SFVec3f([1,0.999999,1]),
                              scaleOrientation : new SFRotation([0.000900465,1,-0.000253043,0.484042]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("_1"),
                                  translation : new SFVec3f([-0.00000524521,8.9407e-8,4.76837e-7]),
                                  scale : new SFVec3f([0.999996,0.999999,0.999996]),
                                  center : new SFVec3f([-1.7764,-0.14077,1.18667]),
                                  children : new MFNode([
                                    new Group({
                                      children : new MFNode([
                                        new Group({
                                          DEF : new SFString("door_1"),
                                          children : new MFNode([
                                            new TimeSensor({
                                              DEF : new SFString("Time_1"),
                                              cycleInterval : new SFTime(10),
                                              stopTime : new SFTime(1)})])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("UnnamedTransformRotationInterp_1"),
                                          key : new MFFloat([0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1]),
                                          keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("UnnamedShapeRotationInterp_1"),
                                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]),
                                          keyValue : new MFRotation([0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344])})])}),

                                    new TouchSensor({
                                      DEF : new SFString("Touch_1")}),

                                    new Transform({
                                      translation : new SFVec3f([-2.92858,-0.102524,1.18925]),
                                      rotation : new SFRotation([-1,-0.00000127148,-0.00000127148,1.5708]),
                                      scale : new SFVec3f([1,0.710133,4.03724]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_2")}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.107213,0.107213,0.107213])}))})])}),

                                    new Transform({
                                      DEF : new SFString("_3"),
                                      translation : new SFVec3f([-2.90656,0.031126,1.143]),
                                      rotation : new SFRotation([0.587158,0.572384,-0.572383,4.20344]),
                                      scale : new SFVec3f([0.439526,1.10631,2.58222]),
                                      center : new SFVec3f([-0.00176429,-9.15137e-8,0.0436697]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_2")}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.107213,0.107213,0.107213])}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-1.6882,-0.144074,1.18658]),
                                      rotation : new SFRotation([0,1,0,3.14159]),
                                      scale : new SFVec3f([7.20902,15.5332,0.230572]),
                                      center : new SFVec3f([-0.0896799,0.000412353,5.7768e-7]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.691489),
                                                  diffuseColor : new SFColor([0.8,0.677123,0.512228])}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.178747,0.178746,0.178745])}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([-3.11431,-0.0888075,1.10913]),
                                  rotation : new SFRotation([0,1,0,3.14159]),
                                  scale : new SFVec3f([0.631108,16.2186,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_4"),
                                              ambientIntensity : new SFFloat(0.376344),
                                              diffuseColor : new SFColor([0.989362,0.989362,0.989362])}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-2.43024,1.30279,1.10765]),
                                  rotation : new SFRotation([0.707107,-0.707107,-0.000434577,3.14247]),
                                  scale : new SFVec3f([0.631108,7.89331,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_4")}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-1.70971,-0.0888075,1.10913]),
                                  rotation : new SFRotation([0,1,0,3.14159]),
                                  scale : new SFVec3f([0.631108,16.2186,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_4")}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])})])}),

                            new Transform({
                              DEF : new SFString("door1"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("_5"),
                                  translation : new SFVec3f([-0.00000524521,8.9407e-8,4.76837e-7]),
                                  scale : new SFVec3f([0.999996,0.999999,0.999996]),
                                  center : new SFVec3f([-1.7764,-0.14077,1.18667]),
                                  children : new MFNode([
                                    new Group({
                                      children : new MFNode([
                                        new Group({
                                          DEF : new SFString("door"),
                                          children : new MFNode([
                                            new TimeSensor({
                                              DEF : new SFString("Time_2"),
                                              cycleInterval : new SFTime(10),
                                              stopTime : new SFTime(1)})])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("UnnamedTransformRotationInterp_2"),
                                          key : new MFFloat([0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1]),
                                          keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("UnnamedShapeRotationInterp_2"),
                                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1]),
                                          keyValue : new MFRotation([0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344])})])}),

                                    new TouchSensor({
                                      DEF : new SFString("Touch_2")}),

                                    new Transform({
                                      translation : new SFVec3f([-2.92858,-0.102524,1.18925]),
                                      rotation : new SFRotation([-1,-0.00000127148,-0.00000127148,1.5708]),
                                      scale : new SFVec3f([1,0.710133,4.03724]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_6"),
                                                  ambientIntensity : new SFFloat(0.16172),
                                                  diffuseColor : new SFColor([0.989362,0.989362,0.989362])}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.107213,0.107213,0.107213])}))})])}),

                                    new Transform({
                                      DEF : new SFString("_7"),
                                      translation : new SFVec3f([-2.90656,0.031126,1.143]),
                                      rotation : new SFRotation([0.587158,0.572384,-0.572383,4.20344]),
                                      scale : new SFVec3f([0.439526,1.10631,2.58222]),
                                      center : new SFVec3f([-0.00176429,-9.15137e-8,0.0436697]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_6")}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.107213,0.107213,0.107213])}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-1.6882,-0.144074,1.18658]),
                                      rotation : new SFRotation([0,1,0,3.14159]),
                                      scale : new SFVec3f([7.20902,15.5332,0.230572]),
                                      center : new SFVec3f([-0.0896799,0.000412353,5.7768e-7]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.691489),
                                                  diffuseColor : new SFColor([0.8,0.677123,0.512228])}))})),
                                          geometry : new SFNode(
                                            new Box({
                                              size : new SFVec3f([0.178747,0.178746,0.178745])}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([-3.11431,-0.0888075,1.10913]),
                                  rotation : new SFRotation([0,1,0,3.14159]),
                                  scale : new SFVec3f([0.631108,16.2186,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_8"),
                                              ambientIntensity : new SFFloat(0.376344),
                                              diffuseColor : new SFColor([0.989362,0.989362,0.989362])}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-2.43024,1.30279,1.10765]),
                                  rotation : new SFRotation([0.707107,-0.707107,-0.000434577,3.14247]),
                                  scale : new SFVec3f([0.631108,7.89331,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_8")}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-1.70971,-0.0888075,1.10913]),
                                  rotation : new SFRotation([0,1,0,3.14159]),
                                  scale : new SFVec3f([0.631108,16.2186,1.23267]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_8")}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.178747,0.178746,0.178745])}))})])})])}),

                            new Transform({
                              DEF : new SFString("walls"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.0280126,-1.53561,1.35645]),
                                  rotation : new SFRotation([-1,0,0,1.56956]),
                                  scale : new SFVec3f([9.35746,9.35746,13.4537]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_9"),
                                              ambientIntensity : new SFFloat(0.790323),
                                              diffuseColor : new SFColor([0.659574,0.659574,0.659574]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.0280126,-1.53561,1.35645]),
                                  rotation : new SFRotation([-1,0,0,1.56956]),
                                  scale : new SFVec3f([9.35746,9.35746,13.4537]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_9")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          colorPerVertex : new SFBool(false),
                                          colorIndex : new MFInt32([0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0]),
                                          coordIndex : new MFInt32([19,22,8,7,-1,24,23,9,10,-1,26,25,11,12,-1,27,28,14,13,-1,29,30,16,15,-1,32,31,17,18,-1,50,51,52,53,-1,53,52,54,55,-1,56,50,53,55,-1,55,54,57,56,-1,51,57,54,52,-1,56,57,51,50,-1,60,84,59,61,62,-1,65,66,67,68,-1,68,67,69,70,-1,71,65,68,70,-1,70,69,72,71,-1,66,72,69,67,-1,71,72,66,65,-1,76,75,78,77,-1,73,78,75,74,-1,32,30,29,31,-1,15,16,18,17,-1,31,37,2,17,-1,29,81,37,31,-1,6,5,33,34,-1,21,34,33,20,-1,24,22,19,23,-1,7,8,10,9,-1,3,4,21,20,-1,28,27,25,26,-1,13,14,12,11,-1,35,36,0,1,-1,9,23,35,1,-1,23,19,35,-1,33,5,2,37,-1,20,33,37,-1,19,20,37,35,-1,9,1,3,7,-1,3,20,19,7,-1,79,28,26,36,-1,26,12,0,36,-1,79,80,14,28,-1,12,14,80,0,-1,83,58,59,84,-1,85,45,47,86,-1,84,60,46,85,-1,86,83,84,85,-1,49,48,88,87,-1,82,91,90,-1,91,87,90,-1,87,89,90,-1,82,90,46,60,62,63,-1,80,79,63,64,-1,15,17,2,48,-1,81,29,15,48,-1,95,93,92,94,-1,96,42,43,97,-1,98,73,74,99,-1,99,96,97,98,-1,99,74,75,76,-1,99,76,41,96,-1,40,42,96,41,-1,89,87,38,-1,87,88,44,41,-1,38,87,41,-1,45,85,46,90,89,38,39,-1,38,41,76,77,-1,97,43,39,38,-1,77,98,97,38,-1,77,78,73,98,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.659574,0.659574,0.659574,0,0.0187199,0.0481283])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.918773,0.379005,0,0.55397,0.379005,0,0.55397,-0.422948,0,0.55397,-0.131194,0,0.597169,-0.131194,0,0.55397,-0.289109,0,0.597169,-0.289109,0,0.55397,0.106842,0.0797785,0.597169,0.106842,0.0797785,0.55397,0.265779,0.0797785,0.597169,0.265779,0.0797785,-0.962286,0.212139,0.0797785,-0.918773,0.212139,0.0797785,-0.962286,0.0568306,0.0797785,-0.918773,0.0568306,0.0797785,0.0640951,-0.422948,0.0797785,0.0641975,-0.456811,0.0797785,0.217765,-0.422948,0.0797785,0.217866,-0.456346,0.0797785,0.55397,0.106842,0.211901,0.55397,-0.131194,0.211901,0.597169,-0.131194,0.211901,0.597169,0.106842,0.211901,0.55397,0.265779,0.211901,0.597169,0.265779,0.211901,-0.962286,0.212139,0.211901,-0.918773,0.212139,0.211901,-0.962286,0.0568306,0.211901,-0.918773,0.0568306,0.211901,0.0640951,-0.422948,0.211901,0.0641975,-0.456811,0.211901,0.217765,-0.422948,0.211901,0.217866,-0.456346,0.211901,0.55397,-0.289109,0.211901,0.597169,-0.289109,0.211901,0.55397,0.379005,0.27253,-0.918773,0.379005,0.27253,0.55397,-0.422948,0.27253,0.0999169,0.0370409,0.27253,0.0999169,0.0370413,2.29598e-7,0.114918,0.0164737,2.23517e-7,0.114918,0.0164733,0.27253,0.114918,0.0451801,2.83122e-7,0.0999169,0.0451801,2.83122e-7,0.114918,0.0164736,1.63913e-7,-0.18324,0.0370424,1.67359e-7,-0.156861,0.0370419,0.27253,-0.18392,0.0164746,1.63913e-7,-0.0490293,-0.422947,-2.68221e-7,-0.0490293,-0.422948,0.27253,-0.385034,0.0193376,0.270995,-0.385034,0.019338,2.23517e-7,-0.364466,0.019338,2.23517e-7,-0.364466,0.0193376,0.270995,-0.364466,0.0621717,2.83122e-7,-0.364466,0.0621713,0.270995,-0.385034,0.0621713,0.270995,-0.385034,0.0621717,2.83122e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0370417,1.93715e-7,-0.326241,0.0370413,0.27253,-0.918773,0.0370423,2.23517e-7,-0.918773,0.037042,0.27253,-0.918773,0.0164741,0.27253,-0.918773,0.0164745,1.93715e-7,-0.385034,0.174854,0.270995,-0.385034,0.174854,4.02331e-7,-0.364466,0.174854,4.02331e-7,-0.364466,0.174854,0.270995,-0.364466,0.383761,6.4075e-7,-0.364466,0.383761,0.270996,-0.385034,0.383761,0.270996,-0.385034,0.383761,6.4075e-7,0.0999169,0.196089,3.72529e-7,0.114918,0.196089,3.42727e-7,0.114918,0.383761,5.51343e-7,0.114918,0.383761,0.27253,0.0999169,0.383761,0.27253,0.0999169,0.383761,5.81145e-7,-0.918773,0.0300454,0.27253,-0.918773,0.0300454,0,-0.0490293,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.326241,0.0164736,0.215145,-0.326241,0.0370414,0.215145,-0.18324,0.0370421,0.215145,-0.18392,0.0164743,0.215145,-0.0490292,0.0164738,0.27253,-0.0490292,0.0164745,2.10643e-7,-0.0640303,0.0370415,0.27253,-0.0743143,0.0370416,0.27253,-0.0593131,0.0164738,0.27253,-0.0695971,-0.422948,0.27253,-0.0695971,0.0279736,0.27253,-0.0490293,-0.422948,0.27253,-0.0490292,0.0279736,0.27253,0.114918,0.0451798,0.210192,0.0999169,0.0451798,0.210192,0.0999169,0.196089,0.208979,0.114918,0.196089,0.208979])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.0280126,-1.53561,1.35645]),
                                  rotation : new SFRotation([-1,0,0,1.56956]),
                                  scale : new SFVec3f([9.35746,9.35746,13.4537]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_9")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          solid : new SFBool(false),
                                          colorPerVertex : new SFBool(false),
                                          colorIndex : new MFInt32([0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0]),
                                          coordIndex : new MFInt32([0,1,2,3,-1,2,4,3,-1,5,3,4,6,-1,5,6,7,-1,7,2,1,8,-1,5,7,8,9,-1,10,9,0,11,-1,12,0,3,13,14,-1,11,0,12,15,-1,11,15,16,17,-1,10,11,18,19,-1,20,18,11,-1,20,11,21,-1,11,17,21,-1,20,21,22,23,-1,23,22,10,19,-1,24,25,26,17,-1,17,26,21,-1,27,13,3,17,16,-1,8,28,9,-1,9,28,29,0,-1,0,29,1,-1,30,3,5,31,-1,30,32,17,3,-1,32,33,24,17,-1,5,24,33,31,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.659574,0.659574,0.659574,0,0.0187199,0.0481283])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.962286,0.409388,0.27253,-0.962286,0.0568306,0.211901,-0.962286,-0.104811,0.211901,-0.962174,-0.459919,0.27253,-0.962286,-0.342562,0.211901,-0.962174,-0.459919,0,-0.962286,-0.342562,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,0.0568306,0.0797785,-0.962286,0.409388,0,0.597169,0.409388,0,0.597169,0.409388,0.27253,-0.918773,0.379005,0.27253,-0.918773,-0.422948,0.27253,-0.918773,0.0300454,0.27253,0.55397,0.379005,0.27253,0.55397,-0.422948,0.27253,0.597267,-0.455197,0.27253,0.597169,0.265779,0.211901,0.597169,0.265779,0.0797785,0.597169,0.106842,0.211901,0.597169,-0.131194,0.211901,0.597169,-0.131194,0,0.597169,0.106842,0.0797785,0.597267,-0.455197,0,0.597169,-0.289109,0,0.597169,-0.289109,0.211901,-0.0597836,-0.422948,0.27253,-0.962286,0.212139,0.0797785,-0.962286,0.212139,0.211901,0.0641975,-0.456811,0.211901,0.0641975,-0.456811,0.0797785,0.217866,-0.456346,0.211901,0.217866,-0.456346,0.0797785])}))}))})])})])})])}))})])}),

                new Transform({
                  DEF : new SFString("ebene"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.790323),
                              diffuseColor : new SFColor([0.659574,0.659574,0.659574]),
                              shininess : new SFFloat(0)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-8.99842,-1.54875,-2.45919,-8.99842,-1.54875,5.57903,5.55036,-1.54875,5.57903,5.55036,-1.54875,-2.45919])}))}))})])}),

                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0.790323),
                                  diffuseColor : new SFColor([0.659574,0.659574,0.659574]),
                                  shininess : new SFFloat(0)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([3,2,1,0,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-9.00445,2.14621,5.56747,5.49389,2.14621,5.56747,5.49389,2.14621,-2.42974,-9.00445,2.14621,-2.42974])}))}))})])}))})])}),

            new DirectionalLight({
              DEF : new SFString("Light1"),
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([0.572447,-0.644191,-0.50727])}),

            new Transform({
              DEF : new SFString("texture-sleep_1"),
              children : new MFNode([
                new Switch({
                  DEF : new SFString("_10"),
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Transform({}),

                    new Transform({
                      DEF : new SFString("texture-sleep"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("room_no-collide"),
                          children : new MFNode([
                            new Collision({
                              enabled : new SFBool(false),
                              proxy : new SFNode(
                                new Transform({
                                  DEF : new SFString("moebel"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("schrank"),
                                      translation : new SFVec3f([-1.26166,-0.218976,3.35488]),
                                      rotation : new SFRotation([0.000621337,-1,-0.000618129,1.56562]),
                                      scale : new SFVec3f([1.84464,1.3191,0.425435]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_11"),
                                                  ambientIntensity : new SFFloat(0.691489),
                                                  diffuseColor : new SFColor([1,1,1]),
                                                  emissiveColor : new SFColor([0.180851,0.180851,0.180851])})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_12"),
                                                  url : new MFString(["schrank_dunkel128.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,26,27,14,6,8,28,29,-1,10,4,12,0,1,3,2,-1,5,24,25,7,-1,11,18,19,9,-1,16,17,20,21,-1,13,22,23,15,-1]),
                                              coordIndex : new MFInt32([4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,13,9,10,2,4,-1,11,8,12,1,7,5,3,-1,8,11,10,9,-1,11,3,2,10,-1,0,1,12,13,-1,12,8,9,13,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.485065,0.999081,0.485065,-0.000919342,1,1,1,0,0.5,1,0.0153094,0,0.737301,-0.00000224775,0.0153094,0.999837,0.867013,-0.00000224775,0.0153094,0.999837,0.75,1,0.0153094,0,0.25,1,0.0153094,0,0.607589,-0.00000224775,0.0153094,0.999837,0.0153094,0.999837,0.0153094,0,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.477877,0.997553,0.477877,-0.00000224775,0.996724,-0.00000224775,0.996724,0.997553])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,0,-1,1,0,1,1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("nachtschrank1"),
                                      translation : new SFVec3f([-2.87892,-1.21038,4.95799]),
                                      rotation : new SFRotation([0.000614949,1,0.000618131,1.57596]),
                                      scale : new SFVec3f([3.29672,3.29673,3.53468]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_11")})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_12")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1]),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("nachtschrank2"),
                                      translation : new SFVec3f([-6.52379,-1.21041,4.97681]),
                                      rotation : new SFRotation([0.000614949,1,0.000618131,1.57596]),
                                      scale : new SFVec3f([3.29672,3.29673,3.53468]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_11")})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_12")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1]),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("kommode"),
                                      translation : new SFVec3f([-7.72612,-1.20631,1.66272]),
                                      rotation : new SFRotation([0.000618533,-1,-0.000618759,1.57078]),
                                      scale : new SFVec3f([3.29672,3.29673,8.10267]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_11")})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_12")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,11,2,-1,0,1,3,9,2,-1,4,5,12,13,-1,8,6,7,10,-1]),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,6,0,2,9,4,-1,1,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.440312,0.994282,0.440312,0.00105374,0.445231,-0.000790729,0.445231,0.992437,0.0145956,-0.000790729,1,0.5,0.0145956,0.992437,1,0.5,0.013069,-0.00208779,0.013069,0.99114])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0,0.1,0.1,0])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("bett"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("matratze"),
                                          translation : new SFVec3f([-4.68535,-1.04265,3.81501]),
                                          rotation : new SFRotation([4.16334e-16,1,0.00061813,3.14159]),
                                          scale : new SFVec3f([11.9506,1.48808,12.1488]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0),
                                                      diffuseColor : new SFColor([0.357752,0.457447,0.341974]),
                                                      emissiveColor : new SFColor([0.141437,0.180851,0.135199]),
                                                      shininess : new SFFloat(0)})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["plaid.png"])})),
                                                  textureTransform : new SFNode(
                                                    new TextureTransform({
                                                      scale : new SFVec2f([4,4])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  creaseAngle : new SFFloat(3.14159),
                                                  texCoordIndex : new MFInt32([2,3,4,5,-1,6,7,1,0,-1,0,1,3,2,-1,5,4,7,6,-1,0,2,5,6,-1]),
                                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0.0529627,0.947037,0,1,0.0529627,0.0529626,0,0,1,0,0.947037,0.0529626,0.947037,0.947037,1,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1,-0.0133314,0.1,-0.111847,-0.1,0.111847,0.1,-0.0133314,0.1,0.111847,-0.1,0.111847,0.1,-0.0133314,-0.1,0.111847,-0.1,-0.111847,-0.1,-0.0133314,-0.1,-0.111847,-0.1,-0.111847])}))}))})])}),

                                        new Transform({
                                          DEF : new SFString("bettkasten"),
                                          translation : new SFVec3f([-4.68535,-1.35494,3.81463]),
                                          rotation : new SFRotation([2.22045e-16,1,0.00061813,3.14159]),
                                          scale : new SFVec3f([14.7529,1.83703,14.9976]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("_11")})),
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_12")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  creaseAngle : new SFFloat(0.5),
                                                  texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0.525544,1.00043,0.525544,0.000431776,1,1,1,0])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1])}))}))})])})])})])})),
                              proxy : new SFNode(
                                new Transform({
                                  DEF : new SFString("accessoires"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("poster"),
                                      translation : new SFVec3f([-4.75627,0.3135,5.30164]),
                                      scale : new SFVec3f([1.5185,1.5185,1.51852]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["poster.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.746,-0.5,0,0.746,-0.5,0,0.746,0.5,0,-0.746,0.5,0])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("pflanze"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-7.47428,-1.37334,4.31764]),
                                          rotation : new SFRotation([0,1,0,1.5708]),
                                          scale : new SFVec3f([1.38524,1.38524,1.38524]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      ambientIntensity : new SFFloat(0.442353),
                                                      diffuseColor : new SFColor([0.361702,0,0.0373073])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  creaseAngle : new SFFloat(0.5),
                                                  coordIndex : new MFInt32([0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1,32,31,29,-1,32,29,27,-1,32,27,25,-1,32,25,23,-1,32,23,21,-1,32,21,19,-1,32,19,17,-1,32,17,15,-1,32,15,13,-1,32,13,11,-1,32,11,9,-1,32,9,7,-1,32,7,5,-1,32,5,3,-1,32,3,1,-1,32,1,31,-1,33,0,2,-1,33,2,4,-1,33,4,6,-1,33,6,8,-1,33,8,10,-1,33,10,12,-1,33,12,14,-1,33,14,16,-1,33,16,18,-1,33,18,20,-1,33,20,22,-1,33,22,24,-1,33,24,26,-1,33,26,28,-1,33,28,30,-1,33,30,0,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,-0.1,-0.1,-3.72529e-8,0.1,-0.130838,0.0382683,-0.1,-0.092388,0.0500695,0.1,-0.120879,0.0707107,-0.1,-0.0707107,0.0925166,0.1,-0.0925166,0.092388,-0.1,-0.0382683,0.120879,0.1,-0.0500695,0.1,-0.1,4.37114e-9,0.130838,0.1,2.23517e-8,0.092388,-0.1,0.0382684,0.120879,0.1,0.0500697,0.0707107,-0.1,0.0707107,0.0925166,0.1,0.0925166,0.0382683,-0.1,0.092388,0.0500695,0.1,0.120879,1.50996e-8,-0.1,0.1,-1.49012e-8,0.1,0.130838,-0.0382683,-0.1,0.092388,-0.0500696,0.1,0.120879,-0.0707107,-0.1,0.0707107,-0.0925166,0.1,0.0925166,-0.092388,-0.1,0.0382684,-0.120879,0.1,0.0500697,-0.1,-0.1,-1.19249e-9,-0.130838,0.1,2.98023e-8,-0.0923879,-0.1,-0.0382684,-0.120879,0.1,-0.0500697,-0.0707107,-0.1,-0.0707107,-0.0925166,0.1,-0.0925166,-0.0382683,-0.1,-0.092388,-0.0500696,0.1,-0.120879,-2.59947e-8,0.1,2.59947e-8,0,-0.1,0])}))}))})])}),

                                        new Transform({
                                          translation : new SFVec3f([-7.47388,-0.26519,4.31929]),
                                          rotation : new SFRotation([0,-1,0,0.421223]),
                                          scale : new SFVec3f([0.670034,1.99229,0.670032]),
                                          scaleOrientation : new SFRotation([0,-1,0,0.0185162]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      url : new MFString(["baum1.png"])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  solid : new SFBool(false),
                                                  colorIndex : new MFInt32([-1]),
                                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,5.36441e-7,-0.5,-0.5,-0.00000149012,-0.5,0.5,-0.00000149012,0.5,0.5,5.36441e-7,0.5,-0.5])}))}))})])})])})])})),
                              proxy : new SFNode(
                                new Transform({
                                  DEF : new SFString("raum"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("decke"),
                                      translation : new SFVec3f([-0.0280126,-1.53561,1.35645]),
                                      rotation : new SFRotation([-1,0,0,1.56956]),
                                      scale : new SFVec3f([9.35746,9.35746,13.4537]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(1),
                                                  diffuseColor : new SFColor([0.901179,0.969637,1]),
                                                  emissiveColor : new SFColor([0.38348,0.412612,0.425532])})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_13"),
                                                  url : new MFString(["speck.paper.png"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  DEF : new SFString("_14"),
                                                  scale : new SFVec2f([2.89501,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,0,0.511752,1,0.511752,1,0])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.918773,-0.422948,0.27253,-0.918773,0.0164741,0.27253,-0.0601114,0.0164738,0.27253,-0.0601114,-0.422948,0.27253])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("tapete"),
                                      translation : new SFVec3f([-0.0280126,-1.53561,1.35645]),
                                      rotation : new SFRotation([-1,0,0,1.56956]),
                                      scale : new SFVec3f([9.35746,9.35746,13.4537]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.980392),
                                                  diffuseColor : new SFColor([0.542553,0.542553,0.542553]),
                                                  shininess : new SFFloat(0.148936)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_13")})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  USE : new SFString("_14")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              texCoordIndex : new MFInt32([0,1,2,3,-1,28,27,26,5,-1,0,1,1,0,-1,5,26,29,6,-1,3,7,7,3,-1,1,0,0,1,-1,4,27,28,30,-1,29,4,30,6,-1,8,25,9,10,-1,15,16,17,18,-1,19,20,21,22,-1,22,15,18,-1,22,18,19,-1,11,12,23,24,-1,23,13,14,24,-1]),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.0432628,0.395189,0.0216314,0.395189,0.0216314,0.157438,0.0432628,0.157438,0.176379,0.293702,0.996431,0.987509,0.996193,0.00619312,0.0216314,0.909388,1.75058,0.99962,0.000984462,0.00331701,1.75058,0.00331701,1,0,1,1,0.0324233,1,0.0324228,0,1.51503,0.2131,1.51503,0.99962,1.75058,0.99962,1.75058,0.00331701,0.000984462,0.00331701,0.000984462,0.99962,1.2218,0.99962,1.2218,0.2131,0.516212,1,0.516211,0,0.000984462,0.99962,0.719415,0.769281,0.176494,0.769444,-0.00701949,0.987809,0.719299,0.293539,-0.00725818,0.00649359])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("fussboden"),
                                      translation : new SFVec3f([-4.79598,-2.95784,3.3361]),
                                      rotation : new SFRotation([0,1,0,3.14159]),
                                      scale : new SFVec3f([4.18476,1.41953,2.17788]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.557037),
                                                  diffuseColor : new SFColor([0.268975,0.287234,0.24213]),
                                                  emissiveColor : new SFColor([0.448291,0.478723,0.40355])})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["granite.2.png"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([2,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              coordIndex : new MFInt32([0,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])})])}))})])}),

                        new Transform({
                          DEF : new SFString("ausblick"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-11.1133,1.31898,2.05622]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([6.78219,6.78219,6.78219]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["env.png"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.7442,-0.5,0,0.7442,-0.5,0,0.7442,0.5,0,-0.7442,0.5,0])}))}))})])})])})])})])})])}),

            new Transform({
              DEF : new SFString("tex-but_1"),
              children : new MFNode([
                new Script({
                  DEF : new SFString("_switch"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_touchTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                  ]),vrmlscript:
, function set_touchTime(value, time)
{
	enabled = !enabled;
	whichChoice_changed = enabled;
})}),

                new TouchSensor({
                  DEF : new SFString("_15")}),

                new Transform({
                  DEF : new SFString("tex-but"),
                  translation : new SFVec3f([-3.53259,0.188037,1.18607]),
                  rotation : new SFRotation([1,-3.71792e-8,9.89425e-7,1.57203]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.25),
                              diffuseColor : new SFColor([0.904409,0,0.309851]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.2,0.2,0.2])}))})])})])}),

            new Transform({
              DEF : new SFString("masse-bad"),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-8.04131,0.404034,-2.72127]),
                      rotation : new SFRotation([1,0,0,1.57203]),
                      scale : new SFVec3f([0.559431,0.559428,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_16"),
                                  ambientIntensity : new SFFloat(0),
                                  diffuseColor : new SFColor([0,0,0]),
                                  emissiveColor : new SFColor([0,0.0958378,0.297872]),
                                  shininess : new SFFloat(0)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-6.59348,0.323395,-2.16191]),
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","3,07 m "]),
                              length : new MFFloat([0]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(14)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-4.21657,0.407074,-2.72127]),
                      rotation : new SFRotation([-4.69386e-7,0.70667,0.707544,3.14159]),
                      scale : new SFVec3f([0.559431,0.559427,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-5.80014,0.00851905,5.18821]),
                  rotation : new SFRotation([0,1,0,4.71239]),
                  scale : new SFVec3f([0.999999,1,0.999999]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-6.80953,0.404034,-2.72127]),
                      rotation : new SFRotation([1,0,0,1.57203]),
                      scale : new SFVec3f([0.559431,0.559428,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.033983,1,1,-0.033983,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-4.90441,0.407073,-2.72127]),
                      rotation : new SFRotation([-4.69386e-7,0.70667,0.707544,3.14159]),
                      scale : new SFVec3f([0.559431,0.559427,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1.93363,1,1,1.93363,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-6.40914,0.213304,-6.55965]),
                  rotation : new SFRotation([0,1,0,1.57079]),
                  scale : new SFVec3f([0.999998,1,0.999998])}),

                new Transform({
                  translation : new SFVec3f([0,0.0117434,0]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-8.56687,0.302342,0.530606]),
                      rotation : new SFRotation([4.40721e-10,1,4.40721e-10,1.57079]),
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      scaleOrientation : new SFRotation([2.03034e-10,1,-1.07407e-10,1.5708]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","1,00 m "]),
                              length : new MFFloat([0]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(14)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-9.13041,0.387792,-1.18209]),
                      rotation : new SFRotation([0.577587,0.576875,0.577589,4.18808]),
                      scale : new SFVec3f([0.55943,0.559426,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1.5517,1,1,1.5517,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-9.13042,0.384754,0.249861]),
                      rotation : new SFRotation([0.577589,0.576874,-0.577588,2.09511]),
                      scale : new SFVec3f([0.55943,0.559427,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.491838,1,1,-0.491838,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([0,0.0163077,-1.56789]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-8.56687,0.302342,0.6137]),
                      rotation : new SFRotation([4.40721e-10,1,4.40721e-10,1.57079]),
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      scaleOrientation : new SFRotation([4.96699e-10,1,-4.34624e-10,1.5708]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","1,10 m "]),
                              length : new MFFloat([0]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(14)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-9.13041,0.387792,-1.18209]),
                      rotation : new SFRotation([0.577587,0.576875,0.577589,4.18808]),
                      scale : new SFVec3f([0.55943,0.559427,0.0237109]),
                      scaleOrientation : new SFRotation([-0.0000087291,5.78445e-7,-1,0.00468343]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1.6792,1,1,1.6792,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-9.13042,0.384754,0.396738]),
                      rotation : new SFRotation([0.577589,0.576874,-0.577588,2.09511]),
                      scale : new SFVec3f([0.55943,0.559427,0.0237109]),
                      scaleOrientation : new SFRotation([-4.65982e-7,8.63403e-7,1,0.00775123]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.40077,1,1,-0.40077,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-12.2407,-0.00907715,-1.16446]),
                  rotation : new SFRotation([0.0000280045,1,0.000618907,3.14159]),
                  scale : new SFVec3f([1,0.999999,1]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-8.04131,0.404034,-2.72127]),
                      rotation : new SFRotation([1,0,0,1.57203]),
                      scale : new SFVec3f([0.559431,0.559428,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-6.59348,0.323395,-2.16191]),
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","3,07 m "]),
                              length : new MFFloat([0]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(14)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-4.21657,0.407074,-2.72127]),
                      rotation : new SFRotation([-4.69386e-7,0.70667,0.707544,3.14159]),
                      scale : new SFVec3f([0.559431,0.559427,0.0237109]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_16")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-3.6424,0.320009,-1.6462]),
                  rotation : new SFRotation([0,1,0,4.71238]),
                  scale : new SFVec3f([0.02,0.02,0.02]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0,0,0]),
                              emissiveColor : new SFColor([0,0.0958378,0.297872]),
                              shininess : new SFFloat(0)}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString([", ","1,21 m "]),
                          length : new MFFloat([0]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["SANS"]),
                              size : new SFFloat(14)}))}))})])})])}),

            new ROUTE({
              fromNode : new SFString("Touch_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeRotationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeRotationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Touch_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeRotationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeRotationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_switch"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_10"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_switch"),
              toField : new SFString("set_touchTime")})])}))});
console.log(X3D0.toXMLNode());
