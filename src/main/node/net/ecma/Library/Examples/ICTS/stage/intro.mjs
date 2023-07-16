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
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:09 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:09 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("nc"),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-1.37383,0.503751,0]),
                          rotation : new SFRotation([0,0,-1,1.5708]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_1"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,0,6.63116]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("_2"),
                                      scale : new SFVec3f([1,2.98486,1]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0.819149,0.686645,0.392914]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,4,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5])}))}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([0,0,2.57238]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_2")})])}),

                                new Transform({
                                  translation : new SFVec3f([0,0,-6.72781]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_2")})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.807327,1.49278,4.45628]),
                                  rotation : new SFRotation([0.0000398219,1,-0.0000398219,4.71239]),
                                  scaleOrientation : new SFRotation([0.0000361377,1,-0.0000237345,2.35619]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_2")})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.715973,0.800763,-2.54796]),
                                  rotation : new SFRotation([0.0000398219,1,-0.0000398219,4.71239]),
                                  scaleOrientation : new SFRotation([0.0000361377,1,-0.0000237345,2.35619]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_2")})])}),

                                new Transform({
                                  USE : new SFString("_2")})])})])}),

                        new Transform({
                          USE : new SFString("_1")})])}))})])})])}))});
console.log(X3D0.toXMLNode());
