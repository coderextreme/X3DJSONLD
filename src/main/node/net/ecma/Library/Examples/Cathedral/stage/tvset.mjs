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
var TextureTransform = require('./x3d.mjs');
var Box = require('./x3d.mjs');
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
              content : new SFString("Thu, 12 Mar 2015 07:10:41 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 12 Mar 2015 07:10:41 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.000230302,0.155625,0.0887065]),
                  rotation : new SFRotation([1,0.00000511572,3.72711e-9,1.5708]),
                  scale : new SFVec3f([1.53182,0.0858728,1.21022]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0,0.0905258,0.0957447]),
                              specularColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0,0.050292,0.0531915]),
                              shininess : new SFFloat(0.12766),
                              transparency : new SFFloat(0.787234)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(3.14159),
                          coordIndex : new MFInt32([1,40,26,39,7,12,13,-1,12,8,10,13,-1,8,15,14,10,-1,15,5,28,21,30,3,14,-1,10,14,16,11,-1,14,3,2,16,-1,0,1,13,17,-1,13,10,11,17,-1,8,12,18,9,-1,12,7,6,18,-1,4,5,15,19,-1,15,8,9,19,-1,21,28,27,20,-1,28,5,4,27,-1,3,30,29,2,-1,30,21,20,29,-1,23,32,31,24,-1,32,17,11,31,-1,9,18,33,34,-1,33,23,24,34,-1,4,19,35,27,-1,35,25,20,27,-1,19,9,34,35,-1,34,24,25,35,-1,25,36,29,20,-1,36,16,2,29,-1,24,31,36,25,-1,31,11,16,36,-1,18,6,37,33,-1,37,22,23,33,-1,22,38,32,23,-1,38,0,17,32,-1,7,39,37,6,-1,39,26,22,37,-1,26,40,38,22,-1,40,1,0,38,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.0861493,0.1,0.0861492,-0.1,-0.1,0.1,0.0861493,0.1,0.0861492,0.1,-0.1,0.1,0.0861493,0.1,-0.0861493,0.1,-0.1,-0.1,-0.0861493,0.1,-0.0861493,-0.1,-0.1,-0.1,0,-0.1,-0.1,0,0.1,-0.0861493,0,-0.1,0.1,0,0.1,0.0861492,-0.05,-0.1,-0.1,-0.05,-0.1,0.1,0.05,-0.1,0.1,0.05,-0.1,-0.1,0.0430746,0.1,0.0861492,-0.0430746,0.1,0.0861492,-0.0430746,0.1,-0.0861493,0.0430746,0.1,-0.0861493,0.0861493,0.1,-5.21541e-8,0.1,-0.1,0,-0.0861493,0.1,-5.21541e-8,-0.0430746,0.1,-4.47035e-8,0,0.1,-4.47035e-8,0.0430746,0.1,-5.21541e-8,-0.1,-0.1,0,0.0861493,0.1,-0.0430747,0.1,-0.1,-0.05,0.0861493,0.1,0.0430746,0.1,-0.1,0.05,0,0.1,0.0430746,-0.0430746,0.1,0.0430746,-0.0430746,0.1,-0.0430747,0,0.1,-0.0430747,0.0430746,0.1,-0.0430747,0.0430746,0.1,0.0430746,-0.0861493,0.1,-0.0430747,-0.0861493,0.1,0.0430746,-0.1,-0.1,-0.05,-0.1,-0.1,0.05])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([7.89296e-8,0.145567,0.0253585]),
                  scale : new SFVec3f([1.68762,1.45567,0.609064]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["oak2.jpg"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.2,0.2,0.2])}))})])}),

                new Transform({
                  translation : new SFVec3f([7.95117e-8,0.145567,-0.0621155]),
                  scale : new SFVec3f([1.68762,1.45567,0.609064]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["tech.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,1,3,5,-1,3,2,5,-1,0,4,2,-1,0,1,4,-1]),
                          coordIndex : new MFInt32([6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,5,7,8,-1,7,6,8,-1,4,8,6,-1,4,5,8,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0,0.5,0.5,0.5,0.5])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.0676223,0.0676223,-0.0577598,0.0676223,-0.0676223,-0.0577598,-0.0676223,0.0676223,-0.0577598,-0.0676223,-0.0676223,-0.0577598,-6.8231e-9,6.8231e-9,-0.0577598])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
