// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('CADInterchange'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('CADPartChildNoTransformation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Vince Marchetti bushing generation using python scripts')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/member-only/mantis/view.php?id=528')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('This scene is intended for specification development only.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('29 June 2012')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),
          component_ : 
            component(
              name_ : SFString('CADGeometry'),
              level_ : 2)],
          component_ : 
            component(
              name_ : SFString('EnvironmentalEffects'),
              level_ : 1)),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('CADPartChildNoTransformation.x3d')),

            Background(
              skyColor_ : MFColor([SFColor(0.9607843), SFColor(1), SFColor(0.9607843)])),

            Viewpoint(
              description_ : SFString('Hello CAD bushing'),
              position_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(15)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.321751)])),

            CADAssembly(
              name_ : SFString('DesignPatternAssembly'),
              children_ : [
                CADPart(
                  name_ : SFString('CADPartExample'),
                  children_ : [
                    CADFace(
                      name_ : SFString('outerSurface'),
                      shape_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('AppearanceGrey'),
                              material_ : 
                                Material()),
                          geometry_ : 
                            Cylinder(
                              top_ : false,
                              bottom_ : false,
                              height_ : 3,
                              radius_ : 2))),

                    CADFace(
                      name_ : SFString('innerSurface'),
                      shape_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('AppearanceGrey')),
                          geometry_ : 
                            Cylinder(
                              top_ : false,
                              bottom_ : false,
                              height_ : 3,
                              solid_ : false))),

                    CADFace(
                      name_ : SFString('topCap'),
                      shape_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('AppearanceGrey')),
                          geometry_ : 
                            IndexedTriangleSet(
                              index_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(2), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(4), SFInt32(3), SFInt32(5), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(6), SFInt32(5), SFInt32(7), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(8), SFInt32(7), SFInt32(9), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(10), SFInt32(9), SFInt32(11), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(12), SFInt32(11), SFInt32(13), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(14), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(16), SFInt32(15), SFInt32(17), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(18), SFInt32(17), SFInt32(19), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(20), SFInt32(19), SFInt32(21), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(22), SFInt32(21), SFInt32(23), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(24), SFInt32(23), SFInt32(25), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(26), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(28), SFInt32(27), SFInt32(29), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(30), SFInt32(29), SFInt32(31), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(32), SFInt32(31), SFInt32(33), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(34), SFInt32(33), SFInt32(35), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(36), SFInt32(35), SFInt32(37), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(38), SFInt32(37), SFInt32(39), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(40), SFInt32(39), SFInt32(41), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(42), SFInt32(41), SFInt32(43), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(44), SFInt32(43), SFInt32(45), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(46), SFInt32(45), SFInt32(47), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(48), SFInt32(47), SFInt32(49), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(50), SFInt32(49), SFInt32(51), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(52), SFInt32(51), SFInt32(53), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(54), SFInt32(53), SFInt32(55), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(56), SFInt32(55), SFInt32(57), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(58), SFInt32(57), SFInt32(59), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(60), SFInt32(59), SFInt32(61), SFInt32(60), SFInt32(61), SFInt32(62), SFInt32(62), SFInt32(61), SFInt32(63), SFInt32(62), SFInt32(63), SFInt32(64), SFInt32(64), SFInt32(63), SFInt32(65)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([2,1.5,0]),SFVec3f([1,1.5,0]),SFVec3f([1.9616,1.5,0.3902]),SFVec3f([0.9808,1.5,0.1951]),SFVec3f([1.8478,1.5,0.7654]),SFVec3f([0.9239,1.5,0.3827]),SFVec3f([1.6629,1.5,1.1111]),SFVec3f([0.8315,1.5,0.5556]),SFVec3f([1.4142,1.5,1.4142]),SFVec3f([0.7071,1.5,0.7071]),SFVec3f([1.1111,1.5,1.6629]),SFVec3f([0.5556,1.5,0.8315]),SFVec3f([0.7654,1.5,1.8478]),SFVec3f([0.3827,1.5,0.9239]),SFVec3f([0.3902,1.5,1.9616]),SFVec3f([0.1951,1.5,0.9808]),SFVec3f([0,1.5,2]),SFVec3f([0,1.5,1]),SFVec3f([-0.3902,1.5,1.9616]),SFVec3f([-0.1951,1.5,0.9808]),SFVec3f([-0.7654,1.5,1.8478]),SFVec3f([-0.3827,1.5,0.9239]),SFVec3f([-1.1111,1.5,1.6629]),SFVec3f([-0.5556,1.5,0.8315]),SFVec3f([-1.4142,1.5,1.4142]),SFVec3f([-0.7071,1.5,0.7071]),SFVec3f([-1.6629,1.5,1.1111]),SFVec3f([-0.8315,1.5,0.5556]),SFVec3f([-1.8478,1.5,0.7654]),SFVec3f([-0.9239,1.5,0.3827]),SFVec3f([-1.9616,1.5,0.3902]),SFVec3f([-0.9808,1.5,0.1951]),SFVec3f([-2,1.5,0]),SFVec3f([-1,1.5,0]),SFVec3f([-1.9616,1.5,-0.3902]),SFVec3f([-0.9808,1.5,-0.1951]),SFVec3f([-1.8478,1.5,-0.7654]),SFVec3f([-0.9239,1.5,-0.3827]),SFVec3f([-1.6629,1.5,-1.1111]),SFVec3f([-0.8315,1.5,-0.5556]),SFVec3f([-1.4142,1.5,-1.4142]),SFVec3f([-0.7071,1.5,-0.7071]),SFVec3f([-1.1111,1.5,-1.6629]),SFVec3f([-0.5556,1.5,-0.8315]),SFVec3f([-0.7654,1.5,-1.8478]),SFVec3f([-0.3827,1.5,-0.9239]),SFVec3f([-0.3902,1.5,-1.9616]),SFVec3f([-0.1951,1.5,-0.9808]),SFVec3f([0,1.5,-2]),SFVec3f([0,1.5,-1]),SFVec3f([0.3902,1.5,-1.9616]),SFVec3f([0.1951,1.5,-0.9808]),SFVec3f([0.7654,1.5,-1.8478]),SFVec3f([0.3827,1.5,-0.9239]),SFVec3f([1.1111,1.5,-1.6629]),SFVec3f([0.5556,1.5,-0.8315]),SFVec3f([1.4142,1.5,-1.4142]),SFVec3f([0.7071,1.5,-0.7071]),SFVec3f([1.6629,1.5,-1.1111]),SFVec3f([0.8315,1.5,-0.5556]),SFVec3f([1.8478,1.5,-0.7654]),SFVec3f([0.9239,1.5,-0.3827]),SFVec3f([1.9616,1.5,-0.3902]),SFVec3f([0.9808,1.5,-0.1951]),SFVec3f([2,1.5,0]),SFVec3f([1,1.5,0])]))))),

                    CADFace(
                      name_ : SFString('bottomCap'),
                      shape_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('AppearanceGrey')),
                          geometry_ : 
                            IndexedTriangleSet(
                              index_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(2), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(4), SFInt32(3), SFInt32(5), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(6), SFInt32(5), SFInt32(7), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(8), SFInt32(7), SFInt32(9), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(10), SFInt32(9), SFInt32(11), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(12), SFInt32(11), SFInt32(13), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(14), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(16), SFInt32(15), SFInt32(17), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(18), SFInt32(17), SFInt32(19), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(20), SFInt32(19), SFInt32(21), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(22), SFInt32(21), SFInt32(23), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(24), SFInt32(23), SFInt32(25), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(26), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(28), SFInt32(27), SFInt32(29), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(30), SFInt32(29), SFInt32(31), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(32), SFInt32(31), SFInt32(33), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(34), SFInt32(33), SFInt32(35), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(36), SFInt32(35), SFInt32(37), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(38), SFInt32(37), SFInt32(39), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(40), SFInt32(39), SFInt32(41), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(42), SFInt32(41), SFInt32(43), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(44), SFInt32(43), SFInt32(45), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(46), SFInt32(45), SFInt32(47), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(48), SFInt32(47), SFInt32(49), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(50), SFInt32(49), SFInt32(51), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(52), SFInt32(51), SFInt32(53), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(54), SFInt32(53), SFInt32(55), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(56), SFInt32(55), SFInt32(57), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(58), SFInt32(57), SFInt32(59), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(60), SFInt32(59), SFInt32(61), SFInt32(60), SFInt32(61), SFInt32(62), SFInt32(62), SFInt32(61), SFInt32(63), SFInt32(62), SFInt32(63), SFInt32(64), SFInt32(64), SFInt32(63), SFInt32(65)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([2,-1.5,0]),SFVec3f([1,-1.5,0]),SFVec3f([1.9616,-1.5,-0.3902]),SFVec3f([0.9808,-1.5,-0.1951]),SFVec3f([1.8478,-1.5,-0.7654]),SFVec3f([0.9239,-1.5,-0.3827]),SFVec3f([1.6629,-1.5,-1.1111]),SFVec3f([0.8315,-1.5,-0.5556]),SFVec3f([1.4142,-1.5,-1.4142]),SFVec3f([0.7071,-1.5,-0.7071]),SFVec3f([1.1111,-1.5,-1.6629]),SFVec3f([0.5556,-1.5,-0.8315]),SFVec3f([0.7654,-1.5,-1.8478]),SFVec3f([0.3827,-1.5,-0.9239]),SFVec3f([0.3902,-1.5,-1.9616]),SFVec3f([0.1951,-1.5,-0.9808]),SFVec3f([0,-1.5,-2]),SFVec3f([0,-1.5,-1]),SFVec3f([-0.3902,-1.5,-1.9616]),SFVec3f([-0.1951,-1.5,-0.9808]),SFVec3f([-0.7654,-1.5,-1.8478]),SFVec3f([-0.3827,-1.5,-0.9239]),SFVec3f([-1.1111,-1.5,-1.6629]),SFVec3f([-0.5556,-1.5,-0.8315]),SFVec3f([-1.4142,-1.5,-1.4142]),SFVec3f([-0.7071,-1.5,-0.7071]),SFVec3f([-1.6629,-1.5,-1.1111]),SFVec3f([-0.8315,-1.5,-0.5556]),SFVec3f([-1.8478,-1.5,-0.7654]),SFVec3f([-0.9239,-1.5,-0.3827]),SFVec3f([-1.9616,-1.5,-0.3902]),SFVec3f([-0.9808,-1.5,-0.1951]),SFVec3f([-2,-1.5,0]),SFVec3f([-1,-1.5,0]),SFVec3f([-1.9616,-1.5,0.3902]),SFVec3f([-0.9808,-1.5,0.1951]),SFVec3f([-1.8478,-1.5,0.7654]),SFVec3f([-0.9239,-1.5,0.3827]),SFVec3f([-1.6629,-1.5,1.1111]),SFVec3f([-0.8315,-1.5,0.5556]),SFVec3f([-1.4142,-1.5,1.4142]),SFVec3f([-0.7071,-1.5,0.7071]),SFVec3f([-1.1111,-1.5,1.6629]),SFVec3f([-0.5556,-1.5,0.8315]),SFVec3f([-0.7654,-1.5,1.8478]),SFVec3f([-0.3827,-1.5,0.9239]),SFVec3f([-0.3902,-1.5,1.9616]),SFVec3f([-0.1951,-1.5,0.9808]),SFVec3f([0,-1.5,2]),SFVec3f([0,-1.5,1]),SFVec3f([0.3902,-1.5,1.9616]),SFVec3f([0.1951,-1.5,0.9808]),SFVec3f([0.7654,-1.5,1.8478]),SFVec3f([0.3827,-1.5,0.9239]),SFVec3f([1.1111,-1.5,1.6629]),SFVec3f([0.5556,-1.5,0.8315]),SFVec3f([1.4142,-1.5,1.4142]),SFVec3f([0.7071,-1.5,0.7071]),SFVec3f([1.6629,-1.5,1.1111]),SFVec3f([0.8315,-1.5,0.5556]),SFVec3f([1.8478,-1.5,0.7654]),SFVec3f([0.9239,-1.5,0.3827]),SFVec3f([1.9616,-1.5,0.3902]),SFVec3f([0.9808,-1.5,0.1951]),SFVec3f([2,-1.5,0]),SFVec3f([1,-1.5,0])])))))])])]));
void main() { exit(0); }
