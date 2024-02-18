// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ScubaTank.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Scuba gear used by Nancy Diving example.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Etsuko Lippi')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('24 January 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ScubaTank.x3d')),

            Transform(
              DEF_ : SFString('ScubaTank'),
              children_ : [
                Transform(
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('tank'),
                              ambientIntensity_ : 0.3,
                              diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(0.5)]),
                              shininess_ : 0.1,
                              specularColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.8)]))),
                      geometry_ : 
                        Cylinder(
                          height_ : 0.7,
                          radius_ : 0.1))),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.35), SFDouble(0)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('tank'))),
                      geometry_ : 
                        Sphere(
                          radius_ : 0.098))),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-0.35), SFDouble(0)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('tankBottom'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('black'),
                              ambientIntensity_ : 0.3,
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]))),
                      geometry_ : 
                        Cylinder(
                          height_ : 0.06,
                          radius_ : 0.115))),

                Group(
                  DEF_ : SFString('tankNozzle'),
                  children_ : [
                    Transform(
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.45), SFDouble(0)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('pressure'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('pressureColor'),
                                      ambientIntensity_ : 0.4,
                                      diffuseColor_ : SFColor([SFDouble(0.91), SFDouble(0.91), SFDouble(0.91)]),
                                      shininess_ : 0.16,
                                      specularColor_ : SFColor([SFDouble(0.91), SFDouble(0.9), SFDouble(0.91)]))),
                              geometry_ : 
                                Cylinder(
                                  height_ : 0.1,
                                  radius_ : 0.015))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('pressureTop'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('black'))),
                              geometry_ : 
                                Cylinder(
                                  height_ : 0.02,
                                  radius_ : 0.025))),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          translation_ : SFVec3f([SFDouble(-0.028), SFDouble(0.462), SFDouble(0)]),
                          children_ : [
                            Transform(
                              child_ : 
                                Shape(
                                  DEF_ : SFString('connectorToRegulator'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('pressureColor'))),
                                  geometry_ : 
                                    Cylinder(
                                      height_ : 0.03,
                                      radius_ : 0.01))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.02), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('connectorToRegulatorTop'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('black'))),
                                  geometry_ : 
                                    Cylinder(
                                      height_ : 0.02,
                                      radius_ : 0.02)))])])]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('tankHoldBelt'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('black'))),
                      geometry_ : 
                        Cylinder(
                          height_ : 0.1,
                          radius_ : 0.115)))]),

            Background(
              skyColor_ : MFColor([SFColor(0.6), SFColor(0.6), SFColor(0.6)]))]));
void main() { exit(0); }
