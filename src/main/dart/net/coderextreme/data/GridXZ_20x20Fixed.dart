// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('GridXZ_20x20Fixed.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('MV4204 class')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('3 September 2000')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('28 November 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('GridXY_20x20Fixed.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('GridYZ_20x20Fixed.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('GridXZ_20x20Fixed.x3d')),

            Viewpoint(
              description_ : SFString('XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.4)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(25)])),

            Transform(
              DEF_ : SFString('GridLocation'),
              children_ : [
                Group(
                  children_ : [
                    Shape(
                      DEF_ : SFString('LinesAlignedAlongZ'),
                      geometry_ : 
                        IndexedLineSet(
                          colorIndex_ : MFInt32([SFInt32(1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(2), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(2), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(1)]),
                          colorPerVertex_ : false,
                          coordIndex_ : MFInt32([SFInt32(1), SFInt32(22), SFInt32(-1), SFInt32(2), SFInt32(23), SFInt32(-1), SFInt32(3), SFInt32(24), SFInt32(-1), SFInt32(4), SFInt32(25), SFInt32(-1), SFInt32(5), SFInt32(26), SFInt32(-1), SFInt32(6), SFInt32(27), SFInt32(-1), SFInt32(7), SFInt32(28), SFInt32(-1), SFInt32(8), SFInt32(29), SFInt32(-1), SFInt32(9), SFInt32(30), SFInt32(-1), SFInt32(10), SFInt32(31), SFInt32(-1), SFInt32(11), SFInt32(32), SFInt32(-1), SFInt32(12), SFInt32(33), SFInt32(-1), SFInt32(13), SFInt32(34), SFInt32(-1), SFInt32(14), SFInt32(35), SFInt32(-1), SFInt32(15), SFInt32(36), SFInt32(-1), SFInt32(16), SFInt32(37), SFInt32(-1), SFInt32(17), SFInt32(38), SFInt32(-1), SFInt32(18), SFInt32(39), SFInt32(-1), SFInt32(19), SFInt32(40), SFInt32(-1), SFInt32(20), SFInt32(41), SFInt32(-1), SFInt32(21), SFInt32(42), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('EndPoints'),
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([-10,0,10]),SFVec3f([-9,0,10]),SFVec3f([-8,0,10]),SFVec3f([-7,0,10]),SFVec3f([-6,0,10]),SFVec3f([-5,0,10]),SFVec3f([-4,0,10]),SFVec3f([-3,0,10]),SFVec3f([-2,0,10]),SFVec3f([-1,0,10]),SFVec3f([0,0,10]),SFVec3f([1,0,10]),SFVec3f([2,0,10]),SFVec3f([3,0,10]),SFVec3f([4,0,10]),SFVec3f([5,0,10]),SFVec3f([6,0,10]),SFVec3f([7,0,10]),SFVec3f([8,0,10]),SFVec3f([9,0,10]),SFVec3f([10,0,10]),SFVec3f([-10,0,-10]),SFVec3f([-9,0,-10]),SFVec3f([-8,0,-10]),SFVec3f([-7,0,-10]),SFVec3f([-6,0,-10]),SFVec3f([-5,0,-10]),SFVec3f([-4,0,-10]),SFVec3f([-3,0,-10]),SFVec3f([-2,0,-10]),SFVec3f([-1,0,-10]),SFVec3f([0,0,-10]),SFVec3f([1,0,-10]),SFVec3f([2,0,-10]),SFVec3f([3,0,-10]),SFVec3f([4,0,-10]),SFVec3f([5,0,-10]),SFVec3f([6,0,-10]),SFVec3f([7,0,-10]),SFVec3f([8,0,-10]),SFVec3f([9,0,-10]),SFVec3f([10,0,-10])])),
                          color_ : 
                            Color(
                              color_ : MFColor([SFColor(0.4), SFColor(0.4), SFColor(0.4), SFColor(0.8), SFColor(0.2), SFColor(0), SFColor(0.4), SFColor(0.1), SFColor(0.05)])))),

                    Transform(
                      DEF_ : SFString('LinesAlignedAlongX'),
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('LinesAlignedAlongZ'))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.5), SFDouble(0)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  DEF_ : SFString('CenterTextNode'),
                                  string_ : MFString([SFString("origin")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      DEF_ : SFString('FS4'),
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                                      size_ : 0.4)),
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('DefaultAppearance'),
                                  material_ : 
                                    Material()))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(10), SFDouble(-0.5), SFDouble(10)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("10 0 10")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('FS4'))),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('DefaultAppearance')))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(10), SFDouble(-0.5), SFDouble(-10)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("10 0 -10")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('FS4'))),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('DefaultAppearance')))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(-10), SFDouble(-0.5), SFDouble(10)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("-10 0 10")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('FS4'))),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('DefaultAppearance')))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(-10), SFDouble(-0.5), SFDouble(-10)]),
                      children_ : [
                        Billboard(
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("-10 0 -10")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('FS4'))),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('DefaultAppearance')))])])])])]));
void main() { exit(0); }
