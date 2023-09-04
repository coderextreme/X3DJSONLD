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
              content_ : SFString('app.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carlson, I')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carlson, II'))]),
      Scene_ : 
        Scene(
          children_ : [
            Group(
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                  geometry_ : 
                    Box())]),

            Transform(
              translation_ : SFVec3f([SFDouble(1), SFDouble(2), SFDouble(3)]),
              rotation_ : SFRotation([SFDouble(7), SFDouble(8), SFDouble(9), SFDouble(3.14)]),
              scale_ : SFVec3f([SFDouble(4), SFDouble(5), SFDouble(6)]))]));
void main() { exit(0); }
