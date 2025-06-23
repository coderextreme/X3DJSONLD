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
var Group = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          /*Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON*/
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HelloWorld.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Simple X3D model example: Hello World!")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("30 October 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HelloWorld.tall.png")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://en.wikipedia.org/wiki/Hello_world")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.HelloWorldExample.net")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/realtime-3d/news/internationalization-x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.x3db")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.xhtml")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.json")})])})),
      Scene : new SFNode(
        new Scene({
          /*Example scene to illustrate X3D nodes and fields (XML elements and attributes)*/
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["Example scene to illustrate a simple X3D model"]),
              title : new SFString("Hello World!")}),

            new Group({
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("ViewUpClose"),
                  centerOfRotation : new SFVec3f([0,-1,0]),
                  description : new SFString("Hello world!"),
                  position : new SFVec3f([0,-1,7])}),

                new Transform({
                  rotation : new SFRotation([0,1,0,3]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Sphere({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("MaterialLightBlue"),
                              diffuseColor : new SFColor([0.1,0.5,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("ImageCloudlessEarth"),
                              url : new MFString(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])}))}))}))}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          DEF : new SFString("TextMessage"),
                          string : new MFString(["Hello","world!"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("MaterialLightBlue")}))}))}))})])})])}))});
console.log(X3D0.toXMLNode());
