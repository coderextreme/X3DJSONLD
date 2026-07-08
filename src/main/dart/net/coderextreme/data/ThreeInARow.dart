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
              content_ : SFString('ThreeInARow.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('3 boxes'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              description_ : SFString('Cubes'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Transform(
              DEF_ : SFString('first'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
              child_ : 
                Shape(
                  DEF_ : SFString('ball'),
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))),

            Transform(
              child_ : 
                Shape(
                  USE_ : SFString('ball'))),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
              child_ : 
                Shape(
                  USE_ : SFString('ball')))]));
void main() { exit(0); }
