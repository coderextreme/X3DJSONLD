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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
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
var Material = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var CoordinateInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 28 Aug 2015 13:01:10 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Schacht")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Viewpoint({
              DEF : new SFString("VP1"),
              description : new SFString("overview"),
              position : new SFVec3f([0,1.6,20]),
              orientation : new SFRotation([0.985947,-0.155705,0.0605339,0.0972327]),
              fieldOfView : new SFFloat(1)}),

            new PointLight({
              DEF : new SFString("Hauptlicht"),
              color : new SFColor([1,0.915657,0.615233]),
              ambientIntensity : new SFFloat(0.47),
              attenuation : new SFVec3f([0.1,0.01,0.005]),
              location : new SFVec3f([0,9.62903,-11.0219])}),

            new Transform({
              DEF : new SFString("lightfx"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.184988,0,-0.21972]),
                  rotation : new SFRotation([0,-1,0,0.785398]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-6.22346,21.7281,-22.0784]),
                      rotation : new SFRotation([0.93923,-0.317929,-0.129494,3.89491]),
                      scale : new SFVec3f([8.13659,8.13658,6.35648]),
                      scaleOrientation : new SFRotation([-4.33031e-7,-8.14574e-7,1,0.216204]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["light10.png"])}))})),
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
                      translation : new SFVec3f([0.233802,21.7739,-21.9659]),
                      rotation : new SFRotation([0.917576,-0.367942,-0.150576,3.87951]),
                      scale : new SFVec3f([7.78507,7.78508,6.08187]),
                      scaleOrientation : new SFRotation([-0.00000497972,0.00000113047,-1,0.363321]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
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
                      translation : new SFVec3f([7.01965,21.723,-21.9486]),
                      rotation : new SFRotation([0.897521,-0.407942,-0.167448,3.86512]),
                      scale : new SFVec3f([7.93066,7.93066,6.19568]),
                      scaleOrientation : new SFRotation([2.52238e-7,0.00000119481,-1,0.344901]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-0.229461,0,0.204797]),
                  rotation : new SFRotation([0,1,0,0.785397]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-6.22346,21.7281,-22.0784]),
                      rotation : new SFRotation([0.93923,-0.317929,-0.129494,3.89491]),
                      scale : new SFVec3f([8.13659,8.13658,6.35648]),
                      scaleOrientation : new SFRotation([-4.33031e-7,-8.14574e-7,1,0.216204]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
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
                      translation : new SFVec3f([0.233802,21.7739,-21.9659]),
                      rotation : new SFRotation([0.917576,-0.367942,-0.150576,3.87951]),
                      scale : new SFVec3f([7.78507,7.78508,6.08187]),
                      scaleOrientation : new SFRotation([-0.00000497972,0.00000113047,-1,0.363321]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
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
                      translation : new SFVec3f([7.01965,21.723,-21.9486]),
                      rotation : new SFRotation([0.897521,-0.407942,-0.167448,3.86512]),
                      scale : new SFVec3f([7.93066,7.93066,6.19568]),
                      scaleOrientation : new SFRotation([2.52238e-7,0.00000119481,-1,0.344901]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-6.22346,21.7281,-22.0784]),
                      rotation : new SFRotation([0.93923,-0.317929,-0.129494,3.89491]),
                      scale : new SFVec3f([8.13659,8.13658,6.35648]),
                      scaleOrientation : new SFRotation([-4.33031e-7,-8.14574e-7,1,0.216204]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
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
                      translation : new SFVec3f([0.233802,21.7739,-21.9659]),
                      rotation : new SFRotation([0.917576,-0.367942,-0.150576,3.87951]),
                      scale : new SFVec3f([7.78507,7.78508,6.08187]),
                      scaleOrientation : new SFRotation([-0.00000497972,0.00000113047,-1,0.363321]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
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
                      DEF : new SFString("light9"),
                      translation : new SFVec3f([7.01965,21.723,-21.9486]),
                      rotation : new SFRotation([0.897521,-0.407942,-0.167448,3.86512]),
                      scale : new SFVec3f([7.93066,7.93066,6.19568]),
                      scaleOrientation : new SFRotation([2.52238e-7,0.00000119481,-1,0.344901]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])}),

            new Transform({
              DEF : new SFString("steg"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0.030993,0.323541,0.00167656]),
                  scale : new SFVec3f([3.54719,0.578862,3.54719]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_2"),
                              ambientIntensity : new SFFloat(0.16),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["grill2.jpg"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              DEF : new SFString("_3"),
                              scale : new SFVec2f([2,2])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,9,6,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([5.9958,6.1752,5.9958,8.2336,5.00159,8.2336,5.00159,6.1752,5.9958,4.1168,5.00159,4.1168,5.9958,2.0584,5.00159,2.0584,5.00159,0,5.9958,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,2.50849,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.382683,0.490923,2.50849,0.382683,0.490923,4.0931,-0.382683,0.490923,4.0931,0.382683,0.490923,5.67771,-0.382683,0.490923,5.67771,-0.382683,0.490923,7.26232,0.382683,0.490923,7.26232])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0.030993,0.457875,0.00167677]),
                  scale : new SFVec3f([3.54719,0.305227,3.54719]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,1,2,5,-1,6,4,5,7,-1,0,8,9,3,-1,10,8,9,11,-1,12,13,14,15,-1,16,13,14,17,-1,18,10,11,19,-1,18,16,17,19,-1,20,21,22,23,-1,12,20,23,15,-1,24,6,7,25,-1,26,24,25,27,-1,26,28,29,27,-1,30,28,29,31,-1,21,30,31,22,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.382683,0.490923,-0.92388,-3.69184,0.490923,-4.23304,-3.69184,2.13801,-4.23304,-0.382683,2.13801,-0.92388,-4.23304,0.490923,-3.69184,-4.23304,2.13801,-3.69184,-0.923879,0.490923,-0.382684,-0.923879,2.13801,-0.382684,-0.382683,0.490923,-5.35904,-0.382683,2.13801,-5.35904,0.382683,0.490923,-5.35904,0.382683,2.13801,-5.35904,0.92388,0.490923,-0.382683,4.26909,0.490923,-3.7279,4.26909,2.13801,-3.7279,0.92388,2.13801,-0.382683,3.7279,0.490923,-4.26909,3.7279,2.13801,-4.26909,0.382683,0.490923,-0.92388,0.382683,2.13801,-0.92388,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.382683,2.13801,0.92388,0.92388,2.13801,0.382684,-0.92388,0.490923,0.382684,-0.92388,2.13801,0.382684,-0.382683,0.490923,0.92388,-0.382683,2.13801,0.92388,-0.382683,0.490923,7.26232,-0.382683,2.13801,7.26232,0.382683,0.490923,7.26232,0.382683,2.13801,7.26232])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0.030993,0.323541,0.00167656]),
                  scale : new SFVec3f([3.54719,0.578862,3.54719]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["grill-lo.jpg"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              USE : new SFString("_3")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,5,2,-1,0,2,3,-1,0,3,7,-1,0,6,4,-1,0,4,5,-1,0,1,6,-1,0,8,1,-1,0,7,8,-1,9,10,21,22,-1,21,15,16,22,-1,17,24,23,18,-1,24,3,2,23,-1,11,12,25,26,-1,25,17,18,26,-1,15,28,27,16,-1,28,2,5,27,-1,19,30,29,20,-1,30,5,4,29,-1,13,14,31,32,-1,31,19,20,32,-1]),
                          coordIndex : new MFInt32([7,3,2,-1,7,2,6,-1,7,6,8,-1,7,9,10,-1,7,10,3,-1,7,13,9,-1,7,14,13,-1,7,8,14,-1,0,1,21,22,-1,21,15,16,22,-1,17,24,23,18,-1,24,6,2,23,-1,4,5,25,26,-1,25,17,18,26,-1,15,28,27,16,-1,28,2,3,27,-1,19,30,29,20,-1,30,3,10,29,-1,11,12,31,32,-1,31,19,20,32,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([5.4987,9.43372,5.9958,8.2336,5.00159,10.6338,4.29858,9.93082,6.69881,9.93082,5.9958,10.6338,6.69881,8.93661,4.29858,8.93661,5.00159,8.2336,5.9958,16.3951,5.00159,16.3951,0.703016,14.9324,0,14.2294,11.0442,14.2762,10.3412,14.9792,5.00159,13.5145,5.9958,13.5145,2.14929,12.0801,2.8523,12.7831,8.16851,12.8065,8.87152,12.1035,5.00159,14.9548,5.9958,14.9548,3.92695,11.7085,3.22394,11.0055,1.07465,13.1548,1.77766,13.8578,5.9958,12.0741,5.00159,12.0741,7.78516,11.0172,7.08215,11.7202,9.25486,13.8929,9.95787,13.1899])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,-5.35904,-0.382683,0.490923,-5.35904,-0.382683,0.490923,-0.92388,0.382683,0.490923,-0.92388,-3.69184,0.490923,-4.23304,-4.23304,0.490923,-3.69184,-0.923879,0.490923,-0.382684,0,0.490923,0,-0.92388,0.490923,0.382684,0.92388,0.490923,0.382684,0.92388,0.490923,-0.382683,4.26909,0.490923,-3.7279,3.7279,0.490923,-4.26909,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.382683,0.490923,-3.14146,0.382683,0.490923,-3.14146,-2.57846,0.490923,-2.03726,-2.03726,0.490923,-2.57846,2.05529,0.490923,-2.59649,2.59649,0.490923,-2.05529,-0.382683,0.490923,-4.25025,0.382683,0.490923,-4.25025,-1.20997,0.490923,-1.75117,-1.75117,0.490923,-1.20997,-3.40575,0.490923,-2.86455,-2.86455,0.490923,-3.40575,0.382683,0.490923,-2.03267,-0.382683,0.490923,-2.03267,1.76018,0.490923,-1.21899,1.21899,0.490923,-1.76018,2.8916,0.490923,-3.43279,3.43279,0.490923,-2.8916])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0.030993,0.323541,0.00167656]),
                  scale : new SFVec3f([3.54719,0.578862,3.54719]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_2")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([8,16,6,-1,17,18,19,20,-1,6,16,4,-1,5,7,6,4,-1,4,16,2,-1,3,5,4,2,-1,2,16,0,-1,25,26,27,28,-1,0,16,14,-1,22,21,23,24,-1,14,16,12,-1,29,30,31,32,-1,12,16,10,-1,11,13,12,10,-1,10,16,8,-1,9,11,10,8,-1,19,18,9,8,-1,20,19,8,6,-1,17,20,6,7,-1,23,21,1,0,-1,24,23,0,14,-1,22,24,14,15,-1,27,26,3,2,-1,28,27,2,0,-1,25,28,0,1,-1,31,30,15,14,-1,32,31,14,12,-1,29,32,12,13,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,-0.490923,-0.92388,0.382683,0.490923,-0.92388,0.92388,-0.490923,-0.382683,0.92388,0.490923,-0.382683,0.92388,-0.490923,0.382684,0.92388,0.490923,0.382684,0.382683,-0.490923,0.92388,0.382683,0.490923,0.92388,-0.382683,-0.490923,0.92388,-0.382683,0.490923,0.92388,-0.92388,-0.490923,0.382684,-0.92388,0.490923,0.382684,-0.923879,-0.490923,-0.382684,-0.923879,0.490923,-0.382684,-0.382683,-0.490923,-0.92388,-0.382683,0.490923,-0.92388,0,-0.490923,0,0.382683,0.490923,7.26232,-0.382683,0.490923,7.26232,-0.382683,-0.490923,7.26232,0.382683,-0.490923,7.26232,0.382683,0.490923,-5.35904,-0.382683,0.490923,-5.35904,0.382683,-0.490923,-5.35904,-0.382683,-0.490923,-5.35904,3.7279,0.490923,-4.26909,4.26909,0.490923,-3.7279,4.26909,-0.490923,-3.7279,3.7279,-0.490923,-4.26909,-4.23304,0.490923,-3.69184,-3.69184,0.490923,-4.23304,-3.69184,-0.490923,-4.23304,-4.23304,-0.490923,-3.69184])}))}))})])})])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.0000563977,-1.83909,0]),
                  rotation : new SFRotation([0,0,1,3.1416]),
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(1),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_4"),
                              url : new MFString(["tech12.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_5"),
                              ambientIntensity : new SFFloat(1),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([2,3])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([15,213,211,177,-1,213,13,181,211,-1,11,216,214,180,-1,216,9,188,214,-1,181,169,217,212,-1,217,164,177,212,-1,169,187,219,218,-1,219,185,164,218,-1,187,12,221,220,-1,221,14,185,220,-1,188,167,222,215,-1,222,168,180,215,-1,167,192,224,223,-1,224,186,168,223,-1,192,8,226,225,-1,226,10,186,225,-1,184,16,227,229,-1,227,18,183,229,-1,19,232,230,179,-1,232,17,176,230,-1,176,165,233,231,-1,233,160,179,231,-1,165,184,228,234,-1,228,183,160,234,-1,200,21,178,236,-1,178,161,198,236,-1,182,20,237,239,-1,237,22,196,239,-1,161,182,238,199,-1,238,196,162,199,-1,23,200,235,204,-1,235,198,162,204,-1,7,242,240,189,-1,242,5,191,240,-1,27,245,243,205,-1,245,25,203,243,-1,3,248,246,190,-1,248,1,207,246,-1,208,31,249,251,-1,249,29,206,251,-1,191,173,252,241,-1,252,166,189,241,-1,173,195,254,253,-1,254,193,166,253,-1,195,4,256,255,-1,256,6,193,255,-1,207,170,257,247,-1,257,172,190,247,-1,203,163,260,244,-1,260,175,205,244,-1,171,208,250,261,-1,250,206,174,261,-1,197,24,263,265,-1,263,26,201,265,-1,163,197,264,259,-1,264,201,175,259,-1,170,209,266,258,-1,266,194,172,258,-1,210,171,262,269,-1,262,174,202,269,-1,209,0,270,267,-1,270,2,194,267,-1,30,210,268,271,-1,268,202,28,271,-1]),
                          coordIndex : new MFInt32([3,43,42,24,-1,43,2,26,42,-1,2,45,44,26,-1,45,1,30,44,-1,26,20,46,42,-1,46,18,24,42,-1,20,29,47,46,-1,47,28,18,46,-1,29,10,48,47,-1,48,11,28,47,-1,30,19,49,44,-1,49,20,26,44,-1,19,32,50,49,-1,50,29,20,49,-1,32,8,51,50,-1,51,10,29,50,-1,28,11,52,53,-1,52,12,27,53,-1,4,55,54,25,-1,55,3,24,54,-1,24,18,56,54,-1,56,16,25,54,-1,18,28,53,56,-1,53,27,16,56,-1,36,4,25,57,-1,25,16,35,57,-1,27,12,58,59,-1,58,13,34,59,-1,16,27,59,35,-1,59,34,17,35,-1,5,36,57,38,-1,57,35,17,38,-1,1,61,60,30,-1,61,0,31,60,-1,6,63,62,39,-1,63,5,38,62,-1,0,65,64,31,-1,65,7,40,64,-1,40,7,66,67,-1,66,6,39,67,-1,31,22,68,60,-1,68,19,30,60,-1,22,33,69,68,-1,69,32,19,68,-1,33,9,70,69,-1,70,8,32,69,-1,40,21,71,64,-1,71,22,31,64,-1,38,17,72,62,-1,72,23,39,62,-1,21,40,67,73,-1,67,39,23,73,-1,34,13,74,75,-1,74,14,37,75,-1,17,34,75,72,-1,75,37,23,72,-1,21,41,76,71,-1,76,33,22,71,-1,41,21,73,77,-1,73,23,37,77,-1,41,15,78,76,-1,78,9,33,76,-1,15,41,77,79,-1,77,37,14,79,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.9968,0.996166,0.997901,0.00227541,0.997901,0.997813,0.00169217,0.00227541,0.00169217,0.997813,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.00169217,0.00227541,0.00169217,0.997812,0.997901,0.00227541,0.997901,0.997812,0.00169217,0.00227541,0.000591285,0.996169,0.997901,0.00227541,0.9968,0.996169,0.75,0.5,0.8125,0.5,0.875,0.5,0.9375,0.5,0.625,0.5,0.6875,0.5,0.5,0.5,0.5625,0.5,0.4375,0.5,0.375,0.5,0.25,0.5,0.3125,0.5,0.125,0.5,0.1875,0.5,1,0.5,0.0625,0.5,0.6875,0.25,0.625,0.25,0.8125,0.25,0.75,0.25,0.8125,0.75,0.75,0.75,0.6875,0.75,0.625,0.75,0.5625,0.25,0.5,0.25,0.5625,0.75,0.5,0.75,0.4375,0.25,0.375,0.25,0.4375,0.75,0.375,0.75,0.3125,0.25,0.25,0.25,0.3125,0.75,0.25,0.75,0.875,0.75,0.9375,0.75,0.875,0.25,0.9375,0.25,1,0.75,0.0625,0.75,1,0.25,0.0625,0.25,0.1875,0.25,0.125,0.25,0.1875,0.75,0.125,0.75,0.75,0.375,0.8125,0.375,0.6875,0.375,0.625,0.375,0.6875,0.125,0.625,0.125,0.75,0.125,0.8125,0.125,0.75,0.625,0.8125,0.625,0.6875,0.625,0.625,0.625,0.5625,0.125,0.5,0.125,0.5625,0.375,0.5,0.375,0.5625,0.625,0.5,0.625,0.4375,0.125,0.375,0.125,0.4375,0.375,0.375,0.375,0.4375,0.625,0.375,0.625,0.3125,0.125,0.25,0.125,0.3125,0.375,0.25,0.375,0.3125,0.625,0.25,0.625,0.875,0.625,0.9375,0.625,0.875,0.375,0.9375,0.375,0.875,0.125,0.9375,0.125,1,0.625,0.0625,0.625,1,0.375,0.0625,0.375,1,0.125,0.0625,0.125,0.1875,0.125,0.125,0.125,0.1875,0.375,0.125,0.375,0.1875,0.625,0.125,0.625,0.75,0.4375,0.8125,0.4375,0.6875,0.4375,0.625,0.4375,0.75,0.5625,0.8125,0.5625,0.6875,0.5625,0.625,0.5625,0.5625,0.4375,0.5,0.4375,0.5625,0.5625,0.5,0.5625,0.4375,0.4375,0.375,0.4375,0.4375,0.5625,0.375,0.5625,0.3125,0.4375,0.25,0.4375,0.3125,0.5625,0.25,0.5625,0.875,0.5625,0.9375,0.5625,0.875,0.4375,0.9375,0.4375,1,0.5625,0.0625,0.5625,1,0.4375,0.0625,0.4375,0.1875,0.4375,0.125,0.4375,0.1875,0.5625,0.125,0.5625,0.00169217,0.500045,0.997351,0.499221,0.00114173,0.499221,0.00169217,0.500044,0.00114173,0.499221,0.997901,0.500045,0.997351,0.499221,0.997901,0.500044,0.00169217,0.500044,0.997351,0.499221,0.00169217,0.500045,0.997351,0.499222,0.997901,0.500045,0.00114173,0.499221,0.00114173,0.499222,0.997901,0.500044,0.997901,0.748929,0.000866505,0.747694,0.997076,0.747694,0.00169217,0.748929,0.00169217,0.748928,0.997076,0.747694,0.997626,0.250748,0.00169217,0.25116,0.997901,0.25116,0.00141695,0.250748,0.00169217,0.25116,0.997626,0.250748,0.997901,0.748928,0.997076,0.747694,0.997901,0.748929,0.000866505,0.747694,0.997901,0.25116,0.997626,0.250748,0.997901,0.25116,0.00141695,0.250748,0.00141695,0.250748,0.00169217,0.251159,0.499246,0.499221,0.499246,0.499221,0.498696,0.996166,0.997901,0.251159,0.00141695,0.250749,0.00169217,0.748928,0.000866505,0.747694,0.997901,0.748928,0.000866505,0.747696,0.00169217,0.748929,0.997076,0.747696,0.00169217,0.25116,0.997626,0.250749,0.498971,0.747694,0.498971,0.747694,0.498696,0.996166,0.499797,0.748928,0.499797,0.748928,0.499797,0.997813,0.499246,0.499221,0.499246,0.499221,0.499521,0.250748,0.499521,0.250748,0.499797,0.00227541,0.499797,0.500044,0.499797,0.500044,0.499797,0.25116,0.499797,0.25116,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.25116,0.499797,0.25116,0.499797,0.748929,0.499797,0.748929,0.499797,0.997814,0.499797,0.500045,0.499797,0.500045,0.498971,0.747694,0.498971,0.747694,0.499797,0.00227541,0.499521,0.250748,0.499522,0.250748,0.498971,0.747694,0.498971,0.747694,0.498696,0.996166,0.499797,0.748928,0.499797,0.748928,0.499797,0.997812,0.499797,0.748929,0.499797,0.748929,0.499797,0.997814,0.498696,0.996169,0.498971,0.747696,0.498971,0.747696,0.499246,0.499221,0.499246,0.499221,0.499522,0.250748,0.499521,0.250748,0.499797,0.00227541,0.499797,0.500045,0.499797,0.500045,0.499797,0.500044,0.499797,0.500044,0.499246,0.499222,0.499246,0.499222,0.499797,0.00227541,0.499797,0.251159,0.499797,0.251159,0.499797,0.25116,0.499797,0.25116,0.499521,0.250749,0.499522,0.250749,0.499797,0.00227541,0.499797,0.00227541])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,-0.92388,0.92388,0.490923,-0.382683,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,-0.923879,0.490923,-0.382684,-0.382683,0.490923,-0.92388,0.92388,-0.539643,-0.382683,0.382683,-0.539643,-0.92388,0.92388,-0.539643,0.382684,0.382683,-0.539643,0.92388,-0.382683,-0.539643,0.92388,-0.92388,-0.539643,0.382684,-0.923879,-0.539643,-0.382684,-0.382683,-0.539643,-0.92388,-0.382683,-0.0243601,0.92388,-0.92388,-0.0243601,0.382684,0.382683,-0.0243601,0.92388,0.92388,-0.0243601,-0.382683,0.92388,-0.0243601,0.382684,-0.382683,-0.0243601,-0.92388,0.382683,-0.0243601,-0.92388,-0.923879,-0.0243601,-0.382684,0.382683,0.233281,0.92388,-0.382683,0.233281,0.92388,0.92388,0.233281,0.382684,-0.382683,-0.282002,0.92388,0.382683,-0.282002,0.92388,0.92388,-0.282002,0.382684,0.92388,0.233281,-0.382683,0.382683,0.233281,-0.92388,0.92388,-0.282002,-0.382683,0.382683,-0.282002,-0.92388,-0.92388,-0.282002,0.382684,-0.653281,-0.0243601,0.653282,-0.653282,0.490923,0.653282,-0.923879,-0.282002,-0.382684,-0.92388,0.233281,0.382684,-0.923879,0.233281,-0.382684,-0.382683,0.233281,-0.92388,-0.382683,-0.282002,-0.92388,0.653282,0.233281,0.653282,0.653281,0.490923,0.653282,0.92388,0.233281,5.06639e-7,0.92388,0.490923,4.76837e-7,0.653282,-0.0243601,0.653282,0.653282,-0.282002,0.653282,0.653282,-0.539643,0.653282,0.92388,-0.0243601,5.36442e-7,0.92388,-0.282002,5.36442e-7,0.92388,-0.539643,5.36442e-7,0,-0.539643,0.92388,2.98023e-8,-0.282002,0.92388,0,0.233281,0.92388,0,0.490923,0.92388,0,-0.0243601,0.92388,-0.653281,0.233281,0.653282,-0.653282,-0.539643,0.653282,-0.653282,-0.282002,0.653282,0.653281,0.233281,-0.653281,0.653282,0.490923,-0.653281,-0.92388,0.233281,0,-0.92388,0.490923,0,-2.98023e-8,0.233281,-0.92388,0,0.490923,-0.92388,-0.653281,0.490923,-0.653282,-0.653281,0.233281,-0.653282,0.653281,-0.0243601,-0.653281,0.653281,-0.282002,-0.653281,0.653281,-0.539643,-0.653282,-2.98023e-8,-0.0243601,-0.92388,-0.92388,-0.0243601,0,-0.653281,-0.0243601,-0.653282,-0.92388,-0.539643,0,-0.92388,-0.282002,0,-2.98023e-8,-0.282002,-0.92388,-0.653281,-0.282002,-0.653282,-2.98023e-8,-0.539643,-0.92388,-0.653281,-0.539643,-0.653282])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_5")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([0,45.4339,0]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.0000563977,-1.83909,0]),
                  rotation : new SFRotation([0,0,1,3.1416]),
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_6"),
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_6")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([2,3])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([16,18,19,17,-1,15,13,12,14,-1,11,9,8,10,-1,7,5,4,6,-1,3,1,0,2,-1,31,29,28,30,-1,27,25,24,26,-1,23,21,20,22,-1]),
                          coordIndex : new MFInt32([11,12,4,3,-1,3,2,10,11,-1,2,1,8,10,-1,1,0,9,8,-1,0,7,15,9,-1,7,6,14,15,-1,6,5,13,14,-1,5,4,12,13,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.9968,0.996166,0.997901,0.00227541,0.997901,0.997813,0.00169217,0.00227541,0.00169217,0.997813,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.00169217,0.00227541,0.00169217,0.997812,0.997901,0.00227541,0.997901,0.997812,0.00169217,0.00227541,0.000591285,0.996169,0.997901,0.00227541,0.9968,0.996169,0.75,0.5,0.8125,0.5,0.875,0.5,0.9375,0.5,0.625,0.5,0.6875,0.5,0.5,0.5,0.5625,0.5,0.4375,0.5,0.375,0.5,0.25,0.5,0.3125,0.5,0.125,0.5,0.1875,0.5,1,0.5,0.0625,0.5,0.6875,0.25,0.625,0.25,0.8125,0.25,0.75,0.25,0.8125,0.75,0.75,0.75,0.6875,0.75,0.625,0.75,0.5625,0.25,0.5,0.25,0.5625,0.75,0.5,0.75,0.4375,0.25,0.375,0.25,0.4375,0.75,0.375,0.75,0.3125,0.25,0.25,0.25,0.3125,0.75,0.25,0.75,0.875,0.75,0.9375,0.75,0.875,0.25,0.9375,0.25,1,0.75,0.0625,0.75,1,0.25,0.0625,0.25,0.1875,0.25,0.125,0.25,0.1875,0.75,0.125,0.75,0.75,0.375,0.8125,0.375,0.6875,0.375,0.625,0.375,0.6875,0.125,0.625,0.125,0.75,0.125,0.8125,0.125,0.75,0.625,0.8125,0.625,0.6875,0.625,0.625,0.625,0.5625,0.125,0.5,0.125,0.5625,0.375,0.5,0.375,0.5625,0.625,0.5,0.625,0.4375,0.125,0.375,0.125,0.4375,0.375,0.375,0.375,0.4375,0.625,0.375,0.625,0.3125,0.125,0.25,0.125,0.3125,0.375,0.25,0.375,0.3125,0.625,0.25,0.625,0.875,0.625,0.9375,0.625,0.875,0.375,0.9375,0.375,0.875,0.125,0.9375,0.125,1,0.625,0.0625,0.625,1,0.375,0.0625,0.375,1,0.125,0.0625,0.125,0.1875,0.125,0.125,0.125,0.1875,0.375,0.125,0.375,0.1875,0.625,0.125,0.625,0.75,0.4375,0.8125,0.4375,0.6875,0.4375,0.625,0.4375,0.75,0.5625,0.8125,0.5625,0.6875,0.5625,0.625,0.5625,0.5625,0.4375,0.5,0.4375,0.5625,0.5625,0.5,0.5625,0.4375,0.4375,0.375,0.4375,0.4375,0.5625,0.375,0.5625,0.3125,0.4375,0.25,0.4375,0.3125,0.5625,0.25,0.5625,0.875,0.5625,0.9375,0.5625,0.875,0.4375,0.9375,0.4375,1,0.5625,0.0625,0.5625,1,0.4375,0.0625,0.4375,0.1875,0.4375,0.125,0.4375,0.1875,0.5625,0.125,0.5625,0.00169217,0.500045,0.997351,0.499221,0.00114173,0.499221,0.00169217,0.500044,0.00114173,0.499221,0.997901,0.500045,0.997351,0.499221,0.997901,0.500044,0.00169217,0.500044,0.997351,0.499221,0.00169217,0.500045,0.997351,0.499222,0.997901,0.500045,0.00114173,0.499221,0.00114173,0.499222,0.997901,0.500044,0.997901,0.748929,0.000866505,0.747694,0.997076,0.747694,0.00169217,0.748929,0.00169217,0.748928,0.997076,0.747694,0.997626,0.250748,0.00169217,0.25116,0.997901,0.25116,0.00141695,0.250748,0.00169217,0.25116,0.997626,0.250748,0.997901,0.748928,0.997076,0.747694,0.997901,0.748929,0.000866505,0.747694,0.997901,0.25116,0.997626,0.250748,0.997901,0.25116,0.00141695,0.250748,0.00141695,0.250748,0.00169217,0.251159,0.498696,0.996166,0.997901,0.251159,0.00141695,0.250749,0.00169217,0.748928,0.000866505,0.747694,0.997901,0.748928,0.000866505,0.747696,0.00169217,0.748929,0.997076,0.747696,0.00169217,0.25116,0.997626,0.250749,0.498696,0.996166,0.499797,0.997813,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.997814,0.499797,0.00227541,0.498696,0.996166,0.499797,0.997812,0.499797,0.997814,0.498696,0.996169,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,-0.92388,0.92388,0.490923,-0.382683,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,-0.923879,0.490923,-0.382684,-0.382683,0.490923,-0.92388,0.92388,-0.539643,-0.382683,0.382683,-0.539643,-0.92388,0.92388,-0.539643,0.382684,0.382683,-0.539643,0.92388,-0.382683,-0.539643,0.92388,-0.92388,-0.539643,0.382684,-0.923879,-0.539643,-0.382684,-0.382683,-0.539643,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_6")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([0,-45.4127,0]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.0000563977,-1.83909,0]),
                  rotation : new SFRotation([0,0,1,3.1416]),
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_7"),
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_7")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([2,3])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([16,18,19,17,-1,15,13,12,14,-1,11,9,8,10,-1,7,5,4,6,-1,3,1,0,2,-1,31,29,28,30,-1,27,25,24,26,-1,23,21,20,22,-1]),
                          coordIndex : new MFInt32([11,12,4,3,-1,3,2,10,11,-1,2,1,8,10,-1,1,0,9,8,-1,0,7,15,9,-1,7,6,14,15,-1,6,5,13,14,-1,5,4,12,13,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.9968,0.996166,0.997901,0.00227541,0.997901,0.997813,0.00169217,0.00227541,0.00169217,0.997813,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.00169217,0.00227541,0.00169217,0.997812,0.997901,0.00227541,0.997901,0.997812,0.00169217,0.00227541,0.000591285,0.996169,0.997901,0.00227541,0.9968,0.996169,0.75,0.5,0.8125,0.5,0.875,0.5,0.9375,0.5,0.625,0.5,0.6875,0.5,0.5,0.5,0.5625,0.5,0.4375,0.5,0.375,0.5,0.25,0.5,0.3125,0.5,0.125,0.5,0.1875,0.5,1,0.5,0.0625,0.5,0.6875,0.25,0.625,0.25,0.8125,0.25,0.75,0.25,0.8125,0.75,0.75,0.75,0.6875,0.75,0.625,0.75,0.5625,0.25,0.5,0.25,0.5625,0.75,0.5,0.75,0.4375,0.25,0.375,0.25,0.4375,0.75,0.375,0.75,0.3125,0.25,0.25,0.25,0.3125,0.75,0.25,0.75,0.875,0.75,0.9375,0.75,0.875,0.25,0.9375,0.25,1,0.75,0.0625,0.75,1,0.25,0.0625,0.25,0.1875,0.25,0.125,0.25,0.1875,0.75,0.125,0.75,0.75,0.375,0.8125,0.375,0.6875,0.375,0.625,0.375,0.6875,0.125,0.625,0.125,0.75,0.125,0.8125,0.125,0.75,0.625,0.8125,0.625,0.6875,0.625,0.625,0.625,0.5625,0.125,0.5,0.125,0.5625,0.375,0.5,0.375,0.5625,0.625,0.5,0.625,0.4375,0.125,0.375,0.125,0.4375,0.375,0.375,0.375,0.4375,0.625,0.375,0.625,0.3125,0.125,0.25,0.125,0.3125,0.375,0.25,0.375,0.3125,0.625,0.25,0.625,0.875,0.625,0.9375,0.625,0.875,0.375,0.9375,0.375,0.875,0.125,0.9375,0.125,1,0.625,0.0625,0.625,1,0.375,0.0625,0.375,1,0.125,0.0625,0.125,0.1875,0.125,0.125,0.125,0.1875,0.375,0.125,0.375,0.1875,0.625,0.125,0.625,0.75,0.4375,0.8125,0.4375,0.6875,0.4375,0.625,0.4375,0.75,0.5625,0.8125,0.5625,0.6875,0.5625,0.625,0.5625,0.5625,0.4375,0.5,0.4375,0.5625,0.5625,0.5,0.5625,0.4375,0.4375,0.375,0.4375,0.4375,0.5625,0.375,0.5625,0.3125,0.4375,0.25,0.4375,0.3125,0.5625,0.25,0.5625,0.875,0.5625,0.9375,0.5625,0.875,0.4375,0.9375,0.4375,1,0.5625,0.0625,0.5625,1,0.4375,0.0625,0.4375,0.1875,0.4375,0.125,0.4375,0.1875,0.5625,0.125,0.5625,0.00169217,0.500045,0.997351,0.499221,0.00114173,0.499221,0.00169217,0.500044,0.00114173,0.499221,0.997901,0.500045,0.997351,0.499221,0.997901,0.500044,0.00169217,0.500044,0.997351,0.499221,0.00169217,0.500045,0.997351,0.499222,0.997901,0.500045,0.00114173,0.499221,0.00114173,0.499222,0.997901,0.500044,0.997901,0.748929,0.000866505,0.747694,0.997076,0.747694,0.00169217,0.748929,0.00169217,0.748928,0.997076,0.747694,0.997626,0.250748,0.00169217,0.25116,0.997901,0.25116,0.00141695,0.250748,0.00169217,0.25116,0.997626,0.250748,0.997901,0.748928,0.997076,0.747694,0.997901,0.748929,0.000866505,0.747694,0.997901,0.25116,0.997626,0.250748,0.997901,0.25116,0.00141695,0.250748,0.00141695,0.250748,0.00169217,0.251159,0.498696,0.996166,0.997901,0.251159,0.00141695,0.250749,0.00169217,0.748928,0.000866505,0.747694,0.997901,0.748928,0.000866505,0.747696,0.00169217,0.748929,0.997076,0.747696,0.00169217,0.25116,0.997626,0.250749,0.498696,0.996166,0.499797,0.997813,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.997814,0.499797,0.00227541,0.498696,0.996166,0.499797,0.997812,0.499797,0.997814,0.498696,0.996169,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,-0.92388,0.92388,0.490923,-0.382683,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,-0.923879,0.490923,-0.382684,-0.382683,0.490923,-0.92388,0.92388,-0.539643,-0.382683,0.382683,-0.539643,-0.92388,0.92388,-0.539643,0.382684,0.382683,-0.539643,0.92388,-0.382683,-0.539643,0.92388,-0.92388,-0.539643,0.382684,-0.923879,-0.539643,-0.382684,-0.382683,-0.539643,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_7")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([0,-90.8465,0]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-0.0000563977,-1.83909,0]),
                  rotation : new SFRotation([0,0,1,3.1416]),
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_8"),
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_8")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([2,3])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([16,18,19,17,-1,15,13,12,14,-1,11,9,8,10,-1,7,5,4,6,-1,3,1,0,2,-1,31,29,28,30,-1,27,25,24,26,-1,23,21,20,22,-1]),
                          coordIndex : new MFInt32([11,12,4,3,-1,3,2,10,11,-1,2,1,8,10,-1,1,0,9,8,-1,0,7,15,9,-1,7,6,14,15,-1,6,5,13,14,-1,5,4,12,13,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.9968,0.996166,0.997901,0.00227541,0.997901,0.997813,0.00169217,0.00227541,0.00169217,0.997813,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.997901,0.00227541,0.997901,0.997814,0.00169217,0.00227541,0.00169217,0.997814,0.997901,0.00227541,0.9968,0.996166,0.00169217,0.00227541,0.000591285,0.996166,0.00169217,0.00227541,0.00169217,0.997812,0.997901,0.00227541,0.997901,0.997812,0.00169217,0.00227541,0.000591285,0.996169,0.997901,0.00227541,0.9968,0.996169,0.75,0.5,0.8125,0.5,0.875,0.5,0.9375,0.5,0.625,0.5,0.6875,0.5,0.5,0.5,0.5625,0.5,0.4375,0.5,0.375,0.5,0.25,0.5,0.3125,0.5,0.125,0.5,0.1875,0.5,1,0.5,0.0625,0.5,0.6875,0.25,0.625,0.25,0.8125,0.25,0.75,0.25,0.8125,0.75,0.75,0.75,0.6875,0.75,0.625,0.75,0.5625,0.25,0.5,0.25,0.5625,0.75,0.5,0.75,0.4375,0.25,0.375,0.25,0.4375,0.75,0.375,0.75,0.3125,0.25,0.25,0.25,0.3125,0.75,0.25,0.75,0.875,0.75,0.9375,0.75,0.875,0.25,0.9375,0.25,1,0.75,0.0625,0.75,1,0.25,0.0625,0.25,0.1875,0.25,0.125,0.25,0.1875,0.75,0.125,0.75,0.75,0.375,0.8125,0.375,0.6875,0.375,0.625,0.375,0.6875,0.125,0.625,0.125,0.75,0.125,0.8125,0.125,0.75,0.625,0.8125,0.625,0.6875,0.625,0.625,0.625,0.5625,0.125,0.5,0.125,0.5625,0.375,0.5,0.375,0.5625,0.625,0.5,0.625,0.4375,0.125,0.375,0.125,0.4375,0.375,0.375,0.375,0.4375,0.625,0.375,0.625,0.3125,0.125,0.25,0.125,0.3125,0.375,0.25,0.375,0.3125,0.625,0.25,0.625,0.875,0.625,0.9375,0.625,0.875,0.375,0.9375,0.375,0.875,0.125,0.9375,0.125,1,0.625,0.0625,0.625,1,0.375,0.0625,0.375,1,0.125,0.0625,0.125,0.1875,0.125,0.125,0.125,0.1875,0.375,0.125,0.375,0.1875,0.625,0.125,0.625,0.75,0.4375,0.8125,0.4375,0.6875,0.4375,0.625,0.4375,0.75,0.5625,0.8125,0.5625,0.6875,0.5625,0.625,0.5625,0.5625,0.4375,0.5,0.4375,0.5625,0.5625,0.5,0.5625,0.4375,0.4375,0.375,0.4375,0.4375,0.5625,0.375,0.5625,0.3125,0.4375,0.25,0.4375,0.3125,0.5625,0.25,0.5625,0.875,0.5625,0.9375,0.5625,0.875,0.4375,0.9375,0.4375,1,0.5625,0.0625,0.5625,1,0.4375,0.0625,0.4375,0.1875,0.4375,0.125,0.4375,0.1875,0.5625,0.125,0.5625,0.00169217,0.500045,0.997351,0.499221,0.00114173,0.499221,0.00169217,0.500044,0.00114173,0.499221,0.997901,0.500045,0.997351,0.499221,0.997901,0.500044,0.00169217,0.500044,0.997351,0.499221,0.00169217,0.500045,0.997351,0.499222,0.997901,0.500045,0.00114173,0.499221,0.00114173,0.499222,0.997901,0.500044,0.997901,0.748929,0.000866505,0.747694,0.997076,0.747694,0.00169217,0.748929,0.00169217,0.748928,0.997076,0.747694,0.997626,0.250748,0.00169217,0.25116,0.997901,0.25116,0.00141695,0.250748,0.00169217,0.25116,0.997626,0.250748,0.997901,0.748928,0.997076,0.747694,0.997901,0.748929,0.000866505,0.747694,0.997901,0.25116,0.997626,0.250748,0.997901,0.25116,0.00141695,0.250748,0.00141695,0.250748,0.00169217,0.251159,0.498696,0.996166,0.997901,0.251159,0.00141695,0.250749,0.00169217,0.748928,0.000866505,0.747694,0.997901,0.748928,0.000866505,0.747696,0.00169217,0.748929,0.997076,0.747696,0.00169217,0.25116,0.997626,0.250749,0.498696,0.996166,0.499797,0.997813,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.997814,0.499797,0.00227541,0.498696,0.996166,0.499797,0.997812,0.499797,0.997814,0.498696,0.996169,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541,0.499797,0.00227541])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.382683,0.490923,-0.92388,0.92388,0.490923,-0.382683,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,-0.923879,0.490923,-0.382684,-0.382683,0.490923,-0.92388,0.92388,-0.539643,-0.382683,0.382683,-0.539643,-0.92388,0.92388,-0.539643,0.382684,0.382683,-0.539643,0.92388,-0.382683,-0.539643,0.92388,-0.92388,-0.539643,0.382684,-0.923879,-0.539643,-0.382684,-0.382683,-0.539643,-0.92388])}))}))})])}),

                new Transform({
                  scale : new SFVec3f([27.8639,37.7478,27.8639]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_8")})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_4")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([35,36,1,37,-1,29,30,31,3,-1,26,27,6,28,-1,32,33,4,34,-1,24,25,10,9,-1,38,39,0,12,-1,17,18,19,20,-1,21,22,23,14,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,1,4,7,2,-1,8,10,11,9,-1,12,0,3,13,-1,10,14,15,11,-1,14,12,13,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.993686,0.996982,0.998312,0.999114,0.00114173,0.99699,-0.993716,0.996701,0.998448,0.999204,0.00114173,0.99699,0.998312,0.999114,0.499246,0.99699,0.00114173,0.99699,0.998004,0.999074,-0.993712,0.996962,0.997901,0.500045,0.998206,0.999195,0.499246,0.996989,0.998054,0.999216,0.997351,0.996992,0.997351,0.99699,0.853201,0.473273,-0.852815,0.469386,-0.993904,0.996974,0.998341,0.999133,0.852838,0.473229,-0.853021,0.469704,-0.99352,0.997129,0.852838,0.473269,-0.852923,0.469755,-0.85274,0.469426,0.853036,0.473198,-0.99374,0.996946,-0.852951,0.469714,0.852978,0.473189,0.998278,0.999138,-0.853009,0.469518,0.852947,0.4732,-0.993859,0.996929,-0.85287,0.469266,0.85287,0.473108,-0.993647,0.996824,0.851627,0.472616,-0.852748,0.469427])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.793752,0.577146,0.328784,-0.328782,0.577146,0.793753,-0.382683,0.490923,0.92388,-0.92388,0.490923,0.382684,0.328783,0.577146,0.793753,0.793753,0.577146,0.328784,0.92388,0.490923,0.382684,0.382683,0.490923,0.92388,0.793752,0.577146,-0.328782,0.92388,0.490923,-0.382683,0.328783,0.577146,-0.793752,0.382683,0.490923,-0.92388,-0.793752,0.577146,-0.328783,-0.923879,0.490923,-0.382684,-0.328782,0.577146,-0.793752,-0.382683,0.490923,-0.92388])}))}))})])})])}),

            new Transform({
              DEF : new SFString("noise1"),
              translation : new SFVec3f([0.00000406887,-114.473,-0.00000733934]),
              rotation : new SFRotation([-1,-0.00000102817,0.00000176958,1.5708]),
              scale : new SFVec3f([50.4718,46.082,54.8593]),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("waber"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_1"),
                          cycleInterval : new SFTime(30),
                          loop : new SFBool(true),
                          stopTime : new SFTime(1)})])}),

                    new CoordinateInterpolator({
                      DEF : new SFString("noise1PointInterp"),
                      key : new MFFloat([0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.35,0.4,0.45,0.5,0.533333,0.566667,0.6,0.65,0.7,0.733333,0.766667,0.8,0.85,0.9,0.933333,0.966667,1]),
                      keyValue : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0218878,0.0160935,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.310651,0.0671499,0,0.230507,0.279779,0,0,0.25,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.262835,-0.229876,0,0.25,-0.5,0,-0.5,0.25,0,-0.218248,0.241579,0,-0.228221,0.00582522,0,-0.25,0.5,0,-0.5,-0.25,0,-0.25902,-0.240653,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.022988,0.0170493,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.295751,0.0607893,0,0.236397,0.280852,0,0.014189,0.251306,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.27424,-0.24485,0,0.25,-0.5,0,-0.5,0.25,0,-0.229475,0.247498,0,-0.240697,0.00762342,0,-0.25,0.5,0,-0.5,-0.25,0,-0.243212,-0.252249,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0240883,0.0180052,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.28085,0.0544287,0,0.242288,0.281926,0,0.0283779,0.252613,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.285645,-0.259824,0,0.25,-0.5,0,-0.5,0.25,0,-0.240701,0.253417,0,-0.253173,0.00942162,0,-0.25,0.5,0,-0.5,-0.25,0,-0.227403,-0.263846,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0218878,0.0160935,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.271006,0.0455644,0,0.244225,0.280552,0,0.0360965,0.251867,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.290837,-0.267491,0,0.25,-0.5,0,-0.5,0.25,0,-0.245755,0.255204,0,-0.259181,0.00933482,0,-0.25,0.5,0,-0.5,-0.25,0,-0.218285,-0.267711,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0121454,0.00710474,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.270839,0.0302002,0,0.238082,0.274465,0,0.0322112,0.247087,0,0.5,0.25,0,0.5,-0.25,0,0.0362074,-0.278815,0,0.283643,-0.261978,0,0.25,-0.5,0,-0.5,0.25,0,-0.237929,0.248016,0,-0.251739,0.00513869,0,-0.25,0.5,0,-0.5,-0.25,0,-0.219781,-0.256188,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,-0.000897667,-0.00475156,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.275727,0.0123323,0,0.227986,0.265931,0,0.0218556,0.240255,0,0.5,0.25,0,0.5,-0.25,0,0.0359422,-0.280252,0,0.270236,-0.249158,0,0.25,-0.5,0,-0.5,0.25,0,-0.22393,0.236696,0,-0.237828,-0.000942445,0,-0.25,0.5,0,-0.5,-0.25,0,-0.227968,-0.236933,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,-0.00781877,-0.00971439,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.276863,0.00144609,0,0.222366,0.259302,0,0.0139596,0.235267,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.262928,-0.239337,0,0.25,-0.5,0,-0.5,0.25,0,-0.217709,0.231642,0,-0.231926,-0.0041206,0,-0.25,0.5,0,-0.5,-0.25,0,-0.237761,-0.225188,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,-0.00218525,-0.000512552,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.271183,0.00382211,0,0.228124,0.25865,0,0.0125847,0.235726,0,0.5,0.25,0,0.5,-0.25,0,0.0398398,-0.267986,0,0.273125,-0.240353,0,0.25,-0.5,0,-0.5,0.25,0,-0.231345,0.242238,0,-0.245635,-0.00165787,0,-0.25,0.5,0,-0.5,-0.25,0,-0.252673,-0.232868,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.00957027,0.0155828,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.261752,0.0131799,0,0.238357,0.259902,0,0.0136695,0.23803,0,0.5,0.25,0,0.5,-0.25,0,0.0440028,-0.254284,0,0.28942,-0.244369,0,0.25,-0.5,0,-0.5,0.25,0,-0.252757,0.2591,0,-0.267352,0.00370783,0,-0.25,0.5,0,-0.5,-0.25,0,-0.269193,-0.248058,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0175726,0.026519,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.24895,0.0201633,0,0.240787,0.255194,0,0.0139596,0.235267,0,0.5,0.25,0,0.5,-0.25,0,0.0436347,-0.238578,0,0.289905,-0.238181,0,0.25,-0.5,0,-0.5,0.25,0,-0.259657,0.264478,0,-0.276746,0.00855077,0,-0.25,0.5,0,-0.5,-0.25,0,-0.271699,-0.250254,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0135179,0.0248489,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.209392,0.0185709,0,0.211632,0.219092,0,0.009217,0.199533,0,0.5,0.25,0,0.5,-0.25,0,0.0274416,-0.199072,0,0.229705,-0.182778,0,0.25,-0.5,0,-0.5,0.25,0,-0.209895,0.22698,0,-0.238333,0.0140052,0,-0.25,0.5,0,-0.5,-0.25,0,-0.222,-0.197594,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.00918536,0.0163207,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.19071,0.0175117,0,0.188977,0.197444,0,0.00680796,0.189666,0,0.5,0.25,0,0.5,-0.25,0,0.010018,-0.181753,0,0.174587,-0.145185,0,0.25,-0.5,0,-0.5,0.25,0,-0.170987,0.193953,0,-0.210662,0.0165172,0,-0.25,0.5,0,-0.5,-0.25,0,-0.179518,-0.158373,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0202457,0.00636752,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.261584,0.0249905,0,0.226527,0.251784,0,0.025082,0.300821,0,0.5,0.25,0,0.5,-0.25,0,0.00339474,-0.251327,0,0.201181,-0.217424,0,0.25,-0.5,0,-0.5,0.25,0,-0.22816,0.227661,0,-0.280936,0.0154407,0,-0.25,0.5,0,-0.5,-0.25,0,-0.224829,-0.218527,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0323545,-0.00231087,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.329798,0.0404941,0,0.259391,0.308967,0,0.0254764,0.396599,0,0.5,0.25,0,0.5,-0.25,0,0.00733622,-0.320452,0,0.242216,-0.286516,0,0.25,-0.5,0,-0.5,0.25,0,-0.29977,0.26256,0,-0.341421,0.00564975,0,-0.25,0.5,0,-0.5,-0.25,0,-0.271187,-0.290945,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0337317,-0.00352367,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.313143,0.061569,0,0.237647,0.306829,0,-0.0181431,0.36194,0,0.5,0.25,0,0.5,-0.25,0,0.0215294,-0.311965,0,0.246925,-0.261086,0,0.25,-0.5,0,-0.5,0.25,0,-0.318077,0.249528,0,-0.303654,-0.0125276,0,-0.25,0.5,0,-0.5,-0.25,0,-0.254382,-0.303926,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0325345,-0.0026663,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.272198,0.0869288,0,0.198158,0.288409,0,-0.0805245,0.285552,0,0.5,0.25,0,0.5,-0.25,0,0.0416763,-0.281355,0,0.244142,-0.206821,0,0.25,-0.5,0,-0.5,0.25,0,-0.325056,0.222096,0,-0.235314,-0.0363584,0,-0.25,0.5,0,-0.5,-0.25,0,-0.218081,-0.302868,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0323545,-0.00231087,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.250285,0.102041,0,0.170095,0.273955,0,-0.124713,0.227976,0,0.5,0.25,0,0.5,-0.25,0,0.0582374,-0.260036,0,0.242419,-0.168343,0,0.25,-0.5,0,-0.5,0.25,0,-0.326599,0.20156,0,-0.197023,-0.0560991,0,-0.25,0.5,0,-0.5,-0.25,0,-0.187388,-0.297168,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0389524,-0.0060164,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.300658,0.0939126,0,0.170953,0.276932,0,-0.1347,0.220215,0,0.5,0.25,0,0.5,-0.25,0,0.0749116,-0.274208,0,0.252154,-0.175847,0,0.25,-0.5,0,-0.5,0.25,0,-0.325572,0.198826,0,-0.258048,-0.0785248,0,-0.25,0.5,0,-0.5,-0.25,0,-0.163898,-0.286228,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0415097,-0.00682831,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.342053,0.0713598,0,0.183641,0.274636,0,-0.111167,0.228657,0,0.5,0.25,0,0.5,-0.25,0,0.076867,-0.283245,0,0.252166,-0.19224,0,0.25,-0.5,0,-0.5,0.25,0,-0.304502,0.202633,0,-0.323071,-0.0810376,0,-0.25,0.5,0,-0.5,-0.25,0,-0.154065,-0.261606,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0317522,0.000386096,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.298857,0.0522809,0,0.183618,0.247684,0,-0.0758994,0.20949,0,0.5,0.25,0,0.5,-0.25,0,0.0585392,-0.249755,0,0.227397,-0.174833,0,0.25,-0.5,0,-0.5,0.25,0,-0.258535,0.1976,0,-0.294259,-0.0535772,0,-0.25,0.5,0,-0.5,-0.25,0,-0.155743,-0.223474,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0173858,0.0106745,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.228648,0.0306279,0,0.182682,0.21208,0,-0.0290287,0.185916,0,0.5,0.25,0,0.5,-0.25,0,0.0307137,-0.20241,0,0.192925,-0.149543,0,0.25,-0.5,0,-0.5,0.25,0,-0.200189,0.191483,0,-0.238951,-0.0125065,0,-0.25,0.5,0,-0.5,-0.25,0,-0.163952,-0.177823,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.00918536,0.0163207,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.19071,0.0175117,0,0.188977,0.197444,0,0.00680796,0.189666,0,0.5,0.25,0,0.5,-0.25,0,0.010018,-0.181753,0,0.174587,-0.145185,0,0.25,-0.5,0,-0.5,0.25,0,-0.170987,0.193953,0,-0.210662,0.0165172,0,-0.25,0.5,0,-0.5,-0.25,0,-0.179518,-0.158373,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0194038,0.00730145,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.251992,0.0239714,0,0.226323,0.250205,0,0.0251079,0.299858,0,0.5,0.25,0,0.5,-0.25,0,0.00267802,-0.247451,0,0.202264,-0.21645,0,0.25,-0.5,0,-0.5,0.25,0,-0.232129,0.229025,0,-0.276091,0.0171697,0,-0.25,0.5,0,-0.5,-0.25,0,-0.227704,-0.22135,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0323545,-0.00231087,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.329798,0.0404941,0,0.259391,0.308967,0,0.0254764,0.396599,0,0.5,0.25,0,0.5,-0.25,0,0.00733622,-0.320452,0,0.242216,-0.286516,0,0.25,-0.5,0,-0.5,0.25,0,-0.29977,0.26256,0,-0.341421,0.00564975,0,-0.25,0.5,0,-0.5,-0.25,0,-0.271187,-0.290945,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0313571,0.00108052,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.335137,0.0491073,0,0.257118,0.309661,0,0.0202542,0.37392,0,0.5,0.25,0,0.5,-0.25,0,0.0146915,-0.319559,0,0.252571,-0.282301,0,0.25,-0.5,0,-0.5,0.25,0,-0.288174,0.262202,0,-0.321759,0.00489025,0,-0.25,0.5,0,-0.5,-0.25,0,-0.274823,-0.287726,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0266225,0.00858702,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.322894,0.0581286,0,0.243813,0.29472,0,0.0101271,0.31196,0,0.5,0.25,0,0.5,-0.25,0,0.0255821,-0.298468,0,0.257703,-0.256088,0,0.25,-0.5,0,-0.5,0.25,0,-0.253211,0.251891,0,-0.27499,0.00535773,0,-0.25,0.5,0,-0.5,-0.25,0,-0.266921,-0.26419,0,-0.25,-0.5,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,0.0218878,0.0160935,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.310651,0.0671499,0,0.230507,0.279779,0,0,0.25,0,0.5,0.25,0,0.5,-0.25,0,0.0364727,-0.277378,0,0.262835,-0.229876,0,0.25,-0.5,0,-0.5,0.25,0,-0.218248,0.241579,0,-0.228221,0.00582522,0,-0.25,0.5,0,-0.5,-0.25,0,-0.25902,-0.240653,0,-0.25,-0.5,0])})])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0.16),
                          diffuseColor : new SFColor([1,1,1])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["reflect11.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          translation : new SFVec2f([0.16,0.14]),
                          scale : new SFVec2f([0.738074,0.708131])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([9,7,12,11,-1,12,6,10,11,-1,4,13,11,10,-1,13,2,9,11,-1,14,4,10,16,-1,10,6,15,16,-1,8,17,16,15,-1,17,1,14,16,-1,18,5,20,19,-1,20,6,12,19,-1,7,21,19,12,-1,21,3,18,19,-1,15,6,20,23,-1,20,5,22,23,-1,0,24,23,22,-1,24,8,15,23,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("_9"),
                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0.5,0,0,-0.5,0,0,-0.00363389,-0.00707239,0,0,0.5,0,0,-0.5,0,0.25,0.5,0,0.276728,0.00849415,0,0.225781,0.263875,0,0.0192382,0.238644,0,0.5,0.25,0,0.5,-0.25,0,0.0359706,-0.280098,0,0.267287,-0.24594,0,0.25,-0.5,0,-0.5,0.25,0,-0.221035,0.234386,0,-0.234972,-0.00222608,0,-0.25,0.5,0,-0.5,-0.25,0,-0.23053,-0.232594,0,-0.25,-0.5,0])}))}))})])}),

            new SpotLight({
              DEF : new SFString("BlueLagoon"),
              color : new SFColor([0,0.588043,1]),
              attenuation : new SFVec3f([0.8,0,0]),
              location : new SFVec3f([-1.83164,-79.6621,1.72466]),
              direction : new SFVec3f([0.00925442,-0.999948,-5.51343e-7]),
              beamWidth : new SFFloat(0.379958),
              cutOffAngle : new SFFloat(1.22557)}),

            new TimeSensor({
              DEF : new SFString("enterWorldTimeSensor"),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("enterWorldScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("firstTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("triggerIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),vrmlscript:, function triggerIn(value, time) {

         // fire off a single round                                     
         startTime = value;                                             
         firstTime = FALSE;                                             
       })}),

            new Sound({
              DEF : new SFString("tube"),
              minBack : new SFFloat(44.7),
              minFront : new SFFloat(44.7),
              maxBack : new SFFloat(447),
              maxFront : new SFFloat(447),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("tube_1"),
                  description : new SFString("tube"),
                  url : new MFString(["tube.wav"]),
                  loop : new SFBool(true)}))}),

            new Sound({
              DEF : new SFString("schacht"),
              minBack : new SFFloat(41.4),
              minFront : new SFFloat(41.4),
              maxBack : new SFFloat(414),
              maxFront : new SFFloat(414),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("schacht_1"),
                  description : new SFString("schacht"),
                  url : new MFString(["schacht.mid"]),
                  loop : new SFBool(true)}))}),

            new NavigationInfo({
              type : ["NONE"],
              DEF : new SFString("_NoNameNavInfo1"),
              headlight : new SFBool(false)}),

            new Transform({
              DEF : new SFString("linking"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("link-links"),
                  translation : new SFVec3f([-18.0179,6.94695,-17.2108]),
                  rotation : new SFRotation([0.00000370481,1,-0.00000367301,0.785395]),
                  scale : new SFVec3f([1,0.999999,1]),
                  scaleOrientation : new SFRotation([3.92689e-7,1,5.60985e-8,1.5708]),
                  children : new MFNode([
                    new LOD({
                      DEF : new SFString("lod-links"),
                      range : new MFFloat([14]),
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Anchor({
                              url : new MFString(["#VP1"]),
                              parameter : new MFString(["Zoom out"]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,1.43e-7,0.399858]),
                                  rotation : new SFRotation([1,0,0,1.5708]),
                                  scale : new SFVec3f([6.56,0.779804,4.4175]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_10"),
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              shininess : new SFFloat(0),
                                              transparency : new SFFloat(1)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])}),

                        new Transform({
                          children : new MFNode([
                            new Anchor({
                              url : new MFString(["#BILDLINKS"]),
                              parameter : new MFString(["Zoom in"]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.00000286102,-0.0000104904,0.00000762939]),
                                  rotation : new SFRotation([1,1.9613e-10,7.10523e-8,1.5708]),
                                  scale : new SFVec3f([6.55998,0.379949,4.41749]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_10")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("link-mitte_1"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("link-mitte"),
                      translation : new SFVec3f([0,6.94693,-25.0927]),
                      children : new MFNode([
                        new LOD({
                          DEF : new SFString("lod-mitte"),
                          range : new MFFloat([14]),
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Anchor({
                                  url : new MFString(["#VP1"]),
                                  parameter : new MFString(["Zoom out"]),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0,1.43e-7,0.399858]),
                                      rotation : new SFRotation([1,0,0,1.5708]),
                                      scale : new SFVec3f([6.56,0.779804,4.4175]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  ambientIntensity : new SFFloat(0),
                                                  diffuseColor : new SFColor([0,0,0]),
                                                  shininess : new SFFloat(0),
                                                  transparency : new SFFloat(1)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])}),

                            new Transform({
                              children : new MFNode([
                                new Anchor({
                                  url : new MFString(["#BILDMITTE"]),
                                  parameter : new MFString(["Zoom in"]),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0000013411,-0.0000104904,0.00000762939]),
                                      rotation : new SFRotation([1,0,0,1.5708]),
                                      scale : new SFVec3f([6.55998,0.379949,4.41749]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("_10")}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              creaseAngle : new SFFloat(0.5),
                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("link-rechts"),
                  translation : new SFVec3f([6.61184,18.117,-26.4466]),
                  rotation : new SFRotation([0.00000365424,-1,0.00000188442,0.785387]),
                  scale : new SFVec3f([1,0.999999,1]),
                  children : new MFNode([
                    new LOD({
                      DEF : new SFString("lod-rechts"),
                      range : new MFFloat([14]),
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Anchor({
                              url : new MFString(["#VP1"]),
                              parameter : new MFString(["Zoom out"]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([15.9,-10.083,0.094106]),
                                  rotation : new SFRotation([1,0.00000456776,-0.0000046266,1.5708]),
                                  scale : new SFVec3f([6.50668,0.470229,4.38159]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              shininess : new SFFloat(0),
                                              transparency : new SFFloat(1)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])}),

                        new Transform({
                          children : new MFNode([
                            new Anchor({
                              url : new MFString(["#BILDRECHTS"]),
                              parameter : new MFString(["Zoom in"]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([15.4426,-11.1706,-1.56778]),
                                  rotation : new SFRotation([1,0.00000456776,-0.0000046266,1.5708]),
                                  scale : new SFVec3f([6.50668,0.470229,4.38159]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              shininess : new SFFloat(0),
                                              transparency : new SFFloat(1)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(0.5),
                                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])})])})])})])})])}),

            new Transform({
              DEF : new SFString("fallklumpen"),
              translation : new SFVec3f([-12.79,0,-5.79286]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("klumpen"),
                  translation : new SFVec3f([0,36.0436,0]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("fallDown"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_2"),
                              cycleInterval : new SFTime(5),
                              loop : new SFBool(true),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedTransformTranslationInterp"),
                          key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                          keyValue : new MFVec3f([0,36.0436,0,0,32.9274,0,0,29.8112,0,0,26.695,0,0,23.5788,0,0,20.4625,0,0,17.3463,0,0,14.2301,0,0,11.1139,0,0,7.99769,0,0,4.88149,0,0,1.76527,0,0,-1.35094,0,0,-4.46715,0,0,-7.58336,0,0,-10.6996,0,0,-13.8158,0,0,-16.932,0,0,-20.0482,0,0,-23.1644,0,0,-26.2806,0,0,-29.3969,0,0,-32.5131,0,0,-35.6293,0,0,-38.7455,0,0,-41.8617,0,0,-44.9779,0,0,-48.0941,0,0,-51.2103,0,0,-54.3265,0,0,-57.4428,0,0,-60.559,0,0,-63.6752,0,0,-66.7914,0,0,-69.9076,0,0,-73.0238,0,0,-76.14,0,0,-79.2562,0,0,-82.3724,0,0,-85.4886,0,0,-88.6048,0,0,-91.7211,0,0,-94.8373,0,0,-97.9535,0,0,-101.07,0,0,-104.186,0,0,-107.302,0,0,-110.418,0,0,-113.535,0,0,-116.651,0,0,-119.767,0])}),

                        new ScalarInterpolator({
                          DEF : new SFString("Light1IntensityInterp"),
                          key : new MFFloat([0,0.08,0.96,0.98,1]),
                          keyValue : new MFFloat([0,1,1,0.619564,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("Light1LocationInterp"),
                          key : new MFFloat([0]),
                          keyValue : new MFVec3f([0,0,0])})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.16),
                              diffuseColor : new SFColor([0,0.882701,1]),
                              emissiveColor : new SFColor([0,0.882701,1])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([1.72475,1.72475,1.72475])}))}),

                    new PointLight({
                      DEF : new SFString("Light1"),
                      color : new SFColor([0,0.9591,1]),
                      intensity : new SFFloat(0),
                      attenuation : new SFVec3f([0.1,0.01,0.01])})])}),

                new Transform({
                  DEF : new SFString("trigger"),
                  translation : new SFVec3f([12.8686,0.669945,22.3784]),
                  scale : new SFVec3f([1,0.536038,1]),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("touchSensorTrigger_1")}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0.671931,0.8]),
                              emissiveColor : new SFColor([0,0.536115,0.638298])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([0.325411,0.325411,0.325415])}))})])}),

                new Sound({
                  DEF : new SFString("down"),
                  minBack : new SFFloat(24.4),
                  minFront : new SFFloat(24.4),
                  maxBack : new SFFloat(244),
                  maxFront : new SFFloat(244),
                  source : new SFNode(
                    new AudioClip({
                      DEF : new SFString("down_1"),
                      description : new SFString("down"),
                      url : new MFString(["down.wav"]),
                      pitch : new SFFloat(0.5)}))})])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("bildmitteAnim"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_3"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("BILDMITTEPositionInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.410345,0.42069,0.431035,0.441379,0.451724,0.462069,0.472414,0.482759,0.493104,0.503448,0.513793,0.524138,0.534483,0.544828,0.555172,0.565517,0.575862,0.586207,0.596552,0.606896,0.617241,0.627586,0.637931,0.648276,0.65862,0.668965,0.67931,0.689655,0.7,0.710526,0.721053,0.731579,0.742105,0.752631,0.763158,0.773684,0.78421,0.794737,0.805263,0.815789,0.826316,0.836842,0.847368,0.857894,0.868421,0.878947,0.889473,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFVec3f([0,1.6,20,-0.0110939,3.11361,19.2394,-0.0226484,4.69005,18.4473,-0.0345821,6.31825,17.6291,-0.0468139,7.9871,16.7906,-0.0592624,9.68552,15.9371,-0.0718463,11.4024,15.0744,-0.0844845,13.1267,14.2079,-0.0970955,14.8473,13.3434,-0.109598,16.5531,12.4862,-0.121911,18.2331,11.6421,-0.133953,19.876,10.8165,-0.145643,21.471,10.0151,-0.1569,23.0068,9.24333,-0.167641,24.4723,8.5069,-0.177787,25.8566,7.81134,-0.187256,27.1484,7.16221,-0.195965,28.3367,6.56508,-0.203836,29.4105,6.02552,-0.210784,30.3586,5.54912,-0.216731,31.1699,5.14144,-0.221902,31.8639,4.81456,-0.226575,32.4691,4.57136,-0.230742,32.9882,4.40363,-0.234394,33.4238,4.30317,-0.237525,33.7784,4.26175,-0.240127,34.0548,4.27116,-0.242192,34.2555,4.3232,-0.243712,34.3831,4.40965,-0.244681,34.4403,4.52229,-0.24509,34.4297,4.65291,-0.244932,34.3539,4.79331,-0.244199,34.2155,4.93526,-0.242884,34.0172,5.07056,-0.240979,33.7615,5.19099,-0.238476,33.4511,5.28834,-0.235368,33.0886,5.3544,-0.231647,32.6766,5.38095,-0.227305,32.2178,5.35978,-0.222336,31.7146,5.28269,-0.216731,31.1699,5.14144,-0.210098,30.5436,4.95612,-0.202511,29.8371,4.76428,-0.194048,29.0567,4.56569,-0.184785,28.2083,4.36016,-0.174801,27.2982,4.14745,-0.164173,26.3326,3.92737,-0.152978,25.3175,3.69969,-0.141295,24.2592,3.46421,-0.129201,23.1638,3.22071,-0.116773,22.0374,2.96898,-0.104089,20.8862,2.70881,-0.0912268,19.7164,2.43997,-0.0782638,18.534,2.16227,-0.0652777,17.3453,1.87548,-0.0523459,16.1564,1.5794,-0.0395461,14.9735,1.27381,-0.0269559,13.8026,0.958493,-0.0146528,12.65,0.633241,-0.00271447,11.5218,0.297841,0.00878153,10.4242,-0.0479209,0.0197576,9.36332,-0.404257,0.0301362,8.34528,-0.77138,0.0398397,7.37625,-1.14951,0.0487904,6.4624,-1.53884,0.056911,5.60986,-1.93961,0.0641237,4.82479,-2.35202,0.0703509,4.11335,-2.77627,0.0755151,3.48169,-3.2126,0.0795388,2.93593,-3.66122,0.08185,2.50393,-4.15921,0.0819489,2.21814,-4.72246,0.0800457,2.06541,-5.34331,0.0763507,2.03255,-6.01406,0.0710744,2.1064,-6.72704,0.0644269,2.27378,-7.47456,0.0566185,2.52153,-8.24895,0.0478597,2.83647,-9.04252,0.0383606,3.20542,-9.84759,0.0283316,3.61523,-10.6565,0.017983,4.05272,-11.4615,0.00752509,4.5047,-12.255,-0.00283181,4.95803,-13.0293,-0.0128774,5.39952,-13.7767,-0.0224014,5.816,-14.4895,-0.0311935,6.19429,-15.16,-0.0390433,6.52124,-15.7806,-0.0457407,6.78367,-16.3436,-0.0510753,6.9684,-16.8413,-0.0546019,7.07728,-17.1972,-0.0566482,7.14045,-17.4036,-0.0574754,7.16599,-17.4871,-0.0573448,7.16196,-17.4739,-0.0565176,7.13642,-17.3905,-0.055255,7.09744,-17.2631,-0.0538182,7.05308,-17.1181,-0.0524685,7.01141,-16.9819,-0.0514672,6.9805,-16.8808,-0.0510753,6.9684,-16.8413])}),

                        new OrientationInterpolator({
                          DEF : new SFString("BILDMITTEOrientationInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.410345,0.42069,0.431035,0.441379,0.451724,0.462069,0.472414,0.482759,0.493104,0.503448,0.513793,0.524138,0.534483,0.544828,0.555172,0.565517,0.575862,0.586207,0.596552,0.606896,0.617241,0.627586,0.637931,0.648276,0.65862,0.668965,0.67931,0.689655,0.7,0.710526,0.721053,0.731579,0.742105,0.752631,0.763158,0.773684,0.78421,0.794737,0.805263,0.815789,0.826316,0.836842,0.847368,0.857894,0.868421,0.878947,0.889473,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFRotation([0.985947,-0.155705,0.0605339,0.0972327,0.958478,-0.267217,0.099575,0.0579246,0.318023,-0.893835,0.316102,0.0177805,-0.950354,-0.295263,0.0982155,0.0554212,-0.989032,-0.141065,0.0437793,0.119704,-0.995489,-0.0911876,0.0262066,0.191317,-0.997584,-0.0671675,0.0177498,0.268452,-0.998499,-0.0532468,0.0128506,0.34991,-0.998973,-0.0442637,0.00968971,0.434582,-0.999248,-0.0380437,0.00750141,0.521394,-0.999421,-0.0335177,0.00590926,0.609278,-0.999536,-0.0301018,0.00470771,0.697172,-0.999616,-0.0274519,0.00377564,0.784016,-0.999674,-0.0253533,0.00303753,0.86875,-0.999717,-0.0236662,0.00244417,0.950316,-0.99975,-0.0222965,0.00196245,1.02766,-0.999775,-0.0211792,0.00156952,1.09971,-0.999794,-0.0202691,0.00124944,1.16543,-0.999809,-0.0195343,0.000991026,1.22374,-0.99982,-0.0189528,0.00078655,1.2736,-0.999828,-0.0185103,0.000630925,1.31395,-0.999835,-0.0181788,0.000510308,1.34761,-0.999839,-0.0179281,0.000411198,1.37809,-0.999842,-0.0177467,0.000331041,1.40533,-0.999845,-0.0176245,0.000267698,1.42925,-0.999846,-0.0175528,0.000219359,1.44982,-0.999846,-0.0175241,0.000184489,1.46696,-0.999846,-0.0175315,0.000161773,1.48061,-0.999846,-0.017569,0.000150088,1.49072,-0.999845,-0.0176308,0.000148465,1.49723,-0.999843,-0.0177118,0.000156074,1.50008,-0.999842,-0.0178071,0.000172201,1.4992,-0.999839,-0.0179119,0.000196237,1.49454,-0.999838,-0.0180215,0.00022767,1.48604,-0.999836,-0.0181314,0.00026608,1.47364,-0.999834,-0.0182369,0.000311131,1.45727,-0.999832,-0.0183329,0.000362579,1.43689,-0.99983,-0.0184144,0.000420272,1.41242,-0.999829,-0.0184755,0.00048416,1.38382,-0.999829,-0.0185099,0.000554309,1.35101,-0.999828,-0.0185103,0.000630925,1.31395,-0.999829,-0.0184919,0.000693169,1.28402,-0.999829,-0.0184637,0.00077014,1.24862,-0.99983,-0.0184256,0.000862914,1.20814,-0.999831,-0.0183775,0.000972991,1.16301,-0.999832,-0.0183188,0.0011024,1.11366,-0.999833,-0.0182488,0.00125381,1.06048,-0.999834,-0.0181663,0.00143074,1.00392,-0.999835,-0.0180695,0.00163784,0.944369,-0.999837,-0.0179563,0.00188124,0.882261,-0.999839,-0.0178234,0.00216922,0.818011,-0.999841,-0.0176666,0.00251303,0.752034,-0.999843,-0.0174797,0.00292837,0.684749,-0.999845,-0.0172542,0.00343767,0.616574,-0.999848,-0.0169773,0.00407401,0.547926,-0.99985,-0.0166295,0.00488823,0.479223,-0.999851,-0.0161796,0.00596233,0.410883,-0.999851,-0.0155738,0.00743752,0.343323,-0.999846,-0.0147118,0.00957888,0.276962,-0.999827,-0.0133811,0.0129484,0.212218,-0.999759,-0.0110407,0.01898,0.149513,-0.999447,-0.0057824,0.032734,0.0892708,-0.995436,0.0173645,0.0938367,0.0319818,0.988248,0.0690162,0.136392,0.0225352,0.99849,0.0340055,0.04314,0.0727792,0.999253,0.0277703,0.0268766,0.119038,0.99948,0.0251225,0.0202278,0.160776,0.999582,0.0236192,0.0166928,0.197562,0.999638,0.0226161,0.0145704,0.228975,0.999673,0.0218667,0.013225,0.254602,0.999709,0.0209208,0.0119851,0.283816,0.999735,0.0200404,0.0112952,0.303107,0.999757,0.0191455,0.0109602,0.313387,0.999775,0.0181796,0.0108888,0.315568,0.999793,0.0170913,0.011041,0.310562,0.99981,0.0158239,0.0114077,0.29928,0.999826,0.0143059,0.012004,0.282635,0.99984,0.0124405,0.0128693,0.261539,0.99985,0.0100873,0.0140746,0.236904,0.999851,0.00703338,0.0157375,0.209642,0.999833,0.00293879,0.0180533,0.18067,0.999768,-0.0027708,0.021357,0.150898,0.999593,-0.0111348,0.0262574,0.121242,0.99913,-0.0242091,0.0339577,0.0926222,0.997802,-0.0465813,0.0471333,0.0659662,0.993232,-0.0904499,0.0728589,0.0422251,0.970672,-0.198476,0.135658,0.0224717,0.737265,-0.577154,0.351188,0.00862477,-0.498583,-0.755013,0.425876,0.00707587,-0.906416,-0.374981,0.194423,0.0154254,-0.947869,-0.285578,0.141387,0.0211489,-0.956872,-0.261268,0.127024,0.0235087,-0.955625,-0.26479,0.129104,0.0231304,-0.946172,-0.289895,0.14394,0.0207736,-0.924013,-0.34051,0.173932,0.0172219,-0.875649,-0.427072,0.225496,0.0133186,-0.773044,-0.556958,0.303647,0.00991104,-0.604735,-0.695292,0.388413,0.00775123,-0.498583,-0.755013,0.425876,0.00707587])}),

                        new ScalarInterpolator({
                          DEF : new SFString("BILDMITTEFieldOfViewInterp"),
                          key : new MFFloat([0]),
                          keyValue : new MFFloat([1])})])}),

                    new Viewpoint({
                      DEF : new SFString("BILDMITTE"),
                      description : new SFString("bild-mitte"),
                      position : new SFVec3f([0,1.6,20]),
                      orientation : new SFRotation([0.985947,-0.155705,0.0605339,0.0972327]),
                      fieldOfView : new SFFloat(1)})])}),

                new Transform({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("bildlinksAnim"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_4"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("BILDLINKSPositionInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.740625,0.75125,0.761875,0.7725,0.783125,0.79375,0.804375,0.815,0.825625,0.83625,0.846875,0.8575,0.868125,0.87875,0.889375,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFVec3f([0,1.6,20,0.370257,1.73636,19.4289,0.751942,1.88776,18.8527,1.14077,2.04855,18.2733,1.53246,2.2131,17.6927,1.92271,2.37577,17.1127,2.30725,2.53092,16.5352,2.6818,2.67292,15.9622,3.04205,2.79613,15.3955,3.38374,2.89491,14.8372,3.70257,2.96362,14.289,3.99426,2.99663,13.7529,4.26491,3.00863,13.2375,4.52424,3.01759,12.7473,4.77338,3.02278,12.278,5.01348,3.02347,11.8253,5.24565,3.01893,11.3849,5.47105,3.00844,10.9526,5.6908,2.99126,10.5241,5.90604,2.96666,10.095,6.11791,2.93393,9.6612,6.32754,2.89232,9.21831,6.53606,2.84111,8.76206,6.74461,2.77957,8.2882,6.95433,2.70698,7.79242,7.16635,2.6226,7.27046,7.3818,2.5257,6.71803,7.60183,2.41556,6.13087,7.82756,2.29145,5.50467,8.06013,2.15264,4.83516,8.30068,1.9984,4.11807,8.57022,1.80602,3.31158,8.8828,1.55914,2.38921,9.22912,1.2666,1.36963,9.59986,0.937198,0.271532,9.98572,0.579763,-0.886396,10.3774,0.203112,-2.08547,10.7656,-0.183939,-3.307,11.141,-0.572571,-4.53229,11.4942,-0.953965,-5.74268,11.8161,-1.3193,-6.91946,12.0972,-1.65977,-8.04394,12.3283,-1.96654,-9.09745,12.5001,-2.2308,-10.0613,12.6032,-2.44374,-10.9168,12.6284,-2.59653,-11.6453,12.5663,-2.68035,-12.228,12.412,-2.69556,-12.66,12.1714,-2.65182,-12.9576,11.8513,-2.55424,-13.1344,11.4585,-2.40795,-13.2041,10.9999,-2.21808,-13.1802,10.4823,-1.98975,-13.0762,9.91243,-1.72808,-12.9057,9.29724,-1.43821,-12.6824,8.64352,-1.12526,-12.4197,7.9581,-0.794343,-12.1312,7.24782,-0.450597,-11.8306,6.51949,-0.0991428,-11.5313,5.77996,0.254896,-11.247,5.03604,0.606395,-10.9912,4.23083,0.992114,-10.7021,3.31762,1.44298,-10.3222,2.31858,1.9451,-9.87131,1.25587,2.48458,-9.36927,0.151651,3.04754,-8.83598,-0.971917,3.62009,-8.29131,-2.09267,4.18833,-7.75512,-3.18844,4.73838,-7.2473,-4.23708,5.25635,-6.78771,-5.21641,5.72835,-6.39622,-6.10427,6.14048,-6.09271,-6.87851,6.47886,-5.89704,-7.51696,6.7296,-5.82909,-8.08161,6.91802,-5.8782,-8.58239,7.05684,-6.0132,-9.02459,7.1512,-6.22361,-9.41354,7.20627,-6.499,-9.75453,7.22718,-6.82892,-10.0529,7.21909,-7.2029,-10.3139,7.18713,-7.6105,-10.5429,7.13646,-8.04127,-10.7451,7.07222,-8.48476,-10.926,6.99956,-8.9305,-11.0908,6.92362,-9.36806,-11.2447,6.84956,-9.78698,-11.3932,6.78252,-10.1768,-11.5415,6.72765,-10.5271,-11.6949,6.6901,-10.8274,-11.8588,6.675,-11.0672,-11.9891,6.67336,-11.2243,-12.0646,6.67241,-11.3155,-12.0952,6.67203,-11.3524,-12.0904,6.67209,-11.3466,-12.0598,6.67247,-11.3097,-12.0132,6.67306,-11.2534,-11.9601,6.67373,-11.1894,-11.9103,6.67435,-11.1293,-11.8733,6.67482,-11.0847,-11.8588,6.675,-11.0672])}),

                        new OrientationInterpolator({
                          DEF : new SFString("BILDLINKSOrientationInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.740625,0.75125,0.761875,0.7725,0.783125,0.79375,0.804375,0.815,0.825625,0.83625,0.846875,0.8575,0.868125,0.87875,0.889375,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFRotation([0.985947,-0.155705,0.0605339,0.0972327,0.998329,0.0121076,0.0565043,0.0952351,0.977532,0.204333,0.051766,0.096125,0.916276,0.397889,0.0460846,0.10102,0.822578,0.567254,0.0398614,0.110497,0.714771,0.698541,0.0338041,0.124504,0.609508,0.79227,0.0284312,0.14254,0.515827,0.856359,0.0239127,0.163985,0.436365,0.899543,0.0201854,0.188247,0.370416,0.928709,0.0170974,0.214834,0.316081,0.948622,0.0144896,0.243346,0.271307,0.962415,0.012226,0.273456,0.234273,0.972117,0.0101995,0.304893,0.203483,0.979043,0.00832814,0.337424,0.177748,0.984054,0.00654973,0.370839,0.156133,0.987724,0.00481678,0.404952,0.137908,0.99044,0.00309247,0.439587,0.1225,0.992468,0.00134764,0.47458,0.109459,0.993991,-0.000441409,0.509773,0.0984286,0.995141,-0.00229463,0.545014,0.0891246,0.996012,-0.00422936,0.580157,0.0813213,0.996668,-0.00626122,0.615056,0.0748373,0.99716,-0.00840479,0.64957,0.0695278,0.997523,-0.0106741,0.683561,0.0652762,0.997781,-0.0130832,0.716892,0.0619899,0.997954,-0.0156461,0.749428,0.0595956,0.998053,-0.0183774,0.781036,0.0580361,0.998087,-0.0212925,0.811584,0.0572682,0.99806,-0.0244077,0.840942,0.0572603,0.997974,-0.0277403,0.868982,0.0579914,0.997826,-0.0313091,0.895577,0.0616754,0.997318,-0.0394005,0.945728,0.0679839,0.996469,-0.0492773,0.998784,0.0760865,0.99528,-0.0602373,1.05395,0.0853092,0.99377,-0.0717252,1.1104,0.0951178,0.991974,-0.0833122,1.16731,0.105096,0.989945,-0.0946735,1.22379,0.114922,0.987749,-0.105565,1.27895,0.124346,0.985458,-0.115803,1.33187,0.133172,0.983147,-0.125248,1.38159,0.141242,0.980893,-0.133786,1.42716,0.148418,0.978774,-0.141324,1.4676,0.154579,0.976867,-0.147771,1.50194,0.159602,0.975247,-0.153039,1.52919,0.163359,0.97399,-0.157027,1.54838,0.165704,0.973173,-0.159616,1.55853,0.166464,0.972871,-0.16066,1.55867,0.166171,0.972942,-0.160535,1.55298,0.165426,0.973169,-0.159924,1.54228,0.16425,0.973544,-0.15885,1.52694,0.162656,0.974059,-0.157329,1.50734,0.160654,0.974705,-0.15537,1.48384,0.158249,0.975476,-0.152981,1.45682,0.155444,0.976365,-0.150165,1.42664,0.152237,0.977363,-0.14692,1.39368,0.148627,0.978464,-0.143244,1.35831,0.144607,0.979659,-0.13913,1.3209,0.140171,0.980939,-0.134573,1.28183,0.135313,0.982295,-0.129565,1.24147,0.130027,0.983714,-0.124099,1.2002,0.12431,0.985182,-0.11817,1.15838,0.118161,0.986683,-0.111777,1.11639,0.111587,0.9882,-0.104926,1.07461,0.104602,0.98971,-0.09763,1.0334,0.0972363,0.991191,-0.089917,0.993122,0.0895329,0.992617,-0.081831,0.954153,0.0815577,0.993959,-0.0734379,0.916849,0.0734026,0.995193,-0.0648311,0.881567,0.0651903,0.996293,-0.0561357,0.848659,0.0570782,0.997238,-0.0475136,0.818467,0.0492606,0.998018,-0.0391651,0.791331,0.0419674,0.998628,-0.0313288,0.76758,0.0354592,0.999076,-0.0242762,0.74754,0.0300165,0.999382,-0.0183009,0.731531,0.0228523,0.999687,-0.0101817,0.71146,0.0176605,0.999836,-0.00390541,0.697637,0.0144336,0.999896,0.000502233,0.689356,0.0130557,0.99991,0.00312077,0.685931,0.0133232,0.999903,0.00411821,0.686689,0.0149702,0.999881,0.00372723,0.690971,0.0176979,0.999841,0.00221898,0.698124,0.0211981,0.999775,-0.000120675,0.707497,0.0251733,0.999679,-0.00301004,0.71844,0.0293485,0.99955,-0.00618421,0.730297,0.0334769,0.999395,-0.00940169,0.742411,0.0373408,0.999225,-0.0124457,0.754118,0.0407474,0.999055,-0.0151218,0.764752,0.0435227,0.998903,-0.0172519,0.773644,0.0455028,0.99879,-0.0186667,0.780121,0.0465231,0.998733,-0.0191954,0.783514,0.0471475,0.998703,-0.0192291,0.785623,0.0475084,0.998685,-0.0192486,0.786847,0.047654,0.998678,-0.0192565,0.787342,0.047631,0.998679,-0.0192553,0.787263,0.0474854,0.998686,-0.0192474,0.786769,0.0472628,0.998697,-0.0192354,0.786014,0.0470091,0.998709,-0.0192217,0.785154,0.0467702,0.998721,-0.0192088,0.784347,0.0465926,0.998729,-0.0191992,0.783748,0.0465231,0.998733,-0.0191954,0.783514])}),

                        new ScalarInterpolator({
                          DEF : new SFString("BILDLINKSFieldOfViewInterp"),
                          key : new MFFloat([0]),
                          keyValue : new MFFloat([1])})])}),

                    new Viewpoint({
                      DEF : new SFString("BILDLINKS"),
                      description : new SFString("bild-links"),
                      position : new SFVec3f([0,1.6,20]),
                      orientation : new SFRotation([0.985947,-0.155705,0.0605339,0.0972327]),
                      fieldOfView : new SFFloat(1)})])}),

                new Transform({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("bildrechtsAnim"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_5"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("BILDRECHTSPositionInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.680455,0.690909,0.701364,0.711818,0.722273,0.732727,0.743182,0.753636,0.764091,0.774545,0.785,0.795454,0.805909,0.816364,0.826818,0.837273,0.847727,0.858182,0.868636,0.879091,0.889545,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFVec3f([0,1.6,20,-0.608626,1.69857,19.3285,-1.25524,1.79511,18.6482,-1.9335,1.88997,17.9605,-2.63708,1.98349,17.2669,-3.35966,2.07599,16.5689,-4.0949,2.16782,15.868,-4.83646,2.25931,15.1655,-5.57803,2.35081,14.4631,-6.31327,2.44264,13.7622,-7.03585,2.53514,13.0642,-7.73943,2.62866,12.3706,-8.41769,2.72352,11.6829,-9.0643,2.82006,11.0026,-9.67293,2.91863,10.3311,-10.2372,3.01955,9.66991,-10.7509,3.12317,9.02051,-11.2076,3.22982,8.38437,-11.601,3.33983,7.76295,-11.9247,3.45356,7.15773,-12.1725,3.57132,6.57019,-12.338,3.69346,6.0018,-12.4312,3.81982,5.43933,-12.4686,3.94983,4.87,-12.4533,4.08324,4.29592,-12.3883,4.21977,3.71919,-12.2769,4.35916,3.14192,-12.1221,4.50115,2.56622,-11.9272,4.64548,1.9942,-11.6952,4.79187,1.42796,-11.4292,4.94007,0.869614,-11.1325,5.08981,0.32127,-10.8081,5.24083,-0.214965,-10.4592,5.39285,-0.736982,-10.0889,5.54563,-1.24267,-9.7003,5.69889,-1.72993,-9.29661,5.85237,-2.19665,-8.88094,6.0058,-2.64072,-8.45641,6.15892,-3.06003,-8.02617,6.31147,-3.45248,-7.59334,6.46318,-3.81595,-7.16106,6.61379,-4.14834,-6.73247,6.76303,-4.44754,-6.31069,6.91064,-4.71145,-5.89887,7.05635,-4.93795,-5.50013,7.19991,-5.12494,-5.09358,7.34814,-5.25109,-4.65816,7.5069,-5.30137,-4.19676,7.67448,-5.2831,-3.71228,7.84915,-5.20362,-3.20761,8.02919,-5.07025,-2.68565,8.21288,-4.89032,-2.14929,8.3985,-4.67115,-1.60143,8.58432,-4.42008,-1.04497,8.76862,-4.14443,-0.482798,8.94969,-3.85153,0.0821891,9.1258,-3.54871,0.647095,9.29522,-3.24329,1.20902,9.45625,-2.94261,1.76508,9.60714,-2.65398,2.31237,9.74619,-2.38474,2.84799,9.87168,-2.14222,3.36906,9.98187,-1.93373,3.87267,10.075,-1.76662,4.35593,10.1495,-1.64821,4.81594,10.2035,-1.58581,5.24982,10.2353,-1.58678,5.65466,10.2432,-1.65842,6.05506,10.2237,-1.80155,6.4424,10.1765,-1.999,6.81707,10.1039,-2.24601,7.17942,10.0083,-2.53784,7.52983,9.89182,-2.86975,7.86868,9.75696,-3.23701,8.19634,9.606,-3.63485,8.51317,9.44127,-4.05855,8.81955,9.2651,-4.50337,9.11585,9.07981,-4.96454,9.40245,8.88773,-5.43735,9.67971,8.6912,-5.91704,9.948,8.49252,-6.39886,10.2077,8.29404,-6.87809,10.4592,8.09808,-7.34997,10.7028,7.90696,-7.80976,10.939,7.72302,-8.25272,11.1681,7.54857,-8.67411,11.3904,7.38596,-9.06919,11.6064,7.2375,-9.4332,11.8163,7.10552,-9.76142,12.0207,6.99235,-10.0491,12.177,6.91256,-10.2551,12.2676,6.86626,-10.3746,12.3043,6.84754,-10.4229,12.2985,6.85049,-10.4152,12.2618,6.86921,-10.3669,12.2059,6.89778,-10.2932,12.1422,6.93029,-10.2093,12.0824,6.96083,-10.1305,12.0381,6.98348,-10.072,12.0207,6.99235,-10.0491])}),

                        new OrientationInterpolator({
                          DEF : new SFString("BILDRECHTSOrientationInterp"),
                          key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.680455,0.690909,0.701364,0.711818,0.722273,0.732727,0.743182,0.753636,0.764091,0.774545,0.785,0.795454,0.805909,0.816364,0.826818,0.837273,0.847727,0.858182,0.868636,0.879091,0.889545,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1]),
                          keyValue : new MFRotation([0.985947,-0.155705,0.0605339,0.0972327,0.930897,-0.289354,0.222945,0.0969748,0.821696,-0.420751,0.384427,0.103047,0.6796,-0.52344,0.51396,0.116209,0.537693,-0.590475,0.601851,0.135939,0.415482,-0.629815,0.656283,0.161119,0.316994,-0.651712,0.689047,0.190628,0.239119,-0.663475,0.708959,0.223574,0.177219,-0.66942,0.721436,0.259275,0.127179,-0.671943,0.729602,0.297205,0.0858205,-0.672356,0.735237,0.336931,0.050798,-0.671381,0.739369,0.378094,0.0203971,-0.669421,0.742603,0.420372,-0.00664041,-0.666696,0.7453,0.463476,-0.0312503,-0.663324,0.74768,0.507137,-0.0541402,-0.65936,0.749875,0.551108,-0.0758559,-0.654821,0.751967,0.595153,-0.0968272,-0.649698,0.754001,0.639051,-0.117399,-0.64396,0.755998,0.682594,-0.137857,-0.637567,0.75796,0.725589,-0.158437,-0.63046,0.75988,0.767855,-0.179344,-0.622574,0.761733,0.809229,-0.198325,-0.615788,0.762543,0.845221,-0.218092,-0.609772,0.76198,0.881729,-0.238364,-0.604278,0.760283,0.918839,-0.258892,-0.599097,0.757666,0.956623,-0.279448,-0.594051,0.754329,0.995136,-0.299834,-0.588993,0.750458,1.03441,-0.319875,-0.583804,0.746226,1.07446,-0.33942,-0.578384,0.7418,1.11529,-0.35834,-0.572653,0.737333,1.15687,-0.37653,-0.566548,0.732972,1.19915,-0.393902,-0.560014,0.728852,1.2421,-0.410385,-0.553008,0.725098,1.28563,-0.425921,-0.54549,0.721826,1.32969,-0.440464,-0.537426,0.719141,1.37419,-0.453979,-0.528783,0.717141,1.41905,-0.466434,-0.519528,0.715912,1.4642,-0.477803,-0.509626,0.715532,1.50956,-0.488061,-0.499039,0.71607,1.55506,-0.497182,-0.487727,0.717588,1.60065,-0.505139,-0.475646,0.720135,1.64627,-0.511903,-0.462746,0.723755,1.6919,-0.517436,-0.448974,0.72848,1.73752,-0.521697,-0.434272,0.73433,1.78314,-0.524636,-0.418577,0.741316,1.82876,-0.526419,-0.40047,0.750005,1.87753,-0.526899,-0.381489,0.759502,1.92452,-0.526161,-0.361606,0.769673,1.97015,-0.524284,-0.340808,0.780369,2.01484,-0.521344,-0.319105,0.791437,2.05901,-0.517417,-0.296527,0.802715,2.1031,-0.512584,-0.273124,0.81404,2.14753,-0.506931,-0.248965,0.82525,2.19273,-0.500551,-0.224137,0.836189,2.23909,-0.493547,-0.198743,0.846707,2.287,-0.486029,-0.172897,0.856669,2.33685,-0.478116,-0.146719,0.865955,2.38898,-0.46993,-0.120336,0.874463,2.44374,-0.4616,-0.0938729,0.882107,2.50144,-0.453259,-0.0674485,0.888824,2.56242,-0.445036,-0.0411737,0.894566,2.62696,-0.437064,-0.0151461,0.899303,2.69539,-0.429467,0.0105522,0.903021,2.76799,-0.42237,0.0358578,0.905714,2.84508,-0.415888,0.0607275,0.907386,2.92698,-0.410135,0.0851394,0.908042,3.014,-0.405218,0.109095,0.907688,3.10648,-0.400861,0.133646,0.906338,3.20764,-0.396647,0.159787,0.903957,3.31961,-0.392459,0.187497,0.900456,3.44108,-0.388173,0.216826,0.895716,3.57067,-0.383654,0.247893,0.889583,3.707,-0.37875,0.280884,0.881846,3.84862,-0.373288,0.316051,0.87222,3.99408,-0.367058,0.353709,0.860325,4.14184,-0.359805,0.394229,0.84565,4.29032,-0.35121,0.43802,0.827521,4.43787,-0.340867,0.485493,0.805051,4.58275,-0.328262,0.536997,0.777096,4.72313,-0.312762,0.592701,0.742216,4.85708,-0.29361,0.652399,0.698691,4.98255,-0.269978,0.715236,0.644631,5.09741,-0.241104,0.779378,0.578306,5.19956,-0.206549,0.84177,0.498759,5.28709,-0.166575,0.898255,0.406683,5.35854,-0.12249,0.94436,0.305256,5.41328,-0.0767187,0.97673,0.200284,5.45184,-0.032371,0.994539,0.0992213,5.47599,-0.00751493,-0.999928,-0.00937759,0.794621,0.0733316,0.987727,-0.137907,5.49332,0.110613,0.968832,-0.22165,5.48752,0.12524,0.95891,-0.25457,5.48342,0.122951,0.96056,-0.249416,5.48414,0.108277,0.970283,-0.216395,5.48808,0.0853685,0.982606,-0.164919,5.49215,0.0587706,0.992706,-0.105263,5.49388,0.0335345,0.998247,-0.0487669,5.49267,0.0148135,0.999866,-0.00692146,5.49001,-0.00751493,-0.999928,-0.00937759,0.794621])}),

                        new ScalarInterpolator({
                          DEF : new SFString("BILDRECHTSFieldOfViewInterp"),
                          key : new MFFloat([0]),
                          keyValue : new MFFloat([1])})])}),

                    new Viewpoint({
                      DEF : new SFString("BILDRECHTS"),
                      description : new SFString("bild-rechts"),
                      position : new SFVec3f([0,1.6,20]),
                      orientation : new SFRotation([0.985947,-0.155705,0.0605339,0.0972327]),
                      fieldOfView : new SFFloat(1)})])})])}),

            new Transform({
              translation : new SFVec3f([-0.351911,0.716113,16.8175]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("touchSensorTrigger_2")}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.8,0,0.493739]),
                          emissiveColor : new SFColor([1,0,0.617173])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([0.216791,0.216791,0.216795])}))})])}),

            new Transform({
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("worldEntryVPAnim"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_6"),
                          cycleInterval : new SFTime(21),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("ENTERWORLDPositionInterp"),
                      key : new MFFloat([0,0.152381,0.157143,0.161905,0.166667,0.171429,0.176191,0.180952,0.185714,0.190476,0.195238,0.2,0.204762,0.209524,0.214286,0.219048,0.22381,0.228571,0.233333,0.238095,0.242857,0.247619,0.252381,0.257143,0.261905,0.266667,0.271429,0.276191,0.280952,0.285714,0.290476,0.295238,0.3,0.304762,0.47619,0.480952,0.485714,0.490476,0.495238,0.5,0.504762,0.509524,0.514285,0.519047,0.523809,0.528571,0.533333,0.538095,0.542857,0.547619,0.552381,0.557143,0.561905,0.566667,0.571429,0.576191,0.580953,0.585714,0.590476,0.595238,0.6,0.604762,0.609524,0.614286,0.619048,0.62381,0.628572,0.633334,0.638096,0.642858,0.64762,0.652382,0.657143,0.661905,0.666667,0.761905,0.766918,0.77193,0.776943,0.781955,0.786968,0.79198,0.796993,0.802005,0.807018,0.81203,0.817043,0.822055,0.827068,0.83208,0.837093,0.842105,0.847118,0.85213,0.857143,0.862155,0.867168,0.872181,0.877193,0.882206,0.887218,0.892231,0.897243,0.902256,0.907268,0.912281,0.917293,0.922306,0.927318,0.932331,0.937343,0.942356,0.947368,0.952381,0.957672,0.962963,0.968254,0.973545,0.978836,0.984127,0.989418,0.994709,1]),
                      keyValue : new MFVec3f([-5.6356,-112.216,-0.882041,-3.81797,-93.6147,-2.06973,-3.70841,-92.4935,-2.14132,-3.59293,-91.3117,-2.21678,-3.47182,-90.0723,-2.29592,-3.34537,-88.7783,-2.37854,-3.21387,-87.4326,-2.46447,-3.07762,-86.0382,-2.5535,-2.9369,-84.5981,-2.64545,-2.79201,-83.1154,-2.74013,-2.64323,-81.5929,-2.83734,-2.49086,-80.0336,-2.9369,-2.3352,-78.4405,-3.03862,-2.17652,-76.8167,-3.14231,-2.01512,-75.165,-3.24777,-1.8513,-73.4886,-3.35482,-1.68534,-71.7902,-3.46326,-1.51754,-70.073,-3.57291,-1.34819,-68.3399,-3.68357,-1.17757,-66.5939,-3.79505,-1.00598,-64.8379,-3.90717,-0.833716,-63.075,-4.01974,-0.661061,-61.3081,-4.13256,-0.488308,-59.5402,-4.24544,-0.31575,-57.7743,-4.3582,-0.143677,-56.0134,-4.47063,0.0276196,-54.2604,-4.58257,0.197849,-52.5184,-4.6938,0.366718,-50.7902,-4.80414,0.533937,-49.079,-4.91341,0.699215,-47.3876,-5.02141,0.862261,-45.719,-5.12795,1.02278,-44.0763,-5.23284,1.18049,-42.4624,-5.33589,1.18824,38.0524,-1.05829,1.18839,39.6127,-0.975392,1.18854,41.117,-0.895473,1.18867,42.5674,-0.818418,1.18881,43.966,-0.74411,1.18894,45.3152,-0.672434,1.18906,46.6169,-0.603273,1.18919,47.8736,-0.536511,1.1893,49.0872,-0.472032,1.18942,50.2601,-0.409719,1.18953,51.3943,-0.349458,1.18963,52.4922,-0.291132,1.18973,53.5558,-0.234624,1.18983,54.5873,-0.179819,1.18993,55.5891,-0.1266,1.19002,56.5631,-0.0748524,1.19011,57.5116,-0.0244586,1.1902,58.4368,0.0246968,1.19029,59.3409,0.0727301,1.19038,60.2261,0.119757,1.19046,61.0945,0.165895,1.19054,61.9484,0.211258,1.19062,62.7898,0.255963,1.1907,63.6211,0.300127,1.19078,64.4444,0.343865,1.19086,65.2618,0.387294,1.19094,66.0756,0.430529,1.19102,66.8879,0.473686,1.1911,67.701,0.516883,1.19118,68.5169,0.560234,1.19125,69.338,0.603856,1.19133,70.1664,0.647865,1.19142,71.0042,0.692377,1.1915,71.8537,0.737508,1.19158,72.717,0.783374,1.19167,73.5963,0.830092,1.19175,74.4939,0.877778,1.19184,75.4118,0.926547,1.19193,76.3524,0.976515,1.19202,77.3176,1.0278,1.19212,78.3098,1.08051,-10.2865,36.8249,2.38796,-10.1,34.9061,2.97395,-9.73345,32.977,3.6907,-9.20693,31.0449,4.52253,-8.5405,29.1171,5.45371,-7.75421,27.2008,6.46854,-6.86813,25.3035,7.55133,-5.90231,23.4324,8.68635,-4.87683,21.5949,9.85791,-3.81173,19.7981,11.0503,-2.72707,18.0496,12.2478,-1.64293,16.3564,13.4347,-0.57936,14.7261,14.5954,0.443582,13.1658,15.714,1.40583,11.6828,16.7749,2.28733,10.2846,17.7625,3.06802,8.9784,18.6609,3.72784,7.77148,19.4545,4.24672,6.67119,20.1275,4.60462,5.68477,20.6644,4.81871,4.8272,21.0762,4.92615,4.10134,21.3903,4.93682,3.49654,21.6152,4.86058,3.00215,21.7594,4.70732,2.60755,21.8314,4.48688,2.30208,21.8395,4.20916,2.0751,21.7924,3.88401,1.91598,21.6985,3.5213,1.81406,21.5662,3.13091,1.75871,21.4041,2.7227,1.73928,21.2205,2.30654,1.74513,21.0241,1.89231,1.76562,20.8233,1.48987,1.79011,20.6265,1.1091,1.80795,20.4422,0.759853,1.8085,20.2789,0.452011,1.78113,20.1452,0.19544,1.71518,20.0494,0,1.6,20,-0.134749,1.48046,19.9806,-0.206334,1.41696,19.9702,-0.227389,1.39828,19.9672,-0.210545,1.41322,19.9696,-0.168437,1.45058,19.9757,-0.113695,1.49914,19.9836,-0.0589535,1.5477,19.9915,-0.0168442,1.58506,19.9976,0,1.6,20])}),

                    new OrientationInterpolator({
                      DEF : new SFString("ENTERWORLDOrientationInterp"),
                      key : new MFFloat([0,0.152381,0.157143,0.161905,0.166667,0.171429,0.176191,0.180952,0.185714,0.190476,0.195238,0.2,0.204762,0.209524,0.214286,0.219048,0.22381,0.228571,0.233333,0.238095,0.242857,0.247619,0.252381,0.257143,0.261905,0.266667,0.271429,0.276191,0.280952,0.285714,0.290476,0.295238,0.3,0.304762,0.47619,0.480952,0.485714,0.490476,0.495238,0.5,0.504762,0.509524,0.514285,0.519047,0.523809,0.528571,0.533333,0.538095,0.542857,0.547619,0.552381,0.557143,0.561905,0.566667,0.571429,0.576191,0.580953,0.585714,0.590476,0.595238,0.6,0.604762,0.609524,0.614286,0.619048,0.62381,0.628572,0.633334,0.638096,0.642858,0.64762,0.652382,0.657143,0.661905,0.666667,0.761905,0.766918,0.77193,0.776943,0.781955,0.786968,0.79198,0.796993,0.802005,0.807018,0.81203,0.817043,0.822055,0.827068,0.83208,0.837093,0.842105,0.847118,0.85213,0.857143,0.862155,0.867168,0.872181,0.877193,0.882206,0.887218,0.892231,0.897243,0.902256,0.907268,0.912281,0.917293,0.922306,0.927318,0.932331,0.937343,0.942356,0.947368,0.952381,0.957672,0.962963,0.968254,0.973545,0.978836,0.984127,0.989418,0.994709,1]),
                      keyValue : new MFRotation([0.998348,0.0356073,-0.0450953,4.6899,0.964463,-0.157482,-0.212157,4.63381,0.962306,-0.163533,-0.217309,4.63085,0.959858,-0.17018,-0.222961,4.6275,0.957098,-0.177412,-0.229104,4.62375,0.954007,-0.185216,-0.235725,4.61956,0.950563,-0.193581,-0.242811,4.61492,0.946744,-0.202491,-0.250347,4.60979,0.942527,-0.211929,-0.258318,4.60414,0.937891,-0.221878,-0.266705,4.59795,0.932809,-0.232319,-0.27549,4.59118,0.927261,-0.24323,-0.284651,4.5838,0.921222,-0.254587,-0.294168,4.57578,0.914671,-0.266366,-0.304017,4.56707,0.907585,-0.278541,-0.314172,4.55765,0.899945,-0.291083,-0.324607,4.54748,0.891731,-0.303963,-0.335295,4.53652,0.882925,-0.317149,-0.346208,4.52474,0.873512,-0.33061,-0.357314,4.51209,0.863478,-0.344311,-0.368585,4.49855,0.852812,-0.358218,-0.379988,4.48407,0.841504,-0.372296,-0.391493,4.46863,0.829548,-0.386508,-0.403065,4.45219,0.816939,-0.400819,-0.414675,4.43471,0.803675,-0.415192,-0.426289,4.41616,0.789758,-0.429591,-0.437875,4.39652,0.77519,-0.443979,-0.449403,4.37575,0.759977,-0.458323,-0.460842,4.35383,0.744128,-0.472586,-0.472162,4.33073,0.727651,-0.486736,-0.483334,4.30642,0.710559,-0.500741,-0.494332,4.28089,0.692866,-0.51457,-0.505128,4.25412,0.674585,-0.528193,-0.5157,4.22608,0.655733,-0.541584,-0.526023,4.19677,0.222227,-0.691967,-0.686875,3.53459,0.211684,-0.693497,-0.688659,3.5166,0.201419,-0.694906,-0.690315,3.49902,0.191431,-0.696202,-0.691851,3.48186,0.181718,-0.697389,-0.693272,3.46513,0.17228,-0.698476,-0.694587,3.44882,0.163115,-0.699469,-0.6958,3.43295,0.154223,-0.700372,-0.696917,3.41751,0.145603,-0.701193,-0.697945,3.40252,0.137254,-0.701936,-0.69889,3.38796,0.129175,-0.702607,-0.699755,3.37386,0.121365,-0.703211,-0.700546,3.36019,0.113824,-0.703752,-0.701269,3.34698,0.106551,-0.704235,-0.701926,3.33423,0.0995452,-0.704664,-0.702524,3.32192,0.0928068,-0.705043,-0.703065,3.31008,0.086335,-0.705377,-0.703555,3.29869,0.0801295,-0.705669,-0.703996,3.28775,0.0741897,-0.705923,-0.704393,3.27728,0.0685154,-0.706142,-0.704748,3.26727,0.0631063,-0.706329,-0.705065,3.25772,0.0579621,-0.706488,-0.705348,3.24864,0.0530827,-0.706621,-0.705598,3.24001,0.0484677,-0.706732,-0.70582,3.23185,0.044117,-0.706822,-0.706015,3.22416,0.0400305,-0.706894,-0.706185,3.21693,0.0362081,-0.706951,-0.706335,3.21017,0.0326496,-0.706995,-0.706464,3.20387,0.029355,-0.707028,-0.706576,3.19803,0.0263241,-0.707051,-0.706672,3.19267,0.0235569,-0.707067,-0.706754,3.18777,0.0210534,-0.707076,-0.706824,3.18333,0.0188135,-0.707081,-0.706882,3.17937,0.0168372,-0.707082,-0.706931,3.17586,0.0151244,-0.707081,-0.706971,3.17283,0.0136752,-0.707078,-0.707003,3.17026,0.0124895,-0.707075,-0.707028,3.16816,0.0115673,-0.707072,-0.707047,3.16653,0.0109086,-0.707069,-0.70706,3.16536,0.0105133,-0.707067,-0.707068,3.16466,-0.0103816,0.707067,0.707071,3.11876,-0.596093,-0.702409,-0.388966,1.61561,0.61584,0.693985,0.372997,4.75137,0.633426,0.685389,0.359185,4.84169,0.64927,0.676592,0.347378,4.93777,0.663767,0.667496,0.337435,5.03876,0.6773,0.657927,0.329235,5.14374,0.690255,0.647622,0.322698,5.25171,0.703048,0.636188,0.317785,5.36161,0.716172,0.623036,0.314522,5.47233,0.73026,0.60724,0.313017,5.58272,0.746208,0.587276,0.313498,5.69157,0.765392,0.560431,0.316374,5.79762,0.790075,0.521425,0.322332,5.89953,0.824099,0.458626,0.332451,5.99569,0.873062,0.341847,0.347712,6.08379,0.929376,0.0769896,0.361015,6.15882,0.787968,-0.547868,0.280975,6.20406,0.167171,-0.985827,0.014096,6.19182,-0.185499,-0.973385,-0.134577,6.14952,0.323713,0.924294,0.202214,0.176326,0.390708,0.888847,0.239371,0.211438,0.434092,0.862379,0.260513,0.237709,0.466663,0.841034,0.273654,0.255486,0.494058,0.82237,0.28216,0.265443,0.519269,0.804753,0.287632,0.268368,0.544183,0.786929,0.290875,0.265116,0.570214,0.767747,0.292269,0.256583,0.598599,0.745964,0.291919,0.243684,0.630547,0.720057,0.289704,0.22737,0.667284,0.68801,0.285262,0.208622,0.709982,0.647053,0.277935,0.188464,0.759436,0.593413,0.266681,0.167977,0.8153,0.522281,0.250017,0.1483,0.874697,0.428649,0.226196,0.130611,0.930678,0.310151,0.194023,0.116044,0.972813,0.172366,0.154674,0.10547,0.992993,0.0328224,0.113524,0.0991805,0.99334,-0.083546,0.0793472,0.0967335,0.985947,-0.155705,0.0605339,0.0972327,0.949692,-0.311928,0.0280341,0.10495,0.912562,-0.408887,0.00653342,0.112343,0.885675,-0.464263,-0.00626277,0.117896,0.871984,-0.489382,-0.0122033,0.120834,0.871984,-0.489383,-0.0122034,0.120834,0.885675,-0.464264,-0.00626297,0.117896,0.912561,-0.408888,0.00653303,0.112343,0.949691,-0.311931,0.0280335,0.10495,0.985947,-0.155705,0.0605339,0.0972327])}),

                    new ScalarInterpolator({
                      DEF : new SFString("ENTERWORLDFieldOfViewInterp"),
                      key : new MFFloat([0]),
                      keyValue : new MFFloat([1])})])}),

                new Viewpoint({
                  DEF : new SFString("ENTERWORLD"),
                  description : new SFString("enter"),
                  position : new SFVec3f([0,1.6,20]),
                  orientation : new SFRotation([0.985947,-0.155705,0.0605339,0.0972327]),
                  fieldOfView : new SFFloat(1)})])}),

            new Transform({
              DEF : new SFString("voices"),
              children : new MFNode([
                new Inline({
                  url : new MFString(["random-voices.x3d"]),
                  bboxSize : new SFVec3f([1,1,1])})])}),

            new Transform({
              DEF : new SFString("imageDoors"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-17.9982,6.98643,-17.2324]),
                  rotation : new SFRotation([0,1,0,0.785396]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["schachtbild-l.x3d"]),
                      bboxSize : new SFVec3f([12.57,8.426,0])})])}),

                new Transform({
                  translation : new SFVec3f([0.0664139,6.9864,-25.1729]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["schachtbild-m.x3d"]),
                      bboxSize : new SFVec3f([12.57,8.426,0])})])}),

                new Transform({
                  translation : new SFVec3f([18.7367,6.98641,-16.5391]),
                  rotation : new SFRotation([0,-1,0,0.785394]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["schachtbild-r.x3d"]),
                      bboxSize : new SFVec3f([12.57,8.426,0])})])})])}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("noise1PointInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("noise1PointInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_9"),
              toField : new SFString("set_point")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("firstTime"),
              toNode : new SFString("enterWorldTimeSensor"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("enterWorldTimeSensor"),
              fromField : new SFString("time"),
              toNode : new SFString("enterWorldScript"),
              toField : new SFString("triggerIn")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("startTime"),
              toNode : new SFString("tube_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("startTime"),
              toNode : new SFString("schacht_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Light1IntensityInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Light1LocationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Light1IntensityInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Light1"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Light1LocationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Light1"),
              toField : new SFString("set_location")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("klumpen"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("down_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("BILDMITTE"),
              fromField : new SFString("bindTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDMITTEPositionInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDMITTEOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDMITTEFieldOfViewInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BILDMITTEPositionInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDMITTE"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("BILDMITTEOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDMITTE"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("BILDMITTEFieldOfViewInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDMITTE"),
              toField : new SFString("set_fieldOfView")}),

            new ROUTE({
              fromNode : new SFString("BILDLINKS"),
              fromField : new SFString("bindTime"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDLINKSPositionInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDLINKSOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDLINKSFieldOfViewInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BILDLINKSPositionInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDLINKS"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("BILDLINKSOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDLINKS"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("BILDLINKSFieldOfViewInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDLINKS"),
              toField : new SFString("set_fieldOfView")}),

            new ROUTE({
              fromNode : new SFString("BILDRECHTS"),
              fromField : new SFString("bindTime"),
              toNode : new SFString("Time_5"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDRECHTSPositionInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDRECHTSOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_5"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BILDRECHTSFieldOfViewInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BILDRECHTSPositionInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDRECHTS"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("BILDRECHTSOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDRECHTS"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("BILDRECHTSFieldOfViewInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BILDRECHTS"),
              toField : new SFString("set_fieldOfView")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_6"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ENTERWORLDPositionInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ENTERWORLDOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("ENTERWORLDFieldOfViewInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_6"),
              fromField : new SFString("isActive"),
              toNode : new SFString("ENTERWORLD"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("ENTERWORLDPositionInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ENTERWORLD"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("ENTERWORLDOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ENTERWORLD"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("ENTERWORLDFieldOfViewInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ENTERWORLD"),
              toField : new SFString("set_fieldOfView")})])}))});
console.log(X3D0.toXMLNode());