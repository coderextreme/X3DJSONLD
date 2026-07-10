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
var Viewpoint = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MultiTextureCoordinate = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MultiTexture = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var MultiTextureTransform = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("MultiTextureDesignPattern.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("5 March 2011")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("29 October 2023")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("X3D schematron rules for quality assurance")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("MultiTextureDesignPatternSceneGraph.png")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("MultiTexture, MultiTextureCoordinate, MultiTextureTransform")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dResources.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          /*================================*/
          children : new MFNode([
            new WorldInfo({
              title : new SFString("MultiTextureDesignPattern.x3d")}),

            new Background({
              skyColor : new MFColor([0.72549,1,0.721569])}),

            new Viewpoint({
              description : new SFString("MultiTexture design pattern")}),

            new Shape({
              geometry : new SFNode(
                new Text({
                  string : new MFString(["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"]),
                  fontStyle : new SFNode(
                    new FontStyle({
                      justify : new MFString(["MIDDLE","MIDDLE"]),
                      size : new SFFloat(0.6)}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      diffuseColor : new SFColor([0.2,0.4,0.8])}))}))}),
          /*================================*/

            new Shape({
              /*add a single geometry node here*/
              geometry : new SFNode(
                new IndexedFaceSet({
                  texCoord : new SFNode(
                    new MultiTextureCoordinate({
                      /*add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes*/
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1])}))}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({})),
                  texture : new SFNode(
                    new MultiTexture({
                      alpha : new SFFloat(0.8),
                      color : new SFColor([0.9,1,0.2]),
                      function : new MFString(["COMPLEMENT","ALPHAREPLICATE"]),
                      mode : new MFString(["MODULATE","REPLACE","BLENDDIFFUSEALPHA"]),
                      source : new MFString(["DIFFUSE","SPECULAR","FACTOR"]),
                      /*add multiple texture nodes here*/
                      texture : new SFNode(
                        new ImageTexture({})),
                      texture : new SFNode(
                        new MovieTexture({})),
                      texture : new SFNode(
                        new PixelTexture({}))})),
                  textureTransform : new SFNode(
                    new MultiTextureTransform({
                      /*add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes*/
                      textureTransform : new SFNode(
                        new TextureTransform({})),
                      textureTransform : new SFNode(
                        new TextureTransform({})),
                      textureTransform : new SFNode(
                        new TextureTransform({}))}))}))})])}))});
console.log(X3D0.toXMLNode());
