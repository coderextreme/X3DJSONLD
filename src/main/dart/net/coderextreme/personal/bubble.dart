// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('bubble.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Tour around a prismatic sphere')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/bubble.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(4)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Bubble in action')),

            ProtoDeclare(
              name_ : SFString('Bubble'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('transform'),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.25),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                                  transparency_ : 0.2))),

                        Script(
                          DEF_ : SFString('bounce'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('scale'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('1 1 1')),

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
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('scalvel'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0 0 0')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('set_fraction'),
                              accessType_ : SFString("inputOnly")),
                          ],
ecmascript:eval (0
, function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

, function set_fraction(value) {
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
        // if you get to far away or too big, explode
        if ( Math.abs(translation.x) > 256) {
		translation.x = 0;
		initialize();
	}
        if ( Math.abs(translation.y) > 256) {
		translation.y = 0;
		initialize();
	}
        if ( Math.abs(translation.z) > 256) {
		translation.z = 0;
		initialize();
	}
	if (Math.abs(scale.x) > 20) {
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
})),

                        TimeSensor(
                          DEF_ : SFString('bubbleClock'),
                          cycleInterval_ : 10,
                          loop_ : true),

                        ROUTE(
                          fromNode_ : SFString('bounce'),
                          fromField_ : SFString('translation_changed'),
                          toNode_ : SFString('transform'),
                          toField_ : SFString('set_translation')),

                        ROUTE(
                          fromNode_ : SFString('bounce'),
                          fromField_ : SFString('scale_changed'),
                          toNode_ : SFString('transform'),
                          toField_ : SFString('set_scale')),

                        ROUTE(
                          fromNode_ : SFString('bubbleClock'),
                          fromField_ : SFString('fraction_changed'),
                          toNode_ : SFString('bounce'),
                          toField_ : SFString('set_fraction'))])])),

            ProtoInstance(
              name_ : SFString('Bubble'),
              DEF_ : SFString('bubbleA'))]));
void main() { exit(0); }
