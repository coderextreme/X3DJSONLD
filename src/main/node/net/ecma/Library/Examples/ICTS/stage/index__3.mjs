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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var Box = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:08 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:08 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("keyValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new NavigationInfo({
                      type : ["WALK"],
                      DEF : new SFString("_NoNameNavInfo1"),
                      avatarSize : new MFFloat([0.2,1.2,0.6]),
                      headlight : new SFBool(false)}),

                    new Viewpoint({
                      DEF : new SFString("VP1"),
                      position : new SFVec3f([-25.4603,1.34,70.5784]),
                      orientation : new SFRotation([-4.24098e-7,-1,-9.28172e-7,1.05594]),
                      fieldOfView : new SFFloat(1.2)})])}),

                new Transform({
                  translation : new SFVec3f([18.7824,0.205183,23.024]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["txt.x3d"]),
                      bboxSize : new SFVec3f([17.3429,3.18392,0.140415]),
                      bboxCenter : new SFVec3f([-0.0362263,1.98502,0.203821])})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([-28.7286,5.1988,65.0762]),
                          rotation : new SFRotation([0,1,0,1.5708]),
                          scale : new SFVec3f([5.91849,5.91849,5.91853]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["cinemaxx.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1,7,6,5,4,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-3.6548,-0.5,0,3.6548,-0.5,0,3.6548,0.5,0,-3.6548,0.5,0,-3.6548,-1.29807,0,3.6548,-1.29807,0,3.6548,-2.2314,0,-3.6548,-2.2314,0])}))}))})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-26.2603,-0.0298815,16.3863]),
                              rotation : new SFRotation([0,1,0,1.218]),
                              scale : new SFVec3f([0.999999,0.999999,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["invaders.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])}),

                            new Transform({
                              translation : new SFVec3f([2.86797,-0.0298796,-3.20924]),
                              rotation : new SFRotation([0,-1,0,0.918547]),
                              scale : new SFVec3f([0.999999,1,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["benhur.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996755])})])}),

                            new Transform({
                              translation : new SFVec3f([-9.44331,-0.0298834,-5.10966]),
                              rotation : new SFRotation([0,1,0,0.34648]),
                              scale : new SFVec3f([0.999999,0.999999,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["flashgordon.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996755])})])}),

                            new Transform({
                              translation : new SFVec3f([-20.567,-0.0298815,4.33705]),
                              rotation : new SFRotation([0,1,0,1.04051]),
                              scale : new SFVec3f([0.999999,1,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["mothra.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])}),

                            new Transform({
                              translation : new SFVec3f([-28.5982,-0.0298815,30.0151]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([0.999999,1,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["tiffany.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])})])})])}),

                    new Transform({
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("iwall"),
                              translation : new SFVec3f([-11.1644,10.4411,28.1237]),
                              rotation : new SFRotation([0,1,0,1.33498]),
                              scale : new SFVec3f([3.84088,1.02745,1.83488]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      colorIndex : new MFInt32([0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,8,18,10,-1,21,12,3,2,11,-1,4,14,26,13,5,-1,23,15,0,1,9,-1,16,6,10,19,-1,20,11,6,17,-1,7,15,22,25,-1,14,7,24,27,-1]),
                                      coordIndex : new MFInt32([2,23,22,0,-1,23,3,1,22,-1,4,24,23,2,-1,24,5,3,23,-1,6,25,24,4,-1,25,7,5,24,-1,8,26,25,6,-1,26,9,7,25,-1,10,27,26,8,-1,27,11,9,26,-1,12,28,27,10,-1,28,13,11,27,-1,14,29,28,12,-1,29,15,13,28,-1,16,30,29,14,-1,30,17,15,29,-1,18,31,30,16,-1,31,19,17,30,-1,20,32,31,18,-1,32,21,19,31,-1,21,32,38,45,39,-1,46,41,34,33,40,-1,35,42,49,41,34,-1,47,43,20,32,38,-1,44,36,39,45,-1,46,40,36,44,-1,37,43,47,48,-1,42,37,48,49,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.00000190735,-20,-10,0.00000190735,0.0000171661,-10,3.82683,-20,-9.2388,3.82683,0.0000171661,-9.2388,7.07107,-20,-7.07107,7.07107,0.0000171661,-7.07107,9.2388,-20,-3.82683,9.2388,0.0000171661,-3.82683,10,-20,-0.00000147023,10,0.0000171661,-0.00000147023,9.2388,-20,3.82684,9.2388,0.0000171661,3.82684,7.07107,-20,7.07107,7.07107,0.0000171661,7.07107,3.82683,-20,9.2388,3.82683,0.0000171661,9.2388,0.00000341731,-20,10,0.00000341731,0.0000171661,10,-3.82683,-20,9.2388,-3.82683,0.0000171661,9.2388,-7.26183,-20,14.9653,-7.26183,0.0000171661,14.9653,0.00000190735,-9.99998,-10,3.82683,-9.99998,-9.2388,7.07107,-9.99998,-7.07107,9.2388,-9.99998,-3.82683,10,-9.99998,-0.00000147023,9.2388,-9.99998,3.82684,7.07107,-9.99998,7.07107,3.82683,-9.99998,9.2388,0.00000341731,-9.99998,10,-3.82683,-9.99998,9.2388,-7.26183,-9.99998,14.9653,-7.78759,0.0000171661,26.6054,-7.78759,-9.99998,26.6054,-7.78363,-20,26.5177,-7.52471,0.0000171661,20.7853,-7.52273,-20,20.7415,-7.39327,-9.99998,17.8753,-7.39327,0.0000171661,17.8753,-7.65615,0.0000171661,23.6954,-7.65615,-9.99998,23.6954,-7.65318,-20,23.6296,-7.39228,-20,17.8534,-7.52471,-4.99998,20.7853,-7.39327,-4.99998,17.8753,-7.65615,-4.99998,23.6954,-7.39278,-15,17.8643,-7.52372,-15,20.7634,-7.65467,-15,23.6625])}))}))})])}),

                            new Transform({
                              DEF : new SFString("down"),
                              translation : new SFVec3f([0.123907,5.24891,-9.45699]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([9.99994,0.7,3.85446]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      colorIndex : new MFInt32([0,0,1,1,-1,0,1,2,3,-1,1,0,5,4,-1,5,0,1,4,-1,2,7,6,3,-1,7,1,0,6,-1,0,1,9,8,-1]),
                                      coordIndex : new MFInt32([4,5,6,7,-1,4,7,8,9,-1,6,5,11,10,-1,11,1,3,10,-1,8,13,12,9,-1,13,2,0,12,-1,0,2,3,1,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5,-10.0573,7.5,-7.5,-10.0573,7.5,7.5,0,-7.5,-7.5,0,-7.5,7.5,0.343662,7.5,7.5,0.343662,7.5,-7.5,-3.32725,7.5,-7.5,-3.32725,-7.5,-7.5,-7.80524,7.5,7.5,-7.80524,-7.5,7.5,-7.81605,-7.5,-7.5,-7.81605,7.5,-7.5])}))}))})])})])}),

                        new Transform({
                          translation : new SFVec3f([0.123907,5.24891,-9.45699]),
                          rotation : new SFRotation([0,1,0,1.5708]),
                          scale : new SFVec3f([9.99996,0.7,3.85446]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.680851,0.154898,0]),
                                      shininess : new SFFloat(0),
                                      transparency : new SFFloat(0.159574)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  colorPerVertex : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,-7.5,7.5,0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([0.248186,-0.00743449,0]),
                          rotation : new SFRotation([0,0,1,3.14159]),
                          scale : new SFVec3f([1,1,0.999998]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("down")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("_1"),
                              translation : new SFVec3f([0.123907,5.24891,-9.45699]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([9.99996,0.7,3.85446]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["mt3.png"])})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([4,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      colorIndex : new MFInt32([1,1,0,0,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([1,0.881262,0.699983,0.513369,0.273405,0.0764001])})),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([1,1.44217,1,0,0,0,0,1.44217])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.343662,7.5,-7.5,0.343662,7.5,7.5,-10.0573,7.5,7.5,-10.0573,7.5,-7.5])}))}))})])}),

                            new Transform({
                              DEF : new SFString("fxfloor"),
                              translation : new SFVec3f([0.123907,5.41662,-9.45699]),
                              rotation : new SFRotation([0,1,0,1.5708]),
                              scale : new SFVec3f([9.99995,0.7,3.85446]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["light10.png"])})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([15,10])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      colorPerVertex : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([1,0,0.994887,0.991237,0.00882173,0.991237,0,0])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-7.5,7.5,0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5])}))}))})])}),

                            new Transform({
                              translation : new SFVec3f([0,-21.0105,0]),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("_1")})])})])})])}),

                    new Transform({
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([7.49703,-0.0298834,25.036]),
                              rotation : new SFRotation([0,1,0,4.57398]),
                              scale : new SFVec3f([0.999999,0.999999,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["dollars.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])}),

                            new Transform({
                              translation : new SFVec3f([3.79072,-0.0298815,39.4937]),
                              rotation : new SFRotation([0,1,0,4.36514]),
                              scale : new SFVec3f([1,0.999998,1]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["dracula.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])}),

                            new Transform({
                              translation : new SFVec3f([5.37705,-0.0298815,54.3633]),
                              rotation : new SFRotation([0,-1,0,1.13406]),
                              scale : new SFVec3f([0.999999,0.999999,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["metropolis.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996754])})])}),

                            new Transform({
                              translation : new SFVec3f([8.08561,-0.0298834,11.3828]),
                              rotation : new SFRotation([0,-1,0,1.48945]),
                              scale : new SFVec3f([0.999999,0.999998,0.999999]),
                              children : new MFNode([
                                new Inline({
                                  url : new MFString(["clockwork.x3d"]),
                                  bboxSize : new SFVec3f([13.1266,18.69,0.199351]),
                                  bboxCenter : new SFVec3f([-0.0362258,0.00826502,0.0996755])})])})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([13.6627,7.31246,63.378]),
                                  rotation : new SFRotation([0,-1,0,0.331114]),
                                  scale : new SFVec3f([0.0655398,0.0655399,0.0655398]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              emissiveColor : new SFColor([1,0.678868,0]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["NEUE TRAILER"]),
                                          length : new MFFloat([0]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString(["SANS"]),
                                              size : new SFFloat(24)}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([18.9913,7.83023,65.0794]),
                                  rotation : new SFRotation([0,-1,0,0.330083]),
                                  scale : new SFVec3f([21.8741,4.4412,21.8739]),
                                  scaleOrientation : new SFRotation([0,-1,0,0.00530409]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["bt-glow.png"])}))})),
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
                                  translation : new SFVec3f([13.6627,-6.774,63.3779]),
                                  rotation : new SFRotation([0.986327,1.8999e-7,0.164802,3.1416]),
                                  scale : new SFVec3f([0.0655397,0.0655399,0.0655398]),
                                  scaleOrientation : new SFRotation([0.000002056,1,5.40257e-7,0.0669066]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0,0,0]),
                                              emissiveColor : new SFColor([1,0.678868,0]),
                                              shininess : new SFFloat(0)}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["NEUE TRAILER"]),
                                          length : new MFFloat([0]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString(["SANS"]),
                                              size : new SFFloat(24)}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([11.6341,3.02532,62.7071]),
                                  rotation : new SFRotation([0.16212,-0.16212,-0.973362,1.59779]),
                                  scale : new SFVec3f([2.19317,2.19318,2.19325]),
                                  scaleOrientation : new SFRotation([0.504451,0.028565,0.862968,0.00239208]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["arrow1.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          solid : new SFBool(false),
                                          colorPerVertex : new SFBool(false),
                                          colorIndex : new MFInt32([0,0,0,0]),
                                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([1,0.660178,0])})),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.8099,-0.5,0,0.8099,-0.5,0,0.8099,0.5,0,-0.8099,0.5,0,2.02005,-0.5,0,3.63985,-0.5,0,3.63985,0.5,0,2.02005,0.5,0,3.63985,7.69426,0.0000246435,2.02005,7.69426,0.0000248284,2.02005,6.69426,0.0000249476,3.63985,6.69426,0.0000247627,0.809904,7.69426,0.0000249665,-0.809896,7.69427,0.0000251513,-0.809898,6.69427,0.0000252705,0.809902,6.69426,0.0000250857])}))}))})])})])})])})])})])}),

                new Switch({
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([18.7824,0.205183,23.024]),
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["mib.x3d"]),
                          bboxSize : new SFVec3f([10.2643,18.8276,0]),
                          bboxCenter : new SFVec3f([-0.0020256,-0.0385637,0.0279587])})])}),

                    new Transform({})])})])}),

            new Transform({
              DEF : new SFString("EnterWorld"),
              children : new MFNode([
                new Script({
                  DEF : new SFString("_enterWorldScript"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isBound"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                  ]),vrmlscript:
, function set_startTime(value, time)
{
	isActive = FALSE;
	isBound  = TRUE;
})}),

                new VisibilitySensor({
                  DEF : new SFString("_2"),
                  size : new SFVec3f([80,30,120]),
                  center : new SFVec3f([0,0,40])})])}),

            new Transform({
              DEF : new SFString("demoLogo"),
              translation : new SFVec3f([-22.4202,4.66662,67.4272]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["hud_fov1-2_demo.x3d"]),
                  bboxSize : new SFVec3f([100,10,100]),
                  bboxCenter : new SFVec3f([0,0.5,0])})])}),

            new Transform({
              DEF : new SFString("else"),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      translation : new SFVec3f([-22.6801,0.228053,70.6665]),
                      scale : new SFVec3f([9.33083,0.0109705,5.77207]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0),
                                  diffuseColor : new SFColor([0,0,0]),
                                  emissiveColor : new SFColor([0.382979,0,0.0110791])}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([1.27911,1.27909,1.27909])}))})])}))}),

                new Transform({
                  translation : new SFVec3f([-23.0628,0.226514,70.5852]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["cinemaxx-scout1.x3d"]),
                      bboxSize : new SFVec3f([25,25,25]),
                      bboxCenter : new SFVec3f([0,1,0])})])})])}),

            new ROUTE({
              fromNode : new SFString("_enterWorldScript"),
              fromField : new SFString("isBound"),
              toNode : new SFString("_NoNameNavInfo1"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("_enterWorldScript"),
              fromField : new SFString("isBound"),
              toNode : new SFString("VP1"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_enterWorldScript"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
