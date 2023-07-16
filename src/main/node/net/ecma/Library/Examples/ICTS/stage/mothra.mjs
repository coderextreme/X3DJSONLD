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
var Anchor = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:14 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:14 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Anchor({
              url : new MFString(["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/mothra.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');"]),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("filmplakat"),
                              scale : new SFVec3f([4.95,4.94926,4.94979]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["mothra.jpg"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,0.337629,0,0.5,0.337629,0,0.5,1.88983,0,-0.5,1.88983,0,-0.5,-0.362414,0,0.5,-0.362414,0,0.5,-1.88649,0,-0.5,-1.88649,0])}))}))})])})])}),

                        new LOD({
                          range : new MFFloat([12]),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,-0.970178,0]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("b"),
                                  translation : new SFVec3f([-0.036226,2.95521,-0.941064]),
                                  rotation : new SFRotation([1,0,0,1.5708]),
                                  scale : new SFVec3f([6.56332,0.999999,1.20494]),
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
                                  translation : new SFVec3f([-0.0362265,3.40828,0.199348]),
                                  scale : new SFVec3f([0.0298343,0.0298342,0.0298342]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              emissiveColor : new SFColor([1,0.842126,0]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["\"MOTHRA\""]),
                                          length : new MFFloat([0]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString(["SANS"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(24),
                                              justify : new MFString(["MIDDLE"])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("f"),
                                  translation : new SFVec3f([-6.41232,2.92385,0.195083]),
                                  scale : new SFVec3f([0.0285384,0.0285384,0.0285383]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              emissiveColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString([", ","Der kleine Peter bespüht harmlose Fliegen mit genmanipuliertem Haar-, ","wuchsmittel. Die Viecher werden plötzlich riesengross und finden nichtsmehr zu fressen - ausser Peter und seine Familie..."]),
                                          length : new MFFloat([0]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString(["SANS"]),
                                              size : new SFFloat(14)}))}))})])})])}),

                            new Transform({})])})])}))})])})])}))});
console.log(X3D0.toXMLNode());
