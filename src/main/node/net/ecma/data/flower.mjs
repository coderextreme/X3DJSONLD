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
var NavigationInfo = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flower.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a flower")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new DirectionalLight({
              direction : new SFVec3f([0,-0.8,-0.2]),
              intensity : new SFFloat(0.5)}),

            new Background({
              skyColor : new MFColor([1,1,1])}),

            new Viewpoint({
              description : new SFString("One mathematical orbital"),
              position : new SFVec3f([0,0,50])}),

            new Transform({
              translation : new SFVec3f([0,-1,1]),
              rotation : new SFRotation([0,1,0,3.1415926]),
              scale : new SFVec3f([1.5,1.5,1.5]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.1),
                          diffuseColor : new SFColor([0.9,0.3,0.3]),
                          specularColor : new SFColor([0.8,0.8,0.8]),
                          shininess : new SFFloat(0.145)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      ccw : new SFBool(false),
                      convex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,-1]),
                      DEF : new SFString("Orbit"),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("OrbitCoordinates"),
                          point : new MFVec3f([0,0,1,0,1,0,1,0,0])}))}))}))}),

            new Script({
              DEF : new SFString("OrbitScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("coordinates"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("coordIndexes"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              /*<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>*/
              ]),
ecmascript:eval (0

var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 100;
var t = 0;
var p = 0;

, function initialize() {
     generateCoordinates(resolution);
     var localci = new MFInt32();
     var arrIndex = 0;
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[arrIndex++] = i*resolution+j;
	     localci[arrIndex++] = i*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j;
	     localci[arrIndex++] = -1;
	}
    }
    coordIndexes = localci;
}

, function generateCoordinates(resolution) {
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     var arrIndex = 0;
     for (var i = 0; i < resolution; i++) {
     	for (var j = 0; j < resolution; j++) {
		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		localc[arrIndex++] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = localc;
}

, function set_fraction(fraction, eventTime) {
	t += 0.5;
	p += 0.5;
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	generateCoordinates(resolution);
})}),

            new TimeSensor({
              DEF : new SFString("Clock"),
              cycleInterval : new SFTime(16),
              loop : new SFBool(true)}),

            new ROUTE({
              fromNode : new SFString("OrbitScript"),
              fromField : new SFString("coordIndexes"),
              toNode : new SFString("Orbit"),
              toField : new SFString("set_coordIndex")}),

            new ROUTE({
              fromNode : new SFString("OrbitScript"),
              fromField : new SFString("coordinates"),
              toNode : new SFString("OrbitCoordinates"),
              toField : new SFString("point")}),

            new ROUTE({
              fromNode : new SFString("Clock"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("OrbitScript"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());
