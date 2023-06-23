'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var WorldInfo = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var Background = require('./x3d.js');
var MFString = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFFloat = require('./x3d.js');
var SFRotation = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var SFBool = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Normal = require('./x3d.js');
var Inline = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("InlineSoundSource.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("28 October 2020")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("4 August 2021")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CHANGELOG.txt")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("credit for audio files")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://medialab.hmu.gr/minipages/x3domAudio")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("InlineSoundSource.x3d")}),

            new NavigationInfo({
              DEF : new SFString("NAV")}),

            new Background({
              backUrl : new MFString(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]),
              bottomUrl : new MFString(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]),
              frontUrl : new MFString(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]),
              leftUrl : new MFString(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]),
              rightUrl : new MFString(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]),
              topUrl : new MFString(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])}),

            new Viewpoint({
              DEF : new SFString("Camera001"),
              description : new SFString("Camera001"),
              farDistance : new SFFloat(0),
              nearDistance : new SFFloat(1),
              orientation : new SFRotation([1,0,0,-0.523599]),
              position : new SFVec3f([0,2000,3500])}),

            new Transform({
              DEF : new SFString("Floor"),
              translation : new SFVec3f([1.241,0,0.358]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("WireColor"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.122,0.114,0.125])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("Box001-GEOMETRY"),
                      coordIndex : new MFInt32([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]),
                      solid : new SFBool(false),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000])})),
                      normal : new SFNode(
                        new Normal({
                          vector : new MFVec3f([0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0])}))}))})])}),

            new Transform({
              DEF : new SFString("InlineScene"),
              children : new MFNode([
                new Inline({
                  DEF : new SFString("inline"),
                  url : new MFString(["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])})])})])}))});
console.log(X3D0.toXMLNode());
