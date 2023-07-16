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
var MetadataSet = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var PointEmitter = require('./x3d.mjs');
var WindPhysicsModel = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Script = require('./x3d.mjs');
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
              content : new SFString("Wed, 20 Apr 2016 11:36:01 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V2.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Fire.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 26 Sep 2016 09:18:09 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Grid"),
              url : new MFString([", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("scale"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("dimension"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("majorLineEvery"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("majorLineOffset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("color"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("transparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("lineColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("lineTransparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("majorLineColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("majorLineTransparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("solid"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])}),

            new WorldInfo({
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("AngleGrid"),
                      DEF : new SFString("AngleGrid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          DEF : new SFString("enabled"),
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
                          DEF : new SFString("enabled_1"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
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
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([1.31269461177796,0.873141120607314,0.42007766929488])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.353413775780365,-0.897474128965571,-0.26389181670934,4.9156754975484])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-1.7763600157738e-15,-7.10542989869984e-15,3.55271007891048e-15])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          transform : new SFNode(
                            new Transform({
                              DEF : new SFString("Box"),
                              translation : new SFVec3f([0,-1.02384,0]),
                              scale : new SFVec3f([2,1,2]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new Box({}))})])}))}))}))})])}),

            new ParticleSystem({
              DEF : new SFString("Fire2"),
              geometryType : new SFString("SPRITE"),
              particleLifetime : new SFFloat(2),
              lifetimeVariation : new SFFloat(0.5),
              particleSize : new SFVec2f([1,1]),
              colorKey : new MFFloat([0]),
              texCoordKey : new MFFloat([0,0.015625,0.03125,0.046875,0.0625,0.078125,0.09375,0.109375,0.125,0.140625,0.15625,0.171875,0.1875,0.203125,0.21875,0.234375,0.25,0.265625,0.28125,0.296875,0.3125,0.328125,0.34375,0.359375,0.375,0.390625,0.40625,0.421875,0.4375,0.453125,0.46875,0.484375,0.5,0.515625,0.53125,0.546875,0.5625,0.578125,0.59375,0.609375,0.625,0.640625,0.65625,0.671875,0.6875,0.703125,0.71875,0.734375,0.75,0.765625,0.78125,0.796875,0.8125,0.828125,0.84375,0.859375,0.875,0.890625,0.90625,0.921875,0.9375,0.953125,0.96875,0.984375,1]),
              emitter : new SFNode(
                new PointEmitter({
                  direction : new SFVec3f([0,0,0]),
                  speed : new SFFloat(0.2),
                  variation : new SFFloat(0),
                  mass : new SFFloat(0.1),
                  surfaceArea : new SFFloat(0.1)})),
              physics : new SFNode(
                new WindPhysicsModel({
                  direction : new SFVec3f([0,1,0]),
                  speed : new SFFloat(0.5),
                  gustiness : new SFFloat(1.9)})),
              physics : new SFNode(
                new WindPhysicsModel({
                  direction : new SFVec3f([1,-1,0]),
                  speed : new SFFloat(0.15),
                  gustiness : new SFFloat(7)})),
              color : new SFNode(
                new ColorRGBA({
                  color : new MFColorRGBA([1,1,1,0.1])})),
              texCoord : new SFNode(
                new TextureCoordinate({
                  point : new MFVec2f([0,0,0.125,0,0.125,0.125,0,0.125,0.125,0,0.25,0,0.25,0.125,0.125,0.125,0.25,0,0.375,0,0.375,0.125,0.25,0.125,0.375,0,0.5,0,0.5,0.125,0.375,0.125,0.5,0,0.625,0,0.625,0.125,0.5,0.125,0.625,0,0.75,0,0.75,0.125,0.625,0.125,0.75,0,0.875,0,0.875,0.125,0.75,0.125,0.875,0,1,0,1,0.125,0.875,0.125,0,0.125,0.125,0.125,0.125,0.25,0,0.25,0.125,0.125,0.25,0.125,0.25,0.25,0.125,0.25,0.25,0.125,0.375,0.125,0.375,0.25,0.25,0.25,0.375,0.125,0.5,0.125,0.5,0.25,0.375,0.25,0.5,0.125,0.625,0.125,0.625,0.25,0.5,0.25,0.625,0.125,0.75,0.125,0.75,0.25,0.625,0.25,0.75,0.125,0.875,0.125,0.875,0.25,0.75,0.25,0.875,0.125,1,0.125,1,0.25,0.875,0.25,0,0.25,0.125,0.25,0.125,0.375,0,0.375,0.125,0.25,0.25,0.25,0.25,0.375,0.125,0.375,0.25,0.25,0.375,0.25,0.375,0.375,0.25,0.375,0.375,0.25,0.5,0.25,0.5,0.375,0.375,0.375,0.5,0.25,0.625,0.25,0.625,0.375,0.5,0.375,0.625,0.25,0.75,0.25,0.75,0.375,0.625,0.375,0.75,0.25,0.875,0.25,0.875,0.375,0.75,0.375,0.875,0.25,1,0.25,1,0.375,0.875,0.375,0,0.375,0.125,0.375,0.125,0.5,0,0.5,0.125,0.375,0.25,0.375,0.25,0.5,0.125,0.5,0.25,0.375,0.375,0.375,0.375,0.5,0.25,0.5,0.375,0.375,0.5,0.375,0.5,0.5,0.375,0.5,0.5,0.375,0.625,0.375,0.625,0.5,0.5,0.5,0.625,0.375,0.75,0.375,0.75,0.5,0.625,0.5,0.75,0.375,0.875,0.375,0.875,0.5,0.75,0.5,0.875,0.375,1,0.375,1,0.5,0.875,0.5,0,0.5,0.125,0.5,0.125,0.625,0,0.625,0.125,0.5,0.25,0.5,0.25,0.625,0.125,0.625,0.25,0.5,0.375,0.5,0.375,0.625,0.25,0.625,0.375,0.5,0.5,0.5,0.5,0.625,0.375,0.625,0.5,0.5,0.625,0.5,0.625,0.625,0.5,0.625,0.625,0.5,0.75,0.5,0.75,0.625,0.625,0.625,0.75,0.5,0.875,0.5,0.875,0.625,0.75,0.625,0.875,0.5,1,0.5,1,0.625,0.875,0.625,0,0.625,0.125,0.625,0.125,0.75,0,0.75,0.125,0.625,0.25,0.625,0.25,0.75,0.125,0.75,0.25,0.625,0.375,0.625,0.375,0.75,0.25,0.75,0.375,0.625,0.5,0.625,0.5,0.75,0.375,0.75,0.5,0.625,0.625,0.625,0.625,0.75,0.5,0.75,0.625,0.625,0.75,0.625,0.75,0.75,0.625,0.75,0.75,0.625,0.875,0.625,0.875,0.75,0.75,0.75,0.875,0.625,1,0.625,1,0.75,0.875,0.75,0,0.75,0.125,0.75,0.125,0.875,0,0.875,0.125,0.75,0.25,0.75,0.25,0.875,0.125,0.875,0.25,0.75,0.375,0.75,0.375,0.875,0.25,0.875,0.375,0.75,0.5,0.75,0.5,0.875,0.375,0.875,0.5,0.75,0.625,0.75,0.625,0.875,0.5,0.875,0.625,0.75,0.75,0.75,0.75,0.875,0.625,0.875,0.75,0.75,0.875,0.75,0.875,0.875,0.75,0.875,0.875,0.75,1,0.75,1,0.875,0.875,0.875,0,0.875,0.125,0.875,0.125,1,0,1,0.125,0.875,0.25,0.875,0.25,1,0.125,1,0.25,0.875,0.375,0.875,0.375,1,0.25,1,0.375,0.875,0.5,0.875,0.5,1,0.375,1,0.5,0.875,0.625,0.875,0.625,1,0.5,1,0.625,0.875,0.75,0.875,0.75,1,0.625,1,0.75,0.875,0.875,0.875,0.875,1,0.75,1,0.875,0.875,1,0.875,1,1,0.875,1,0.875,0.875,1,0.875,1,1,0.875,1])})),
              appearance : new SFNode(
                new Appearance({
                  texture : new SFNode(
                    new ImageTexture({
                      url : new MFString([", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","http://rawgit.com/create3000/Library/master/Textures/Effects/fire2.pnghttps://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png"])}))}))}),

            new Viewpoint({
              position : new SFVec3f([1.89619,2.08715,4.46876]),
              orientation : new SFRotation([-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854]),
              centerOfRotation : new SFVec3f([-1.77636e-15,-7.10543e-15,3.55271e-15])}),

            new ProtoInstance({
              name : new SFString("Grid")}),

            new Transform({
              USE : new SFString("Box")}),

            new DirectionalLight({
              DEF : new SFString("_1"),
              direction : new SFVec3f([-0.531638,-0.672816,-0.51447]),
              shadows : new SFBool(true),
              shadowIntensity : new SFFloat(0.605)}),

            new NavigationInfo({
              headlight : new SFBool(false)}),

            new Script({
              DEF : new SFString("PhongShadingScript"),
              
ecmascript:eval (0

, function initialize ()
{
	Browser .setBrowserOption ("Shading", "PHONG");
})})])}))});
console.log(X3D0.toXMLNode());
