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
              content_ : SFString('qq3.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('11 Jan 2015')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('05 May 2017')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('12 extrusions to test prototype expander')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/x3d/qq3.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('Process'),
              ProtoInterface_ : 
                ProtoInterface(),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      children_ : [
                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('ShapeLeftDown'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(1), SFDouble(0)]))),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([-2.5,0,0]),SFVec3f([-1.5,0,0])])))),

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('ShapeUpRight'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.7), SFDouble(1)]))),
                              geometry_ : 
                                Extrusion(
                                  creaseAngle_ : 0.785,
                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                                  spine_ : MFVec3f([SFVec3f([1.5,0,0]),SFVec3f([2.5,0,0])])))),

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('ShapeUpRight'))),

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('ShapeLeftDown')))])])),

            Viewpoint(
              description_ : SFString('Process pipes'),
              position_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(12)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.4)])),

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
