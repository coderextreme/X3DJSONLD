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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var PointSet = require('./x3d.mjs');
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
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GeometryLine.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 15 May 2016 00:59:41 GMT")})])})),
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

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Viewpoint({
              description : new SFString("Viewpoint"),
              position : new SFVec3f([0,20,55])}),

            new Transform({
              DEF : new SFString("PointSet"),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new PointSet({
                      USE : new SFString("_2")}))})])}),

            new ProtoInstance({
              name : new SFString("Grid")})])}))});
console.log(X3D0.toXMLNode());
