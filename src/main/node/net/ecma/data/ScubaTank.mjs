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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ScubaTank.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Scuba gear used by Nancy Diving example.")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("ScubaTank.x3d")}),

            new Transform({
              DEF : new SFString("ScubaTank"),
              children : new MFNode([
                new Transform({
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("tank"),
                              ambientIntensity : new SFFloat(0.3),
                              diffuseColor : new SFColor([0.3,0.3,0.5]),
                              specularColor : new SFColor([0.7,0.7,0.8]),
                              shininess : new SFFloat(0.1)}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.7),
                          radius : new SFFloat(0.1)}))}))}),

                new Transform({
                  translation : new SFVec3f([0,0.35,0]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("tank")}))})),
                      geometry : new SFNode(
                        new Sphere({
                          radius : new SFFloat(0.098)}))}))}),

                new Transform({
                  translation : new SFVec3f([0,-0.35,0]),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("tankBottom"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("black"),
                              ambientIntensity : new SFFloat(0.3),
                              diffuseColor : new SFColor([0,0,0])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.06),
                          radius : new SFFloat(0.115)}))}))}),

                new Group({
                  DEF : new SFString("tankNozzle"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.45,0]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("pressure"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("pressureColor"),
                                      ambientIntensity : new SFFloat(0.4),
                                      diffuseColor : new SFColor([0.91,0.91,0.91]),
                                      specularColor : new SFColor([0.91,0.9,0.91]),
                                      shininess : new SFFloat(0.16)}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(0.1),
                                  radius : new SFFloat(0.015)}))}))}),

                        new Transform({
                          translation : new SFVec3f([0,0.5,0]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("pressureTop"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("black")}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(0.02),
                                  radius : new SFFloat(0.025)}))}))}),

                        new Transform({
                          translation : new SFVec3f([-0.028,0.462,0]),
                          rotation : new SFRotation([0,0,1,1.57]),
                          children : new MFNode([
                            new Transform({
                              child : new SFNode(
                                new Shape({
                                  DEF : new SFString("connectorToRegulator"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("pressureColor")}))})),
                                  geometry : new SFNode(
                                    new Cylinder({
                                      height : new SFFloat(0.03),
                                      radius : new SFFloat(0.01)}))}))}),

                            new Transform({
                              translation : new SFVec3f([0,0.02,0]),
                              child : new SFNode(
                                new Shape({
                                  DEF : new SFString("connectorToRegulatorTop"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("black")}))})),
                                  geometry : new SFNode(
                                    new Cylinder({
                                      height : new SFFloat(0.02),
                                      radius : new SFFloat(0.02)}))}))})])})])})])}),

                new Transform({
                  translation : new SFVec3f([0,0.2,0]),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("tankHoldBelt"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("black")}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.1),
                          radius : new SFFloat(0.115)}))}))})])}),

            new Background({
              skyColor : new MFColor([0.6,0.6,0.6])})])}))});
console.log(X3D0.toXMLNode());
