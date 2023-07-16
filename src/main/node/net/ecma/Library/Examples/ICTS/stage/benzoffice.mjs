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
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:58 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:58 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("sceneNC"),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      DEF : new SFString("scene"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("reflection"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("room_1"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-6.5536,-8.74551,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.390805),
                                              diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                              shininess : new SFFloat(0.56383)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("polySurface5_0Geo_1"),
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          creaseAngle : new SFFloat(1.4776),
                                          coordIndex : new MFInt32([1,5,0,-1,3,1,2,-1,1,4,5,-1,1,3,4,-1,7,8,3,2,-1,8,9,4,3,-1,9,10,5,4,-1,10,6,0,5,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("polySurface5GeoPoints_1"),
                                              point : new MFVec3f([-23.131,12.014,23.131,-23.131,12.014,-23.131,23.131,12.014,-23.131,-4.508,12.014,-15.082,-10.745,12.014,-10.677,-14.27,12.014,-4.845,-23.131,11.512,23.131,23.131,11.512,-23.131,-4.508,11.512,-15.082,-10.745,11.512,-10.677,-14.27,11.512,-4.845])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,-11.5174,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_1"),
                                              url : new MFString(["roof.jpg"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("polySurface2_1Geo_1"),
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          texCoordIndex : new MFInt32([4,2,7,-1,2,8,7,-1,8,5,7,-1,8,3,5,-1,0,6,5,-1,0,9,6,-1,9,4,6,-1,9,1,4,-1]),
                                          coordIndex : new MFInt32([12,6,14,-1,6,15,14,-1,15,13,14,-1,15,5,13,-1,4,14,13,-1,4,16,14,-1,16,12,14,-1,16,7,12,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([-6.03655,5.74129,-6.03655,-5.17825,7.03655,-5.17825,7.03655,5.74129,0.5,-5.17825,0.5,5.74129,0.5,0.28152,0.5,0.28152,7.03655,0.28152,-6.03655,0.28152])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("polySurface2GeoPoints_1"),
                                              point : new MFVec3f([59.034,0,-23.131,-23.131,0,-23.131,-23.131,0,23.131,59.034,0,23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,59.034,18.734,23.131,-8.211,0.01,23.131,-8.211,4.457,23.131,-3.81,4.457,23.131,-3.81,0.01,23.131,17.9515,18.734,23.131,17.9515,18.734,-23.131,17.9515,18.734,0,-23.131,18.734,0,59.034,18.734,0])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_2"),
                                              ambientIntensity : new SFFloat(0.390805),
                                              diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                              shininess : new SFFloat(0.56383)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("polySurface2_0Geo_1"),
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([4,1,5,-1,4,3,1,-1,0,2,5,-1,2,4,5,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("polySurface2GeoPoints_2"),
                                              point : new MFVec3f([-23.131,0.00999832,-23.131,-23.131,0.00999832,23.131,-23.131,-18.724,-23.131,-23.131,-18.724,23.131,-23.131,-18.724,0,-23.131,0.00999832,0])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_2")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([0,1,2,-1,3,0,2,-1,4,5,3,-1,4,3,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-23.131,0.00999832,23.131,-23.131,-18.724,23.131,17.9515,-18.724,23.131,17.9515,0.00999832,23.131,59.034,-18.724,23.131,59.034,0.00999832,23.131])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_2")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,4,0,3,-1,5,4,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([59.034,-18.724,0,59.034,-18.724,-23.131,59.034,0.00999832,-23.131,59.034,0.00999832,0,59.034,-18.724,23.131,59.034,0.00999832,23.131])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_2")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          ccw : new SFBool(false),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,4,0,3,-1,5,4,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([17.9515,-18.724,-23.131,-23.131,-18.724,-23.131,-23.131,0.00999832,-23.131,17.9515,0.00999832,-23.131,59.034,-18.724,-23.131,59.034,0.00999832,-23.131])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,-1.23461,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_1")})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("polySurface2_1Geo"),
                                          convex : new SFBool(false),
                                          texCoordIndex : new MFInt32([4,8,7,-1,4,2,8,-1,9,1,6,-1,1,4,6,-1,8,3,7,-1,3,5,7,-1,0,9,5,-1,9,6,5,-1]),
                                          coordIndex : new MFInt32([12,15,14,-1,12,6,15,-1,16,7,14,-1,7,12,14,-1,15,5,14,-1,5,13,14,-1,4,16,13,-1,16,14,13,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([-6.03655,5.74129,-6.03655,-5.17825,7.03655,-5.17825,7.03655,5.74129,0.5,-5.17825,0.5,5.74129,0.5,0.28152,0.5,0.28152,7.03655,0.28152,-6.03655,0.28152])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("polySurface2GeoPoints_3"),
                                              point : new MFVec3f([59.034,0,-23.131,-23.131,0,-23.131,-23.131,0,23.131,59.034,0,23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,59.034,18.734,23.131,-8.211,0.01,23.131,-8.211,4.457,23.131,-3.81,4.457,23.131,-3.81,0.01,23.131,17.9515,18.734,23.131,17.9515,18.734,-23.131,17.9515,18.734,0,-23.131,18.734,0,59.034,18.734,0])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("gal"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("plants_ref"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-5.17793,-2.8372,-6.74427]),
                                      rotation : new SFRotation([-0.000265379,0.999999,-0.00127876,0.409254]),
                                      scale : new SFVec3f([0.900709,1.03695,0.900715]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_3"),
                                                  url : new MFString(["r1.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,1.67704,7.73589e-11,0.5,1.67704,7.7345e-11,0.5,-1.85536,-3.54217e-11,-0.5,-1.85536,-3.54103e-11,0.0000255108,1.67703,-0.500016,0.0000239611,1.67703,0.499978,0.0000240207,-1.85536,0.499978,0.0000255704,-1.85536,-0.500016])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-8.2971,-2.81919,-5.85014]),
                                      rotation : new SFRotation([-0.000265861,0.999999,-0.00121068,0.432338]),
                                      scale : new SFVec3f([0.999999,1.15126,1]),
                                      scaleOrientation : new SFRotation([-1.16435e-7,-1,-1.67335e-7,0.0825731]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_3")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,1.87751,4.88158e-9,0.5,1.87751,4.88157e-9,0.5,-1.65489,-4.58321e-9,-0.5,-1.65489,-4.58321e-9,-6.25849e-7,1.87751,0.49999,-0.00000616908,1.87751,-0.500011,-0.00000694394,-1.65488,-0.500011,-0.00000140071,-1.65488,0.49999])}))}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,-4.38818,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_4"),
                                              ambientIntensity : new SFFloat(0.390805),
                                              diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                              shininess : new SFFloat(0.56383)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("pCube5_0Geo_1"),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,1,7,5,3,-1,6,0,2,4,-1,8,9,10,11,-1,12,8,11,13,-1,13,14,15,12,-1,9,15,14,10,-1,16,17,18,19,-1,20,16,19,21,-1,21,22,23,20,-1,17,23,22,18,-1,24,25,26,27,-1,28,24,27,29,-1,29,30,31,28,-1,25,31,30,26,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("pCube5GeoPoints_1"),
                                              point : new MFVec3f([3.185,-0.001,-17.978,4.172,-0.001,-18.134,3.185,12.032,-17.978,4.172,12.032,-18.134,3.028,12.032,-18.966,4.016,12.032,-19.122,3.028,-0.001,-18.966,4.016,-0.001,-19.122,-14.925,-0.001,-5.03,-14.422,-0.001,-5.895,-14.422,12.032,-5.895,-14.925,12.032,-5.03,-15.789,-0.001,-5.532,-15.789,12.032,-5.532,-15.287,12.032,-6.397,-15.287,-0.001,-6.397,-11.32,-0.001,-10.8,-10.565,-0.001,-11.457,-10.565,12.032,-11.457,-11.32,12.032,-10.8,-11.976,-0.001,-11.555,-11.976,12.032,-11.555,-11.222,12.032,-12.211,-11.222,-0.001,-12.211,-5.019,-0.001,-15.46,-4.111,-0.001,-15.879,-4.111,12.032,-15.879,-5.019,12.032,-15.46,-5.438,-0.001,-16.368,-5.438,12.032,-16.368,-4.53,12.032,-16.787,-4.53,-0.001,-16.787])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([0,-3.60064,0]),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-6.74039,1.72336,-8.79702]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_5"),
                                                  url : new MFString(["poster1.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([1,-1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,3,-1,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-10.0241,1.72336,-8.79703]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_6"),
                                                  url : new MFString(["nposter5.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([1,-1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,3,-1,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-13.3971,1.72336,-8.79703]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_7"),
                                                  url : new MFString(["poster2.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([1,-1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,3,-1,1,2,3,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-14.9196,1.72336,-5.32461]),
                                      rotation : new SFRotation([0,-1,0,1.5708]),
                                      scale : new SFVec3f([4.00263,2.56721,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_8"),
                                                  url : new MFString(["nposter4.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([-1,-1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("room"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([32.5722,-3.83645,-116.626]),
                              rotation : new SFRotation([0,-1,0,1.5708]),
                              scale : new SFVec3f([2.78587,2.78671,2.78667]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0]),
                                          emissiveColor : new SFColor([0.904255,0.837211,0.674252]),
                                          shininess : new SFFloat(0)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("polySurface4_0Geo_1"),
                                      ccw : new SFBool(false),
                                      convex : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,1,12,13,-1,12,9,14,-1,10,15,16,-1,15,6,17,-1,18,19,20,-1,7,21,22,-1,21,18,23,-1,19,24,25,-1,24,3,26,-1,27,28,29,-1,30,31,32,-1,4,33,34,-1,33,30,35,-1,31,36,37,-1,36,27,38,-1,39,40,41,-1,28,42,43,-1,42,39,44,-1,40,45,46,-1,45,0,47,-1,2,47,0,-1,5,26,3,-1,8,17,6,-1,11,14,9,-1,13,2,1,-1,14,13,12,-1,16,11,10,-1,17,16,15,-1,20,23,18,-1,22,8,7,-1,23,22,21,-1,25,20,19,-1,26,25,24,-1,29,38,27,-1,32,35,30,-1,34,5,4,-1,35,34,33,-1,37,32,31,-1,38,37,36,-1,41,44,39,-1,43,29,28,-1,44,43,42,-1,46,41,40,-1,47,46,45,-1,48,18,49,-1,50,1,51,-1,52,36,53,-1,49,1,50,-1,51,36,52,-1,53,18,48,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("polySurface4GeoPoints_1"),
                                          point : new MFVec3f([44.719,2.986,9.083,44.719,3.011,8.893,44.719,3.052,8.893,44.719,1.568,8.703,44.719,1.543,8.893,44.719,1.502,8.893,44.719,2.467,8.184,44.719,2.277,8.159,44.719,2.277,8.118,44.719,2.912,8.526,44.719,2.796,8.374,44.719,2.825,8.345,44.719,2.986,8.703,44.719,3.025,8.693,44.719,2.948,8.506,44.719,2.644,8.258,44.719,2.664,8.222,44.719,2.477,8.145,44.719,1.91,8.258,44.719,1.758,8.374,44.719,1.729,8.345,44.719,2.087,8.184,44.719,2.076,8.145,44.719,1.889,8.222,44.719,1.641,8.526,44.719,1.606,8.506,44.719,1.528,8.693,44.719,2.087,9.602,44.719,2.277,9.627,44.719,2.277,9.668,44.719,1.641,9.26,44.719,1.758,9.412,44.719,1.729,9.441,44.719,1.568,9.083,44.719,1.528,9.094,44.719,1.606,9.281,44.719,1.91,9.529,44.719,1.889,9.564,44.719,2.076,9.642,44.719,2.644,9.529,44.719,2.796,9.412,44.719,2.825,9.441,44.719,2.467,9.602,44.719,2.477,9.642,44.719,2.664,9.564,44.719,2.912,9.26,44.719,2.948,9.281,44.719,3.025,9.094,44.719,2.277,8.893,44.719,2.323,8.801,44.719,2.277,8.893,44.719,2.323,8.986,44.719,2.277,8.893,44.719,2.184,8.893])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                              scale : new SFVec3f([0.365073,0.365073,0.365073]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("_9"),
                                          ambientIntensity : new SFFloat(0.390805),
                                          diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                          shininess : new SFFloat(0.56383)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("polySurface2_0Geo"),
                                      convex : new SFBool(false),
                                      colorIndex : new MFInt32([1,0,2,-1,1,0,0,-1,0,0,2,-1,0,1,2,-1]),
                                      coordIndex : new MFInt32([4,0,5,-1,4,2,0,-1,1,3,5,-1,3,4,5,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.925532,0.889742,0.782371,0.925532,0.889742,0.782371,0.925532,0.889742,0.782371])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("polySurface2GeoPoints"),
                                          point : new MFVec3f([59.034,0,-23.131,59.034,0,23.131,59.034,18.734,-23.131,59.034,18.734,23.131,59.034,18.734,0,59.034,0,0])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                              scale : new SFVec3f([0.365073,0.365073,0.365073]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      convex : new SFBool(false),
                                      colorIndex : new MFInt32([0,0,0,1,-1,2,0,1,-1,2,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,1,-1,0,2,1,-1]),
                                      coordIndex : new MFInt32([5,2,1,8,-1,9,5,8,-1,9,7,5,-1,0,2,3,-1,0,1,2,-1,4,6,8,-1,6,9,8,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.925532,0.889742,0.782371,0.925532,0.889742,0.782371,0.925532,0.889742,0.782371])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-23.131,0,23.131,-23.131,18.734,23.131,-8.211,8.19475,23.131,-8.211,0.01,23.131,59.034,18.734,23.131,6.59861,8.19475,23.131,59.034,0,23.131,6.59861,0.01,23.131,17.9515,18.734,23.131,17.9479,0.00783556,23.131])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                              scale : new SFVec3f([0.365073,0.365073,0.365073]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      convex : new SFBool(false),
                                      colorIndex : new MFInt32([3,2,4,-1,3,2,2,-1,0,1,4,-1,1,3,4,-1]),
                                      coordIndex : new MFInt32([4,3,5,-1,4,2,3,-1,0,1,5,-1,1,4,5,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.433155,0.416405,0.366155,0.342246,0.329011,0.289308,0.925532,0.889742,0.782371,0.633889,0.609377,0.535839,0.679343,0.653073,0.574263])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-23.131,0,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,-23.131,0,23.131,-23.131,18.734,0,-23.131,0,0])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                              scale : new SFVec3f([0.365073,0.365073,0.365073]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("_9")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      convex : new SFBool(false),
                                      colorIndex : new MFInt32([3,2,4,-1,3,1,2,-1,0,0,4,-1,0,3,4,-1]),
                                      coordIndex : new MFInt32([4,3,5,-1,4,2,3,-1,0,1,5,-1,1,4,5,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.925532,0.889742,0.782371,0.342246,0.329011,0.289308,0.433155,0.416405,0.366155,0.633889,0.609376,0.535839,0.679343,0.653073,0.574263])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([59.034,0,-23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,0,-23.131,17.9515,18.734,-23.131,17.9515,0,-23.131])}))}))})])})])}),

                        new Transform({
                          DEF : new SFString("floors"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("floorB"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("nrf"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("noref-floor"),
                                      translation : new SFVec3f([-6.5536,-0.034449,-0.433264]),
                                      scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0.0896695,0.159561,0.468085]),
                                                  shininess : new SFFloat(0.606383)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              convex : new SFBool(false),
                                              coordIndex : new MFInt32([16,2,21,-1,2,20,21,-1,20,15,21,-1,20,5,15,-1,6,16,12,-1,16,21,12,-1,21,7,12,-1,21,15,7,-1,3,17,23,-1,17,22,23,-1,22,5,23,-1,22,15,5,-1,17,8,22,-1,8,24,22,-1,8,19,24,-1,19,25,24,-1,25,7,24,-1,25,18,7,-1,19,11,25,-1,11,26,25,-1,26,18,25,-1,26,10,18,-1,11,29,26,-1,29,28,26,-1,29,1,28,-1,1,27,28,-1,27,30,28,-1,27,4,30,-1,30,10,28,-1,10,26,28,-1,12,18,31,-1,12,7,18,-1,18,10,31,-1,10,13,31,-1,9,32,13,-1,32,31,13,-1,32,6,31,-1,6,12,31,-1,33,9,34,-1,9,13,34,-1,30,13,10,-1,30,34,13,-1,14,33,34,-1,14,0,33,-1,30,4,34,-1,4,14,34,-1,24,7,22,-1,7,15,22,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([59.034,0,23.131,23.131,0,23.131,59.034,0,-23.131,23.131,0,-23.131,41.0825,0,23.131,41.0825,0,-23.131,59.034,0,0,41.0825,0,0,23.131,0,0,59.034,0,11.5655,41.0825,0,11.5655,23.131,0,11.5655,50.0583,0,0,50.0583,0,11.5655,50.0583,0,23.131,41.0825,0,-11.5655,59.034,0,-11.5655,23.131,0,-11.5655,41.0825,0,5.78275,23.131,0,5.78275,50.0583,0,-23.131,50.0583,0,-11.5655,32.1068,0,-11.5655,32.1068,0,-23.131,32.1068,0,0,32.1068,0,5.78275,32.1068,0,11.5655,32.1068,0,23.131,32.1068,0,17.3483,23.131,0,17.3483,41.0825,0,17.3483,50.0583,0,5.78275,59.034,0,5.78275,59.034,0,17.3483,50.0583,0,17.3483])}))}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([1.95083,0.00231598,-0.407617]),
                                  rotation : new SFRotation([0,-1,0,1.5708]),
                                  scale : new SFVec3f([8.59521,0.0151827,0.144826]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0.390805),
                                              diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                              shininess : new SFFloat(0.56383)}))})),
                                      geometry : new SFNode(
                                        new Box({}))})])}),

                                new Transform({
                                  DEF : new SFString("starfloor"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([3.24541,-1.11759e-8,-10.9982]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("_10"),
                                          translation : new SFVec3f([9.06877,0.014651,4.51087]),
                                          rotation : new SFRotation([-1,0,0,1.5708]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      DEF : new SFString("_11"),
                                                      url : new MFString(["light9.png"])}))})),
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
                                      translation : new SFVec3f([0.416451,-1.22935e-7,-11.5522]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-4.74609,1.84402e-7,-10.8872]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-1.98544,-2.16067e-7,-10.0091]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-0.484684,7.45058e-9,-8.51605]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([1.72608,-3.91155e-8,-7.18572]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-0.440131,-5.40167e-8,-5.95125]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-3.06324,-5.40167e-8,-7.46568]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-5.82266,1.67638e-8,-8.21252]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-4.47513,-5.40167e-8,-5.47814]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-6.28408,6.33299e-8,-4.25426]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-6.0052,1.67638e-8,-0.417779]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-4.40948,-2.30968e-7,-1.8676]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-1.54821,2.45869e-7,-3.65906]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-2.53489,3.72529e-9,-0.992168]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      translation : new SFVec3f([-3.95267,2.45869e-7,1.93201]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])}),

                                    new Transform({
                                      USE : new SFString("_10")}),

                                    new Transform({
                                      translation : new SFVec3f([1.32881,-9.31323e-7,2.37374]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("_10")})])})])})])}),

                            new Transform({
                              DEF : new SFString("floorR"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("star_1"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("star"),
                                      translation : new SFVec3f([-6.5536,-0.0215012,-0.433849]),
                                      scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0.454242,0.785068,1]),
                                                  emissiveColor : new SFColor([0.0676531,0.116925,0.148936]),
                                                  shininess : new SFFloat(0.606383),
                                                  transparency : new SFFloat(0.297872)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              ccw : new SFBool(false),
                                              convex : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,4,6,7,-1,7,5,4,-1,8,7,6,-1,6,9,8,-1,9,10,11,-1,11,8,9,-1,10,12,13,-1,13,11,10,-1,14,13,12,-1,12,15,14,-1,15,16,17,-1,17,14,15,-1,18,17,16,-1,16,19,18,-1,19,20,21,-1,21,18,19,-1,22,21,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,26,24,25,-1,25,27,26,-1,28,26,27,-1,27,29,28,-1,29,30,31,-1,31,28,29,-1,32,31,30,-1,30,33,32,-1,34,32,33,-1,33,35,34,-1,35,36,37,-1,37,34,35,-1,38,37,36,-1,36,39,38,-1,39,40,41,-1,41,38,39,-1,40,42,43,-1,43,41,40,-1,44,0,3,-1,3,45,44,-1,46,44,45,-1,42,46,47,-1,45,47,46,-1,47,43,42,-1,48,49,50,-1,50,49,51,-1,51,52,53,-1,53,52,54,-1,55,56,48,-1,54,56,55,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([3.968,0,15.084,5.612,0,13.823,5.925,0,14.136,4.19,0,15.467,6.873,0,12.179,7.257,0,12.4,7.666,0,10.265,8.094,0,10.379,8.38,0,8.211,7.937,0,8.211,7.666,0,6.157,8.094,0,6.042,6.873,0,4.243,7.257,0,4.021,5.925,0,2.285,5.612,0,2.599,3.968,0,1.338,4.19,0,0.954,2.169,0,0.117,2.054,0,0.545,0,0,0.274,0,0,-0.169,-2.169,0,0.117,-2.054,0,0.545,-4.19,0,0.954,-3.968,0,1.338,-5.925,0,2.285,-5.612,0,2.599,-7.257,0,4.021,-6.873,0,4.243,-7.666,0,6.157,-8.094,0,6.042,-8.38,0,8.211,-7.937,0,8.211,-8.094,0,10.379,-7.666,0,10.265,-6.873,0,12.179,-7.257,0,12.4,-5.925,0,14.136,-5.612,0,13.823,-3.968,0,15.084,-4.19,0,15.467,-2.054,0,15.877,-2.169,0,16.305,2.054,0,15.877,2.169,0,16.305,0,0,16.147,0,0,16.591,-1,0,7.711,0,0,0.274,0,0,8.211,1,0,7.711,6.873,0,12.179,0,0,8.211,0,0,9.211,0,0,8.211,-6.873,0,12.179])}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("floor"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("rfloor"),
                                      translation : new SFVec3f([-6.5536,-0.0215012,-0.433264]),
                                      scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0.0143484,0.043022,0.287234]),
                                                  shininess : new SFFloat(0.606383),
                                                  transparency : new SFFloat(0.0957447)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("polySurface1_0Geo"),
                                              ccw : new SFBool(false),
                                              convex : new SFBool(false),
                                              coordIndex : new MFInt32([2,48,2,48,50,-1,48,46,50,-1,46,43,50,-1,43,42,50,-1,42,40,50,-1,40,37,50,-1,37,36,50,-1,36,34,50,-1,34,31,51,-1,31,30,51,-1,30,28,51,-1,28,25,51,-1,25,24,51,-1,24,22,51,-1,22,19,51,-1,19,18,51,-1,18,16,52,-1,16,13,52,-1,13,12,52,-1,12,10,52,-1,10,7,52,-1,7,6,52,-1,6,3,52,-1,3,2,52,-1,49,5,53,-1,47,49,53,-1,44,47,53,-1,45,44,53,-1,41,45,53,-1,38,41,53,-1,39,38,54,-1,35,39,54,-1,32,35,54,-1,33,32,54,-1,29,33,54,-1,26,29,54,-1,27,26,55,-1,23,27,55,-1,20,23,55,-1,21,20,55,-1,17,21,55,-1,14,17,55,-1,15,14,56,-1,11,15,56,-1,8,11,56,-1,9,8,56,-1,4,9,56,-1,5,4,56,-1,74,75,76,-1,1,74,76,-1,1,73,74,-1,75,60,76,-1,75,59,60,-1,26,78,55,-1,26,79,78,-1,26,72,79,-1,26,54,72,-1,56,82,66,-1,82,62,66,-1,82,61,62,-1,5,56,64,-1,56,66,64,-1,53,64,68,-1,53,5,64,-1,53,70,59,-1,53,68,70,-1,70,60,59,-1,70,63,60,-1,38,53,75,-1,53,59,75,-1,54,75,74,-1,54,38,75,-1,73,54,74,-1,73,72,54,-1,71,0,70,-1,0,63,70,-1,69,70,68,-1,69,71,70,-1,65,69,64,-1,69,68,64,-1,67,64,66,-1,67,65,64,-1,62,67,66,-1,62,57,67,-1,81,77,83,-1,83,61,82,-1,14,82,56,-1,14,55,81,-1,81,83,84,-1,83,82,84,-1,14,84,82,-1,14,81,84,-1,78,81,55,-1,78,80,81,-1,80,58,81,-1,58,77,81,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("polySurface1GeoPoints"),
                                                  point : new MFVec3f([23.131,0,-23.131,23.131,0,23.131,0,0,0.274,-2.054,0,0.545,-2.169,0,0.117,0,0,-0.169,-3.968,0,1.338,-5.612,0,2.599,-5.925,0,2.285,-4.19,0,0.954,-6.873,0,4.243,-7.257,0,4.021,-7.666,0,6.157,-7.937,0,8.211,-8.38,0,8.211,-8.094,0,6.042,-7.666,0,10.265,-8.094,0,10.379,-6.873,0,12.179,-5.612,0,13.823,-5.925,0,14.136,-7.257,0,12.4,-3.968,0,15.084,-4.19,0,15.467,-2.054,0,15.877,0,0,16.147,0,0,16.591,-2.169,0,16.305,2.054,0,15.877,2.169,0,16.305,3.968,0,15.084,5.612,0,13.823,5.925,0,14.136,4.19,0,15.467,6.873,0,12.179,7.257,0,12.4,7.666,0,10.265,7.937,0,8.211,8.38,0,8.211,8.094,0,10.379,7.666,0,6.157,8.094,0,6.042,6.873,0,4.243,5.612,0,2.599,5.925,0,2.285,7.257,0,4.021,3.968,0,1.338,4.19,0,0.954,2.054,0,0.545,2.169,0,0.117,1,0,7.711,0,0,9.211,-1,0,7.711,8.38,0,-0.169,8.38,0,16.591,-8.38,0,16.591,-8.38,0,-0.169,-23.131,0,-23.131,-23.131,0,23.131,14.4499,0,0,23.131,0,0,-23.131,0,-0.169001,-23.131,0,-11.65,23.131,0,-11.5655,0.0208912,0,-11.6077,0.0208931,0,-23.131,-11.5551,0,-11.6289,-11.5551,0,-23.131,8.40087,0,-11.5924,8.40087,0,-23.131,14.4711,0,-11.5813,14.4711,0,-23.131,8.38,0,23.131,14.4499,0,23.131,14.4499,0,16.591,14.4499,0,8.211,23.131,0,11.5655,-23.131,0,16.591,-8.38,0,23.131,0,0,23.131,-15.7555,0,23.131,-15.7555,0,16.591,-15.7555,0,-0.169,-23.131,0,8.211,-15.7555,0,8.211])}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("glows"),
                                  translation : new SFVec3f([-9.81505,0.00879847,-6.81543]),
                                  rotation : new SFRotation([0,-1,0,0.903278]),
                                  scale : new SFVec3f([1,0.999999,1]),
                                  children : new MFNode([
                                    new Collision({
                                      enabled : new SFBool(false),
                                      proxy : new SFNode(
                                        new Transform({
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([3.24541,-1.11759e-8,-10.9982]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("_12"),
                                                  translation : new SFVec3f([9.06877,-0.0171127,4.51087]),
                                                  rotation : new SFRotation([1,0,0,4.71239]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              USE : new SFString("_11")}))})),
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
                                              translation : new SFVec3f([0.416451,-1.22935e-7,-11.5522]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-4.74609,1.84402e-7,-10.8872]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-1.98544,-2.16067e-7,-10.0091]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-0.484684,7.45058e-9,-8.51605]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([1.72608,-3.91155e-8,-7.18572]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-0.440131,-5.40167e-8,-5.95125]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-3.06324,-5.40167e-8,-7.46568]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-5.82266,1.67638e-8,-8.21252]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-4.47513,-5.40167e-8,-5.47814]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-6.28408,6.33299e-8,-4.25426]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-6.0052,1.67638e-8,-0.417779]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-4.40948,-2.30968e-7,-1.8676]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-1.54821,2.45869e-7,-3.65906]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-2.53489,3.72529e-9,-0.992168]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              translation : new SFVec3f([-3.95267,2.45869e-7,1.93201]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])}),

                                            new Transform({
                                              USE : new SFString("_12")}),

                                            new Transform({
                                              translation : new SFVec3f([1.32881,-9.31323e-7,2.37374]),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("_12")})])})])}))})])})])})])}),

                        new Transform({
                          DEF : new SFString("inventory"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("entry-h"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("info2"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("_13"),
                                      translation : new SFVec3f([-6.5536,-0.642096,-0.923173]),
                                      scale : new SFVec3f([0.365073,0.444861,0.410544]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.590164),
                                                  diffuseColor : new SFColor([0.648936,0.634597,0.645351]),
                                                  shininess : new SFFloat(0.56383)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  DEF : new SFString("_14"),
                                                  url : new MFString(["nposter6.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("pCylinder2_0Geo_1"),
                                              ccw : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(1.09275),
                                              coordIndex : new MFInt32([2,3,6,-1,3,7,6,-1,1,2,5,-1,2,6,5,-1,0,1,4,-1,1,5,4,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([1,0,0.655447,0,0.310894,0,0,0,0.997055,0.999547,0.652502,0.999547,0.307949,0.999547,0.000452876,0.996149])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("pCylinder2GeoPoints_1"),
                                                  point : new MFVec3f([-17.581,2.366,2.485,-18.486,2.366,8.197,-17.581,2.366,13.909,-14.955,2.366,19.063,-17.581,9.681,2.485,-18.486,9.681,8.197,-17.581,9.681,13.909,-14.955,9.681,19.063])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-6.5536,-4.8187,-0.923173]),
                                      scale : new SFVec3f([0.365073,0.444861,0.410544]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.590164),
                                                  diffuseColor : new SFColor([0.648936,0.634597,0.645351]),
                                                  shininess : new SFFloat(0.56383)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_14")})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([1,-1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("pCylinder2_0Geo"),
                                              ccw : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(1.09275),
                                              coordIndex : new MFInt32([2,3,6,-1,3,7,6,-1,1,2,5,-1,2,6,5,-1,0,1,4,-1,1,5,4,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([1,0,0.655447,0,0.310894,0,0,0,0.997055,0.999547,0.652502,0.999547,0.307949,0.999547,0.000452876,0.996149])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("pCylinder2GeoPoints"),
                                                  point : new MFVec3f([-17.581,2.366,2.485,-18.486,2.366,8.197,-17.581,2.366,13.909,-14.955,2.366,19.063,-17.581,9.681,2.485,-18.486,9.681,8.197,-17.581,9.681,13.909,-14.955,9.681,19.063])}))}))})])})])}),

                                new Transform({
                                  translation : new SFVec3f([-0.607358,0,3.91981]),
                                  children : new MFNode([
                                    new Inline({
                                      url : new MFString(["infowall.x3d"]),
                                      bboxSize : new SFVec3f([8.65831,7.07873,16.0367]),
                                      bboxCenter : new SFVec3f([0.623284,0.119948,0.0731559])})])}),

                                new Transform({
                                  DEF : new SFString("galerie"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-14.862,3.4142,-1.3688]),
                                      rotation : new SFRotation([0,1,0,1.5708]),
                                      scale : new SFVec3f([0.0319162,0.0319162,0.0319162]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["Galerie"]),
                                              length : new MFFloat([0]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  family : new MFString(["SANS"]),
                                                  style : new SFString("ITALIC"),
                                                  size : new SFFloat(24)}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-10.9613,3.4142,-8.78084]),
                                      scale : new SFVec3f([0.0319162,0.0319162,0.0319162]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["Galerie"]),
                                              length : new MFFloat([0]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  family : new MFString(["SANS"]),
                                                  style : new SFString("ITALIC"),
                                                  size : new SFFloat(24)}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-6.74039,1.72336,-8.79702]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_5")}))})),
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
                                      translation : new SFVec3f([-10.0241,1.72336,-8.79703]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_6")}))})),
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
                                      translation : new SFVec3f([-13.3971,1.72336,-8.79703]),
                                      scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_7")}))})),
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
                                      translation : new SFVec3f([-14.9196,1.72336,-5.31138]),
                                      rotation : new SFRotation([0,-1,0,1.5708]),
                                      scale : new SFVec3f([4.08207,2.56721,2.11914]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_8")})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([-1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,3,1,-1,3,2,1,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-5.17514,2.89932,-6.74548]),
                                      rotation : new SFRotation([-0.000265379,0.999999,-0.00127876,0.409254]),
                                      scale : new SFVec3f([0.900709,1.03695,0.900715]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_3")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-1.7662,0,0.5,-1.7662,0,0.5,1.7662,0,-0.5,1.7662,0,0.0000255695,-1.76619,-0.500016,0.0000240198,-1.76619,0.499978,0.0000240215,1.7662,0.499978,0.0000255712,1.7662,-0.500016])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-8.29445,2.67552,-5.85136]),
                                      rotation : new SFRotation([-0.000265861,0.999999,-0.00121068,0.432338]),
                                      scale : new SFVec3f([0.999999,1.15126,1]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  USE : new SFString("_3")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.5,-1.7662,0,0.5,-1.7662,0,0.5,1.7662,0,-0.5,1.7662,0,-6.43588e-7,-1.7662,0.49999,-0.00000618682,-1.7662,-0.500011,-0.00000698581,1.76619,-0.500011,-0.00000144257,1.76619,0.49999])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("pCube5"),
                                      translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                      scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_4")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("pCube5_0Geo"),
                                              convex : new SFBool(false),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,1,7,5,3,-1,6,0,2,4,-1,8,9,10,11,-1,12,8,11,13,-1,13,14,15,12,-1,9,15,14,10,-1,16,17,18,19,-1,20,16,19,21,-1,21,22,23,20,-1,17,23,22,18,-1,24,25,26,27,-1,28,24,27,29,-1,29,30,31,28,-1,25,31,30,26,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("pCube5GeoPoints"),
                                                  point : new MFVec3f([3.185,-0.001,-17.978,4.172,-0.001,-18.134,3.185,12.032,-17.978,4.172,12.032,-18.134,3.028,12.032,-18.966,4.016,12.032,-19.122,3.028,-0.001,-18.966,4.016,-0.001,-19.122,-14.925,-0.001,-5.03,-14.422,-0.001,-5.895,-14.422,12.032,-5.895,-14.925,12.032,-5.03,-15.789,-0.001,-5.532,-15.789,12.032,-5.532,-15.287,12.032,-6.397,-15.287,-0.001,-6.397,-11.32,-0.001,-10.8,-10.565,-0.001,-11.457,-10.565,12.032,-11.457,-11.32,12.032,-10.8,-11.976,-0.001,-11.555,-11.976,12.032,-11.555,-11.222,12.032,-12.211,-11.222,-0.001,-12.211,-5.019,-0.001,-15.46,-4.111,-0.001,-15.879,-4.111,12.032,-15.879,-5.019,12.032,-15.46,-5.438,-0.001,-16.368,-5.438,12.032,-16.368,-4.53,12.032,-16.787,-4.53,-0.001,-16.787])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("polySurface5"),
                                      translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                      scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0.390805),
                                                  diffuseColor : new SFColor([0.925532,0.889742,0.782371]),
                                                  shininess : new SFFloat(0.56383)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("polySurface5_0Geo"),
                                              ccw : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(1.4776),
                                              coordIndex : new MFInt32([0,5,1,-1,2,1,3,-1,5,4,1,-1,4,3,1,-1,2,3,8,7,-1,3,4,9,8,-1,4,5,10,9,-1,5,0,6,10,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("polySurface5GeoPoints"),
                                                  point : new MFVec3f([-23.131,12.014,23.131,-23.131,12.014,-23.131,23.131,12.014,-23.131,-4.508,12.014,-15.082,-10.745,12.014,-10.677,-14.27,12.014,-4.845,-23.131,12.516,23.131,23.131,12.516,-23.131,-4.508,12.516,-15.082,-10.745,12.516,-10.677,-14.27,12.516,-4.845])}))}))})])})])})])}),

                            new Transform({
                              DEF : new SFString("welcome"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("wallstar"),
                                  translation : new SFVec3f([4.53814,0.199842,-36.8756]),
                                  rotation : new SFRotation([0,-1,0,1.5708]),
                                  scale : new SFVec3f([0.62637,0.626545,0.626539]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("polySurface4_0Geo"),
                                          convex : new SFBool(false),
                                          coordIndex : new MFInt32([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,1,12,13,-1,12,9,14,-1,10,15,16,-1,15,6,17,-1,18,19,20,-1,7,21,22,-1,21,18,23,-1,19,24,25,-1,24,3,26,-1,27,28,29,-1,30,31,32,-1,4,33,34,-1,33,30,35,-1,31,36,37,-1,36,27,38,-1,39,40,41,-1,28,42,43,-1,42,39,44,-1,40,45,46,-1,45,0,47,-1,2,47,0,-1,5,26,3,-1,8,17,6,-1,11,14,9,-1,13,2,1,-1,14,13,12,-1,16,11,10,-1,17,16,15,-1,20,23,18,-1,22,8,7,-1,23,22,21,-1,25,20,19,-1,26,25,24,-1,29,38,27,-1,32,35,30,-1,34,5,4,-1,35,34,33,-1,37,32,31,-1,38,37,36,-1,41,44,39,-1,43,29,28,-1,44,43,42,-1,46,41,40,-1,47,46,45,-1,48,18,49,-1,50,1,51,-1,52,36,53,-1,49,1,50,-1,51,36,52,-1,53,18,48,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("polySurface4GeoPoints"),
                                              point : new MFVec3f([44.719,2.986,9.083,44.719,3.011,8.893,44.719,3.052,8.893,44.719,1.568,8.703,44.719,1.543,8.893,44.719,1.502,8.893,44.719,2.467,8.184,44.719,2.277,8.159,44.719,2.277,8.118,44.719,2.912,8.526,44.719,2.796,8.374,44.719,2.825,8.345,44.719,2.986,8.703,44.719,3.025,8.693,44.719,2.948,8.506,44.719,2.644,8.258,44.719,2.664,8.222,44.719,2.477,8.145,44.719,1.91,8.258,44.719,1.758,8.374,44.719,1.729,8.345,44.719,2.087,8.184,44.719,2.076,8.145,44.719,1.889,8.222,44.719,1.641,8.526,44.719,1.606,8.506,44.719,1.528,8.693,44.719,2.087,9.602,44.719,2.277,9.627,44.719,2.277,9.668,44.719,1.641,9.26,44.719,1.758,9.412,44.719,1.729,9.441,44.719,1.568,9.083,44.719,1.528,9.094,44.719,1.606,9.281,44.719,1.91,9.529,44.719,1.889,9.564,44.719,2.076,9.642,44.719,2.644,9.529,44.719,2.796,9.412,44.719,2.825,9.441,44.719,2.467,9.602,44.719,2.477,9.642,44.719,2.664,9.564,44.719,2.912,9.26,44.719,2.948,9.281,44.719,3.025,9.094,44.719,2.277,8.893,44.719,2.323,8.801,44.719,2.277,8.893,44.719,2.323,8.986,44.719,2.277,8.893,44.719,2.184,8.893])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("poster2_1"),
                                  translation : new SFVec3f([4.24366,1.72336,-8.79701]),
                                  scale : new SFVec3f([2.11918,2.5672,2.11914]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_5")})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              scale : new SFVec2f([-1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([3,2,1,0,-1,4,5,6,7,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-0.822329,0,0.5,-0.822329,0,0.5,-1.84714,0,-0.5,-1.84714,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("poster1"),
                                  translation : new SFVec3f([9.93874,2.77152,-8.79051]),
                                  scale : new SFVec3f([5.9224,3.68132,3.03881]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["nposter3.jpg"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,3,-1,7,6,5,4,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-0.610461,0,0.5,-0.610461,0,0.5,0.389539,0,-0.5,0.389539,0,-0.5,-0.862765,0,0.5,-0.862765,0,0.5,-1.87165,0,-0.5,-1.87165,0])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("tresen")}),

                                new Transform({
                                  DEF : new SFString("text"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-4.32479,3.4142,-8.78084]),
                                      scale : new SFVec3f([0.0319162,0.0319162,0.0319162]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["HERZLICH WILLKOMMEN"]),
                                              length : new MFFloat([0]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  family : new MFString(["SANS"]),
                                                  style : new SFString("ITALIC"),
                                                  size : new SFFloat(24)}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-4.00191,2.78684,-8.78084]),
                                      scale : new SFVec3f([0.0319162,0.0319162,0.0319162]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["bei"]),
                                              length : new MFFloat([0]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  family : new MFString(["SANS"]),
                                                  style : new SFString("ITALIC"),
                                                  size : new SFFloat(18)}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([-3.04941,2.42656,-8.78084]),
                                      scale : new SFVec3f([0.0319162,0.0319162,0.0319162]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  emissiveColor : new SFColor([0,0.0428694,0.212766]),
                                                  shininess : new SFFloat(0)}))})),
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["Mercedes-Benz"]),
                                              length : new MFFloat([0]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  family : new MFString(["SANS"]),
                                                  style : new SFString("ITALIC"),
                                                  size : new SFFloat(25)}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("tresen1"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("_15"),
                                      translation : new SFVec3f([-1.47176,-0.0182489,-6.22017]),
                                      children : new MFNode([
                                        new Inline({
                                          url : new MFString(["tresen.x3d"]),
                                          bboxSize : new SFVec3f([5.66685,1.61279,3.55296]),
                                          bboxCenter : new SFVec3f([-0.00234461,0.00441408,0.236422])})])})])}),

                                new Transform({
                                  DEF : new SFString("tresen2"),
                                  translation : new SFVec3f([6.34179,-0.0107709,0.126961]),
                                  rotation : new SFRotation([0,-1,0,0.892094]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_15")})])}),

                                new Transform({
                                  translation : new SFVec3f([1.28411,0.00620511,-1.30274]),
                                  scale : new SFVec3f([1.0001,1.00006,1.0001]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("_16"),
                                      translation : new SFVec3f([5.47871,0.00438073,-5.93544]),
                                      children : new MFNode([
                                        new Inline({
                                          url : new MFString(["prospekt.x3d"]),
                                          bboxSize : new SFVec3f([3.5,3.5,3.5])})])})])})])}),

                            new Transform({
                              DEF : new SFString("aklasse"),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["infowall2.x3d"]),
                                  bboxSize : new SFVec3f([0.0264416,3.49957,12.3725]),
                                  bboxCenter : new SFVec3f([14.8485,2.95436,-2.06621])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_17"),
                                              ambientIntensity : new SFFloat(0.42623),
                                              diffuseColor : new SFColor([0.648936,0.634597,0.645351]),
                                              specularColor : new SFColor([0.62766,0.62766,0.62766]),
                                              shininess : new SFFloat(0.56383)})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_18"),
                                              url : new MFString(["reflect1.png"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              translation : new SFVec2f([1,-0.56]),
                                              rotation : new SFFloat(0.879646),
                                              scale : new SFVec2f([0.149839,0.156175])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("pCylinder4_0Geo_1"),
                                          solid : new SFBool(false),
                                          convex : new SFBool(false),
                                          creaseAngle : new SFFloat(3.14159),
                                          coordIndex : new MFInt32([0,9,8,4,-1,9,1,5,8,-1,1,11,10,5,-1,11,2,6,10,-1,2,13,12,6,-1,13,3,7,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("pCylinder4GeoPoints_1"),
                                              point : new MFVec3f([47.754,1.786,-4.58,50.663,1.786,-3.463,53.085,1.786,-1.502,54.782,1.786,1.111,47.754,7.618,-4.58,50.663,7.618,-3.463,53.085,7.618,-1.502,54.782,7.618,1.111,49.2085,7.618,-4.0215,49.2085,1.786,-4.0215,51.874,7.618,-2.4825,51.874,1.786,-2.4825,53.9335,7.618,-0.1955,53.9335,1.786,-0.1955])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-6.5536,0.00438076,-0.433264]),
                                  scale : new SFVec3f([0.365073,0.365073,0.365073]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_17")})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_18")})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              translation : new SFVec2f([0,0.64]),
                                              rotation : new SFFloat(1.06814),
                                              scale : new SFVec2f([0.220545,1.07888])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("pCylinder3_0Geo_1"),
                                          solid : new SFBool(false),
                                          convex : new SFBool(false),
                                          creaseAngle : new SFFloat(3.14159),
                                          coordIndex : new MFInt32([2,9,8,6,-1,9,3,7,8,-1,1,11,10,5,-1,11,2,6,10,-1,0,13,12,4,-1,13,1,5,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("pCylinder3GeoPoints_1"),
                                              point : new MFVec3f([47.754,1.786,14.335,50.663,1.786,13.218,53.085,1.786,11.257,54.782,1.786,8.643,47.754,7.618,14.335,50.663,7.618,13.218,53.085,7.618,11.257,54.782,7.618,8.643,53.9335,7.618,9.95,53.9335,1.786,9.95,51.874,7.618,12.2375,51.874,1.786,12.2375,49.2085,7.618,13.7765,49.2085,1.786,13.7765])}))}))})])}),

                                new Transform({}),

                                new Transform({
                                  DEF : new SFString("stage")}),

                                new Transform({
                                  translation : new SFVec3f([11.3505,0.231815,1.36072]),
                                  children : new MFNode([
                                    new Inline({
                                      url : new MFString(["car.x3d"]),
                                      bboxSize : new SFVec3f([8,8,8])})])}),

                                new Transform({
                                  DEF : new SFString("akbg"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("pCylinder4"),
                                      translation : new SFVec3f([-3.11232,0.502149,-0.549688]),
                                      scale : new SFVec3f([0.297949,0.251754,0.297951]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  DEF : new SFString("_19"),
                                                  ambientIntensity : new SFFloat(0.42623),
                                                  diffuseColor : new SFColor([0.648936,0.634597,0.645351]),
                                                  specularColor : new SFColor([0.62766,0.62766,0.62766]),
                                                  shininess : new SFFloat(0.56383)})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["nposter2.jpg"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("pCylinder4_0Geo"),
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              coordIndex : new MFInt32([0,9,8,4,-1,9,1,5,8,-1,1,11,10,5,-1,11,2,6,10,-1,2,13,12,6,-1,13,3,7,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("pCylinder4GeoPoints"),
                                                  point : new MFVec3f([47.754,1.786,-4.58,50.663,1.786,-3.463,53.085,1.786,-1.502,54.782,1.786,1.111,47.754,7.618,-4.58,50.663,7.618,-3.463,53.085,7.618,-1.502,54.782,7.618,1.111,49.2085,7.618,-4.0215,49.2085,1.786,-4.0215,51.874,7.618,-2.4825,51.874,1.786,-2.4825,53.9335,7.618,-0.1955,53.9335,1.786,-0.1955])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([9.53674e-7,-5.96046e-8,-0.207175]),
                                      scale : new SFVec3f([1,1,1.62429]),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([14.9686,-0.925423,-1.95537]),
                                          rotation : new SFRotation([-8.30306e-8,1,7.69329e-8,4.71239]),
                                          scale : new SFVec3f([4.57445,4.57445,4.57445]),
                                          scaleOrientation : new SFRotation([-1,0,0,0.785398]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      DEF : new SFString("_20"),
                                                      url : new MFString(["shadow70-128.png"])}))})),
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
                                          translation : new SFVec3f([13.7997,0.0109082,-1.95537]),
                                          rotation : new SFRotation([0.577351,-0.57735,0.57735,2.0944]),
                                          scale : new SFVec3f([4.57445,6.91218,4.57445]),
                                          scaleOrientation : new SFRotation([-2.34475e-7,1,9.33251e-9,1.5708]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_20")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([3,2,0,-1,2,1,0,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                                    new Transform({
                                      DEF : new SFString("pCylinder3"),
                                      translation : new SFVec3f([-2.60733,0.361017,0.451083]),
                                      scale : new SFVec3f([0.2881,0.274828,0.2881]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_19")})),
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["nposter1.jpg"])})),
                                              textureTransform : new SFNode(
                                                new TextureTransform({
                                                  scale : new SFVec2f([-1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("pCylinder3_0Geo"),
                                              solid : new SFBool(false),
                                              convex : new SFBool(false),
                                              creaseAngle : new SFFloat(3.14159),
                                              coordIndex : new MFInt32([2,9,8,6,-1,9,3,7,8,-1,1,11,10,5,-1,11,2,6,10,-1,0,13,12,4,-1,13,1,5,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("pCylinder3GeoPoints"),
                                                  point : new MFVec3f([47.754,1.786,14.335,50.663,1.786,13.218,53.085,1.786,11.257,54.782,1.786,8.643,47.754,7.618,14.335,50.663,7.618,13.218,53.085,7.618,11.257,54.782,7.618,8.643,53.9335,7.618,9.95,53.9335,1.786,9.95,51.874,7.618,12.2375,51.874,1.786,12.2375,49.2085,7.618,13.7765,49.2085,1.786,13.7765])}))}))})])}),

                                    new Transform({
                                      translation : new SFVec3f([0,0,6.16764]),
                                      scale : new SFVec3f([1,1,1.5012]),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([14.9686,-0.925423,-1.95537]),
                                          rotation : new SFRotation([-8.30306e-8,1,7.69329e-8,4.71239]),
                                          scale : new SFVec3f([4.57445,4.57445,4.57445]),
                                          scaleOrientation : new SFRotation([-1,0,0,0.785398]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_20")}))})),
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
                                          translation : new SFVec3f([13.7997,0.0109082,-1.95537]),
                                          rotation : new SFRotation([0.577351,-0.57735,0.57735,2.0944]),
                                          scale : new SFVec3f([4.57445,6.91218,4.57445]),
                                          scaleOrientation : new SFRotation([-2.34497e-7,1,9.3416e-9,1.5708]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new ImageTexture({
                                                      USE : new SFString("_20")}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([3,2,0,-1,2,1,0,-1]),
                                                  texCoord : new SFNode(
                                                    new TextureCoordinate({
                                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("shad"),
                                  translation : new SFVec3f([10.942,0.00865527,1.28908]),
                                  rotation : new SFRotation([1,0,0,4.71239]),
                                  scale : new SFVec3f([8.21366,8.21365,8.21365]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_20")}))})),
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

                                new DirectionalLight({
                                  DEF : new SFString("Light2"),
                                  direction : new SFVec3f([0.515609,-0.143424,0.844735])}),

                                new Transform({
                                  translation : new SFVec3f([3.2191,-0.0000389814,11.6614]),
                                  scale : new SFVec3f([1.0001,1.00006,1.0001]),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("_16")})])})])}),

                            new Transform({
                              DEF : new SFString("poster2"),
                              translation : new SFVec3f([14.6257,0,-3.19101]),
                              rotation : new SFRotation([0,1,0,0.293104]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_13")})])})])})])}))})])}),

            new Transform({
              DEF : new SFString("UserCollision"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([11.3972,0.989633,1.3678]),
                  rotation : new SFRotation([-4.47035e-7,1,4.47035e-7,4.71239]),
                  scale : new SFVec3f([1.91962,0.597409,1.91962]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(1)}))})),
                      geometry : new SFNode(
                        new Cylinder({}))})])}),

                new Transform({
                  DEF : new SFString("coll"),
                  translation : new SFVec3f([0.525815,0.445729,-0.475953]),
                  scale : new SFVec3f([15.1477,0.441349,8.29048]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,0.0142516,0]),
                              emissiveColor : new SFColor([0.106383,0.00151613,0]),
                              shininess : new SFFloat(0),
                              transparency : new SFFloat(1)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,9,8,-1,0,1,9,-1,14,13,10,-1,13,11,10,-1,12,8,9,-1,12,15,8,-1,19,16,20,-1,16,17,20,-1,4,19,20,-1,4,5,19,-1,16,22,17,-1,22,21,17,-1,22,7,21,-1,7,6,21,-1,25,22,26,-1,25,7,22,-1,1,25,26,-1,27,23,28,-1,27,3,23,-1,19,5,28,-1,5,27,28,-1,28,18,29,-1,28,23,18,-1,11,24,29,18,-1,24,26,29,-1,16,19,29,-1,19,28,29,-1,26,16,29,-1,26,22,16,-1,25,1,30,-1,1,0,30,-1,6,25,30,-1,6,7,25,-1,27,4,31,-1,27,5,4,-1,3,31,2,-1,3,27,31,-1,24,11,13,-1,12,24,13,-1,12,9,24,-1,23,2,32,-1,23,3,2,-1,18,32,33,-1,18,23,32,-1,10,11,33,-1,11,18,33,-1,24,9,26,-1,9,1,26,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.877065,0.574281,0.837078,-0.877065,-1,0.837078,0.84012,0.574281,0.837078,0.84012,-1,0.837078,0.84012,0.574281,-0.885551,0.84012,-1,-0.885551,-0.877065,0.574281,-0.885551,-0.877065,-1,-0.885551,-0.663807,0.574281,0.837078,-0.663807,-1,0.837078,-0.307587,0.574281,0.837078,-0.307587,-1,0.837078,-0.663807,-1,1.02948,-0.307587,-1,1.02948,-0.307587,0.574281,1.02948,-0.663807,0.574281,1.02948,-0.0184725,-1,-0.885551,-0.0184725,0.574281,-0.885551,-0.0184725,-1,0.837078,0.410824,-1,-0.885551,0.410824,0.574281,-0.885551,-0.447769,0.574281,-0.885551,-0.447769,-1,-0.885551,0.410824,-1,0.837078,-0.447769,-1,0.837078,-0.877065,-1,-0.0242365,-0.447769,-1,-0.0242365,0.84012,-1,-0.0242365,0.410824,-1,-0.0242365,-0.0184725,-1,-0.0242365,-0.877065,0.574281,-0.0242365,0.84012,0.574281,-0.0242365,0.410824,0.574281,0.837078,-0.0184725,0.574281,0.837078])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
