// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('flower3.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a flower'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            DirectionalLight(
              direction_ : SFVec3f([SFDouble(0), SFDouble(-0.8), SFDouble(-0.2)]),
              intensity_ : 0.5),

            Background(
              skyColor_ : MFColor([SFColor(1), SFColor(1), SFColor(1)])),

            Viewpoint(
              description_ : SFString('One mathematical orbital'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(50)])),

            Transform(
              DEF_ : SFString('OrbitTransform'),
              translation_ : SFVec3f([SFDouble(8), SFDouble(0), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.5), SFDouble(1)]),
                          specularColor_ : SFColor([SFDouble(0), SFDouble(0.5), SFDouble(1)]))),
                  geometry_ : 
                    IndexedFaceSet(
                      convex_ : false,
                      DEF_ : SFString('Orbit'),
                      coord_ : 
                        Coordinate(
                          DEF_ : SFString('OrbitCoordinates'))))),

            Script(
              DEF_ : SFString('OrbitScript'),
              field_ : [
                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_fraction'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("MFVec3f"),
                  name_ : SFString('coordinates'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("MFInt32"),
                  name_ : SFString('coordIndexes'),
                  accessType_ : SFString("outputOnly")),
              /*<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>*/
              ],
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
     for (var  i = 0; i < resolution; i++) {
     	for (var  j = 0; j < resolution; j++) {
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
})),

            TimeSensor(
              DEF_ : SFString('Clock'),
              cycleInterval_ : 16,
              loop_ : true),

            ROUTE(
              fromNode_ : SFString('OrbitScript'),
              fromField_ : SFString('coordIndexes'),
              toNode_ : SFString('Orbit'),
              toField_ : SFString('set_coordIndex')),

            ROUTE(
              fromNode_ : SFString('OrbitScript'),
              fromField_ : SFString('coordinates'),
              toNode_ : SFString('OrbitCoordinates'),
              toField_ : SFString('point')),

            ROUTE(
              fromNode_ : SFString('Clock'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('OrbitScript'),
              toField_ : SFString('set_fraction'))]));
void main() { exit(0); }
