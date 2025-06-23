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
              content_ : SFString('MyBounce.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('3 prismatic spheres')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            Transform(
              DEF_ : SFString('transform'),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]))),
                  geometry_ : 
                    Sphere())),

            Script(
              DEF_ : SFString('Bounce2'),
              field_ : [
                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('set_translation'),
                  accessType_ : SFString("inputOnly"),
                  value_ : SFString('0 0 0')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('translation_changed'),
                  accessType_ : SFString("outputOnly"),
                  value_ : SFString('0 0 0')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('translation'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0 0 0')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('velocity'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0 0 0')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('set_fraction'),
                  accessType_ : SFString("inputOnly")),
              ],
ecmascript:eval (0
			, function newBubble() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			, function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
				if (Math.abs(translation.x) > 10) {
					newBubble();
				} else if (Math.abs(translation.y) > 10) {
					newBubble();
				} else if (Math.abs(translation.z) > 10) {
					newBubble();
				} else {
					velocity = new SFVec3f(
						velocity.x + Math.random() * 0.2 - 0.1,
						velocity.y + Math.random() * 0.2 - 0.1,
						velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

			, function initialize() {
			     newBubble();
			})),

            TimeSensor(
              DEF_ : SFString('TourTime'),
              cycleInterval_ : 0.15,
              loop_ : true),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('cycleTime'),
              toNode_ : SFString('Bounce2'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Bounce2'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('transform'),
              toField_ : SFString('set_translation'))]));
void main() { exit(0); }
