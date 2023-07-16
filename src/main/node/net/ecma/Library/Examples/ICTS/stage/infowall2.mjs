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
var Anchor = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:09 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:09 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("info"),
              translation : new SFVec3f([-0.0641994,0,0]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("link"),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("Klicken Sie hier fr eine Reservierung."),
                      url : new MFString(["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]),
                      children : new MFNode([
                        new Transform({}),

                        new Transform({
                          translation : new SFVec3f([14.9304,1.44228,-4.53928]),
                          rotation : new SFRotation([0,1,0,4.71239]),
                          scale : new SFVec3f([1.15231,0.684961,0.863441]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_1"),
                                      url : new MFString(["reflect1.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1]),
                                  coordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,1,0.25,0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-2,-0.487787,0,2,-0.487787,0,2,0.575824,0,-2,0.575824,0,2,0.480384,0,-2,0.480384,0,2,-0.390195,0,-2,-0.390195,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([14.8995,1.3026,-6.67413]),
                          rotation : new SFRotation([0,1,0,4.71239]),
                          scale : new SFVec3f([0.0311052,0.0311052,0.0311052]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_2"),
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.0105023,0,0.255319])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString([", ","Jetzt reservieren! "]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(18)}))}))})])})])})])}),

                new Transform({
                  DEF : new SFString("reservier"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([14.9236,2.66827,-5.48662]),
                      rotation : new SFRotation([0,-1,0,1.5708]),
                      scale : new SFVec3f([0.0341302,0.0341301,0.0341303]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","Mercedes-Benz lädt Sie, ","zu einer Probefahrt ein! "]),
                              length : new MFFloat([0]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(14),
                                  justify : new MFString(["MIDDLE"])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("slogan"),
                  translation : new SFVec3f([14.9259,3.48694,-7.03026]),
                  rotation : new SFRotation([0,-1,0,1.5708]),
                  scale : new SFVec3f([0.0311052,0.0311052,0.0311052]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["neues Design, neue Ausstattung, mehr Spaß"]),
                          length : new MFFloat([0]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["SANS"]),
                              size : new SFFloat(18)}))}))})])}),

                new Transform({
                  DEF : new SFString("title"),
                  translation : new SFVec3f([14.9259,4.16814,-8.31291]),
                  rotation : new SFRotation([0,-1,0,1.5708]),
                  scale : new SFVec3f([0.0311052,0.0311052,0.0311052]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Die neue A-Klasse ist da!"]),
                          length : new MFFloat([0]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["SANS"]),
                              size : new SFFloat(24)}))}))})])}),

                new Transform({
                  translation : new SFVec3f([14.9304,4.4196,-3.98687]),
                  rotation : new SFRotation([0,1,0,4.71239]),
                  scale : new SFVec3f([2.29482,0.793292,1]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_1")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          texCoordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1]),
                          coordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,1,0.25,0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-2,-0.487787,0,2,-0.487787,0,2,0.575824,0,-2,0.575824,0,2,0.480384,0,-2,0.480384,0,2,-0.390195,0,-2,-0.390195,0])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
