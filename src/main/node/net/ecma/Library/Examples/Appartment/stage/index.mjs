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
var NavigationInfo = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
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
              content : new SFString("Wed, 26 Aug 2015 12:17:13 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 26 Aug 2015 12:17:13 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Appartment")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("viewing"),
              children : new MFNode([
                new NavigationInfo({
                  type : ["EXAMINE"],
                  DEF : new SFString("_top"),
                  transitionType : new MFString(["ANIMATE"]),
                  transitionTime : new SFTime(2)}),

                new NavigationInfo({
                  type : ["ANY","WALK"],
                  DEF : new SFString("_inside"),
                  speed : new SFFloat(0.3),
                  headlight : new SFBool(false),
                  transitionType : new MFString(["ANIMATE"]),
                  transitionTime : new SFTime(2)}),

                new Viewpoint({
                  DEF : new SFString("VP2"),
                  description : new SFString("top"),
                  position : new SFVec3f([-1.58774,10.891,2.33508]),
                  orientation : new SFRotation([-0.999999,-0.00113122,0.00113515,1.53307]),
                  fieldOfView : new SFFloat(1.3)}),

                new Viewpoint({
                  DEF : new SFString("VP1"),
                  description : new SFString("inside"),
                  position : new SFVec3f([4.57879,1.10243,0.55636]),
                  orientation : new SFRotation([-0.0191714,0.999803,0.00515404,1.41461]),
                  fieldOfView : new SFFloat(1.3)})])}),

            new Transform({
              DEF : new SFString("bg"),
              children : new MFNode([
                new Background({
                  skyColor : new MFColor([1,1,1])})])}),

            new Transform({
              DEF : new SFString("inline"),
              translation : new SFVec3f([0,-1.84038,0]),
              scale : new SFVec3f([1,0.001,1]),
              center : new SFVec3f([-1.80969,0.293455,1.89528]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("UnnamedAnimation3"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time"),
                          cycleInterval : new SFTime(10),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("inlineTranslationInterp"),
                      key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]),
                      keyValue : new MFVec3f([0,-1.84038,0,0,-1.82198,0,0,-1.80357,0,0,-1.78517,0,0,-1.76676,0,0,-1.74836,0,0,-1.72996,0,0,-1.71155,0,0,-1.69315,0,0,-1.67475,0,0,-1.65634,0,0,-1.63794,0,0,-1.61953,0,0,-1.60113,0,0,-1.58273,0,0,-1.56432,0,0,-1.54592,0,0,-1.52752,0,0,-1.50911,0,0,-1.49071,0,0,-1.4723,0,0,-1.4539,0,0,-1.4355,0,0,-1.41709,0,0,-1.39869,0,0,-1.38028,0,0,-1.36188,0,0,-1.34348,0,0,-1.32507,0,0,-1.30667,0,0,-1.28827,0,0,-1.26986,0,0,-1.25146,0,0,-1.23305,0,0,-1.21465,0,0,-1.19625,0,0,-1.17784,0,0,-1.15944,0,0,-1.14104,0,0,-1.12263,0,0,-1.10423,0,0,-1.08582,0,0,-1.06742,0,0,-1.04902,0,0,-1.03061,0,0,-1.01221,0,0,-0.993806,0,0,-0.975402,0,0,-0.956998,0,0,-0.938594,0,0,-0.92019,0,0,-0.901787,0,0,-0.883383,0,0,-0.864979,0,0,-0.846575,0,0,-0.828171,0,0,-0.809768,0,0,-0.791364,0,0,-0.77296,0,0,-0.754556,0,0,-0.736152,0,0,-0.717749,0,0,-0.699345,0,0,-0.680941,0,0,-0.662537,0,0,-0.644134,0,0,-0.62573,0,0,-0.607326,0,0,-0.588922,0,0,-0.570518,0,0,-0.552115,0,0,-0.533711,0,0,-0.515307,0,0,-0.496903,0,0,-0.478499,0,0,-0.460096,0,0,-0.441692,0,0,-0.423288,0,0,-0.404885,0,0,-0.386481,0,0,-0.368077,0,0,-0.349673,0,0,-0.331269,0,0,-0.312865,0,0,-0.294462,0,0,-0.276058,0,0,-0.257654,0,0,-0.23925,0,0,-0.220847,0,0,-0.202443,0,0,-0.184039,0,0,-0.165635,0,0,-0.147231,0,0,-0.128828,0,0,-0.110424,0,0,-0.0920199,0,0,-0.0736165,0,0,-0.0552128,0,0,-0.0368087,0,0,-0.018405,0,0,0,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("inlineScaleFactorInterp"),
                      key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]),
                      keyValue : new MFVec3f([1,0.001,1,1,0.01099,1,1,0.02098,1,1,0.03097,1,1,0.04096,1,1,0.05095,1,1,0.06094,1,1,0.07093,1,1,0.08092,1,1,0.09091,1,1,0.1009,1,1,0.11089,1,1,0.12088,1,1,0.13087,1,1,0.14086,1,1,0.15085,1,1,0.16084,1,1,0.17083,1,1,0.18082,1,1,0.19081,1,1,0.2008,1,1,0.21079,1,1,0.22078,1,1,0.23077,1,1,0.24076,1,1,0.25075,1,1,0.26074,1,1,0.27073,1,1,0.28072,1,1,0.29071,1,1,0.3007,1,1,0.31069,1,1,0.32068,1,1,0.33067,1,1,0.34066,1,1,0.35065,1,1,0.36064,1,1,0.37063,1,1,0.38062,1,1,0.39061,1,1,0.4006,1,1,0.41059,1,1,0.42058,1,1,0.43057,1,1,0.44056,1,1,0.45055,1,1,0.46054,1,1,0.47053,1,1,0.48052,1,1,0.49051,1,1,0.5005,1,1,0.51049,1,1,0.52048,1,1,0.53047,1,1,0.54046,1,1,0.55045,1,1,0.56044,1,1,0.57043,1,1,0.58042,1,1,0.59041,1,1,0.6004,1,1,0.61039,1,1,0.62038,1,1,0.63037,1,1,0.64036,1,1,0.65035,1,1,0.66034,1,1,0.67033,1,1,0.68032,1,1,0.69031,1,1,0.7003,1,1,0.71029,1,1,0.72028,1,1,0.73027,1,1,0.74026,1,1,0.75025,1,1,0.76024,1,1,0.77023,1,1,0.78022,1,1,0.79021,1,1,0.8002,1,1,0.810189,1,1,0.820179,1,1,0.83017,1,1,0.84016,1,1,0.850149,1,1,0.860139,1,1,0.870129,1,1,0.880119,1,1,0.890109,1,1,0.900099,1,1,0.910089,1,1,0.92008,1,1,0.930069,1,1,0.940059,1,1,0.95005,1,1,0.960039,1,1,0.970029,1,1,0.980019,1,1,0.990009,1,1,1,1])})])}),

                new Inline({
                  url : new MFString(["flat-notex-anim.x3d"]),
                  bboxSize : new SFVec3f([14.5935,3.71493,8.13908]),
                  bboxCenter : new SFVec3f([-1.73584,0.298679,1.59514])})])}),

            new Transform({
              DEF : new SFString("button"),
              translation : new SFVec3f([-1.47622,10.7094,2.40666]),
              rotation : new SFRotation([-1,0,0,1.5708]),
              scale : new SFVec3f([0.00198924,0.00132336,0.00132293]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("touchSensorTrigger")}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0.25),
                          diffuseColor : new SFColor([0.355377,0.817956,0.015797]),
                          specularColor : new SFColor([0.0415311,0.0955906,0.00184612]),
                          shininess : new SFFloat(0.078125)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-10,10,10,-10,-10,10,10,-10,10,10,10,10])}))}))})])}),

            new ROUTE({
              fromNode : new SFString("VP2"),
              fromField : new SFString("isBound"),
              toNode : new SFString("_top"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("VP1"),
              fromField : new SFString("isBound"),
              toNode : new SFString("_inside"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("inlineTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("inlineScaleFactorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("inlineTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("inline"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("inlineScaleFactorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("inline"),
              toField : new SFString("set_scale")})])}))});
console.log(X3D0.toXMLNode());