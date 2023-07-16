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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new LOD({
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-0.036226,1.98503,-1.18758]),
                          rotation : new SFRotation([1,0,0,1.5708]),
                          scale : new SFVec3f([8.67144,1.3212,1.59196]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.43617,0,0.0460901]),
                                      shininess : new SFFloat(0),
                                      transparency : new SFFloat(0.265957)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])}),

                        new Transform({
                          DEF : new SFString("t"),
                          translation : new SFVec3f([-0.0362264,2.78814,0.274026]),
                          scale : new SFVec3f([0.0339055,0.0339054,0.0339054]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([1,0.842126,0]),
                                      shininess : new SFFloat(0)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_1"),
                                      url : new MFString(["mibtxt1.gif"])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["\"MEN IN BLACK\""]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(24),
                                      justify : new MFString(["MIDDLE"])}))}))})])}),

                        new Transform({
                          DEF : new SFString("f"),
                          translation : new SFVec3f([-8.30206,2.03672,0.269761]),
                          scale : new SFVec3f([0.0377924,0.0377925,0.0377923]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([1,1,1]),
                                      shininess : new SFFloat(0)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_1")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString([", ","Sie schützen die Welt vor dem Abschaum des Universums. Mit dicken, ","Kanonen und Gehirnpiespsdingsdas werden viele Leute geblitzdingst.Komm' näher, wenn Du den Trailer sehen willst."]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(14)}))}))})])})])})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("b"),
                      translation : new SFVec3f([-0.036226,1.98503,-1.18758]),
                      rotation : new SFRotation([1,0,0,1.5708]),
                      scale : new SFVec3f([8.67144,1.3212,1.59196]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
