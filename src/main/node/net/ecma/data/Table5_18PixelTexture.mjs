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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var SFImage = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Table5_18PixelTexture")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("PixelTexture example for Table 5.18")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Leonard Daly and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("18 December 2006")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("2 April 2017")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dResources.html")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("Copyright 2006, Daly Realism and Don Brutzman")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D, PixelTexture")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Background({
              skyColor : new MFColor([0,0,1])}),

            new Transform({
              DEF : new SFString("Checkerboard"),
              translation : new SFVec3f([0,0,-10]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([500,500])})),
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([2,2,3,15119869,16767927,16767927,15119869])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([1000,1000,0.01])}))})])}),

            new Viewpoint({
              description : new SFString("View All"),
              position : new SFVec3f([0,0,20])}),

            new Viewpoint({
              description : new SFString("Empty Image"),
              position : new SFVec3f([0,5,5])}),

            new Transform({
              DEF : new SFString("EmptyImage"),
              rotation : new SFRotation([1,1,0,1]),
              translation : new SFVec3f([0,5,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({}))})),
                  geometry : new SFNode(
                    new Box({
                      DEF : new SFString("StandardBox")}))})])}),

            new Viewpoint({
              description : new SFString("Black and white PixelTexture"),
              position : new SFVec3f([-5,0,5])}),

            new Transform({
              DEF : new SFString("BW"),
              rotation : new SFRotation([1,1,0,1]),
              translation : new SFVec3f([-5,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([1,2,1,255,0])}))})),
                  geometry : new SFNode(
                    new Box({
                      USE : new SFString("StandardBox")}))})])}),

            new Viewpoint({
              description : new SFString("Black and white with Alpha PixelTexture"),
              position : new SFVec3f([5,0,5])}),

            new Transform({
              DEF : new SFString("AlphaBW"),
              rotation : new SFRotation([1,1,0,1]),
              translation : new SFVec3f([5,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([2,1,2,52479,8823])}))})),
                  geometry : new SFNode(
                    new Box({
                      USE : new SFString("StandardBox")}))})])}),

            new Viewpoint({
              description : new SFString("RGB PixelTexture"),
              position : new SFVec3f([-5,-5,5])}),

            new Transform({
              DEF : new SFString("RGB"),
              rotation : new SFRotation([1,1,0,1]),
              translation : new SFVec3f([-5,-5,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])}))})),
                  geometry : new SFNode(
                    new Box({
                      USE : new SFString("StandardBox")}))})])}),

            new Viewpoint({
              description : new SFString("RGB with Alpha PixelTexture"),
              position : new SFVec3f([5,-5,5])}),

            new Transform({
              DEF : new SFString("AlphaRGB"),
              rotation : new SFRotation([1,1,0,1]),
              translation : new SFVec3f([5,-5,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([3,2,4,4278190335,16711935,65535,4278190207,16711807,65407])}))})),
                  geometry : new SFNode(
                    new Box({
                      USE : new SFString("StandardBox")}))})])})])}))});
console.log(X3D0.toXMLNode());
