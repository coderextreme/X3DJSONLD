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
var DirectionalLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var PointEmitter = require('./x3d.mjs');
var WindPhysicsModel = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 May 2016 00:16:04 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("holger")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V2.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Bubbles.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 26 Sep 2016 02:51:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Bubbles"),
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
                          value : new MFDouble([1.62303498729208,40.0774585689728,42.6164648005402])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.948208773060804,-0.218726178841849,-0.230345352416253,5.85764824335848])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
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
                          directionalLight : new SFNode(
                            new DirectionalLight({
                              DEF : new SFString("_1"),
                              direction : new SFVec3f([-0.372556,-0.000038217,-0.92801]),
                              shadows : new SFBool(true),
                              shadowIntensity : new SFFloat(0.518717)}))}))}))})])}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new NavigationInfo({
              headlight : new SFBool(false)}),

            new Viewpoint({
              description : new SFString("Viewpoint"),
              position : new SFVec3f([0,20,55])}),

            new Transform({
              DEF : new SFString("IndexedLineSet"),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,1,2]),
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,1,0,0,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1])}))}))})])}),

            new ParticleSystem({
              geometryType : new SFString("GEOMETRY"),
              maxParticles : new SFInt32(500),
              particleLifetime : new SFFloat(8),
              lifetimeVariation : new SFFloat(0.8),
              particleSize : new SFVec2f([1,1]),
              emitter : new SFNode(
                new PointEmitter({
                  direction : new SFVec3f([0,0,0]),
                  speed : new SFFloat(0.5),
                  variation : new SFFloat(0.5),
                  mass : new SFFloat(0.1),
                  surfaceArea : new SFFloat(0.1)})),
              physics : new SFNode(
                new WindPhysicsModel({
                  direction : new SFVec3f([0,1,0]),
                  speed : new SFFloat(0.6),
                  gustiness : new SFFloat(1.7),
                  turbulence : new SFFloat(0.3)})),
              physics : new SFNode(
                new WindPhysicsModel({
                  speed : new SFFloat(1),
                  gustiness : new SFFloat(1.5)})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([1,0.520125,0.73699]),
                      specularColor : new SFColor([0.951515,0.951515,0.951515]),
                      shininess : new SFFloat(0.557576)}))})),
              geometry : new SFNode(
                new Sphere({}))}),

            new Transform({
              DEF : new SFString("Rectangle2D"),
              translation : new SFVec3f([0,19.2591,-14.5791]),
              scale : new SFVec3f([43.4935,20.2591,1]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Rectangle2D({}))})])}),

            new DirectionalLight({
              USE : new SFString("_1")}),

            new Script({
              DEF : new SFString("PhongShadingScript"),
              
ecmascript:eval (0

, function initialize ()
{
	Browser .setBrowserOption ("Shading", "PHONG");
})})])}))});
console.log(X3D0.toXMLNode());
