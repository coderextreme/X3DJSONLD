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
              content_ : SFString('AllenBox.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Allen Box')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('8 July 2025')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('AllenBox.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")]),
              avatarSize_ : MFFloat([SFFloat(0.15), SFFloat(1.53), SFFloat(0.75)]),
              speed_ : 0.5),

            Transform(
              DEF_ : SFString('Floor'),
              scale_ : SFVec3f([SFDouble(1), SFDouble(0.0125), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(-0.0125), SFDouble(0)]),
              child_ : 
                Shape(
                  geometry_ : 
                    Box(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material())))]));
void main() { exit(0); }
