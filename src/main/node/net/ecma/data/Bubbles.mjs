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
var Transform = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Bubbles.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Bubble animation used by Nancy Diving example.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Etsuko Lippi")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 January 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Bubbles.x3d")}),

            new Transform({
              DEF : new SFString("Bubbles"),
              children : new MFNode([
                new Group({
                  DEF : new SFString("Bubble"),
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("BubbleClock"),
                      cycleInterval : new SFTime(6),
                      loop : new SFBool(true)}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath1"),
                      key : new MFFloat([0,0.5,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath2"),
                      key : new MFFloat([0,0.3,0.64,0.85,1]),
                      keyValue : new MFVec3f([0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath3"),
                      key : new MFFloat([0,0.1,0.45,0.7,1]),
                      keyValue : new MFVec3f([0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath4"),
                      key : new MFFloat([0,0.5,0.6,0.8,1]),
                      keyValue : new MFVec3f([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath5"),
                      key : new MFFloat([0,0.25,0.35,0.65,1]),
                      keyValue : new MFVec3f([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath6"),
                      key : new MFFloat([0,0.15,0.22235,0.55565,1]),
                      keyValue : new MFVec3f([0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath7"),
                      key : new MFFloat([0,0.2425,0.4535,0.6775,1]),
                      keyValue : new MFVec3f([0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath8"),
                      key : new MFFloat([0,0.1125,0.5535,0.97865,1]),
                      keyValue : new MFVec3f([0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath9"),
                      key : new MFFloat([0,0.0025,0.035,0.65,1]),
                      keyValue : new MFVec3f([0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545])}),

                    new PositionInterpolator({
                      DEF : new SFString("BubblePath10"),
                      key : new MFFloat([0,0.00025,0.035,0.6895,1]),
                      keyValue : new MFVec3f([0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1])}),

                    new Transform({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("bubble1"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.025)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble2"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.055)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble3"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.065)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble4"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.015)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble5"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.075)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble6"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.005)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble7"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.035)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble8"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.05)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble9"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.045)}))})])}),

                        new Transform({
                          DEF : new SFString("bubble10"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.035)}))})])}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath1")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath2")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath3")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath4")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath5")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath6")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath7")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath8")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath9")}),

                        new ROUTE({
                          fromField : new SFString("fraction_changed"),
                          fromNode : new SFString("BubbleClock"),
                          toField : new SFString("set_fraction"),
                          toNode : new SFString("BubblePath10")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath1"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble1")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath2"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble2")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath3"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble3")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath4"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble4")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath5"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble5")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath6"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble6")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath7"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble7")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath8"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble8")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath9"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble9")}),

                        new ROUTE({
                          fromField : new SFString("value_changed"),
                          fromNode : new SFString("BubblePath10"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("bubble10")})])})])})])}),

            new Background({
              skyColor : new MFColor([0,0,0.6])})])}))});
console.log(X3D0.toXMLNode());
