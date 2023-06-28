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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("MaskAndSnorkel.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Diving mask and snorkel tube.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Etsuko Lippi")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("January 24, 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d")}),

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
              title : new SFString("MaskAndSnorkel.x3d")}),

            new Background({
              skyColor : new MFColor([0,0,0.9])}),

            new Transform({
              DEF : new SFString("maskAndSnorkel"),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("maskFrame"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("frameColor"),
                              diffuseColor : new SFColor([0,0,0])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])}))}))})])}),

                new Transform({
                  DEF : new SFString("snorkelHoldRing"),
                  translation : new SFVec3f([0.075,0.075,-0.02]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("frameColor")}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.003),
                          radius : new SFFloat(0.015)}))})])}),

                new Group({
                  DEF : new SFString("snorkel"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,-0.02,0]),
                      children : new MFNode([
                        new Transform({
                          scale : new SFVec3f([0.9,0.9,0.9]),
                          translation : new SFVec3f([0.035,-0.07,-0.02]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("snorkelTube"),
                                      diffuseColor : new SFColor([0.678,1,0.184]),
                                      transparency : new SFFloat(0.4)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  crossSection : new MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]),
                                  spine : new MFVec3f([-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03])}))})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          scale : new SFVec3f([0.9,0.9,0.9]),
                          translation : new SFVec3f([0.01,-0.04,-0.02]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Mouthpiece"),
                                      diffuseColor : new SFColor([0.678,1,0.8]),
                                      transparency : new SFFloat(0.4)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  crossSection : new MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]),
                                  spine : new MFVec3f([-0.01,-0.03,0,0,0,0,0.02,0.01,0])}))})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,-0.85]),
                          scale : new SFVec3f([0.9,0.9,0.9]),
                          translation : new SFVec3f([0.005,-0.01,-0.02]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Mouthpiece")}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  crossSection : new MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]),
                                  spine : new MFVec3f([-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0])}))})])})])})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("maskLensR"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("plastic"),
                              diffuseColor : new SFColor([0.941,0.973,1]),
                              transparency : new SFFloat(0.8)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([12,13,14,15,16,17,18,12,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("maskLensL"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("plastic")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([19,20,21,22,23,24,25,19,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("nose"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("plasticFit"),
                              diffuseColor : new SFColor([0.678,1,0.184]),
                              transparency : new SFFloat(0.7)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("faceFit"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("plasticFit")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("belt"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("plastic")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]),
                          creaseAngle : new SFFloat(1.45),
                          solid : new SFBool(false),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
