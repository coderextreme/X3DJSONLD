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
var Group = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("John W Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("December 13 2015")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("extrusion.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/personal/extrusion.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("beginnings of a force directed graph in 3D")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Extrusion({
                      DEF : new SFString("extrusion"),
                      spine : new MFVec3f([-50,-50,0,50,50,0]),
                      creaseAngle : new SFFloat(0.785),
                      crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,1,0])}))}))}),

                new TimeSensor({
                  DEF : new SFString("TourTime"),
                  loop : new SFBool(true)}),

                new Script({
                  DEF : new SFString("MoveCylinder"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_cycle"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("spine"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-50 -50 0 50 50 0")}),
                  ]),
ecmascript:eval (0

                , function set_cycle(value) {
                        Browser.print(value);
                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);
                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);
                        var tmpspine = new MFVec3f();
			tmpspine[0] = endA;
			tmpspine[1] = endB;
                        spine = tmpspine;
                })}),

                new ROUTE({
                  fromNode : new SFString("TourTime"),
                  fromField : new SFString("cycleTime"),
                  toNode : new SFString("MoveCylinder"),
                  toField : new SFString("set_cycle")}),

                new ROUTE({
                  fromNode : new SFString("MoveCylinder"),
                  fromField : new SFString("spine_changed"),
                  toNode : new SFString("extrusion"),
                  toField : new SFString("set_spine")})])})])}))});
console.log(X3D0.toXMLNode());
