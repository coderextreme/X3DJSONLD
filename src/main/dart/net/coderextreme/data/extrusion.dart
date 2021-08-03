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
              name_ : SFString('creator'),
              content_ : SFString('John W Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('December 13 2015')),

            meta(
              name_ : SFString('title'),
              content_ : SFString('extrusion.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/force.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('beginnings of a force directed graph in 3D')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            Group(
              children_ : [
                Shape(
                  geometry_ : 
                    Extrusion(
                      DEF_ : SFString('extrusion'),
                      spine_ : MFVec3f([SFVec3f([-50,-50,0]),SFVec3f([50,50,0])]),
                      creaseAngle_ : 0.785,
                      crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)])))),

                TimeSensor(
                  DEF_ : SFString('TourTime'),
                  loop_ : true),

                Script(
                  DEF_ : SFString('MoveCylinder'),
                  field_ : [
                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('set_cycle'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("MFVec3f"),
                      name_ : SFString('spine'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('-50 -50 0 50 50 0')),
                  ],
ecmascript:eval (0

                , function set_cycle(value) {
                        Browser.print(value);
                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);
                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);
		        spine = new MFVec3f([endA, endB]);
                })),

                ROUTE(
                  fromNode_ : SFString('TourTime'),
                  fromField_ : SFString('cycleTime'),
                  toNode_ : SFString('MoveCylinder'),
                  toField_ : SFString('set_cycle')),

                ROUTE(
                  fromNode_ : SFString('MoveCylinder'),
                  fromField_ : SFString('spine_changed'),
                  toNode_ : SFString('extrusion'),
                  toField_ : SFString('set_spine'))])]));
void main() { exit(0); }
