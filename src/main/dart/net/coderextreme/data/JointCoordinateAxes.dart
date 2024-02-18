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
              name_ : SFString('converter'),
              content_ : SFString('x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy')),

            meta(
              name_ : SFString('converted'),
              content_ : SFString('Mon, 31 Jul 2023 03:48:04 GMT'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              headlight_ : false),

            Group(
              children_ : [
                Group(
                  DEF_ : SFString('ARROW'),
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('ARROW_APPEARANCE'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(1)]),
                              emissiveColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.33)]))),
                      geometry_ : 
                        Cylinder(
                          top_ : false,
                          bottom_ : false,
                          radius_ : 0.025)),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('ARROW_POINTER'),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('ARROW_APPEARANCE')),
                          geometry_ : 
                            Cone(
                              height_ : 0.1,
                              bottomRadius_ : 0.05))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(3.1416)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('ARROW_POINTER')))]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.08), SFDouble(0)]),
                  children_ : [
                    Billboard(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('LABEL_APPEARANCE'),
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0.3)]),
                                  emissiveColor_ : SFColor([SFDouble(0.33), SFDouble(0.33), SFDouble(0.1)]))),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Y")]),
                              fontStyle_ : 
                                FontStyle(
                                  DEF_ : SFString('LABEL_FONT'),
                                  family_ : MFString([SFString("SANS")]),
                                  size_ : 0.2,
                                  justify_ : MFString([SFString("MIDDLE")]))))])])]),

            Transform(
              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1.5708)]),
              children_ : [
                Group(
                  children_ : [
                    Group(
                      USE_ : SFString('ARROW')),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0.072), SFDouble(1.1), SFDouble(0)]),
                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.5708)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('LABEL_APPEARANCE')),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("X")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('LABEL_FONT'))))])])])]),

            Transform(
              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.5708)]),
              children_ : [
                Group(
                  children_ : [
                    Group(
                      USE_ : SFString('ARROW')),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.1), SFDouble(0.072)]),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('LABEL_APPEARANCE')),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Z")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('LABEL_FONT'))))])])])])]));
void main() { exit(0); }
