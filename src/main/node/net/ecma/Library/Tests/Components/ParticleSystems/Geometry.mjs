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
var ParticleSystem = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var PointEmitter = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var WindPhysicsModel = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              content : new SFString("Sun, 15 May 2016 00:15:37 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("holger")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.3, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Geometry.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 May 2016 00:52:08 GMT")})])})),
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
              title : new SFString("Geometry"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
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
                          particleSystem : new SFNode(
                            new ParticleSystem({
                              DEF : new SFString("_1"),
                              geometryType : new SFString("GEOMETRY"),
                              maxParticles : new SFInt32(10),
                              particleLifetime : new SFFloat(4),
                              lifetimeVariation : new SFFloat(0.5),
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
                                  speed : new SFFloat(0.7),
                                  gustiness : new SFFloat(1.7),
                                  turbulence : new SFFloat(0.3)})),
                              physics : new SFNode(
                                new WindPhysicsModel({
                                  speed : new SFFloat(0.5),
                                  gustiness : new SFFloat(2)})),
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../images/image.png"])}))})),
                              geometry : new SFNode(
                                new Cone({}))}))}))})),
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
                          value : new MFDouble([0,20,55])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,1,0])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Viewpoint({
              description : new SFString("Viewpoint"),
              position : new SFVec3f([0,20,55])}),

            new ParticleSystem({
              USE : new SFString("_1")}),

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

            new ProtoInstance({
              name : new SFString("Grid")})])}))});
console.log(X3D0.toXMLNode());
