// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      head_ : 
        head(),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              scale_ : SFVec3f([SFDouble(10), SFDouble(10), SFDouble(1)]),
              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(3.14)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.8), SFDouble(0.5)])),
                      texture_ : 
                        ImageTexture(
                          url_ : MFString([SFString("./face2.jpg")]))),
                  geometry_ : 
                    Sphere()))]));
void main() { exit(0); }
