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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("SceneBBox"),
              bboxSize : new SFVec3f([400,200,400]),
              bboxCenter : new SFVec3f([0,40,0])}),

            new Transform({
              DEF : new SFString("scene"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("sky"),
                  translation : new SFVec3f([0,-62.614,0]),
                  scale : new SFVec3f([19.332,19.332,19.332]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["sky.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          ccw : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,45,-1,10,9,20,-1,20,9,21,-1,9,14,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,21,14,29,-1,14,17,29,-1,21,29,23,-1,23,29,30,-1,23,30,25,-1,25,30,31,-1,25,31,27,-1,29,17,32,-1,17,19,32,-1,29,32,30,-1,30,32,33,-1,30,33,31,-1,32,19,34,-1,34,19,45,-1,32,34,33,-1,55,53,35,-1,35,53,36,-1,35,36,37,-1,37,36,38,-1,37,38,39,-1,39,38,40,-1,40,11,1,-1,39,40,41,-1,41,40,1,-1,41,1,0,-1,53,52,36,-1,36,52,42,-1,36,42,38,-1,38,42,43,-1,38,43,40,-1,40,43,11,-1,43,15,11,-1,52,58,42,-1,42,58,44,-1,42,44,43,-1,43,44,15,-1,44,18,15,-1,58,60,44,-1,44,60,18,-1,18,60,45,-1,60,34,45,-1,28,27,46,-1,46,27,47,-1,27,31,47,-1,46,47,48,-1,48,47,49,-1,48,49,50,-1,50,49,51,-1,51,52,53,-1,50,51,54,-1,54,51,53,-1,54,53,55,-1,47,31,56,-1,31,33,56,-1,47,56,49,-1,49,56,57,-1,49,57,51,-1,51,57,52,-1,57,58,52,-1,56,33,59,-1,33,34,59,-1,56,59,57,-1,57,59,58,-1,59,60,58,-1,59,34,60,-1]),
                          coordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,9,14,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,22,14,30,-1,14,17,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,30,17,33,-1,17,19,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,33,19,35,-1,35,19,20,-1,33,35,34,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1,40,41,42,-1,42,41,43,-1,43,11,1,-1,42,43,44,-1,44,43,1,-1,44,1,0,-1,37,45,39,-1,39,45,46,-1,39,46,41,-1,41,46,47,-1,41,47,43,-1,43,47,11,-1,47,15,11,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,47,49,15,-1,49,18,15,-1,48,50,49,-1,49,50,18,-1,18,50,20,-1,50,35,20,-1,29,28,51,-1,51,28,52,-1,28,32,52,-1,51,52,53,-1,53,52,54,-1,53,54,55,-1,55,54,56,-1,56,45,37,-1,55,56,57,-1,57,56,37,-1,57,37,36,-1,52,32,58,-1,32,34,58,-1,52,58,54,-1,54,58,59,-1,54,59,56,-1,56,59,45,-1,59,48,45,-1,58,34,60,-1,34,35,60,-1,58,60,59,-1,59,60,48,-1,60,50,48,-1,60,35,50,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([1,0.5,0.985071,0.5,0.985071,0.378732,0.952267,0.349244,0.916025,0.22265,0.833333,0.166667,0.77735,0.0839748,0.650756,0.047733,0.621268,0.0149288,0.5,0.0149288,0.5,0,0.916025,0.5,0.833333,0.333333,0.666667,0.166667,0.5,0.0839748,0.77735,0.5,0.650756,0.349244,0.5,0.22265,0.621268,0.5,0.5,0.378732,0.378732,0.0149288,0.349244,0.047733,0.22265,0.0839748,0.166667,0.166667,0.0839748,0.22265,0.047733,0.349244,0.0149288,0.378732,0.0149288,0.5,0,0.5,0.333333,0.166667,0.166667,0.333333,0.0839748,0.5,0.349244,0.349244,0.22265,0.5,0.378732,0.5,0.621268,0.985071,0.650756,0.952267,0.77735,0.916025,0.833333,0.833333,0.916025,0.77735,0.952267,0.650756,0.985071,0.621268,0.666667,0.833333,0.833333,0.666667,0.650756,0.650756,0.5,0.5,0.0149288,0.621268,0.047733,0.650756,0.0839748,0.77735,0.166667,0.833333,0.22265,0.916025,0.349244,0.952267,0.5,0.916025,0.5,0.985071,0.378732,0.985071,0.5,1,0.166667,0.666667,0.333333,0.833333,0.5,0.77735,0.349244,0.650756,0.5,0.621268])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([10,0,0,9.70142,2.42536,0,9.70142,0,2.42536,9.04534,3.01511,3.01511,8.3205,0,5.547,6.66667,3.33333,6.66667,5.547,0,8.3205,3.01511,3.01511,9.04534,2.42536,0,9.70142,0,2.42536,9.70142,0,0,10,8.3205,5.547,0,6.66667,6.66667,3.33333,3.33333,6.66667,6.66667,0,5.547,8.3205,5.547,8.3205,0,3.01511,9.04534,3.01511,0,8.3205,5.547,2.42536,9.70142,0,0,9.70142,2.42536,0,10,0,-2.42536,0,9.70142,-3.01511,3.01511,9.04534,-5.547,0,8.3205,-6.66667,3.33333,6.66667,-8.3205,0,5.547,-9.04534,3.01511,3.01511,-9.70142,0,2.42536,-9.70142,2.42536,0,-10,0,0,-3.33333,6.66667,6.66667,-6.66667,6.66667,3.33333,-8.3205,5.547,0,-3.01511,9.04534,3.01511,-5.547,8.3205,0,-2.42536,9.70142,0,0,0,-10,0,2.42536,-9.70142,2.42536,0,-9.70142,3.01511,3.01511,-9.04534,5.547,0,-8.3205,6.66667,3.33333,-6.66667,8.3205,0,-5.547,9.04534,3.01511,-3.01511,9.70142,0,-2.42536,0,5.547,-8.3205,3.33333,6.66667,-6.66667,6.66667,6.66667,-3.33333,0,8.3205,-5.547,3.01511,9.04534,-3.01511,0,9.70142,-2.42536,-9.70142,0,-2.42536,-9.04534,3.01511,-3.01511,-8.3205,0,-5.547,-6.66667,3.33333,-6.66667,-5.547,0,-8.3205,-3.01511,3.01511,-9.04534,-2.42536,0,-9.70142,-6.66667,6.66667,-3.33333,-3.33333,6.66667,-6.66667,-3.01511,9.04534,-3.01511])}))}))})])}),

                new Transform({
                  DEF : new SFString("north"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-20.6049,8.24763,-50.0241]),
                      scale : new SFVec3f([54.7476,2.52601,2.52601]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["facade1.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([-0.489138,-0.0146378,11.5976,-0.0146378,11.5976,0.997351,-0.489138,0.997351])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-4,0,0.5,-4,0,0.5,4,0,-0.5,4,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-9.04011,-0.272459,-39.3429]),
                      rotation : new SFRotation([-0.57735,0.57735,0.577351,2.09439]),
                      scale : new SFVec3f([18.1678,127.109,13.3795]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["street.jpg"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([1,3.92238])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-53.6938,-0.502406,-44.0783]),
                      rotation : new SFRotation([1,2.31149e-9,-3.35969e-9,4.71238]),
                      scale : new SFVec3f([58.4709,58.4714,58.4712]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_2"),
                                  url : new MFString(["floor.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              colorPerVertex : new SFBool(false),
                              colorIndex : new MFInt32([0]),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.0496202,0.358289,0.0915849])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                    new Transform({
                      DEF : new SFString("_3"),
                      translation : new SFVec3f([-54.0043,6.12062,-55.7918]),
                      rotation : new SFRotation([0,1,0,0.640408]),
                      scale : new SFVec3f([12.4865,12.4865,12.4867]),
                      scaleOrientation : new SFRotation([0,1,0,0.00276214]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_4"),
                                  url : new MFString(["tree.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-12.8074,0.00000190735,-3.36584]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("_3")})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["haus_01-n.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          colorIndex : new MFInt32([0,1,2,2,-1,4,2,1,3,-1]),
                          texCoordIndex : new MFInt32([0,1,2,3,-1,7,4,5,6,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,5,2,1,4,-1]),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8])})),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([2.55739,0.996263,0.0000120211,0.996263,0.0000120211,-0.0015844,2.55739,-0.0015844,0.00000970776,-0.00127949,0.00000970776,0.994097,1.24836,0.994097,1.24836,-0.00127949])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([29.5541,26.4656,-20,-11.4666,26.4656,-20,-11.4666,-0.2263,-20,29.5541,-0.2263,-20,-11.4666,26.4656,-36.7379,-11.4666,-0.2263,-36.7379])}))}))})])}),

                new Transform({
                  DEF : new SFString("east"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("garage1"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_5"),
                          translation : new SFVec3f([19.7371,2.16003,-3.85951]),
                          rotation : new SFRotation([0,1,0,1.57079]),
                          scale : new SFVec3f([2.31205,2.31205,2.31211]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["door01.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([0,0,5.95157]),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([27.1026,0,19.0319]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_5")})])})])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["wall1.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              colorPerVertex : new SFBool(false),
                              colorIndex : new MFInt32([0,2,1]),
                              texCoordIndex : new MFInt32([0,1,2,3,-1,6,7,5,4,-1,10,11,9,8,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1,0,3,5,4,-1,0,4,7,6,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.652406,0.627838,0.525697,0.0641711,0.0155253,0.0155253,1,0.962342,0.805781])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([-0.11259,1.13924,2.48041,1.13924,2.48041,-0.137963,-0.11259,-0.137963,2.48041,1.59824,2.48041,-0.137963,-0.11259,1.2144,-0.11259,-0.137963,0.0332951,0.561523,0.562214,0.561523,0.0332951,0.0583913,0.562214,0.0583913])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([20,8.80568,5.16677,20,8.80568,-13.1701,20,-0.2263,-13.1701,20,-0.2263,5.16677,37.3178,11.3692,5.16677,37.3178,-0.2263,5.16677,20,8.80568,-12.9189,37.3178,11.3692,-12.9189])}))}))})])}),

                    new Transform({
                      DEF : new SFString("polo"),
                      translation : new SFVec3f([28.3424,-0.226299,10.5008]),
                      rotation : new SFRotation([0,-1,0,1.13355]),
                      scale : new SFVec3f([2.61351,2.6135,2.6135]),
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["pololow.x3d"]),
                          bboxSize : new SFVec3f([2.70251,0.990366,1.34988]),
                          bboxCenter : new SFVec3f([0.0000149608,0.495183,0.00000348687])})])}),

                    new Transform({
                      translation : new SFVec3f([44.8932,-0.272484,-5.14355]),
                      rotation : new SFRotation([-1,0,0,1.5708]),
                      scale : new SFVec3f([12.5261,60.9437,13.3795]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([1,3.92238])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-20.6717,0.280127,24.7572]),
                      scale : new SFVec3f([2.23786,2.23786,2.23786]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_6"),
                                  url : new MFString(["haus_03-n.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([2,0,0,1,-1]),
                              coordIndex : new MFInt32([3,0,1,2,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([5.5278,0.99903,5.5278,-0.00460631,2.8031,-0.00460631,2.76392,0.99903])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([32.0172,14.2987,-20,32.0172,-0.2263,-20,32.0172,-0.2263,-0.28352,32.0172,14.2987,0])}))}))})])}),

                    new Transform({
                      DEF : new SFString("graffity"),
                      translation : new SFVec3f([19.9426,3.61878,1.21196]),
                      rotation : new SFRotation([0,1,0,4.71239]),
                      scale : new SFVec3f([7.4409,7.4409,7.44095]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["graffity.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("west"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("baum"),
                      translation : new SFVec3f([-24.1792,5.43011,19.6274]),
                      scale : new SFVec3f([11.3128,11.3128,11.3129]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_4")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,-0.00000149012,-0.499999,-0.499998,5.9605e-8,-0.499999,0.499998,5.9605e-8,0.499999,0.499998,-0.00000149012,0.499999,-0.499998,-0.387503,-0.499999,0.315972,0.387505,-0.499999,-0.315976,0.387505,0.5,-0.315976,-0.387503,0.5,0.315972,-0.315976,-0.499999,-0.387503,0.315976,-0.499999,0.3875,0.315976,0.499999,0.3875,-0.315976,0.499999,-0.387503])}))}))})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_6")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          colorIndex : new MFInt32([0,0,2,1,-1,2,4,3,1,-1,4,0,0,3,-1]),
                          coordIndex : new MFInt32([0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1]),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8])})),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.0000137347,-0.00177666,2.7794,-0.00177666,2.7794,0.996798,0.0000137347,0.996798,0.0000137347,0.908914,2.7794,0.908915,0.0000137347,0.952856,2.7794,0.952856])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-35.7534,-0.2263,20,-35.7534,-0.2263,-20,-38.6991,30.7826,-20,-38.6991,30.7826,20,-35.7534,26.3015,20,-35.7534,26.3016,-20,-35.9597,26.6154,20,-35.9597,26.6154,-20])}))}))})])}),

                new Transform({
                  DEF : new SFString("center"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("feld"),
                      translation : new SFVec3f([-0.0194635,3.20683,-0.660883]),
                      rotation : new SFRotation([1,0.00000126533,-0.00000117221,1.5708]),
                      scale : new SFVec3f([1.0993,0.658338,0.321448]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["fieldlines.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([2,3,0,1,-1,3,2,0,0,-1]),
                              coordIndex : new MFInt32([0,5,4,1,-1,5,2,3,4,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,0.336898,0.0498863,0.0954848,0.336898,0,0,0.0695187,0.010294,0.292576,0.40107,0.134587,0.0162257,0.283422,0])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.996149,0.999547,0.999547,0.000452906,1,1,1,0,0.00385121,0.000452906,0.0106477,0.999547,0.5,0.5,0.5,0.5,0,0.5,1,0.5])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10,0,-10,10,0,10,10])}))}))})])}),

                    new Transform({
                      DEF : new SFString("ad"),
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["ad.x3d"]),
                          bboxSize : new SFVec3f([22.025,1.045,12.7965]),
                          bboxCenter : new SFVec3f([-0.00000429153,0.519136,-0.482112])})])}),

                    new Transform({
                      DEF : new SFString("floor"),
                      translation : new SFVec3f([-9.41641,0,0]),
                      scale : new SFVec3f([1.24067,1,1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([0,0,0,5,-1,0,0,3,5,-1,0,0,5,3,-1,0,0,0,5,-1,0,0,3,4,-1,3,0,2,4,-1,1,1,4,2,-1,1,1,0,4,-1,1,1,1,1,-1,1,0,0,1,-1,0,0,1,0,-1,0,1,1,1,-1,2,0,1,2,-1,1,1,1,2,-1,1,1,2,1,-1,1,1,2,2,-1]),
                              texCoordIndex : new MFInt32([10,8,16,14,-1,16,7,11,14,-1,4,17,13,11,-1,17,3,10,13,-1,18,4,12,22,-1,12,6,20,22,-1,9,23,21,20,-1,23,2,18,21,-1,24,5,28,26,-1,28,7,15,26,-1,8,29,25,15,-1,29,0,24,25,-1,19,6,27,32,-1,27,5,30,32,-1,1,33,31,30,-1,33,9,19,31,-1]),
                              coordIndex : new MFInt32([9,7,12,11,-1,12,6,10,11,-1,4,13,11,10,-1,13,1,9,11,-1,14,4,10,16,-1,10,6,15,16,-1,8,17,16,15,-1,17,3,14,16,-1,18,5,20,19,-1,20,6,12,19,-1,7,21,19,12,-1,21,0,18,19,-1,15,6,20,23,-1,20,5,22,23,-1,2,24,23,22,-1,24,8,15,23,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.957219,0.802136,0.631533,0.256684,0.220422,0.156464,0.238502,0.256684,0.155867,0.854632,0.919786,0.558524,0.472035,0.508021,0.308487,0.754011,0.679117,0.487289])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([1,1,0,1,0,0,1,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([39.1252,-0.2263,-30.2671,39.1252,-0.2263,25.1494,-36.2811,-0.2263,-30.2671,-36.2811,-0.2263,25.1494,1.42204,-0.2263,25.1494,1.42204,-0.2263,-30.2671,1.42204,-0.2263,-2.55886,39.1252,-0.2263,-2.55886,-36.2811,-0.2263,-2.55886,39.1252,-0.2263,11.2953,1.42204,-0.2263,11.2953,20.2736,-0.2263,11.2953,20.2736,-0.2263,-2.55886,20.2736,-0.2263,25.1494,-17.4296,-0.2263,25.1494,-17.4296,-0.2263,-2.55886,-17.4296,-0.2263,11.2953,-36.2811,-0.2263,11.2953,20.2736,-0.2263,-30.2671,20.2736,-0.2263,-16.413,1.42204,-0.2263,-16.413,39.1252,-0.2263,-16.413,-17.4296,-0.2263,-30.2671,-17.4296,-0.2263,-16.413,-36.2811,-0.2263,-16.413])}))}))})])}),

                    new Transform({
                      DEF : new SFString("garage2"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["door01.jpg"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              colorIndex : new MFInt32([0,0,0,0,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0.641711,0.550595,0.446424])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([-0.00627545,0.987725,1.99156,0.98773,1.99156,0.0000947937,-0.00627545,0.0000947937])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-11.0737,5.43062,-8.40596,-11.0737,5.43064,-18.8189,-11.0737,0.00509359,-18.8189,-11.0737,0.00506875,-8.40598])}))}))}),

                        new Transform({
                          DEF : new SFString("schuppen"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["brick1.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  colorIndex : new MFInt32([0,2,2,-1,0,0,2,-1,2,1,2,2,-1,1,2,0,-1,2,0,0,-1,3,3,3,3,-1,2,2,2,2,-1]),
                                  texCoordIndex : new MFInt32([4,6,7,-1,4,5,6,-1,3,2,7,6,-1,2,3,0,-1,3,1,0,-1,8,12,13,14,-1,15,9,11,10,-1]),
                                  coordIndex : new MFInt32([5,4,7,-1,5,6,4,-1,1,3,7,4,-1,3,1,0,-1,1,2,0,-1,8,9,7,3,-1,7,9,11,10,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.299465,0.256944,0.208331,0.390374,0.334945,0.271575,0.641711,0.550595,0.446424,0.0641711,0.0155253,0.0155253])})),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([6.38503,0.0870536,3.42261,0.0870536,6.38503,1.46927,3.42261,0.77816,0.0760661,0.0870536,1.19158,0.0870536,1.19158,0.77816,0.0760661,1.46927,0.717518,1.05635,2.84544,1.46661,0.070678,0.0894595,2.84544,0.0894595,0.724231,0.214736,1.06927,0.216736,1.06256,1.05835,0.070678,1.46661])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([20,0.0000295639,-6.90226,5.47098,3.21451,-6.90222,5.47098,0.0000276566,-6.90223,20,6.429,-6.90224,-5.47102,3.21451,-6.90219,-10.942,0.000026226,-6.90219,-5.47102,0.0000267029,-6.9022,-10.942,6.429,-6.90217,20,6.42903,-20.2345,-10.942,6.42903,-20.2345,-10.942,0.00506508,-6.90219,-10.942,0.00509703,-20.2345])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("elsen"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([11.7994,-0.2263,-0.123905]),
                          children : new MFNode([
                            new Inline({
                              url : new MFString(["people.x3d"]),
                              bboxSize : new SFVec3f([5,4.08028,5])})])}),

                        new Transform({
                          translation : new SFVec3f([11.0723,-0.226301,7.03137]),
                          children : new MFNode([
                            new Inline({
                              url : new MFString(["people.x3d"]),
                              bboxSize : new SFVec3f([5,4.08028,5])})])}),

                        new Transform({
                          translation : new SFVec3f([-8.08885,6.429,-7.39652]),
                          children : new MFNode([
                            new Inline({
                              url : new MFString(["people.x3d"]),
                              bboxSize : new SFVec3f([5,4.08028,5])})])}),

                        new Transform({
                          translation : new SFVec3f([-13.3847,-0.217765,6.80872]),
                          children : new MFNode([
                            new Inline({
                              url : new MFString(["people.x3d"]),
                              bboxSize : new SFVec3f([5,4.08028,5])})])}),

                        new Transform({
                          translation : new SFVec3f([-13.2207,-0.226299,5.17212]),
                          children : new MFNode([
                            new Inline({
                              url : new MFString(["people.x3d"]),
                              bboxSize : new SFVec3f([5,4.08028,5])})])})])})])})])}),

            new DirectionalLight({
              DEF : new SFString("Light2"),
              ambientIntensity : new SFFloat(0.5),
              direction : new SFVec3f([-0.510897,-0.56047,-0.651811])})])}))});
console.log(X3D0.toXMLNode());
