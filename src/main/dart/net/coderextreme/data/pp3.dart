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
              content_ : SFString('pp3.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('5 May 2015')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 Dec 2022')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A process pipeline between three spheres (try typing on spheres and blue')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/x3d/pp3.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('Process'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      /*left*/
                      children_ : [
                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(1), SFDouble(0)]),
                                      transparency_ : 0.5)),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([-2.5,0,0]),SFVec3f([-1.5,0,0])]))),
                          /*<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>*/]),
                      /*right*/

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.7), SFDouble(1)]),
                                      transparency_ : 0.5)),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([1.5,0,0]),SFVec3f([2.5,0,0])]))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(2), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          DEF_ : SFString('MaterialLightBlue'),
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    Text(
                                      DEF_ : SFString('RightString'),
                                      string_ : MFString([SFString("r")])))]),

                            StringSensor(
                              DEF_ : SFString('RightSensor'),
                              enabled_ : false),

                            TouchSensor(
                              description_ : SFString('touch to activate'),
                              DEF_ : SFString('RightTouch'))]),
                      /*up*/

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.7), SFDouble(1)]),
                                      transparency_ : 0.5)),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([0,1.5,0]),SFVec3f([0,2.5,0])]))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(-0.5), SFDouble(2), SFDouble(0)]),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('MaterialLightBlue'))),
                                  geometry_ : 
                                    Text(
                                      DEF_ : SFString('UpString'),
                                      string_ : MFString([SFString("u")])))]),

                            StringSensor(
                              DEF_ : SFString('UpSensor'),
                              enabled_ : false),

                            TouchSensor(
                              description_ : SFString('touch to activate'),
                              DEF_ : SFString('UpTouch'))]),
                      /*down*/

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(1), SFDouble(0)]),
                                      transparency_ : 0.5)),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([0,-2.5,0]),SFVec3f([0,-1.5,0])]))),
                          /*<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>*/]),
                      /*center*/

                        Transform(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.7)]))),
                              geometry_ : 
                                Sphere()),

                            Transform(
                              scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                              translation_ : SFVec3f([SFDouble(-0.5), SFDouble(0), SFDouble(1)]),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('MaterialLightBlue'))),
                                  geometry_ : 
                                    Text(
                                      DEF_ : SFString('CenterString')))]),

                            StringSensor(
                              DEF_ : SFString('CenterSensor'),
                              enabled_ : false),

                            TouchSensor(
                              description_ : SFString('touch to activate'),
                              DEF_ : SFString('CenterTouch'))])]),

                    Script(
                      DEF_ : SFString('RightSingleToMultiString'),
                      field_ : [
                        field(
                          type_ : SFString("SFString"),
                          name_ : SFString('set_rightstring'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFString"),
                          name_ : SFString('rightlines'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function initialize() {
	rightlines = new MFString("");
}

, function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
})),

                    Script(
                      DEF_ : SFString('UpSingleToMultiString'),
                      field_ : [
                        field(
                          type_ : SFString("SFString"),
                          name_ : SFString('set_upstring'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFString"),
                          name_ : SFString('uplines'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function initialize() {
	uplines = new MFString("");
}

, function set_upstring(upstr) {
	uplines = new MFString(upstr);
})),

                    Script(
                      DEF_ : SFString('CenterSingleToMultiString'),
                      field_ : [
                        field(
                          type_ : SFString("SFString"),
                          name_ : SFString('set_centerstring'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFString"),
                          name_ : SFString('centerlines'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function initialize() {
	centerlines = new MFString("");
}

, function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
})),

                    ROUTE(
                      fromField_ : SFString('enteredText'),
                      fromNode_ : SFString('CenterSensor'),
                      toField_ : SFString('set_centerstring'),
                      toNode_ : SFString('CenterSingleToMultiString')),

                    ROUTE(
                      fromField_ : SFString('centerlines'),
                      fromNode_ : SFString('CenterSingleToMultiString'),
                      toField_ : SFString('set_string'),
                      toNode_ : SFString('CenterString')),

                    ROUTE(
                      fromField_ : SFString('isOver'),
                      fromNode_ : SFString('CenterTouch'),
                      toField_ : SFString('set_enabled'),
                      toNode_ : SFString('CenterSensor')),

                    ROUTE(
                      fromField_ : SFString('enteredText'),
                      fromNode_ : SFString('RightSensor'),
                      toField_ : SFString('set_rightstring'),
                      toNode_ : SFString('RightSingleToMultiString')),

                    ROUTE(
                      fromField_ : SFString('rightlines'),
                      fromNode_ : SFString('RightSingleToMultiString'),
                      toField_ : SFString('set_string'),
                      toNode_ : SFString('RightString')),

                    ROUTE(
                      fromField_ : SFString('isOver'),
                      fromNode_ : SFString('RightTouch'),
                      toField_ : SFString('set_enabled'),
                      toNode_ : SFString('RightSensor')),

                    ROUTE(
                      fromField_ : SFString('enteredText'),
                      fromNode_ : SFString('UpSensor'),
                      toField_ : SFString('set_upstring'),
                      toNode_ : SFString('UpSingleToMultiString')),

                    ROUTE(
                      fromField_ : SFString('uplines'),
                      fromNode_ : SFString('UpSingleToMultiString'),
                      toField_ : SFString('set_string'),
                      toNode_ : SFString('UpString')),

                    ROUTE(
                      fromField_ : SFString('isOver'),
                      fromNode_ : SFString('UpTouch'),
                      toField_ : SFString('set_enabled'),
                      toNode_ : SFString('UpSensor'))])),

            NavigationInfo(),

            Viewpoint(
              description_ : SFString('Process pipes'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.4)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(12)])),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-2.5), SFDouble(0)]),
              children_ : [
                ProtoInstance(
                  name_ : SFString('Process'))]),

            Transform(
              children_ : [
                ProtoInstance(
                  name_ : SFString('Process'))]),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(0)]),
              children_ : [
                ProtoInstance(
                  name_ : SFString('Process'))])]));
void main() { exit(0); }
