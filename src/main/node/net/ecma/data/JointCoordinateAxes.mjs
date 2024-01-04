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
var NavigationInfo = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("converter"),
              content : new SFString("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy")}),

            new meta({
              name : new SFString("converted"),
              content : new SFString("Mon, 31 Jul 2023 03:48:04 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              headlight : new SFBool(false)}),

            new Group({
              children : new MFNode([
                new Group({
                  DEF : new SFString("ARROW"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("ARROW_APPEARANCE"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.3,0.3,1]),
                              emissiveColor : new SFColor([0.3,0.3,0.33])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          top : new SFBool(false),
                          bottom : new SFBool(false),
                          radius : new SFFloat(0.025)}))}),

                    new Transform({
                      translation : new SFVec3f([0,1,0]),
                      child : new SFNode(
                        new Shape({
                          DEF : new SFString("ARROW_POINTER"),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("ARROW_APPEARANCE")})),
                          geometry : new SFNode(
                            new Cone({
                              height : new SFFloat(0.1),
                              bottomRadius : new SFFloat(0.05)}))}))}),

                    new Transform({
                      translation : new SFVec3f([0,-1,0]),
                      rotation : new SFRotation([1,0,0,3.1416]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("ARROW_POINTER")}))})])}),

                new Transform({
                  translation : new SFVec3f([0,1.08,0]),
                  children : new MFNode([
                    new Billboard({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("LABEL_APPEARANCE"),
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0.3]),
                                  emissiveColor : new SFColor([0.33,0.33,0.1])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Y"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  DEF : new SFString("LABEL_FONT"),
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(0.2),
                                  justify : new MFString(["MIDDLE"])}))}))})])})])})])}),

            new Transform({
              rotation : new SFRotation([0,0,1,-1.5708]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      USE : new SFString("ARROW")}),

                    new Transform({
                      translation : new SFVec3f([0.072,1.1,0]),
                      rotation : new SFRotation([0,0,1,1.5708]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("LABEL_APPEARANCE")})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["X"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("LABEL_FONT")}))}))})])})])})])})])}),

            new Transform({
              rotation : new SFRotation([1,0,0,1.5708]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      USE : new SFString("ARROW")}),

                    new Transform({
                      translation : new SFVec3f([0,1.1,0.072]),
                      rotation : new SFRotation([1,0,0,-1.5708]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("LABEL_APPEARANCE")})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Z"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("LABEL_FONT")}))}))})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
