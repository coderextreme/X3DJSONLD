// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ExtrusionHeart.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Simple extrusion of a Valentine heart.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Class participants in course Introduction to VRML/X3D.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('14 February 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 November 2015')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Viewpoint(
              description_ : SFString('Extrusion Heart'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(-4), SFDouble(0)])),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-0.5), SFDouble(0)]),
              children_ : [
                Shape(
                  geometry_ : 
                    Extrusion(
                      creaseAngle_ : 3.14159,
                      crossSection_ : MFVec2f([SFVec2f([0,0.8]),SFVec2f([0.2,1]),SFVec2f([0.7,0.95]),SFVec2f([1,0.5]),SFVec2f([0.8,0]),SFVec2f([0.5,-0.3]),SFVec2f([0,-0.7]),SFVec2f([-0.5,-0.3]),SFVec2f([-0.8,0]),SFVec2f([-1,0.5]),SFVec2f([-0.7,0.95]),SFVec2f([-0.2,1]),SFVec2f([0,0.8])]),
                      scale_ : MFVec2f([SFVec2f([0.01,0.01]),SFVec2f([0.8,0.8]),SFVec2f([1,1]),SFVec2f([0.8,0.8]),SFVec2f([0.01,0.01])]),
                      solid_ : false,
                      spine_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0.5,0]),SFVec3f([0,0.9,0]),SFVec3f([0,1,0])])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0.3), SFDouble(0.3)]))))])]));
void main() { exit(0); }
