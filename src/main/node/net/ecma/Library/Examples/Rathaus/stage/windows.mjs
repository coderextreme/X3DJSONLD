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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 Mar 2015 09:35:18 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 Mar 2015 09:35:18 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("wins"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("left"),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("_1"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_2"),
                              diffuseColor : new SFColor([1,0.946965,0.745643])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_3"),
                              url : new MFString(["w_win_grid.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.0214319,0.986819,0.629956,0.974442,0.648521,0.0255575,0.0049296,0.021432])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1.142,3.274,-7.786,-1.144,3.275,-9.158,-1.143,2.221,-9.158,-1.142,2.221,-7.784])}))}))}),

                    new Transform({
                      translation : new SFVec3f([0.025,-0.00100017,1.5535]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0270001,-0.00250006,3.4015]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0300001,-0.00400019,5.344]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0330001,-0.00500011,7.366]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.035,-0.00600004,8.8935]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])})])}),

                new Transform({
                  DEF : new SFString("mid"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0.0419999,-0.00950003,13.868]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.044,-0.0105,15.475]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0470001,-0.0120001,17.301]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0500001,-0.013,19.1965]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0519999,-0.0140002,20.892]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      DEF : new SFString("tx"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_2")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.649836,0.0123979,0.353507,0.00640266,0.349685,0.971128,0.629519,0.977444])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1.089,2.207,13.548,-1.089,2.206,14.228,-1.089,3.259,14.237,-1.09,3.26,13.539])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("right"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0.056,-0.0160003,23.924]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.059,-0.0170002,25.8105]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0619999,-0.0190001,27.846]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.064,-0.02,29.518]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.0660001,-0.0210001,30.999]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])}),

                    new Transform({
                      translation : new SFVec3f([0.068,-0.0220003,32.625]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("_1")})])})])})])})])}))});
console.log(X3D0.toXMLNode());
