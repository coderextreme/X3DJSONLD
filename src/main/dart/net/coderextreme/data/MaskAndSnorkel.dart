// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('MaskAndSnorkel.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Diving mask and snorkel tube.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Etsuko Lippi')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('January 24, 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d')),

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
              title_ : SFString('MaskAndSnorkel.x3d')),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(0.9)])),

            Transform(
              DEF_ : SFString('maskAndSnorkel'),
              children_ : [
                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('maskFrame'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('frameColor'),
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(13), SFInt32(12), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(14), SFInt32(13), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(15), SFInt32(14), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(16), SFInt32(15), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(17), SFInt32(16), SFInt32(4), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(18), SFInt32(17), SFInt32(5), SFInt32(-1), SFInt32(18), SFInt32(6), SFInt32(25), SFInt32(19), SFInt32(0), SFInt32(12), SFInt32(18), SFInt32(-1), SFInt32(0), SFInt32(19), SFInt32(20), SFInt32(11), SFInt32(0), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(20), SFInt32(21), SFInt32(10), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(21), SFInt32(22), SFInt32(9), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(22), SFInt32(23), SFInt32(8), SFInt32(-1), SFInt32(23), SFInt32(24), SFInt32(7), SFInt32(8), SFInt32(23), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(24), SFInt32(25), SFInt32(6), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0])]))))]),

                Transform(
                  DEF_ : SFString('snorkelHoldRing'),
                  translation_ : SFVec3f([SFDouble(0.075), SFDouble(0.075), SFDouble(-0.02)]),
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('frameColor'))),
                      geometry_ : 
                        Cylinder(
                          height_ : 0.003,
                          radius_ : 0.015))]),

                Group(
                  DEF_ : SFString('snorkel'),
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.02), SFDouble(0)]),
                      children_ : [
                        Transform(
                          scale_ : SFVec3f([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]),
                          translation_ : SFVec3f([SFDouble(0.035), SFDouble(-0.07), SFDouble(-0.02)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('snorkelTube'),
                                      diffuseColor_ : SFColor([SFDouble(0.678), SFDouble(1), SFDouble(0.184)]),
                                      transparency_ : 0.4)),
                              geometry_ : 
                                Extrusion(
                                  crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013]),SFVec2f([-0.00494,-0.01196]),SFVec2f([-0.00923,-0.00923]),SFVec2f([-0.01196,-0.00494]),SFVec2f([-0.013,0]),SFVec2f([-0.01196,0.00494]),SFVec2f([-0.00923,0.00923]),SFVec2f([-0.00494,0.01196]),SFVec2f([0,0.013])]),
                                  spine_ : MFVec3f([SFVec3f([-0.01,-0.04,0]),SFVec3f([0,0,0]),SFVec3f([0.03,0.05,0]),SFVec3f([0.05,0.2,0]),SFVec3f([0.03,0.4,0.03])])))]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          scale_ : SFVec3f([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]),
                          translation_ : SFVec3f([SFDouble(0.01), SFDouble(-0.04), SFDouble(-0.02)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('Mouthpiece'),
                                      diffuseColor_ : SFColor([SFDouble(0.678), SFDouble(1), SFDouble(0.8)]),
                                      transparency_ : 0.4)),
                              geometry_ : 
                                Extrusion(
                                  crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013]),SFVec2f([-0.00494,-0.01196]),SFVec2f([-0.00923,-0.00923]),SFVec2f([-0.01196,-0.00494]),SFVec2f([-0.013,0]),SFVec2f([-0.01196,0.00494]),SFVec2f([-0.00923,0.00923]),SFVec2f([-0.00494,0.01196]),SFVec2f([0,0.013])]),
                                  spine_ : MFVec3f([SFVec3f([-0.01,-0.03,0]),SFVec3f([0,0,0]),SFVec3f([0.02,0.01,0])])))]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-0.85)]),
                          scale_ : SFVec3f([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]),
                          translation_ : SFVec3f([SFDouble(0.005), SFDouble(-0.01), SFDouble(-0.02)]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('Mouthpiece'))),
                              geometry_ : 
                                Extrusion(
                                  crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013])]),
                                  spine_ : MFVec3f([SFVec3f([-0.02,-0.03,0]),SFVec3f([-0.01,-0.03,0]),SFVec3f([0,-0.0175,0]),SFVec3f([0,-0.0135,0]),SFVec3f([-0.01,0,0]),SFVec3f([-0.02,0,0])])))])])]),

                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('maskLensR'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('plastic'),
                              diffuseColor_ : SFColor([SFDouble(0.941), SFDouble(0.973), SFDouble(1)]),
                              transparency_ : 0.8)),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(12), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0])]))))]),

                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('maskLensL'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('plastic'))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(25), SFInt32(19), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0])]))))]),

                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('nose'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('plasticFit'),
                              diffuseColor_ : SFColor([SFDouble(0.678), SFDouble(1), SFDouble(0.184)]),
                              transparency_ : 0.7)),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(37), SFInt32(26), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(36), SFInt32(26), SFInt32(0), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(26), SFInt32(36), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(37), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(36), SFInt32(0), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0]),SFVec3f([0,0.04,0.015]),SFVec3f([0.05,0.04,-0.03]),SFVec3f([0.06,0.05,-0.03]),SFVec3f([0.07,0.095,-0.03]),SFVec3f([0.055,0.11,-0.03]),SFVec3f([0,0.11,-0.02]),SFVec3f([-0.055,0.11,-0.03]),SFVec3f([-0.07,0.095,-0.03]),SFVec3f([-0.06,0.05,-0.03]),SFVec3f([-0.05,0.04,-0.03]),SFVec3f([-0.02,0.04,-0.02]),SFVec3f([0.02,0.04,-0.02])]))))]),

                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('faceFit'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('plasticFit'))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(1), SFInt32(2), SFInt32(27), SFInt32(37), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(28), SFInt32(27), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(29), SFInt32(28), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(30), SFInt32(29), SFInt32(4), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(31), SFInt32(30), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(32), SFInt32(31), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(33), SFInt32(32), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(34), SFInt32(33), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(35), SFInt32(34), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(36), SFInt32(35), SFInt32(10), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0]),SFVec3f([0,0.05,0.015]),SFVec3f([0.05,0.04,-0.03]),SFVec3f([0.06,0.05,-0.03]),SFVec3f([0.07,0.095,-0.03]),SFVec3f([0.055,0.11,-0.03]),SFVec3f([0,0.11,-0.02]),SFVec3f([-0.055,0.11,-0.03]),SFVec3f([-0.07,0.095,-0.03]),SFVec3f([-0.06,0.05,-0.03]),SFVec3f([-0.05,0.04,-0.03]),SFVec3f([-0.02,0.04,-0.02]),SFVec3f([0.02,0.04,-0.02])]))))]),

                Transform(
                  children_ : [
                    Shape(
                      DEF_ : SFString('belt'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('plastic'))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(3), SFInt32(4), SFInt32(39), SFInt32(38), SFInt32(3), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(40), SFInt32(41), SFInt32(8), SFInt32(-1), SFInt32(38), SFInt32(39), SFInt32(42), SFInt32(43), SFInt32(38), SFInt32(-1), SFInt32(40), SFInt32(41), SFInt32(44), SFInt32(45), SFInt32(40), SFInt32(-1), SFInt32(42), SFInt32(43), SFInt32(47), SFInt32(46), SFInt32(42), SFInt32(-1), SFInt32(44), SFInt32(45), SFInt32(47), SFInt32(46), SFInt32(44), SFInt32(-1)]),
                          creaseAngle_ : 1.45,
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0.08,0]),SFVec3f([0.02,0.05,0]),SFVec3f([0.05,0.05,0]),SFVec3f([0.06,0.06,0]),SFVec3f([0.06,0.09,0]),SFVec3f([0.05,0.1,0]),SFVec3f([0,0.1,0]),SFVec3f([-0.05,0.1,0]),SFVec3f([-0.06,0.09,0]),SFVec3f([-0.06,0.06,0]),SFVec3f([-0.05,0.05,0]),SFVec3f([-0.02,0.05,0]),SFVec3f([0.005,0.08,0]),SFVec3f([0.02,0.055,0]),SFVec3f([0.05,0.055,0]),SFVec3f([0.055,0.06,0]),SFVec3f([0.055,0.09,0]),SFVec3f([0.045,0.095,0]),SFVec3f([0.005,0.095,0]),SFVec3f([-0.005,0.08,0]),SFVec3f([-0.02,0.055,0]),SFVec3f([-0.05,0.055,0]),SFVec3f([-0.055,0.06,0]),SFVec3f([-0.055,0.09,0]),SFVec3f([-0.045,0.095,0]),SFVec3f([-0.005,0.095,0]),SFVec3f([0,0.05,0.015]),SFVec3f([0.05,0.04,-0.03]),SFVec3f([0.06,0.05,-0.03]),SFVec3f([0.07,0.095,-0.03]),SFVec3f([0.055,0.11,-0.03]),SFVec3f([0,0.11,-0.02]),SFVec3f([-0.055,0.11,-0.03]),SFVec3f([-0.07,0.095,-0.03]),SFVec3f([-0.06,0.05,-0.03]),SFVec3f([-0.05,0.04,-0.03]),SFVec3f([-0.02,0.04,-0.02]),SFVec3f([0.02,0.04,-0.02]),SFVec3f([0.075,0.06,-0.135]),SFVec3f([0.075,0.09,-0.135]),SFVec3f([-0.075,0.06,-0.135]),SFVec3f([-0.075,0.09,-0.135]),SFVec3f([0.06,0.09,-0.165]),SFVec3f([0.06,0.06,-0.165]),SFVec3f([-0.06,0.09,-0.165]),SFVec3f([-0.06,0.06,-0.165]),SFVec3f([0,0.09,-0.2]),SFVec3f([0,0.06,-0.175])]))))])])]));
void main() { exit(0); }
