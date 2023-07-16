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
              name_ : SFString('creator'),
              content_ : SFString('Carlson, I')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carlson, II')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carlson, III'))]),
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
              rotation_ : SFRotation([SFDouble(7), SFDouble(8), SFDouble(9), SFDouble(3.14)]),
              scale_ : SFVec3f([SFDouble(4), SFDouble(5), SFDouble(6)]),
              translation_ : SFVec3f([SFDouble(1), SFDouble(2), SFDouble(3)]))]));
void main() { exit(0); }
