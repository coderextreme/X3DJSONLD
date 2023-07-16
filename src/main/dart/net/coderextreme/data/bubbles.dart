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
              content_ : SFString('Bubbles.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Bubble animation used by Nancy Diving example.')),

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
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d')),

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
              title_ : SFString('Bubbles.x3d')),

            Transform(
              DEF_ : SFString('Bubbles'),
              children_ : [
                Group(
                  DEF_ : SFString('Bubble'),
                  children_ : [
                    TimeSensor(
                      DEF_ : SFString('BubbleClock'),
                      cycleInterval_ : 6,
                      loop_ : true),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath1'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.8), SFFloat(0.9), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.75,0.75,0.75]),SFVec3f([0.86,0.86,0.86]),SFVec3f([0.99,0.998,0.9876]),SFVec3f([1.272,1.9044,0.9509])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath2'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.3), SFFloat(0.64), SFFloat(0.85), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0.1,0.1,0.1]),SFVec3f([0.2,0.4,0.25]),SFVec3f([0.3,0.5,0.46]),SFVec3f([0.75,0.5,0.575]),SFVec3f([0.038483478,1.989,1.098373])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath3'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.45), SFFloat(0.7), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0.01,0.01,0.01]),SFVec3f([0.25,0.35,0.0045]),SFVec3f([0.55,0.6,0.0055]),SFVec3f([0.66,0.665,0.00655]),SFVec3f([1.555,1.09043,0.005734])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath4'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(0.6), SFFloat(0.8), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.5,0.5,0.005]),SFVec3f([0.6,0.6,0.006]),SFVec3f([0.75,0.75,0.0075]),SFVec3f([1.948594,1.3983,0.009009349])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath5'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.35), SFFloat(0.65), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.5,0.5,0.005]),SFVec3f([0.6,0.6,0.006]),SFVec3f([0.75,0.75,0.0075]),SFVec3f([1.84444,1.22222,0.1])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath6'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.15), SFFloat(0.22235), SFFloat(0.55565), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.235,0.3455,0.0055]),SFVec3f([0.356,0.676,0.00456]),SFVec3f([0.5675,0.75,0.0074565]),SFVec3f([1.098,1.0343,0.14])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath7'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2425), SFFloat(0.4535), SFFloat(0.6775), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.12345,0.2225,0.00335]),SFVec3f([0.786,0.456,0.00666]),SFVec3f([0.74555,0.7335,0.00234575]),SFVec3f([0.08787,1.022,0.12])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath8'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.1125), SFFloat(0.5535), SFFloat(0.97865), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1235,0.05,0.00125]),SFVec3f([0.5666,0.4346,0.005556]),SFVec3f([0.8975,0.34575,0.0098775]),SFVec3f([1.8787,1.686,0.86])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath9'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.0025), SFFloat(0.035), SFFloat(0.65), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.522,0.5445,0.0057]),SFVec3f([0.6543,0.226,0.0055]),SFVec3f([0.45575,0.4375,0.0067]),SFVec3f([1.8787,2,0.1545])])),

                    PositionInterpolator(
                      DEF_ : SFString('BubblePath10'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.00025), SFFloat(0.035), SFFloat(0.6895), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.8765,0.445,0.00335]),SFVec3f([0.3336,0.4446,0.005556]),SFVec3f([0.765,0.75,0.0075]),SFVec3f([1,1,0.1])])),

                    Transform(
                      children_ : [
                        Transform(
                          DEF_ : SFString('bubble1'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.025))]),

                        Transform(
                          DEF_ : SFString('bubble2'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.055))]),

                        Transform(
                          DEF_ : SFString('bubble3'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.065))]),

                        Transform(
                          DEF_ : SFString('bubble4'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.015))]),

                        Transform(
                          DEF_ : SFString('bubble5'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.075))]),

                        Transform(
                          DEF_ : SFString('bubble6'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.005))]),

                        Transform(
                          DEF_ : SFString('bubble7'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.035))]),

                        Transform(
                          DEF_ : SFString('bubble8'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.05))]),

                        Transform(
                          DEF_ : SFString('bubble9'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.045))]),

                        Transform(
                          DEF_ : SFString('bubble10'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                      transparency_ : 0.8)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.035))]),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath1')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath2')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath3')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath4')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath5')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath6')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath7')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath8')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath9')),

                        ROUTE(
                          fromField_ : SFString('fraction_changed'),
                          fromNode_ : SFString('BubbleClock'),
                          toField_ : SFString('set_fraction'),
                          toNode_ : SFString('BubblePath10')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath1'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble1')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath2'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble2')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath3'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble3')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath4'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble4')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath5'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble5')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath6'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble6')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath7'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble7')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath8'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble8')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath9'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble9')),

                        ROUTE(
                          fromField_ : SFString('value_changed'),
                          fromNode_ : SFString('BubblePath10'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('bubble10'))])])]),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(0.6)]))]));
void main() { exit(0); }
