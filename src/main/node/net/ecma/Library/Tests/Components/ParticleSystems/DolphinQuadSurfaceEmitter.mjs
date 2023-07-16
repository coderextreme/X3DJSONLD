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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var SurfaceEmitter = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
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
              content : new SFString("Sat, 30 Apr 2016 02:18:39 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("holger")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.2, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinLineSurfaceEmitter.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 30 Apr 2016 05:12:47 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Dolphin"),
              url : new MFString([", ","Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

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
                          value : new MFBool([true])}))})),
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
                          value : new MFDouble([179.724151611328,-295.825958251953,258.351654052734])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.851609192029355,0.229794819966725,0.47112219727749,0.997756545817208])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([17.631872177124,-9.29712867736816,-18.6251792907715])}))})),
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
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("_1"),
                                          transparency : new SFFloat(0.884393)}))})),
                                  geometry : new SFNode(
                                    new ProtoInstance({
                                      name : new SFString("Dolphin"),
                                      DEF : new SFString("_2")}))})])}))}))}))})])}),

            new Background({
              DEF : new SFString("White"),
              skyColor : new MFColor([1,1,1])}),

            new Viewpoint({
              description : new SFString("Home"),
              position : new SFVec3f([179.724,-295.826,258.352]),
              orientation : new SFRotation([0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209]),
              centerOfRotation : new SFVec3f([17.6319,-9.29713,-18.6252])}),

            new TimeSensor({
              DEF : new SFString("_3"),
              cycleInterval : new SFTime(10),
              loop : new SFBool(true)}),

            new Transform({
              USE : new SFString("Box")}),

            new ParticleSystem({
              maxParticles : new SFInt32(2000),
              particleSize : new SFVec2f([6,6]),
              emitter : new SFNode(
                new SurfaceEmitter({
                  speed : new SFFloat(2),
                  mass : new SFFloat(0.01),
                  surfaceArea : new SFFloat(0.01),
                  ProtoInstance : new SFNode(
                    new ProtoInstance({
                      name : new SFString("Dolphin"),
                      USE : new SFString("_2")}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      DEF : new SFString("Rococo17"),
                      ambientIntensity : new SFFloat(0.187004),
                      diffuseColor : new SFColor([0.640987,0.460097,0.748016]),
                      specularColor : new SFColor([0.251984,0.251984,0.251984]),
                      shininess : new SFFloat(0.612121)}))}))}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());
