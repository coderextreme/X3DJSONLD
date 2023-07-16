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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var CoordinateInterpolator = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
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
              content : new SFString("Wed, 18 Mar 2015 02:57:23 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 18 Mar 2015 02:57:23 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("BIC Buero")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              DEF : new SFString("VP1"),
              description : new SFString("viewpoint2"),
              position : new SFVec3f([-33.5441,5.45531,-19.045]),
              orientation : new SFRotation([-0.127353,0.991449,0.0284452,0.873982])}),

            new Transform({
              translation : new SFVec3f([-81.6385,-23.4139,-23.6912]),
              rotation : new SFRotation([6.5522e-7,1,-0.00000215342,3.14159]),
              scale : new SFVec3f([83.9983,83.9984,83.9984]),
              scaleOrientation : new SFRotation([0.0431866,-0.967337,-0.249786,0.611351]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0.16),
                          diffuseColor : new SFColor([1,1,1]),
                          emissiveColor : new SFColor([0.489362,0.489362,0.489362]),
                          shininess : new SFFloat(0.361702)})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["himmel.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      ccw : new SFBool(false),
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,60,-1,10,9,20,-1,20,9,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,9,14,21,-1,21,14,29,-1,21,29,23,-1,23,29,30,-1,23,30,25,-1,25,30,31,-1,25,31,27,-1,14,17,29,-1,29,17,32,-1,29,32,30,-1,30,32,33,-1,30,33,31,-1,17,19,32,-1,32,19,34,-1,32,34,33,-1,34,19,60,-1,53,52,35,-1,35,52,36,-1,35,36,37,-1,37,36,38,-1,37,38,39,-1,39,38,40,-1,39,40,41,-1,41,40,1,-1,41,1,0,-1,52,56,36,-1,36,56,42,-1,36,42,38,-1,38,42,43,-1,38,43,40,-1,40,43,11,-1,40,11,1,-1,56,58,42,-1,42,58,44,-1,42,44,43,-1,43,44,15,-1,43,15,11,-1,58,59,44,-1,44,59,18,-1,44,18,15,-1,18,59,60,-1,28,27,45,-1,45,27,46,-1,45,46,47,-1,47,46,48,-1,47,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,27,31,46,-1,46,31,54,-1,46,54,48,-1,48,54,55,-1,48,55,50,-1,50,55,56,-1,50,56,52,-1,31,33,54,-1,54,33,57,-1,54,57,55,-1,55,57,58,-1,55,58,56,-1,33,34,57,-1,57,34,59,-1,57,59,58,-1,59,34,60,-1]),
                      coordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1,40,41,42,-1,42,41,43,-1,42,43,44,-1,44,43,1,-1,44,1,0,-1,37,45,39,-1,39,45,46,-1,39,46,41,-1,41,46,47,-1,41,47,43,-1,43,47,11,-1,43,11,1,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,47,49,15,-1,47,15,11,-1,48,50,49,-1,49,50,18,-1,49,18,15,-1,18,50,20,-1,29,28,51,-1,51,28,52,-1,51,52,53,-1,53,52,54,-1,53,54,55,-1,55,54,56,-1,55,56,57,-1,57,56,37,-1,57,37,36,-1,28,32,52,-1,52,32,58,-1,52,58,54,-1,54,58,59,-1,54,59,56,-1,56,59,45,-1,56,45,37,-1,32,34,58,-1,58,34,60,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,34,35,60,-1,60,35,50,-1,60,50,48,-1,50,35,20,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([1,0.513746,0.985071,0.513746,0.985071,0.389144,0.952267,0.358846,0.916025,0.228771,0.833333,0.171248,0.77735,0.0862836,0.650756,0.0490453,0.621268,0.0153394,0.5,0.0153394,0.5,0,0.916025,0.513746,0.833333,0.342497,0.666667,0.171248,0.5,0.0862836,0.77735,0.513746,0.650756,0.358846,0.5,0.228771,0.621268,0.513746,0.5,0.389144,0.378732,0.0153394,0.349245,0.0490453,0.22265,0.0862836,0.166667,0.171248,0.083975,0.228771,0.047733,0.358846,0.014929,0.389144,0.014929,0.513746,0,0.513746,0.333333,0.171248,0.166667,0.342497,0.083975,0.513746,0.349245,0.358846,0.22265,0.513746,0.378732,0.513746,0.621268,1.01215,0.650756,0.978446,0.77735,0.941208,0.833333,0.856243,0.916025,0.79872,0.952267,0.668646,0.985071,0.638348,0.666667,0.856243,0.833333,0.684994,0.650756,0.668646,0.014929,0.638348,0.047733,0.668646,0.083975,0.79872,0.166667,0.856243,0.22265,0.941208,0.349245,0.978446,0.378732,1.01215,0.5,1.01215,0.5,1.02749,0.166667,0.684994,0.333333,0.856243,0.5,0.941208,0.349245,0.668646,0.5,0.79872,0.5,0.638348,0.5,0.513746])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([1,0,0,0.970142,0.242536,0,0.970142,0,0.242536,0.904534,0.301511,0.301511,0.83205,0,0.5547,0.666667,0.333333,0.666667,0.5547,0,0.83205,0.301511,0.301511,0.904534,0.242536,0,0.970142,0,0.242536,0.970142,0,0,1,0.83205,0.5547,0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0,0.5547,0.83205,0.5547,0.83205,0,0.301511,0.904534,0.301511,0,0.83205,0.5547,0.242536,0.970142,0,0,0.970142,0.242536,0,1,0,-0.242536,0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0,0.242536,-0.970142,0.242536,0,-1,0,0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0,-0.242536,0.970142,0,0,0,-1,0,0.242536,-0.970142,0.242536,0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0,-0.242536,0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0,0.970142,-0.242536,-0.970142,0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511])}))}))})])}),

            new PointLight({
              DEF : new SFString("Light1"),
              ambientIntensity : new SFFloat(0.41),
              location : new SFVec3f([-38.3413,6.99565,-21.3606])}),

            new PointLight({
              DEF : new SFString("Light2"),
              intensity : new SFFloat(0.407767),
              location : new SFVec3f([-36,5.9944,-21.2446])}),

            new Transform({
              translation : new SFVec3f([-38.0198,-46.8986,-28.2243]),
              rotation : new SFRotation([1,0,0,4.71239]),
              scale : new SFVec3f([0.999996,1.00004,0.644774]),
              center : new SFVec3f([3.2464,52.8039,6.57235]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0),
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([1,1,1]),
                          emissiveColor : new SFColor([0.212766,0.212766,0.212766])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      creaseAngle : new SFFloat(6.28319),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718])}))}))})])}),

            new Transform({
              translation : new SFVec3f([17.3908,-2.38265,6.33846]),
              scale : new SFVec3f([1.46504,1.4649,1.46488]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-37.4314,5.11772,-20.724]),
                  rotation : new SFRotation([0.577347,0.577352,-0.577352,2.0944]),
                  scale : new SFVec3f([0.0366491,0.036936,0.0370194]),
                  scaleOrientation : new SFRotation([0.00457305,0.435849,-0.900008,0.00371864]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("_1"),
                              ambientIntensity : new SFFloat(0.340426),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.43617,0.43617,0.43617])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_2"),
                              url : new MFString(["steckdose2.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1]),
                          coordIndex : new MFInt32([3,0,1,2,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,1,1,1,1,1,-1,-1,1,-1])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-37.4319,5.118,-20.9288]),
                  rotation : new SFRotation([0.577347,0.577352,-0.577352,2.0944]),
                  scale : new SFVec3f([0.111058,0.0369361,0.0370194]),
                  scaleOrientation : new SFRotation([-0.0167824,0.438953,-0.898353,0.00371864]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("_1")})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_3"),
                              url : new MFString(["steckdose1.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([3,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1]),
                          coordIndex : new MFInt32([3,0,1,2,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,1,1,1,1,1,-1,-1,1,-1])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([17.3908,-2.38265,11.3153]),
              scale : new SFVec3f([1.46504,1.4649,1.46488]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-37.4306,5.11737,-20.3516]),
                  rotation : new SFRotation([0.577347,0.577352,-0.577352,2.0944]),
                  scale : new SFVec3f([0.111058,0.0369361,0.0370194]),
                  scaleOrientation : new SFRotation([-0.0167824,0.438953,-0.898353,0.00371864]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.340426),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.43617,0.43617,0.43617])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_3")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([3,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,3,2,-1]),
                          coordIndex : new MFInt32([3,0,1,2,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,1,1,1,1,1,-1,-1,1,-1])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([-103.534,-78.1417,-23.2457]),
              rotation : new SFRotation([-0.707107,0,0.707107,3.14159]),
              scale : new SFVec3f([83.2926,79.0865,79.087]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([0.446809,0.446809,0.446809])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["gras_g.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([10,10])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,2,3,-1]),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-31.6499,5.99605,-20.7605]),
              rotation : new SFRotation([-0.57735,-0.577349,0.577352,4.18879]),
              scale : new SFVec3f([8.04266,1.03052,1.90638]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      coordIndex : new MFInt32([2,3,1,0,-1,6,7,5,4,-1,0,1,7,6,-1,4,5,3,2,-1,4,2,0,6,-1,3,5,7,1,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.876843,0.876814,0.876836,-0.876843,-0.876814,0.876836,0.876843,0.876814,0.876836,0.876843,-0.876814,0.876836,0.876843,0.876814,-0.876836,0.876843,-0.876814,-0.876836,-0.876843,0.876814,-0.876836,-0.876843,-0.876814,-0.876836])}))}))})])}),

            new Transform({
              DEF : new SFString("tree"),
              translation : new SFVec3f([7.22813,0.944695,-4.87276]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([-30.645,-0.000947475,33.3974]),
                  rotation : new SFRotation([0,-1,0,1.00453]),
                  scale : new SFVec3f([1,1.18986,1]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.595745,0.595745,0.595745])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_4"),
                              url : new MFString(["ntree.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([-61.2457,10.8677,-22.9249]),
              scale : new SFVec3f([0.56156,0.992292,1.23169]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          DEF : new SFString("_5")})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["haus_03-n.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([2.55676,1])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1]),
                      coordIndex : new MFInt32([0,1,3,2,-1,2,3,5,4,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-56.812,10.8676,3.47684]),
              rotation : new SFRotation([0.00000686721,1,-0.00000507457,0.298005]),
              scale : new SFVec3f([0.56156,0.992292,1.23169]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["haus_01-n.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([2.55676,1])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1]),
                      coordIndex : new MFInt32([2,3,5,4,-1,0,1,3,2,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([10,10,10,10,-10,10,10,10,-10,10,-10,-10,-10,10,-10,-10,-10,-10])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-63.3934,10.8677,-55.0009]),
              scale : new SFVec3f([0.56156,0.992292,1.23169]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["haus_02-n.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([5.42554,1])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1]),
                      coordIndex : new MFInt32([0,1,3,2,-1,2,3,5,4,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10])}))}))})])}),

            new Transform({
              children : new MFNode([
                new Transform({}),

                new Transform({
                  translation : new SFVec3f([-63.0607,0.00668185,-37.6936]),
                  rotation : new SFRotation([9.31219e-7,1,5.06175e-7,3.14159]),
                  scale : new SFVec3f([0.999997,1,0.999997]),
                  scaleOrientation : new SFRotation([1.97165e-7,1,-2.32074e-7,2.35619]),
                  children : new MFNode([
                    new WorldInfo({
                      info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackage, ","Packaged by CosmoPackage, ","Created in TitaniaPackaged by CosmoPackage"])}),

                    new Group({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Schwelle"),
                          translation : new SFVec3f([-30.5547,4.33352,-18.8377]),
                          rotation : new SFRotation([0,1,0,4.71239]),
                          scale : new SFVec3f([0.471668,0.00738103,0.0652795]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Rahmen"),
                          translation : new SFVec3f([-30.5562,5.44625,-19.2761]),
                          rotation : new SFRotation([0,-1,0,1.5708]),
                          scale : new SFVec3f([0.0342311,1.11498,0.0407675]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0.117021,0.022394,0]),
                                      specularColor : new SFColor([0.117021,0.117021,0.117021]),
                                      emissiveColor : new SFColor([0.0744681,0.0744681,0.0744681]),
                                      shininess : new SFFloat(0.574468)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Tuer_AnimSound"),
                          scale : new SFVec3f([0.999993,0.999999,0.999993]),
                          center : new SFVec3f([-30.5078,5.43194,-18.8276]),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("open_door"),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("Time_1"),
                                      cycleInterval : new SFTime(10),
                                      stopTime : new SFTime(1)})])}),

                                new PositionInterpolator({
                                  DEF : new SFString("UnnamedTransformTranslationInterp_1"),
                                  key : new MFFloat([0,0.04,0.96,1]),
                                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("UnnamedTransformRotationInterp_1"),
                                  key : new MFFloat([0,0.04,0.16,0.86,0.96,1]),
                                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("UnnamedShapeRotationInterp"),
                                  key : new MFFloat([0,0.04,0.1,0.92,0.96,1]),
                                  keyValue : new MFRotation([0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944])}),

                                new PositionInterpolator({
                                  DEF : new SFString("UnnamedTransformCenterInterp"),
                                  key : new MFFloat([0,0.04]),
                                  keyValue : new MFVec3f([-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("UnnamedShapeScaleOrientationInterp"),
                                  key : new MFFloat([0,0.04]),
                                  keyValue : new MFRotation([-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239])})])}),

                            new TouchSensor({
                              DEF : new SFString("Touch_1")}),

                            new Transform({
                              DEF : new SFString("Tuerklinke"),
                              translation : new SFVec3f([0.0519834,0,0]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Klinke"),
                                  translation : new SFVec3f([-30.639,5.87077,-18.505]),
                                  rotation : new SFRotation([0.57735,-0.57735,0.57735,2.0944]),
                                  scale : new SFVec3f([0.897348,0.195632,0.122587]),
                                  center : new SFVec3f([0.0744146,-0.506144,-0.0227777]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              ambientIntensity : new SFFloat(0),
                                              diffuseColor : new SFColor([0.691489,0.691489,0.691489]),
                                              specularColor : new SFColor([1,1,1]),
                                              shininess : new SFFloat(0.159574)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          solid : new SFBool(false),
                                          creaseAngle : new SFFloat(3.14159),
                                          coordIndex : new MFInt32([5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-30.574,5.29324,-18.5155]),
                                  rotation : new SFRotation([1,1.78814e-7,-1.78814e-7,1.5708]),
                                  scale : new SFVec3f([0.205889,0.471041,1.20274]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("_6"),
                                              ambientIntensity : new SFFloat(0.28169),
                                              diffuseColor : new SFColor([0.755319,0.755319,0.755319]),
                                              specularColor : new SFColor([1,1,1]),
                                              emissiveColor : new SFColor([0.414894,0.414894,0.414894]),
                                              shininess : new SFFloat(0.159574)})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("_7"),
                                              url : new MFString(["door2.png"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              rotation : new SFFloat(4.71239)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(3.14159),
                                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1])}))}))})])}),

                                new Transform({
                                  translation : new SFVec3f([-30.574,5.29278,-18.5155]),
                                  rotation : new SFRotation([1,1.78814e-7,-1.78814e-7,1.5708]),
                                  scale : new SFVec3f([0.205889,0.471041,1.20731]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("_6")})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              USE : new SFString("_7")})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              rotation : new SFFloat(1.5708)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          creaseAngle : new SFFloat(3.14159),
                                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("Tuer_brett"),
                              translation : new SFVec3f([-29.5192,5.4317,-19.2538]),
                              rotation : new SFRotation([0,-1,0,1.5708]),
                              scale : new SFVec3f([0.424754,1.08903,0.0165043]),
                              center : new SFVec3f([-1.0035,-0.00275892,-0.00000153935]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          ambientIntensity : new SFFloat(1.2234),
                                          emissiveColor : new SFColor([0.404255,0.404255,0.404255]),
                                          shininess : new SFFloat(0)})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["door1.png"])})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          scale : new SFVec2f([1.4,1])}))})),
                                  geometry : new SFNode(
                                    new Box({}))})])}),

                            new Sound({
                              DEF : new SFString("Sound1"),
                              location : new SFVec3f([-30.5078,5.43195,-18.8276]),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("door_snd"),
                                  description : new SFString("Start mit Trklick"),
                                  url : new MFString(["door_snd.aiff"])}))})])})])})])}),

                new Transform({
                  translation : new SFVec3f([-33.5061,5.21267,-19.4389]),
                  rotation : new SFRotation([7.40586e-7,1,-1.96688e-8,1.5708]),
                  scale : new SFVec3f([0.99999,0.73628,0.999991]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,0,0.0662079]),
                              shininess : new SFFloat(0),
                              transparency : new SFFloat(1)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([2,3,5,4,-1,6,1,0,7,-1,4,5,9,8,-1,10,11,13,12,-1,6,7,15,14,-1,15,12,13,14,-1,16,11,10,17,-1,8,9,18,19,-1,18,16,17,19,-1,2,3,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,0,1,27,26,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-0.927662,0.302864,1.0087,-0.927662,-1.00034,1.00871,-0.194948,0.30256,0.944056,-0.194948,-1.00065,0.944059,1.28228,0.303206,0.28828,1.28228,-1,0.288283,-0.923214,-1.01562,-0.186603,-0.923214,0.287587,-0.186598,4.12216,0.303206,0.288283,4.12216,-0.999999,0.288286,4.03333,0.303204,-3.32709,4.03333,-1,-3.32708,-0.0262551,0.303204,-3.32709,-0.0262551,-1,-3.32709,-0.518105,-1.00232,-2.86161,-0.520148,0.300822,-2.84812,4.53818,-1,-2.96061,4.53818,0.303205,-2.96061,4.53818,-0.999999,0.00556704,4.53818,0.303206,0.00556183,-0.194948,0.30256,1.03695,-0.194948,-1.00065,1.03696,-0.00349981,0.30256,1.14149,-0.00349984,-1.00065,1.1415,0.493674,0.30256,0.999392,0.493674,-1.00065,0.999394,-1.15724,0.302864,1.18947,-1.15724,-1.00034,1.18947])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.87234),
                              diffuseColor : new SFColor([1,1,1]),
                              shininess : new SFFloat(0)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorIndex : new MFInt32([0,0,0,0,0,-1,0,0,0,0,-1,0,2,0,0,0,-1,1,1,1,1,-1,1,3,4,1,-1,3,0,0,4,-1,3,1,1,3,-1,4,3,3,4,-1,1,4,4,1,-1,1,0,0,1,-1,0,7,7,0,-1,6,1,1,5,-1,1,6,7,6,-1,1,1,1,1,-1,5,1,1,7,-1,6,5,7,7,-1]),
                          coordIndex : new MFInt32([11,8,12,3,0,-1,8,9,13,12,-1,13,9,10,4,7,-1,14,15,16,17,-1,20,21,22,23,-1,18,7,4,19,-1,21,20,6,18,-1,22,21,18,19,-1,23,22,19,5,-1,20,23,5,6,-1,0,25,24,3,-1,27,26,28,29,-1,26,27,25,1,-1,28,26,1,2,-1,29,28,2,24,-1,27,29,24,25,-1]),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([1,1,1,0,0,0,0.882353,0.882353,0.882353,0.12625,0.12625,0.12625,0.126249,0.126249,0.126249,0.0985277,0.0985277,0.0985277,0.0985258,0.0985258,0.0985258,0.518717,0.518717,0.518717])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([5.82208,49.3305,4.13362,0.621844,49.3305,4.13363,0.621844,49.3305,9.28265,5.82208,49.3305,9.28263,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621803,55.8416,9.28265,5.82208,55.8416,9.28263,5.82207,49.5612,7.55508,5.82207,50.4612,7.55508,5.82207,50.4612,4.13347,5.82207,49.5612,4.13347,5.82208,49.5612,9.28245,5.82208,50.4612,9.28245,0.923931,55.8416,7.76282,0.923931,55.8416,9.28265,0.923972,49.3305,9.28265,0.923972,49.3305,7.76283,1.13345,55.8416,9.28265,1.13345,55.8416,4.13363,0.621804,55.7132,9.28265,1.13345,55.7132,9.28265,1.13345,55.7132,4.13363,0.621804,55.7132,4.13363,1.13421,49.3305,9.28265,1.1342,49.3305,4.13363,0.621843,49.4307,4.13363,1.1342,49.4307,4.13363,0.621843,49.4307,9.28265,1.13421,49.4307,9.28265])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.0198,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0,0,0]),
                              specularColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.0744681,0.0744681,0.0744681])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([1,14,16,18,15,0,-1,14,12,17,16,-1,19,13,15,18,-1,13,19,17,12,20,22,24,21,-1,20,4,23,22,-1,25,5,21,24,-1,6,8,27,26,-1,10,3,29,34,28,-1,31,9,7,30,-1,35,33,2,11,32,-1,29,33,35,34,-1,28,32,37,36,-1,26,30,41,40,-1,28,32,45,44,-1,32,35,46,45,-1,28,34,47,44,-1,34,35,46,47,-1,27,31,49,48,-1,26,27,48,50,-1,26,30,51,50,-1,30,31,49,51,-1,23,25,53,52,-1,22,23,52,54,-1,22,24,55,54,-1,24,25,53,55,-1,17,19,57,56,-1,16,17,56,58,-1,16,18,59,58,-1,18,19,57,59,-1,61,60,37,39,-1,62,61,39,38,-1,63,62,38,36,-1,60,63,36,37,-1,65,64,41,43,-1,66,65,43,42,-1,67,66,42,40,-1,64,67,40,41,-1,68,10,28,36,38,-1,39,37,32,11,69,-1,27,8,70,71,9,31,-1,70,68,38,39,69,71,-1,70,71,73,72,-1,74,6,26,40,42,-1,43,41,30,7,75,-1,23,4,77,76,5,25,-1,77,74,42,43,75,76,-1,76,77,79,78,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.328066,54.9703,5.56618,0.328066,54.9703,7.76283,0.328096,50.2337,5.56617,0.328096,50.2337,7.76283,0.328077,53.1654,7.76283,0.328077,53.1654,5.56618,0.328081,52.5646,7.76283,0.328081,52.5646,5.56617,0.328088,51.5549,7.76283,0.328088,51.5549,5.56617,0.328091,50.9717,7.76283,0.328091,50.9717,5.56617,0.32807,54.3434,7.76283,0.32807,54.3435,5.56618,0.328066,54.9155,7.76283,0.328066,54.9155,5.56618,0.328066,54.9155,7.65458,0.32807,54.3434,7.65458,0.328066,54.9155,5.68417,0.32807,54.3435,5.68417,0.328071,54.2163,7.76283,0.328071,54.2163,5.56618,0.328071,54.2163,7.66719,0.328077,53.1654,7.66719,0.328071,54.2163,5.6512,0.328077,53.1654,5.6512,0.328081,52.5646,7.66718,0.328088,51.5549,7.66718,0.328091,50.9717,7.66718,0.328096,50.2337,7.66718,0.328081,52.5646,5.6512,0.328088,51.5549,5.6512,0.328091,50.9717,5.6512,0.328096,50.2337,5.6512,0.328096,50.2785,7.66718,0.328096,50.2785,5.6512,0.32809,51.1121,7.66718,0.32809,51.1121,5.6512,0.328089,51.3974,7.66718,0.328089,51.3974,5.6512,0.32808,52.6977,7.66718,0.32808,52.6977,5.6512,0.328078,53.0168,7.66718,0.328078,53.0168,5.6512,0.264742,50.9717,7.66718,0.264742,50.9717,5.6512,0.264747,50.2785,5.6512,0.264747,50.2785,7.66718,0.264739,51.5549,7.66718,0.264739,51.5549,5.6512,0.264732,52.5646,7.66718,0.264732,52.5646,5.6512,0.264728,53.1654,7.66719,0.264728,53.1654,5.6512,0.264722,54.2163,7.66719,0.264722,54.2163,5.6512,0.264721,54.3434,7.65458,0.264721,54.3435,5.68417,0.264717,54.9155,7.65458,0.264717,54.9155,5.68417,0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718,0.328089,51.3974,7.76283,0.328089,51.3974,5.56617,0.328088,51.4762,7.76283,0.328088,51.4762,5.56617,0.670995,51.4762,7.76283,0.670995,51.4762,5.56617,0.328078,53.0168,7.76283,0.328078,53.0168,5.56618,0.328077,53.0911,5.56618,0.328077,53.0911,7.76283,0.671078,53.0911,5.56618,0.671077,53.0911,7.76283])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.0198,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,0.765351,0.53099]),
                              emissiveColor : new SFColor([0.351064,0.268687,0.186411])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_8"),
                              url : new MFString(["fensterbank1.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.0198,-46.0424,-27.1903]),
                  rotation : new SFRotation([1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644772]),
                  center : new SFVec3f([0.810186,52.5713,5.77103]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,0.765351,0.53099]),
                              emissiveColor : new SFColor([0.351064,0.268687,0.186411])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_8")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,0.531492,0.414537]),
                  scale : new SFVec3f([1,0.879727,1]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-37.3016,4.7683,-21.6967]),
                      rotation : new SFRotation([0.00000121981,1,-5.13265e-8,1.5708]),
                      scale : new SFVec3f([0.702315,0.349258,0.0535702]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_9"),
                                  ambientIntensity : new SFFloat(0.340426),
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0.468085,0.468085,0.468085])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["heiz1.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([14.9661,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,2,3,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,-1,-1,1,1,1,1,1,1,1,-1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-37.3016,4.7683,-21.6967]),
                      rotation : new SFRotation([0.00000121981,1,-5.13264e-8,1.5708]),
                      scale : new SFVec3f([0.702315,0.349258,0.0535702]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_9")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["heiz2.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0.007286,0.00917773,1,1,0.995735,0.00114659])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-38.0198,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.744681),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.0957447,0.0957447,0.0957447]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_10"),
                              url : new MFString(["wand1.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          texCoordIndex : new MFInt32([3,2,5,-1,2,1,5,-1,0,4,1,-1,0,3,4,-1]),
                          coordIndex : new MFInt32([3,2,4,-1,2,1,4,-1,0,4,1,-1,0,3,4,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.259639,1.98959,-0.982079,1.99205,-0.982079,1.00057,-0.259639,1.00057,-0.620859,1.49631,-0.620859,1.49631])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.621803,55.8416,5.20329,0.621844,49.3305,5.2033,0.621823,52.586,5.34136])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.0198,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(1),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.0851064,0.0851064,0.0851064]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_10")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([-0.828988,1.73507,-0.841187,1.33438,-0.046233,1.33246,-0.0484878,1.73507])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,5.2033,0.621844,49.3305,4.13363,0.621803,55.8416,4.13363,0.621803,55.8416,5.20329])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([17.3908,-2.38265,10.1835]),
                  scale : new SFVec3f([1.46504,1.4649,1.46488]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-37.4314,5.11772,-20.724]),
                      rotation : new SFRotation([0.577347,0.577352,-0.577352,2.0944]),
                      scale : new SFVec3f([0.0366491,0.036936,0.0370194]),
                      scaleOrientation : new SFRotation([0.00457305,0.435849,-0.900008,0.00371864]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_11"),
                                  ambientIntensity : new SFFloat(0.340426),
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0.43617,0.43617,0.43617])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_2")})),
                              textureTransform : new SFNode(
                                new TextureTransform({}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1]),
                              coordIndex : new MFInt32([3,0,1,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,1,1,1,1,1,-1,-1,1,-1])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-37.4319,5.118,-20.9288]),
                      rotation : new SFRotation([-0.577347,-0.577352,0.577352,4.18879]),
                      scale : new SFVec3f([0.111058,0.0369361,0.0370194]),
                      scaleOrientation : new SFRotation([-0.0167827,0.438953,-0.898353,0.00371864]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_11")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_3")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([3,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              creaseAngle : new SFFloat(0.5),
                              texCoordIndex : new MFInt32([0,1,3,2,-1]),
                              coordIndex : new MFInt32([3,0,1,2,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0,1,0,0,1,1,1,0])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,1,1,1,1,1,1,1,-1,-1,1,-1])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-38.322,-46.907,-28.2243]),
                  rotation : new SFRotation([1,0,0,4.71239]),
                  scale : new SFVec3f([0.999996,1.00004,0.644775]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,0.707408,0.632231]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["granite.4.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([5,5])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.011835,0,0,0.929035,0.97633,0.946787,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644775]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.478723),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.0425532,0.0425532,0.0425532])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.630224,50.2337,7.76282,0.63023,49.3305,7.76282,0.63023,49.3305,5.56617,0.630224,50.2337,5.56617,0.630189,55.8416,7.76282,0.630194,54.9703,7.76282,0.630194,54.9703,5.56618,0.630189,55.8416,5.56618])}))}))})])})])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Door_left"),
                  translation : new SFVec3f([-0.0000267029,-0.00000333786,-0.0000152588]),
                  scale : new SFVec3f([1,0.999999,1]),
                  center : new SFVec3f([-32.4999,5.38476,-17.9887]),
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("door_pivot_left"),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("open_door_left"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_2"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("UnnamedTransformRotationInterp_2"),
                          key : new MFFloat([0,0.1,0.9,1]),
                          keyValue : new MFRotation([0,0,1,0,0,1,0,4.56713,0,1,0,4.56713,0,0,1,0])})])}),

                    new TouchSensor({
                      DEF : new SFString("Touch_2")})])}),

                new Transform({
                  DEF : new SFString("Door_right"),
                  scale : new SFVec3f([1,0.999999,1]),
                  center : new SFVec3f([-32.4999,5.44308,-18.4041]),
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("door_pivot_right"),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("open_door_right"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_3"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new OrientationInterpolator({
                          DEF : new SFString("UnnamedTransformRotationInterp_3"),
                          key : new MFFloat([0,0.1,0.9,1]),
                          keyValue : new MFRotation([0,0,1,0,0,1,0,1.73405,0,1,0,1.73405,0,0,1,0])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedTransformTranslationInterp_2"),
                          key : new MFFloat([0,0.1,0.9,1]),
                          keyValue : new MFVec3f([0,0,0,-0.0000038147,-0.00000429153,-0.0000305176,-0.0000038147,-0.00000429153,-0.0000305176,0,0,0])})])}),

                    new TouchSensor({
                      DEF : new SFString("Touch_3")})])}),

                new Transform({
                  translation : new SFVec3f([-38.0598,-46.6611,-27.9868]),
                  rotation : new SFRotation([1,0,0,4.71239]),
                  scale : new SFVec3f([0.999996,1.00004,0.644773]),
                  center : new SFVec3f([0.324794,52.5664,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.457447,0.457447,0.457447]),
                              shininess : new SFFloat(0.170213),
                              transparency : new SFFloat(0.734043)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["aussenwand1.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.145627,1.29477,0.252078,1.29478,0.252083,1.68625,0.145633,1.68626,0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.588961,1.68623,0.588958,1.2948,0.750353,1.29481,0.750355,1.68623,0.341649,1.68625,0.341644,1.29478,0.496697,1.29479,0.496701,1.68624])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.328096,50.2785,5.6512,0.328091,50.9717,5.6512,0.328091,50.9717,7.66718,0.328096,50.2785,7.66718,0.32807,54.3435,7.65458,0.32807,54.3435,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328077,53.1654,7.66719,0.328077,53.1654,5.6512,0.328071,54.2163,5.65121,0.328071,54.2163,7.66719,0.328088,51.5549,7.66718,0.328088,51.5549,5.6512,0.328081,52.5646,5.6512,0.328081,52.5646,7.66718])}))}))})])}),

                new Transform({
                  DEF : new SFString("_12"),
                  translation : new SFVec3f([-38.0328,-46.6611,-27.9868]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644773]),
                  center : new SFVec3f([0.324794,52.5664,6.57235]),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("touchSensorTrigger")}),

                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("Jalousie"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time_4"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedShapeScaleFactorInterp_1"),
                          key : new MFFloat([0,0.3,0.7,1]),
                          keyValue : new MFVec3f([0.999996,1.00004,0.644773,0.999996,1.00004,0.337192,0.999996,1.00004,0.337192,0.999996,1.00004,0.644773])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedShapeTranslationInterp_1"),
                          key : new MFFloat([0,0.3,0.7,1]),
                          keyValue : new MFVec3f([-38.0328,-46.6611,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-46.6611,-27.9868])}),

                        new Group({
                          children : new MFNode([
                            new ScalarInterpolator({
                              DEF : new SFString("_13"),
                              key : new MFFloat([0,1]),
                              keyValue : new MFFloat([1,1])}),

                            new ScalarInterpolator({
                              DEF : new SFString("_14"),
                              key : new MFFloat([0,1]),
                              keyValue : new MFFloat([30,30])}),

                            new Script({
                              DEF : new SFString("_15"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("vec"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("xIn"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("yIn"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("xBuf"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("yBuf"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                              ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])}),

                        new CoordinateInterpolator({
                          DEF : new SFString("UnnamedShapePointInterp"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFVec3f([0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1,0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1])})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.457447,0.457447,0.457447]),
                              shininess : new SFFloat(0.170213)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["jalousie1.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              DEF : new SFString("_16"),
                              scale : new SFVec2f([1,30])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1]),
                          coordIndex : new MFInt32([4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.822624,1.30122,0.823087,1.68377,0.813561,1.30121,0.813563,1.68377,0.782915,1.30121,0.782916,1.68378,0.791605,1.30121,0.791607,1.68378])})),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("_17"),
                              point : new MFVec3f([0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1])}))}))})])}),

                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                      rotation : new SFRotation([-1,0,0,1.5708]),
                      scale : new SFVec3f([0.999996,1.00004,0.644774]),
                      center : new SFVec3f([3.2464,52.8039,6.57235]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("_18"),
                                  ambientIntensity : new SFFloat(0.797872),
                                  diffuseColor : new SFColor([1,1,1]),
                                  shininess : new SFFloat(0)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(6.28319),
                              colorPerVertex : new SFBool(false),
                              coordIndex : new MFInt32([0,2,3,1,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,4.39455,49.3305,9.28264,4.39456,55.8416,9.28263])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                      rotation : new SFRotation([1,0,0,4.71239]),
                      scale : new SFVec3f([0.999996,1.00004,0.644774]),
                      center : new SFVec3f([3.2464,52.8039,6.57235]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_18")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_19"),
                                  url : new MFString(["deckenplatte2.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([18,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(6.28319),
                              colorPerVertex : new SFBool(false),
                              texCoordIndex : new MFInt32([0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1]),
                              coordIndex : new MFInt32([0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.0000385701,0.00000861124,0.0000363614,0.999954,0.999998,0.999955,0.999454,0.0000584401,0.333844,0.0000252541,0.334025,0.999954,0.666649,0.0000418471,0.667011,0.999955])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([4.72174,49.3305,9.28263,5.82208,49.3305,9.28263,5.82208,55.8416,9.28263,4.72175,55.8416,9.28263,4.72174,51.5052,9.28263,5.82208,51.5052,9.28263,4.72174,53.6734,9.28263,5.82208,53.6734,9.28263])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                      rotation : new SFRotation([-1,0,0,1.5708]),
                      scale : new SFVec3f([0.999996,1.00004,0.644774]),
                      center : new SFVec3f([3.2464,52.8039,6.57235]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_18")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("_20"),
                                  url : new MFString(["lampe2.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([3,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(6.28319),
                              colorPerVertex : new SFBool(false),
                              texCoordIndex : new MFInt32([0,1,2,3,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.000590236,0.998563,0.000161478,0.0354206,0.999432,0.00113659,0.999057,0.932479])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([4.39455,49.3305,9.28264,4.72174,49.3305,9.28263,4.72175,55.8416,9.28263,4.39456,55.8416,9.28263])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                      rotation : new SFRotation([-1,0,0,1.5708]),
                      scale : new SFVec3f([0.999996,1.00004,0.644774]),
                      center : new SFVec3f([3.2464,52.8039,6.57235]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_18")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_20")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([3,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(6.28319),
                              colorPerVertex : new SFBool(false),
                              texCoordIndex : new MFInt32([0,1,2,3,-1]),
                              coordIndex : new MFInt32([0,1,2,3,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.000430295,0.000630712,0.00026409,0.997726,0.999396,0.997267,0.999951,0.00132787])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1.62159,49.3305,9.28265,1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,1.6216,55.8416,9.28264])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                      rotation : new SFRotation([1,0,0,4.71239]),
                      scale : new SFVec3f([0.999996,1.00004,0.644774]),
                      center : new SFVec3f([3.2464,52.8039,6.57235]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("_18")})),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("_19")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([18,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(6.28319),
                              texCoordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                              coordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.0000375365,0.00000906142,1.77316e-8,1,1,1,1,0,0.667037,1,0.667048,0.00000301713,0.333519,1,0.333542,0.00000603928])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0.923972,49.3305,9.28265,1.62159,49.3305,9.28265,1.6216,55.8416,9.28264,0.923931,55.8416,9.28265,1.6216,53.6737,9.28264,0.923944,53.6736,9.28265,1.62159,51.5021,9.28264,0.923958,51.5021,9.28265])}))}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-38.3386,-46.8698,-28.2243]),
                  rotation : new SFRotation([1,0,0,4.71239]),
                  scale : new SFVec3f([0.999996,1.00004,0.644773]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(1.58865),
                              diffuseColor : new SFColor([0.33388,0.401786,0.338056]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("_21"),
                              url : new MFString(["granite.2.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([5,5])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1]),
                          coordIndex : new MFInt32([15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0.983966,0,0,1,0,0,0.309834,1,0.601601,1,0.765786,0,0.617023,1,1.25207,0,1.25207,0,1.10425,0.301445,0.613443,0.300138,0.737735,0.298478,1.00451,0.300376,1.02277,0.301288,1.13853,0.229729,1.25207,0.297743,0.29069,0.296867,0.412792,0.299357,0.127318,0.225898,0,0.117693,0,0.100129,0.301443,0.11606,0.615233,0.114575,0.994238,0.832601,1.25207,0.834768,1.22522,0.833959,1.0789,0.836518,1.04432,0.838683,0.75932,0.840474,0.604306,0.840427,0.3956,0.841876,0.240582,0.843767,0.0283901,0.843767,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621812,54.4474,4.13363,0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,0.621834,50.9417,4.13363,5.82208,52.459,4.13362,5.82208,53.3128,4.13362,0.621824,52.5392,4.13363,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621808,55.0729,4.13363,2.1894,52.5206,4.13363,2.1826,53.1669,4.13363,2.17397,54.5542,4.13363,2.18384,54.6492,4.13363,2.18859,55.2512,4.13363,1.81646,55.8416,4.13363,2.17015,50.8422,4.13363,2.1656,51.4771,4.13363,2.17854,49.9926,4.13363,1.79653,49.3305,4.13363,1.23384,49.3305,4.13363,1.1425,50.8981,4.13363,1.22535,52.5299,4.13363,1.21762,54.5008,4.13363,4.95156,55.8416,4.13362,4.96283,55.702,4.13362,4.95862,54.9411,4.13362,4.97193,54.7613,4.13362,4.98318,53.2792,4.13362,4.9925,52.4731,4.13362,4.99225,51.3877,4.13362,4.99979,50.5816,4.13362,5.00962,49.4781,4.13362,5.00962,49.3305,4.13362])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.322,-46.8986,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00004,0.644775]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0.788985,1,0.762007]),
                              emissiveColor : new SFColor([0.255319,0.255319,0.255319]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("_21")})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              scale : new SFVec2f([5,5])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.011835,0,0,0.929035,0.97633,0.946787,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363])}))}))})])}),

                new Transform({
                  DEF : new SFString("_22"),
                  translation : new SFVec3f([-38.019,-46.8821,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.56794,1.00004,0.644774]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          USE : new SFString("Jalousie")}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedShapeTranslationInterp_2"),
                          key : new MFFloat([0,0.3,0.7,1]),
                          keyValue : new MFVec3f([-38.019,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-38.019,-46.8821,-28.2243])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedShapeScaleFactorInterp_2"),
                          key : new MFFloat([0,0.3,0.7,1]),
                          keyValue : new MFVec3f([0.56794,1.00004,0.644774,0.276148,1.00004,0.644774,0.276148,1.00004,0.644774,0.56794,1.00004,0.644774])}),

                        new Group({
                          children : new MFNode([
                            new ScalarInterpolator({
                              DEF : new SFString("_23"),
                              key : new MFFloat([0,1]),
                              keyValue : new MFFloat([5,5])}),

                            new ScalarInterpolator({
                              DEF : new SFString("_24"),
                              key : new MFFloat([0,1]),
                              keyValue : new MFFloat([30,30])}),

                            new Script({
                              DEF : new SFString("_25"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("vec"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("xIn"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("yIn"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("xBuf"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("yBuf"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                              ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(5.99999),
                              diffuseColor : new SFColor([0.0884032,0.106383,0.0895089]),
                              shininess : new SFFloat(0)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["jalousie_schatten.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              DEF : new SFString("_26"),
                              scale : new SFVec2f([5,30])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,3,-1]),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.011835,0,0,0.929035,0.97633,0.946787,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([-38.322,-46.8701,-28.2243]),
                  rotation : new SFRotation([-1,0,0,1.5708]),
                  scale : new SFVec3f([0.999996,1.00003,0.644772]),
                  center : new SFVec3f([3.2464,52.8039,6.57235]),
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
                          solid : new SFBool(false),
                          creaseAngle : new SFFloat(6.28319),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([-50.1308,-8.95545,-30.2199]),
              scale : new SFVec3f([0.549932,1,4.02312]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          USE : new SFString("_5")})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["strasse03.png"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          scale : new SFVec2f([1,9.48983])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,4,5,3,-1,4,1,2,5,-1]),
                      coordIndex : new MFInt32([0,4,5,3,-1,4,1,2,5,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,1,0,0,1,0,1,1,0,0.25465,1,0.25465])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-10,10,-10,3.85821,10,10.9109,23.8582,10,10.9109,10,10,-10,-10,10,4.907,10,10,4.907])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-27.4738,0.634178,7.30931]),
              rotation : new SFRotation([0,-1,0,1.00453]),
              scale : new SFVec3f([1.60843,1.91381,1.60844]),
              scaleOrientation : new SFRotation([0,-1,0,0.0208194]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0),
                          diffuseColor : new SFColor([1,1,1]),
                          emissiveColor : new SFColor([0.595745,0.595745,0.595745])})),
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_4")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      creaseAngle : new SFFloat(0.5),
                      texCoordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067])}))}))})])}),

            new NavigationInfo({
              type : ["WALK","ANY"]}),

            new ROUTE({
              fromNode : new SFString("Touch_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformCenterInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeScaleOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Klinke"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeScaleOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Klinke"),
              toField : new SFString("set_scaleOrientation")}),

            new ROUTE({
              fromNode : new SFString("Touch_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("door_snd"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformCenterInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("Touch_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Door_left"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Touch_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Door_right"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Door_right"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("touchSensorTrigger"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeScaleFactorInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_13"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_14"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_15"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_15"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapePointInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("vec"),
              toNode : new SFString("_16"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapePointInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_17"),
              toField : new SFString("set_point")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_12"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeScaleFactorInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_12"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeScaleFactorInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_23"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_24"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_23"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_25"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_24"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_25"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("vec"),
              toNode : new SFString("_26"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_22"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeScaleFactorInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_22"),
              toField : new SFString("set_scale")})])}))});
console.log(X3D0.toXMLNode());
