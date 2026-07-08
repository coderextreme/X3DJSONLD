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
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('CoordinateAxes.x3d')),

            Collision(
              DEF_ : SFString('DoNotCollideWithVisualizationWidget'),
              /*Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.*/
              /*This NavigationInfo allows examine mode and will be overridden by any parent scene.*/
              /*Each arrow goes from +1m to -1m to allow linear scaling to fit a scene*/
              /*Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user*/
              proxy_ : 
                Group(
                  /*Vertical Y arrow and label*/
                  children_ : [
                    Group(
                      DEF_ : SFString('ArrowGreen'),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Cylinder(
                              DEF_ : SFString('ArrowCylinder'),
                              radius_ : 0.025,
                              top_ : false),
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('Green'),
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.6), SFDouble(0.1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.05), SFDouble(0.2), SFDouble(0.05)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cone(
                                  DEF_ : SFString('ArrowCone'),
                                  bottomRadius_ : 0.05,
                                  height_ : 0.1),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('Green'))))]),

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
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                                      size_ : 0.2)))])])]),
              proxy_ : 
                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1.57079)]),
                  /*Horizontal X arrow and label*/
                  children_ : [
                    Group(
                      children_ : [
                        Group(
                          DEF_ : SFString('ArrowRed'),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('ArrowCylinder')),
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('Red'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.1), SFDouble(0.1)]),
                                      emissiveColor_ : SFColor([SFDouble(0.33), SFDouble(0), SFDouble(0)])))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Cone(
                                      USE_ : SFString('ArrowCone')),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('Red'))))]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57079)]),
                          translation_ : SFVec3f([SFDouble(0.072), SFDouble(1.1), SFDouble(0)]),
                          /*note label rotated back to original coordinate frame*/
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
                  /*Perpendicular Z arrow and label, note right-hand rule*/
                  children_ : [
                    Group(
                      children_ : [
                        Group(
                          DEF_ : SFString('ArrowBlue'),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('ArrowCylinder')),
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('Blue'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0.3), SFDouble(0.3), SFDouble(1)]),
                                      emissiveColor_ : SFColor([SFDouble(0.1), SFDouble(0.1), SFDouble(0.33)])))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Cone(
                                      USE_ : SFString('ArrowCone')),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('Blue'))))]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1.1), SFDouble(0.072)]),
                          /*note label rotated back to original coordinate frame*/
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
