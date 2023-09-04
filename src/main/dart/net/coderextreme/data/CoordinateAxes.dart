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
              content_ : SFString('CoordinateAxes.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman, Byounghyun Yoo')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('14 July 2000')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('CoordinateAxes.x3d')),

            Collision(
              DEF_ : SFString('DoNotCollideWithVisualizationWidget'),
              proxy_ : 
                Group(
                  children_ : [
                    Group(
                      DEF_ : SFString('ArrowGreen'),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('Green'),
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.6), SFDouble(0.1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.05), SFDouble(0.2), SFDouble(0.05)]))),
                          geometry_ : 
                            Cylinder(
                              DEF_ : SFString('ArrowCylinder'),
                              top_ : false,
                              radius_ : 0.025)),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('Green')),
                              geometry_ : 
                                Cone(
                                  DEF_ : SFString('ArrowCone'),
                                  height_ : 0.1,
                                  bottomRadius_ : 0.05)))]),

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
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))])])]),
              proxy_ : 
                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1.57079)]),
                  children_ : [
                    Group(
                      children_ : [
                        Group(
                          DEF_ : SFString('ArrowRed'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('Red'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.1), SFDouble(0.1)]),
                                      emissiveColor_ : SFColor([SFDouble(0.33), SFDouble(0), SFDouble(0)]))),
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('ArrowCylinder'))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('Red')),
                                  geometry_ : 
                                    Cone(
                                      USE_ : SFString('ArrowCone'))))]),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.072), SFDouble(1.1), SFDouble(0)]),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57079)]),
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
              proxy_ : 
                Transform(
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57079)]),
                  children_ : [
                    Group(
                      children_ : [
                        Group(
                          DEF_ : SFString('ArrowBlue'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('Blue'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(1)]),
                                      emissiveColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.33)]))),
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('ArrowCylinder'))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('Blue')),
                                  geometry_ : 
                                    Cone(
                                      USE_ : SFString('ArrowCone'))))]),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.1), SFDouble(0.072)]),
                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
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
                                          USE_ : SFString('LABEL_FONT'))))])])])]))]));
void main() { exit(0); }
