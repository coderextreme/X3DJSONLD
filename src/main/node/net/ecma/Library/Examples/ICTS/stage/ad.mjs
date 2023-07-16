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
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:55 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:55 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Packaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("ad"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.00000354004,3.23187,-0.317778]),
                  rotation : new SFRotation([1,0.00000126533,-0.00000117221,1.5708]),
                  scale : new SFVec3f([1.10125,0.662583,0.323521]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_1"),
                              url : new MFString(["premiere-world.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([-2,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([1,0,5,4,-1,7,6,2,3,-1]),
                          coordIndex : new MFInt32([3,2,1,0,-1,4,5,6,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00230294,0.993997,0.00562096,0.00190586,0.994394,0.993997,0.997712,0.00190586,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-0.00000354099,3.21449,-0.318831]),
                  rotation : new SFRotation([1,0.00000126533,-0.00000117221,1.5708]),
                  scale : new SFVec3f([1.0942,0.658338,0.321449]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([2,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([12,13,2,3,-1,7,6,14,15,-1,8,9,1,0,-1,4,5,11,10,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,7,6,5,4,-1,8,9,1,0,-1,4,5,11,10,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00220408,0.000687301,0.00220408,0.996833,0.00230294,0.993997,0.00562096,0.00190586,0.989256,0.00236673,0.989256,0.998512,0.994394,0.993997,0.997712,0.00190586,0.995439,0.000687301,0.995439,0.996833,0.00624149,0.00236673,0.00624149,0.998513,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10,-4.997,-9.90446,10,-4.997,-9.90446,6.77007,5.04934,-9.90446,10,5.04934,-9.90446,6.77007])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
