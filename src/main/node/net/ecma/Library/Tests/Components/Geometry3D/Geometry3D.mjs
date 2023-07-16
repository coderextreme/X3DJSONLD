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
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataFloat = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ElevationGrid = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
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
              content : new SFString("Thu, 26 Mar 2015 02:16:06 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V2.0.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/Geometry3D.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 20 Oct 2016 10:58:37 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Geometry3D"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([1.12246000766754,-6.40655994415283,10.8308000564575])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.784070753175274,-0.334371998182479,-0.522903835180633,0.843905866146088])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([7.15990018844604,1.81043994426727,-0.955601990222931])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("_1"),
                              family : new MFString(["SANS"]),
                              justify : new MFString(["END"])}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("LayerSet"),
                      DEF : new SFString("LayerSet"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeLayer"),
                          DEF : new SFString("activeLayer"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([-1])}))}))})])}),
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(1),
              order : new MFInt32([1,2]),
              layers : new SFNode(
                new Layer({
                  DEF : new SFString("World"),
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("Titania"),
                      DEF : new SFString("Titania_1"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("AngleGrid"),
                          DEF : new SFString("AngleGrid"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([false])}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("Grid"),
                          DEF : new SFString("Grid"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([true])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("rotation"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([1,0,0,1.5708])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("translation"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([9,2,0])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("dimension"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([24,10,10])}))}))}),
                  children : new MFNode([
                    new Background({
                      skyColor : new MFColor([0.2,0.2,0.2])}),

                    new Viewpoint({
                      description : new SFString("Home"),
                      position : new SFVec3f([1.12246,-6.40656,10.8308]),
                      orientation : new SFRotation([0.784070780208918,-0.334371906268713,-0.522903853419351,0.843906]),
                      centerOfRotation : new SFVec3f([7.1599,1.81044,-0.955602])}),

                    new Transform({
                      DEF : new SFString("Geometry3D"),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("RotateAnim"),
                          metadata : new MFNode([
                            new MetadataSet({
                              name : new SFString("Animation"),
                              DEF : new SFString("Animation"),
                              value : new SFNode(
                                new MetadataInteger({
                                  name : new SFString("duration"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFInt32([200])})),
                              value : new SFNode(
                                new MetadataInteger({
                                  name : new SFString("framesPerSecond"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFInt32([10])}))}),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("_2"),
                              cycleInterval : new SFTime(20),
                              loop : new SFBool(true),
                              startTime : new SFTime(1443559776.14588),
                              stopTime : new SFTime(1443559776.14586)}),

                            new OrientationInterpolator({
                              DEF : new SFString("BoxRotationInterpolator"),
                              key : new MFFloat([0,0.25,0.5,0.75,1]),
                              keyValue : new MFRotation([0,0,1,0,-4.33648999997153e-9,-0.00000362373999997621,0.999999999993434,4.71239,-1.63447999998926e-9,-0.00000362581999997617,0.999999999993427,3.14159,-1.08247999999288e-10,-0.00000362608999997616,0.999999999993426,1.5708,0,0,1,0]),
                              metadata : new MFNode([
                                new MetadataSet({
                                  name : new SFString("Interpolator"),
                                  DEF : new SFString("Interpolator"),
                                  value : new SFNode(
                                    new MetadataInteger({
                                      name : new SFString("key"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new MFInt32([0,50,100,150,200])})),
                                  value : new SFNode(
                                    new MetadataDouble({
                                      name : new SFString("keyValue"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new MFDouble([0,0,1,0,-4.33648983388935e-9,-0.00000362374180440383,1,4.71238899230957,-1.63447577694598e-9,-0.00000362582022717106,1,3.14159274101257,-1.08248028596325e-10,-0.00000362608693649236,1,1.570796251297,0,0,1,0])})),
                                  value : new SFNode(
                                    new MetadataString({
                                      name : new SFString("keyType"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new MFString([", ","LINEAR, ","LINEAR, ","LINEAR, ","LINEARLINEAR"])}))})])})])}),

                        new Transform({
                          DEF : new SFString("Box"),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_3"),
                              description : new SFString("Box")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo2"),
                                      ambientIntensity : new SFFloat(0.216064),
                                      diffuseColor : new SFColor([0.864256,0.833788,0.330482]),
                                      specularColor : new SFColor([0.0955906,0.0940254,0.0681705]),
                                      shininess : new SFFloat(0.078125)}))})),
                              geometry : new SFNode(
                                new Box({
                                  DEF : new SFString("Box_1"),
                                  size : new SFVec3f([1,1,1])}))})])}),

                        new Transform({
                          DEF : new SFString("Sphere"),
                          translation : new SFVec3f([3,0,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_4"),
                              description : new SFString("Sphere")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey_1"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo7"),
                                      ambientIntensity : new SFFloat(0.187004),
                                      diffuseColor : new SFColor([0.748016,0.467103,0.261641]),
                                      specularColor : new SFColor([0.251984,0.251984,0.251984]),
                                      shininess : new SFFloat(0.872727)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  DEF : new SFString("Sphere_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Cylinder"),
                          translation : new SFVec3f([6,0,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_5"),
                              description : new SFString("Cylinder")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey_2"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo13"),
                                      ambientIntensity : new SFFloat(0.187004),
                                      diffuseColor : new SFColor([0.748016,0.272334,0.406842]),
                                      specularColor : new SFColor([0.251984,0.251984,0.251984]),
                                      shininess : new SFFloat(0.6)}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  DEF : new SFString("Cylinder_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Cone"),
                          translation : new SFVec3f([9,0,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_6"),
                              description : new SFString("Cone")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey_3"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo18"),
                                      ambientIntensity : new SFFloat(0.181818),
                                      diffuseColor : new SFColor([0.630959,0.368649,0.745454]),
                                      specularColor : new SFColor([0.278788,0.278788,0.278788]),
                                      shininess : new SFFloat(0.0909091)}))})),
                              geometry : new SFNode(
                                new Cone({
                                  DEF : new SFString("Cone_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Extrusion"),
                          translation : new SFVec3f([12,0,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_7"),
                              description : new SFString("Extrusion")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey_4"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo19"),
                                      ambientIntensity : new SFFloat(0.187004),
                                      diffuseColor : new SFColor([0.412056,0.422504,0.748016]),
                                      specularColor : new SFColor([0.290909,0.290909,0.290909]),
                                      shininess : new SFFloat(0.787879)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  DEF : new SFString("Extrusion_1"),
                                  beginCap : new SFBool(false),
                                  endCap : new SFBool(false),
                                  ccw : new SFBool(false),
                                  creaseAngle : new SFFloat(3.14159),
                                  crossSection : new MFVec2f([1,0,0.92388,0.382683,0.707107,0.707106,0.382684,0.923879,0,1,-0.382682,0.92388,-0.707105,0.707108,-0.923879,0.382685,-1,0,-0.923881,-0.382681,-0.707109,-0.707105,-0.382687,-0.923878,0,-1,0.38268,-0.923881,0.707104,-0.70711,0.923878,-0.382688,1,0]),
                                  orientation : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]),
                                  scale : new MFVec2f([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                                  spine : new MFVec3f([1,0,0,0.92388,0.382683,0,0.707107,0.707106,0,0.382684,0.923879,0,0,1,0,-0.382682,0.92388,0,-0.707105,0.707108,0,-0.923879,0.382685,0,-1,0,0,-0.923881,-0.382681,0,-0.707109,-0.707105,0,-0.382687,-0.923878,0,0,-1,0,0.38268,-0.923881,0,0.707104,-0.70711,0,0.923878,-0.382688,0,1,0,0])}))})])}),

                        new Transform({
                          DEF : new SFString("ElevationGrid"),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          center : new SFVec3f([15,5.96046e-8,-0.00000369549]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_8"),
                              description : new SFString("ElevationGrid")}),

                            new Transform({
                              DEF : new SFString("ElevationGrid_1"),
                              translation : new SFVec3f([14,1,0]),
                              rotation : new SFRotation([1,0,0,1.5708]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      DEF : new SFString("Grey_5"),
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("Rococo25"),
                                          ambientIntensity : new SFFloat(0.187004),
                                          diffuseColor : new SFColor([0.261641,0.748016,0.725916]),
                                          specularColor : new SFColor([0.490909,0.490909,0.490909]),
                                          shininess : new SFFloat(0.593939)}))})),
                                  geometry : new SFNode(
                                    new ElevationGrid({
                                      DEF : new SFString("ElevationGrid_2"),
                                      xDimension : new SFInt32(3),
                                      zDimension : new SFInt32(3),
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(3.14159),
                                      height : new MFFloat([0,0,0,0,1,0,0,0,0])}))})])})])}),

                        new Transform({
                          DEF : new SFString("IndexedFaceSet"),
                          translation : new SFVec3f([18,0,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("_9"),
                              description : new SFString("IndexedFaceSet")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Grey_6"),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo29"),
                                      ambientIntensity : new SFFloat(0.187004),
                                      diffuseColor : new SFColor([0.360748,0.748016,0.394778]),
                                      specularColor : new SFColor([0.345455,0.345455,0.345455]),
                                      shininess : new SFFloat(0.612121)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("IndexedFaceSet_1"),
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,0,1,0])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Box_2"),
                          translation : new SFVec3f([0,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_3")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Image"),
                                  material : new SFNode(
                                    new Material({})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../images/test.png"])}))})),
                              geometry : new SFNode(
                                new Box({
                                  USE : new SFString("Box_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Sphere_2"),
                          translation : new SFVec3f([3,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_4")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Image")})),
                              geometry : new SFNode(
                                new Sphere({
                                  USE : new SFString("Sphere_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Cylinder_2"),
                          translation : new SFVec3f([6,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_5")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Image")})),
                              geometry : new SFNode(
                                new Cylinder({
                                  USE : new SFString("Cylinder_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Cone_2"),
                          translation : new SFVec3f([9,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_6")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Image")})),
                              geometry : new SFNode(
                                new Cone({
                                  USE : new SFString("Cone_1")}))})])}),

                        new Transform({
                          DEF : new SFString("Extrusion_2"),
                          translation : new SFVec3f([12,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_7")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Image")})),
                              geometry : new SFNode(
                                new Extrusion({
                                  USE : new SFString("Extrusion_1")}))})])}),

                        new Transform({
                          DEF : new SFString("ElevationGrid_3"),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          center : new SFVec3f([15,3,-0.00000369549]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_8")}),

                            new Transform({
                              DEF : new SFString("ElevationGrid_4"),
                              translation : new SFVec3f([14,4,0]),
                              rotation : new SFRotation([1,0,0,1.5708]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("Image")})),
                                  geometry : new SFNode(
                                    new ElevationGrid({
                                      USE : new SFString("ElevationGrid_2")}))})])})])}),

                        new Transform({
                          DEF : new SFString("IndexedFaceSet_2"),
                          translation : new SFVec3f([18,3,0]),
                          rotation : new SFRotation([-5.98772685774869e-10,-0.00000362600322308696,0.999999999993426,1.94915244056702]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("_9")}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Image")})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("IndexedFaceSet_1")}))})])})])})])})),
              layers : new SFNode(
                new Layer({
                  DEF : new SFString("HUD"),
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("Titania"),
                      DEF : new SFString("Titania_2"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("Grid"),
                          DEF : new SFString("Grid_1"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([true])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("rotation"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([1,0,0,1.5708])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("scale"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([0.049,0.049,0.049])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("dimension"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([73,10,41])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("majorLineEvery"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([5,5,5,5,0,5])})),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("majorLineOffset"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFInt32([0,0,-5,-1,0,-6])})),
                          value : new SFNode(
                            new MetadataFloat({
                              name : new SFString("lineColor"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFFloat([1,0.7,0.7,0.0588235])}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("AngleGrid"),
                          DEF : new SFString("AngleGrid_1"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataBoolean({
                              name : new SFString("enabled"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new MFBool([false])}))}))}),
                  children : new MFNode([
                    new OrthoViewpoint({}),

                    new Transform({
                      DEF : new SFString("Header"),
                      translation : new SFVec3f([-1.6905,0.955504,-1]),
                      scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([" Geometry3D"]),
                              solid : new SFBool(true),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  size : new SFFloat(1.61),
                                  justify : new MFString([", ","BEGINBEGIN"])}))}))})])}),

                    new Group({
                      DEF : new SFString("ShadingMenu"),
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("ShadingScript"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_pointset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_wireframe"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_flat"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_gouraud"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_phong"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                          ]),javascript:

, function set_pointset ()
{
	Browser .setBrowserOption ("Shading", "POINTSET");
	Browser .setDescription ("Shading: Pointset");
}

, function set_wireframe ()
{
	Browser .setBrowserOption ("Shading", "WIREFRAME");
	Browser .setDescription ("Shading: Wirefrane");
}

, function set_flat ()
{
	Browser .setBrowserOption ("Shading", "FLAT");
	Browser .setDescription ("Shading: Flat");
}

, function set_gouraud ()
{
	Browser .setBrowserOption ("Shading", "GOURAUD");
	Browser .setDescription ("Shading: Gouraud");
}

, function set_phong ()
{
	Browser .setBrowserOption ("Shading", "PHONG");
	Browser .setDescription ("Shading: Phong");
})}),

                        new Transform({
                          DEF : new SFString("Header_1"),
                          translation : new SFVec3f([1.6905,-0.857496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Artdeco31"),
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Shading"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      style : new SFString("BOLD"),
                                      size : new SFFloat(0.68),
                                      justify : new MFString(["END"])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Text"),
                          translation : new SFVec3f([1.6905,-0.955496,-1]),
                          scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pointset Wireframe Flat Gouraud Phong"]),
                                  solid : new SFBool(true),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("_1")}))}))})])}),

                        new Transform({
                          DEF : new SFString("Pointset"),
                          translation : new SFVec3f([0.436176,-0.916146,0]),
                          scale : new SFVec3f([0.139972,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_10"),
                                      transparency : new SFFloat(1)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_11")})])}),

                        new Transform({
                          DEF : new SFString("Wireframe"),
                          translation : new SFVec3f([0.77569,-0.916146,0]),
                          scale : new SFVec3f([0.177062,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_12")})])}),

                        new Transform({
                          DEF : new SFString("Flat"),
                          translation : new SFVec3f([1.04432,-0.916146,0]),
                          scale : new SFVec3f([0.0743511,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_13")})])}),

                        new Transform({
                          DEF : new SFString("Gouraud"),
                          translation : new SFVec3f([1.27986,-0.916146,0]),
                          scale : new SFVec3f([0.142825,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_14")})])}),

                        new Transform({
                          DEF : new SFString("Phong"),
                          translation : new SFVec3f([1.55457,-0.916146,0]),
                          scale : new SFVec3f([0.111441,0.040588,0.040588]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_10")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([0,1,2,3,-1]),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-1,-1,0,1,-1,0,1,1,0,-1,1,0])}))}))}),

                            new TouchSensor({
                              DEF : new SFString("_15")})])})])})])}))})]),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BoxRotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Box"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("IndexedFaceSet_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Extrusion_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cone_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cylinder_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Sphere_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Box_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("IndexedFaceSet"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Extrusion"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cone"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cylinder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Sphere"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ElevationGrid"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BoxRotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("ElevationGrid_3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_phong")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_gouraud")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_flat")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_wireframe")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ShadingScript"),
              toField : new SFString("set_pointset")})}))});
console.log(X3D0.toXMLNode());
