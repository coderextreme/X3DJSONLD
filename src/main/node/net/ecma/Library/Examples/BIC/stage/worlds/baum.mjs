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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
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
              content : new SFString("Wed, 18 Mar 2015 02:56:32 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 18 Mar 2015 02:56:32 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("baum"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("tree_1"),
                      translation : new SFVec3f([-4.14893,0,-5.37412]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("ntreesh"),
                          translation : new SFVec3f([-0.0000038147,-8.9407e-8,0.0000152588]),
                          rotation : new SFRotation([0,-1,0,1.32624]),
                          scale : new SFVec3f([1,0.999999,1]),
                          center : new SFVec3f([-49.3696,0.0804343,-10.6255]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      transparency : new SFFloat(0.478723)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_1"),
                                      url : new MFString(["ntreesh.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([1,1,1,0,0,0,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283])}))}))})])}),

                        new Transform({
                          DEF : new SFString("ntree"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([1,1,1]),
                                      emissiveColor : new SFColor([0.595745,0.595745,0.595745])})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_2"),
                                      url : new MFString(["ntree.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("tree_2"),
                      translation : new SFVec3f([21.4525,0,-5.37412]),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0.189871,0.00608941,-0.282085]),
                          rotation : new SFRotation([0,-1,0,1.32624]),
                          scale : new SFVec3f([1.08283,1.08283,1.08283]),
                          center : new SFVec3f([-49.3696,0.0804343,-10.6255]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      transparency : new SFFloat(0.478723)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_1")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([1,1,1,0,0,0,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-31.9501,-0.000947475,36.4323]),
                          rotation : new SFRotation([0,-1,0,1.00453]),
                          scale : new SFVec3f([1,1.18986,1]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([1,1,1]),
                                      emissiveColor : new SFColor([0.595745,0.595745,0.595745])})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_2")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("tree"),
                      translation : new SFVec3f([8.76691,0,-5.37412]),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-0.0000038147,-8.9407e-8,0.0000152588]),
                          rotation : new SFRotation([0,-1,0,1.32624]),
                          scale : new SFVec3f([1,0.999999,1]),
                          center : new SFVec3f([-49.3696,0.0804343,-10.6255]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      transparency : new SFFloat(0.478723)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_1")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([1,1,1,0,0,0,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-0.626562,-0.000947475,-24.2605]),
                          rotation : new SFRotation([0,1,0,0.487003]),
                          scale : new SFVec3f([1,1.18986,1]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([1,1,1]),
                                      emissiveColor : new SFColor([0.595745,0.595745,0.595745])})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_2")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067])}))}))})])})])})])}),

                new Transform({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.455757),
                              diffuseColor : new SFColor([0.351064,0.278629,0.195817])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["granite.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([5.85353,5.53906])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.568403,0.415141,0.40171,0.415141,0.40171,0.357317,0.568403,0.357317])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-11.5277,0,-21.3227,-57.357,0,-21.3227,-57.357,0,-8.14675,-11.5277,0,-8.14674])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
