// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Scripting'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('flowers2.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('23 January 2005')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('9 November 2024')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manually written')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            Viewpoint(
              description_ : SFString('Two mathematical orbitals'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(50)])),

            Group(
              children_ : [
                DirectionalLight(
                  direction_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1)])),

                ProtoDeclare(
                  name_ : SFString('orbit'),
                  ProtoInterface_ : 
                    ProtoInterface(
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('translation'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('-8 0 0')),

                        field(
                          type_ : SFString("SFColor"),
                          name_ : SFString('diffuseColor'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('1 0.5 0')),

                        field(
                          type_ : SFString("SFColor"),
                          name_ : SFString('specularColor'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('1 0.5 0')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('transparency'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0.75'))]),
                  ProtoBody_ : 
                    ProtoBody(
                      children_ : [
                        Group(
                          children_ : [
                            TimeSensor(
                              DEF_ : SFString('Clock'),
                              cycleInterval_ : 16,
                              loop_ : true),

                            OrientationInterpolator(
                              DEF_ : SFString('OrbitPath'),
                              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(3.14), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(6.28)])),

                            Transform(
                              DEF_ : SFString('OrbitTransform'),
                              IS_ : 
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('translation'),
                                      protoField_ : SFString('translation'))]),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          IS_ : 
                                            IS(
                                              connect_ : [
                                                connect(
                                                  nodeField_ : SFString('diffuseColor'),
                                                  protoField_ : SFString('diffuseColor')),

                                                connect(
                                                  nodeField_ : SFString('specularColor'),
                                                  protoField_ : SFString('specularColor')),

                                                connect(
                                                  nodeField_ : SFString('transparency'),
                                                  protoField_ : SFString('transparency'))]))),
                                  /*<IndexedFaceSet DEF=\"Orbit\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>*/
                                  geometry_ : 
                                    IndexedFaceSet(
                                      ccw_ : false,
                                      convex_ : false,
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1)]),
                                      DEF_ : SFString('Orbit'),
                                      coord_ : 
                                        Coordinate(
                                          DEF_ : SFString('OrbitCoordinates'),
                                          point_ : MFVec3f([SFVec3f([0,0,1]),SFVec3f([0,1,0]),SFVec3f([1,0,0])]))))),

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
                                  accessType_ : SFString("inputOutput")),

                                field(
                                  type_ : SFString("MFInt32"),
                                  name_ : SFString('coordIndexes'),
                                  accessType_ : SFString("inputOutput")),

                                field(
                                  type_ : SFString("SFFloat"),
                                  name_ : SFString('e'),
                                  accessType_ : SFString("inputOutput"),
                                  value_ : SFString('5')),

                                field(
                                  type_ : SFString("SFFloat"),
                                  name_ : SFString('f'),
                                  accessType_ : SFString("inputOutput"),
                                  value_ : SFString('5')),

                                field(
                                  type_ : SFString("SFFloat"),
                                  name_ : SFString('g'),
                                  accessType_ : SFString("inputOutput"),
                                  value_ : SFString('5')),

                                field(
                                  type_ : SFString("SFFloat"),
                                  name_ : SFString('h'),
                                  accessType_ : SFString("inputOutput"),
                                  value_ : SFString('5')),

                                field(
                                  type_ : SFString("SFInt32"),
                                  name_ : SFString('resolution'),
                                  accessType_ : SFString("inputOutput"),
                                  value_ : SFString('50')),
                              ],
ecmascript:eval (0

			, function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}

			, function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
			}

			, function set_fraction(fraction, eventTime) {
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
				if (e < 1) {
					f = 10;
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
				generateCoordinates();
			})),

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
                              toField_ : SFString('set_fraction')),

                            ROUTE(
                              fromNode_ : SFString('OrbitPath'),
                              fromField_ : SFString('value_changed'),
                              toNode_ : SFString('OrbitTransform'),
                              toField_ : SFString('rotation')),

                            ROUTE(
                              fromNode_ : SFString('Clock'),
                              fromField_ : SFString('fraction_changed'),
                              toNode_ : SFString('OrbitPath'),
                              toField_ : SFString('set_fraction'))])])),

                ProtoInstance(
                  name_ : SFString('orbit'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('translation'),
                      value_ : SFString('-8 0 0')),

                    fieldValue(
                      name_ : SFString('diffuseColor'),
                      value_ : SFString('1 0.5 0')),

                    fieldValue(
                      name_ : SFString('specularColor'),
                      value_ : SFString('1 0.5 0')),

                    fieldValue(
                      name_ : SFString('transparency'),
                      value_ : SFString('0.75'))]),

                ProtoInstance(
                  name_ : SFString('orbit'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('translation'),
                      value_ : SFString('8 0 0')),

                    fieldValue(
                      name_ : SFString('diffuseColor'),
                      value_ : SFString('0 0.5 1')),

                    fieldValue(
                      name_ : SFString('specularColor'),
                      value_ : SFString('0 0.5 1')),

                    fieldValue(
                      name_ : SFString('transparency'),
                      value_ : SFString('0.5'))])])]));
void main() { exit(0); }
