// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ifscubeworks.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://coderextreme.net/X3DJSONLD/src/main/personal/ifscubeworks.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Template for an Indexed Face Set')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('4 April 2017')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ifscubeworks.x3d')),

            Group(
              children_ : [
                Shape(
                  geometry_ : 
                    IndexedFaceSet(
                      DEF_ : SFString('IndexedFaceSet'),
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(3), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(0), SFInt32(-1)]),
                      normalIndex_ : MFInt32([SFInt32(0), SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5)]),
                      normalPerVertex_ : false,
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1)]),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0,1]),SFVec3f([0,1,1]),SFVec3f([1,1,1]),SFVec3f([1,0,1])])),
                      normal_ : 
                        Normal(
                          vector_ : MFVec3f([SFVec3f([1,0,0]),SFVec3f([-1,0,0]),SFVec3f([0,1,0]),SFVec3f([0,0,-1]),SFVec3f([0,-1,0]),SFVec3f([0,0,1])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(0), SFColor(1), SFColor(0)]))))])]));
void main() { exit(0); }