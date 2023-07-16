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
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 Mar 2015 09:33:04 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.7, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 25 Mar 2015 09:16:02 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("dachaufbau"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("lwall"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_1"),
                              diffuseColor : new SFColor([1,0.794631,0.389824])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_2"),
                              url : new MFString(["dachaufbau_s.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly166_0Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.00633788,0.0147803,-0.00633788,0.997661,0.993662,0.997661,0.993662,0.0147803])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly166GeoPoints"),
                              point : new MFVec3f([-0.589,4.326,-7.147,-0.589,5.532,-7.147,2.464,5.532,-7.152,2.464,4.326,-7.152])}))}))})])})])}),

            new Transform({
              DEF : new SFString("zier_switch"),
              children : new MFNode([
                new Switch({
                  whichChoice : new SFInt32(1),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("kegl"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.947,0.502001]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("zk1"),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["zierkegel.x3d"]),
                                  bboxSize : new SFVec3f([0.19,0.357,0.223]),
                                  bboxCenter : new SFVec3f([-0.632,6.2545,-7.1155])})])})])}),

                        new Transform({
                          translation : new SFVec3f([0,1.664,1.189]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("zk1")})])}),

                        new Transform({
                          translation : new SFVec3f([0,0.947,1.8795]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("zk1")})])}),

                        new Transform({
                          translation : new SFVec3f([0,0,2.384]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("zk1")})])}),

                        new Transform({
                          USE : new SFString("zk1")})])}),

                    new Transform({})])})])}),

            new Transform({
              DEF : new SFString("da_dach"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0.341818),
                          diffuseColor : new SFColor([0.585106,0.0214792,0])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["dachziegel.jpg"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([2,2])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("nurbsToPoly164_0Geo"),
                      convex : new SFBool(false),
                      coordIndex : new MFInt32([4,1,2,5,-1,0,4,5,3,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("nurbsToPoly164GeoPoints"),
                          point : new MFVec3f([-0.589,5.532,-7.147,-0.585,5.532,-4.697,2.467,5.532,-4.701,2.464,5.532,-7.152,-0.587,7.389,-5.922,2.466,7.389,-5.927])}))}))})])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rwall"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("nurbsToPoly165_0Geo"),
                          convex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.0303601,0.997813,0,0,1,0,0.96964,0.997813])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("nurbsToPoly165GeoPoints"),
                              point : new MFVec3f([-0.585,5.532,-4.697,-0.585,4.326,-4.697,2.467,4.326,-4.701,2.467,5.532,-4.701])}))}))})])})])}),

            new Transform({
              DEF : new SFString("front"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.794631,0.389824])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["dachaufbau.jpg"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("nurbsToPoly167_0Geo"),
                      convex : new SFBool(false),
                      coordIndex : new MFInt32([65,33,34,64,-1,36,37,38,39,-1,42,43,44,45,-1,53,54,55,56,-1,59,60,61,62,-1,35,36,34,-1,40,58,62,64,34,36,-1,49,50,48,-1,47,48,50,51,-1,63,64,62,-1,46,42,45,-1,53,56,52,-1,1,0,32,31,-1,29,28,27,26,-1,23,22,21,20,-1,12,11,10,9,-1,6,5,4,3,-1,30,29,31,-1,25,29,26,-1,16,15,17,-1,18,17,15,14,-1,2,1,3,-1,19,23,20,-1,12,9,13,-1,0,1,34,33,-1,1,2,35,34,-1,2,3,36,35,-1,3,4,37,36,-1,4,5,38,37,-1,5,6,39,38,-1,6,7,40,39,-1,7,8,41,40,-1,8,9,42,41,-1,9,10,43,42,-1,10,11,44,43,-1,11,12,45,44,-1,12,13,46,45,-1,13,14,47,46,-1,14,15,48,47,-1,15,16,49,48,-1,16,17,50,49,-1,17,18,51,50,-1,18,19,52,51,-1,19,20,53,52,-1,20,21,54,53,-1,21,22,55,54,-1,22,23,56,55,-1,23,24,57,56,-1,24,25,58,57,-1,25,26,59,58,-1,26,27,60,59,-1,27,28,61,60,-1,28,29,62,61,-1,29,30,63,62,-1,30,31,64,63,-1,31,32,65,64,-1,13,19,18,14,-1,52,56,42,46,-1,23,25,24,-1,57,58,56,-1,42,40,41,-1,8,7,9,-1,3,7,6,-1,40,36,39,-1,25,7,3,1,31,29,-1,62,58,59,-1,9,7,25,23,-1,56,58,40,42,-1,52,46,47,51,-1,13,9,23,19,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0.380614,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.768957,0.600651,0.768957,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225101,0.7813,0.225101,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454,0.983494,0.0177633,0.96389,0.31895,0.991065,0.339867,0.950484,0,0.950484,0.526491,0.904106,0.526491,0.904106,0.47868,0.830916,0.501227,0.807726,0.585168,0.769319,0.600651,0.769319,0.7813,0.726565,0.7813,0.726565,0.732402,0.635982,0.731045,0.591778,0.785646,0.5937,0.882209,0.499132,0.942517,0.404564,0.882209,0.402642,0.785646,0.358438,0.731045,0.267856,0.732402,0.267856,0.7813,0.225463,0.7813,0.225463,0.600651,0.186694,0.585168,0.163505,0.501227,0.0903146,0.47868,0.0903146,0.526491,0.0439364,0.526491,0.0439364,0.380614,0.00335555,0.339867,0.0305304,0.31895,0.0211228,0.0195454])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("nurbsToPoly167GeoPoints"),
                          point : new MFVec3f([-0.673,4.326,-7.211,-0.673,5.321,-7.211,-0.673,5.398,-7.286,-0.672,5.548,-7.174,-0.672,6.085,-7.174,-0.672,6.085,-7.046,-0.672,5.909,-7.046,-0.672,5.992,-6.844,-0.672,6.301,-6.78,-0.672,6.358,-6.673,-0.672,7.023,-6.673,-0.672,7.023,-6.556,-0.672,6.843,-6.556,-0.671,6.838,-6.306,-0.671,7.039,-6.184,-0.671,7.565,-6.184,-0.671,7.787,-5.923,-0.67,7.565,-5.662,-0.67,7.039,-5.662,-0.67,6.838,-5.54,-0.67,6.843,-5.29,-0.67,7.023,-5.29,-0.67,7.023,-5.172,-0.67,6.358,-5.172,-0.67,6.301,-5.066,-0.669,5.992,-5.002,-0.669,5.909,-4.8,-0.669,6.085,-4.8,-0.669,6.085,-4.672,-0.669,5.548,-4.672,-0.669,5.398,-4.56,-0.669,5.321,-4.635,-0.669,4.326,-4.635,-0.585,4.326,-7.211,-0.585,5.321,-7.211,-0.585,5.398,-7.286,-0.584,5.548,-7.174,-0.584,6.085,-7.174,-0.584,6.085,-7.046,-0.584,5.909,-7.046,-0.584,5.992,-6.844,-0.584,6.301,-6.78,-0.584,6.358,-6.674,-0.584,7.023,-6.674,-0.584,7.023,-6.556,-0.584,6.843,-6.556,-0.583,6.838,-6.306,-0.583,7.039,-6.184,-0.583,7.565,-6.184,-0.583,7.787,-5.923,-0.582,7.565,-5.662,-0.582,7.039,-5.662,-0.582,6.838,-5.54,-0.582,6.843,-5.29,-0.582,7.023,-5.29,-0.582,7.023,-5.173,-0.582,6.358,-5.173,-0.581,6.301,-5.066,-0.581,5.992,-5.002,-0.581,5.909,-4.8,-0.581,6.085,-4.8,-0.581,6.085,-4.672,-0.581,5.548,-4.672,-0.581,5.398,-4.56,-0.581,5.321,-4.635,-0.581,4.326,-4.635])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
