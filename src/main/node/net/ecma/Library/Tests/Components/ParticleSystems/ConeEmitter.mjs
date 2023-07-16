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
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var ConeEmitter = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var PointProperties = require('./x3d.mjs');
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
              content : new SFString("Fri, 22 Apr 2016 02:56:52 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ConeEmitter.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 22 Apr 2016 03:01:05 GMT")})])})),
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
              title : new SFString("ConeEmitter"),
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
                          value : new MFDouble([0,0,4])})),
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
                          value : new MFDouble([0,0,0])}))})),
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
                          particleSystem : new SFNode(
                            new ParticleSystem({
                              DEF : new SFString("_1"),
                              geometryType : new SFString("POINT"),
                              maxParticles : new SFInt32(1000),
                              particleLifetime : new SFFloat(10),
                              lifetimeVariation : new SFFloat(0.01),
                              particleSize : new SFVec2f([0.1,0.1]),
                              colorKey : new MFFloat([0,0.1,0.4,1]),
                              emitter : new SFNode(
                                new ConeEmitter({
                                  direction : new SFVec3f([1,1,0])})),
                              color : new SFNode(
                                new ColorRGBA({
                                  color : new MFColorRGBA([1,0.38,0,1,1,0.58,0.06,1,1,0.37,0,1,1,0.05,0,1])})),
                              appearance : new SFNode(
                                new Appearance({
                                  pointProperties : new SFNode(
                                    new PointProperties({
                                      pointSizeScaleFactor : new SFFloat(2),
                                      pointSizeMinValue : new SFFloat(2),
                                      pointSizeMaxValue : new SFFloat(2)}))}))}))})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")}))}))})])}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Viewpoint({
              description : new SFString("Viewpoint"),
              position : new SFVec3f([0,0,4])}),

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
