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
              content_ : SFString('gridBack.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Checkerboard grid background for X3D/VRML materials selection.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('David Roussel')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('James Harney, Don Brutzman NPS')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('8 April 2002')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('12 January 2014')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://vrmlstuff.free.fr/materials')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Universal Media Material Library')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0.01,
                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                      shininess_ : 0.05)),
              geometry_ : 
                IndexedFaceSet(
                  colorPerVertex_ : false,
                  normalPerVertex_ : false,
                  colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0)]),
                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(8), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(10), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(11), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(11), SFInt32(12), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(13), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(13), SFInt32(14), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(14), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(16), SFInt32(17), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(17), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(18), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(19), SFInt32(20), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(20), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(24), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(25), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(27), SFInt32(28), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(28), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(29), SFInt32(30), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(30), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(32), SFInt32(33), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(33), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(34), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(35), SFInt32(36), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(36), SFInt32(37), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(37), SFInt32(38), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(38), SFInt32(39), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(40), SFInt32(41), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(42), SFInt32(43), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(43), SFInt32(44), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(44), SFInt32(45), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(45), SFInt32(46), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(46), SFInt32(47), SFInt32(39), SFInt32(-1), SFInt32(40), SFInt32(48), SFInt32(49), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(49), SFInt32(50), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(50), SFInt32(51), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(51), SFInt32(52), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(52), SFInt32(53), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(53), SFInt32(54), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(54), SFInt32(55), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(56), SFInt32(57), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(57), SFInt32(58), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(58), SFInt32(59), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(59), SFInt32(60), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(60), SFInt32(61), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(61), SFInt32(62), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(62), SFInt32(63), SFInt32(55), SFInt32(-1)]),
                  color_ : 
                    Color(
                      color_ : MFColor([SFColor(0.5), SFColor(0.5), SFColor(0.5), SFColor(0.75), SFColor(0.75), SFColor(0.75)])),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([-5.25,5.25,0]),SFVec3f([-3.75,5.25,0]),SFVec3f([-2.25,5.25,0]),SFVec3f([-0.75,5.25,0]),SFVec3f([0.75,5.25,0]),SFVec3f([2.25,5.25,0]),SFVec3f([3.75,5.25,0]),SFVec3f([5.25,5.25,0]),SFVec3f([-5.25,3.75,0]),SFVec3f([-3.75,3.75,0]),SFVec3f([-2.25,3.75,0]),SFVec3f([-0.75,3.75,0]),SFVec3f([0.75,3.75,0]),SFVec3f([2.25,3.75,0]),SFVec3f([3.75,3.75,0]),SFVec3f([5.25,3.75,0]),SFVec3f([-5.25,2.25,0]),SFVec3f([-3.75,2.25,0]),SFVec3f([-2.25,2.25,0]),SFVec3f([-0.75,2.25,0]),SFVec3f([0.75,2.25,0]),SFVec3f([2.25,2.25,0]),SFVec3f([3.75,2.25,0]),SFVec3f([5.25,2.25,0]),SFVec3f([-5.25,0.75,0]),SFVec3f([-3.75,0.75,0]),SFVec3f([-2.25,0.75,0]),SFVec3f([-0.75,0.75,0]),SFVec3f([0.75,0.75,0]),SFVec3f([2.25,0.75,0]),SFVec3f([3.75,0.75,0]),SFVec3f([5.25,0.75,0]),SFVec3f([-5.25,-0.75,0]),SFVec3f([-3.75,-0.75,0]),SFVec3f([-2.25,-0.75,0]),SFVec3f([-0.75,-0.75,0]),SFVec3f([0.75,-0.75,0]),SFVec3f([2.25,-0.75,0]),SFVec3f([3.75,-0.75,0]),SFVec3f([5.25,-0.75,0]),SFVec3f([-5.25,-2.25,0]),SFVec3f([-3.75,-2.25,0]),SFVec3f([-2.25,-2.25,0]),SFVec3f([-0.75,-2.25,0]),SFVec3f([0.75,-2.25,0]),SFVec3f([2.25,-2.25,0]),SFVec3f([3.75,-2.25,0]),SFVec3f([5.25,-2.25,0]),SFVec3f([-5.25,-3.75,0]),SFVec3f([-3.75,-3.75,0]),SFVec3f([-2.25,-3.75,0]),SFVec3f([-0.75,-3.75,0]),SFVec3f([0.75,-3.75,0]),SFVec3f([2.25,-3.75,0]),SFVec3f([3.75,-3.75,0]),SFVec3f([5.25,-3.75,0]),SFVec3f([-5.25,-5.25,0]),SFVec3f([-3.75,-5.25,0]),SFVec3f([-2.25,-5.25,0]),SFVec3f([-0.75,-5.25,0]),SFVec3f([0.75,-5.25,0]),SFVec3f([2.25,-5.25,0]),SFVec3f([3.75,-5.25,0]),SFVec3f([5.25,-5.25,0])]))))]));
void main() { exit(0); }
