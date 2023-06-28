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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFImage = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("PixelTextureComponentExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Leonard Daly and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("25 August 2008")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("7 January 2014")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3D for Web Authors, Table 5.18")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dResources.html")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("Copyright (c) 2006, Daly Realism and Don Brutzman")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d")}),

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
              skyColor : new MFColor([0.1,0.1,0.4])}),

            new Viewpoint({
              description : new SFString("Table 5.18 SFImage component examples"),
              position : new SFVec3f([0,0,14])}),

            new Transform({
              translation : new SFVec3f([-6,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          DEF : new SFString("ZeroComponents")}))})),
                  geometry : new SFNode(
                    new Box({}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["0"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("CenterJustify"),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("TextMaterial"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([-3,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          DEF : new SFString("OneComponent"),
                          image : new SFImage([1,2,1,255,0])}))})),
                  geometry : new SFNode(
                    new Box({}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["1"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TextMaterial")}))})])})])}),

            new Transform({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          DEF : new SFString("TwoComponents"),
                          image : new SFImage([2,1,2,52479,8823])}))})),
                  geometry : new SFNode(
                    new Box({}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["2"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TextMaterial")}))})])})])}),

            new Transform({
              translation : new SFVec3f([3,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      /*note 0x000000 = 0*/
                      texture : new SFNode(
                        new PixelTexture({
                          DEF : new SFString("ThreeComponents"),
                          image : new SFImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])}))})),
                  geometry : new SFNode(
                    new Box({}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["3"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TextMaterial")}))})])})])}),

            new Transform({
              translation : new SFVec3f([6,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      /*Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127*/
                      texture : new SFNode(
                        new PixelTexture({
                          DEF : new SFString("FourComponents"),
                          image : new SFImage([3,2,4,4278190335,16711935,65535,4278190207,16711807,65407])}))})),
                  geometry : new SFNode(
                    new Box({}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["4"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("TextMaterial")}))})])})])}),
          /*Background from PixelTextureBW.x3d*/

            new Transform({
              translation : new SFVec3f([0,6,-2]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new PixelTexture({
                          image : new SFImage([8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([16,16,0.1])}))})])})])}))});
console.log(X3D0.toXMLNode());
