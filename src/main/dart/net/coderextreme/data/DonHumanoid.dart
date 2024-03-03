// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('DonHumanoid.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoid.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('An attempt at a standard LOA-4 skeleton')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('h2.pl')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 Jan 2023')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 November 2020')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              /*DEF for markerfor XYZ axes*/
              child_ : 
                Shape(
                  DEF_ : SFString('AxisLinesShape'),
                  /*RGB lines showing XYZ axes*/
                  geometry_ : 
                    IndexedLineSet(
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                      colorPerVertex_ : false,
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0,0.1])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))),

            Group(
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children_ : [
                Transform(
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimRootShape'),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimRootMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0), SFDouble(0)]),
                                  transparency_ : 0.3)))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimJointShape'),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimJointMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                  transparency_ : 0.3)))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.05), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimSegmentLine'),
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSegmentLineColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([-0.05,0,0]),SFVec3f([0.05,0,0])]))))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimSiteShape'),
                          geometry_ : 
                            IndexedFaceSet(
                              DEF_ : SFString('DiamondIFS'),
                              creaseAngle_ : 0.5,
                              solid_ : false,
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSiteColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                                  transparency_ : 0.3))))])]),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('default')),

            HAnimHumanoid(
              name_ : SFString('HAnim'),
              DEF_ : SFString('hanim_HAnim'),
              info_ : MFString([SFString("humanoidVersion=2.0")]),
              version_ : SFString('2.0'),
              /*<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)*/
              /*</LOD>*/
              skin_ : 
                Shape(
                  DEF_ : SFString('SkinShape'),
                  geometry_ : 
                    IndexedFaceSet(
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(9), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(4), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(10), SFInt32(12), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(9), SFInt32(75), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(74), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(75), SFInt32(-1), SFInt32(9), SFInt32(74), SFInt32(6), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(74), SFInt32(-1), SFInt32(12), SFInt32(75), SFInt32(8), SFInt32(-1), SFInt32(74), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(24), SFInt32(77), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(74), SFInt32(29), SFInt32(-1), SFInt32(77), SFInt32(32), SFInt32(29), SFInt32(-1), SFInt32(32), SFInt32(78), SFInt32(29), SFInt32(-1), SFInt32(78), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(41), SFInt32(24), SFInt32(75), SFInt32(-1), SFInt32(41), SFInt32(75), SFInt32(12), SFInt32(-1), SFInt32(41), SFInt32(12), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(80), SFInt32(44), SFInt32(-1), SFInt32(41), SFInt32(44), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(79), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(24), SFInt32(79), SFInt32(-1), SFInt32(81), SFInt32(77), SFInt32(24), SFInt32(-1), SFInt32(81), SFInt32(25), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(79), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(79), SFInt32(44), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(77), SFInt32(-1), SFInt32(25), SFInt32(83), SFInt32(32), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(83), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(84), SFInt32(27), SFInt32(-1), SFInt32(25), SFInt32(44), SFInt32(84), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(42), SFInt32(-1), SFInt32(11), SFInt32(42), SFInt32(12), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(76), SFInt32(-1), SFInt32(15), SFInt32(76), SFInt32(18), SFInt32(-1), SFInt32(76), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(76), SFInt32(17), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(82), SFInt32(19), SFInt32(-1), SFInt32(76), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(22), SFInt32(87), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(84), SFInt32(-1), SFInt32(22), SFInt32(84), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(85), SFInt32(84), SFInt32(44), SFInt32(-1), SFInt32(85), SFInt32(42), SFInt32(14), SFInt32(-1), SFInt32(87), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(87), SFInt32(85), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(83), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(88), SFInt32(-1), SFInt32(20), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(88), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(88), SFInt32(13), SFInt32(86), SFInt32(-1), SFInt32(88), SFInt32(86), SFInt32(83), SFInt32(-1), SFInt32(86), SFInt32(13), SFInt32(30), SFInt32(-1), SFInt32(86), SFInt32(32), SFInt32(83), SFInt32(-1), SFInt32(23), SFInt32(89), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(27), SFInt32(22), SFInt32(-1), SFInt32(89), SFInt32(91), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(91), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(91), SFInt32(-1), SFInt32(21), SFInt32(17), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(92), SFInt32(17), SFInt32(-1), SFInt32(82), SFInt32(17), SFInt32(92), SFInt32(-1), SFInt32(82), SFInt32(90), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(19), SFInt32(-1), SFInt32(23), SFInt32(19), SFInt32(90), SFInt32(-1), SFInt32(82), SFInt32(92), SFInt32(101), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(99), SFInt32(-1), SFInt32(82), SFInt32(99), SFInt32(93), SFInt32(-1), SFInt32(82), SFInt32(93), SFInt32(95), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(82), SFInt32(97), SFInt32(90), SFInt32(-1), SFInt32(23), SFInt32(90), SFInt32(97), SFInt32(-1), SFInt32(23), SFInt32(97), SFInt32(94), SFInt32(-1), SFInt32(23), SFInt32(94), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(89), SFInt32(96), SFInt32(95), SFInt32(-1), SFInt32(89), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(89), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(93), SFInt32(99), SFInt32(-1), SFInt32(91), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(91), SFInt32(100), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(91), SFInt32(98), SFInt32(-1), SFInt32(21), SFInt32(98), SFInt32(101), SFInt32(-1), SFInt32(21), SFInt32(101), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(85), SFInt32(103), SFInt32(105), SFInt32(-1), SFInt32(85), SFInt32(44), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(44), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(42), SFInt32(105), SFInt32(-1), SFInt32(80), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(80), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(80), SFInt32(104), SFInt32(44), SFInt32(-1), SFInt32(105), SFInt32(109), SFInt32(102), SFInt32(-1), SFInt32(102), SFInt32(109), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(104), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(47), SFInt32(45), SFInt32(-1), SFInt32(104), SFInt32(45), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(46), SFInt32(109), SFInt32(-1), SFInt32(103), SFInt32(109), SFInt32(105), SFInt32(-1), SFInt32(109), SFInt32(112), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(47), SFInt32(111), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(46), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(112), SFInt32(118), SFInt32(110), SFInt32(-1), SFInt32(110), SFInt32(118), SFInt32(115), SFInt32(-1), SFInt32(110), SFInt32(115), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(111), SFInt32(117), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(117), SFInt32(116), SFInt32(-1), SFInt32(113), SFInt32(116), SFInt32(112), SFInt32(-1), SFInt32(112), SFInt32(116), SFInt32(118), SFInt32(-1), SFInt32(115), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(-1), SFInt32(118), SFInt32(116), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(116), SFInt32(120), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(120), SFInt32(-1), SFInt32(120), SFInt32(117), SFInt32(121), SFInt32(-1), SFInt32(117), SFInt32(115), SFInt32(121), SFInt32(-1), SFInt32(115), SFInt32(119), SFInt32(121), SFInt32(-1), SFInt32(119), SFInt32(127), SFInt32(123), SFInt32(-1), SFInt32(119), SFInt32(122), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(122), SFInt32(128), SFInt32(126), SFInt32(-1), SFInt32(122), SFInt32(120), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(124), SFInt32(128), SFInt32(-1), SFInt32(120), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(125), SFInt32(124), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(123), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(129), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(126), SFInt32(141), SFInt32(-1), SFInt32(141), SFInt32(126), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(126), SFInt32(128), SFInt32(142), SFInt32(-1), SFInt32(128), SFInt32(124), SFInt32(130), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(132), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(134), SFInt32(132), SFInt32(-1), SFInt32(125), SFInt32(134), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(136), SFInt32(134), SFInt32(-1), SFInt32(125), SFInt32(137), SFInt32(136), SFInt32(-1), SFInt32(125), SFInt32(135), SFInt32(137), SFInt32(-1), SFInt32(125), SFInt32(133), SFInt32(135), SFInt32(-1), SFInt32(125), SFInt32(123), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(131), SFInt32(133), SFInt32(-1), SFInt32(123), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(129), SFInt32(138), SFInt32(-1), SFInt32(129), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(141), SFInt32(144), SFInt32(-1), SFInt32(141), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(139), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(130), SFInt32(139), SFInt32(142), SFInt32(-1), SFInt32(139), SFInt32(130), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(132), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(157), SFInt32(154), SFInt32(-1), SFInt32(132), SFInt32(159), SFInt32(157), SFInt32(-1), SFInt32(132), SFInt32(134), SFInt32(159), SFInt32(-1), SFInt32(134), SFInt32(136), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(161), SFInt32(159), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(161), SFInt32(-1), SFInt32(137), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(137), SFInt32(-1), SFInt32(135), SFInt32(160), SFInt32(137), SFInt32(-1), SFInt32(133), SFInt32(160), SFInt32(135), SFInt32(-1), SFInt32(133), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(131), SFInt32(158), SFInt32(133), SFInt32(-1), SFInt32(156), SFInt32(158), SFInt32(131), SFInt32(-1), SFInt32(153), SFInt32(156), SFInt32(131), SFInt32(-1), SFInt32(131), SFInt32(138), SFInt32(153), SFInt32(-1), SFInt32(138), SFInt32(155), SFInt32(153), SFInt32(-1), SFInt32(140), SFInt32(155), SFInt32(138), SFInt32(-1), SFInt32(138), SFInt32(144), SFInt32(140), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(140), SFInt32(-1), SFInt32(140), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(139), SFInt32(-1), SFInt32(139), SFInt32(155), SFInt32(140), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(139), SFInt32(-1), SFInt32(146), SFInt32(149), SFInt32(144), SFInt32(-1), SFInt32(146), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(145), SFInt32(151), SFInt32(146), SFInt32(-1), SFInt32(150), SFInt32(151), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(150), SFInt32(-1), SFInt32(147), SFInt32(152), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(149), SFInt32(152), SFInt32(-1), SFInt32(147), SFInt32(144), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(149), SFInt32(-1), SFInt32(148), SFInt32(150), SFInt32(152), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(150), SFInt32(-1), SFInt32(160), SFInt32(207), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(205), SFInt32(207), SFInt32(-1), SFInt32(165), SFInt32(208), SFInt32(205), SFInt32(-1), SFInt32(160), SFInt32(165), SFInt32(205), SFInt32(-1), SFInt32(158), SFInt32(165), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(162), SFInt32(207), SFInt32(-1), SFInt32(161), SFInt32(207), SFInt32(206), SFInt32(-1), SFInt32(165), SFInt32(206), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(161), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(207), SFInt32(209), SFInt32(211), SFInt32(-1), SFInt32(205), SFInt32(209), SFInt32(207), SFInt32(-1), SFInt32(205), SFInt32(212), SFInt32(209), SFInt32(-1), SFInt32(205), SFInt32(208), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(212), SFInt32(208), SFInt32(-1), SFInt32(206), SFInt32(210), SFInt32(212), SFInt32(-1), SFInt32(206), SFInt32(207), SFInt32(210), SFInt32(-1), SFInt32(207), SFInt32(211), SFInt32(210), SFInt32(-1), SFInt32(209), SFInt32(212), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(216), SFInt32(213), SFInt32(-1), SFInt32(212), SFInt32(214), SFInt32(216), SFInt32(-1), SFInt32(210), SFInt32(214), SFInt32(212), SFInt32(-1), SFInt32(210), SFInt32(215), SFInt32(214), SFInt32(-1), SFInt32(210), SFInt32(211), SFInt32(215), SFInt32(-1), SFInt32(209), SFInt32(215), SFInt32(211), SFInt32(-1), SFInt32(209), SFInt32(213), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(213), SFInt32(216), SFInt32(-1), SFInt32(217), SFInt32(215), SFInt32(213), SFInt32(-1), SFInt32(217), SFInt32(214), SFInt32(215), SFInt32(-1), SFInt32(217), SFInt32(216), SFInt32(214), SFInt32(-1), SFInt32(158), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(192), SFInt32(194), SFInt32(158), SFInt32(-1), SFInt32(164), SFInt32(195), SFInt32(192), SFInt32(-1), SFInt32(158), SFInt32(164), SFInt32(192), SFInt32(-1), SFInt32(156), SFInt32(164), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(165), SFInt32(-1), SFInt32(159), SFInt32(194), SFInt32(193), SFInt32(-1), SFInt32(159), SFInt32(193), SFInt32(195), SFInt32(-1), SFInt32(159), SFInt32(195), SFInt32(164), SFInt32(-1), SFInt32(159), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(180), SFInt32(-1), SFInt32(192), SFInt32(198), SFInt32(194), SFInt32(-1), SFInt32(192), SFInt32(196), SFInt32(198), SFInt32(-1), SFInt32(192), SFInt32(195), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(199), SFInt32(196), SFInt32(-1), SFInt32(196), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(199), SFInt32(203), SFInt32(200), SFInt32(-1), SFInt32(193), SFInt32(199), SFInt32(195), SFInt32(-1), SFInt32(193), SFInt32(197), SFInt32(199), SFInt32(-1), SFInt32(193), SFInt32(198), SFInt32(197), SFInt32(-1), SFInt32(193), SFInt32(194), SFInt32(198), SFInt32(-1), SFInt32(199), SFInt32(201), SFInt32(203), SFInt32(-1), SFInt32(197), SFInt32(201), SFInt32(199), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(201), SFInt32(-1), SFInt32(198), SFInt32(202), SFInt32(201), SFInt32(-1), SFInt32(196), SFInt32(202), SFInt32(198), SFInt32(-1), SFInt32(200), SFInt32(202), SFInt32(196), SFInt32(-1), SFInt32(204), SFInt32(202), SFInt32(200), SFInt32(-1), SFInt32(204), SFInt32(201), SFInt32(202), SFInt32(-1), SFInt32(204), SFInt32(203), SFInt32(201), SFInt32(-1), SFInt32(204), SFInt32(200), SFInt32(203), SFInt32(-1), SFInt32(156), SFInt32(181), SFInt32(164), SFInt32(-1), SFInt32(156), SFInt32(179), SFInt32(181), SFInt32(-1), SFInt32(156), SFInt32(182), SFInt32(179), SFInt32(-1), SFInt32(156), SFInt32(163), SFInt32(182), SFInt32(-1), SFInt32(163), SFInt32(180), SFInt32(182), SFInt32(-1), SFInt32(157), SFInt32(180), SFInt32(163), SFInt32(-1), SFInt32(164), SFInt32(181), SFInt32(180), SFInt32(-1), SFInt32(179), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(186), SFInt32(183), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(186), SFInt32(-1), SFInt32(180), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(184), SFInt32(-1), SFInt32(181), SFInt32(185), SFInt32(184), SFInt32(-1), SFInt32(179), SFInt32(185), SFInt32(181), SFInt32(-1), SFInt32(183), SFInt32(185), SFInt32(179), SFInt32(-1), SFInt32(183), SFInt32(186), SFInt32(187), SFInt32(-1), SFInt32(186), SFInt32(190), SFInt32(187), SFInt32(-1), SFInt32(184), SFInt32(190), SFInt32(186), SFInt32(-1), SFInt32(184), SFInt32(188), SFInt32(190), SFInt32(-1), SFInt32(184), SFInt32(185), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(185), SFInt32(183), SFInt32(189), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(189), SFInt32(187), SFInt32(-1), SFInt32(191), SFInt32(188), SFInt32(189), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(191), SFInt32(187), SFInt32(190), SFInt32(-1), SFInt32(153), SFInt32(163), SFInt32(156), SFInt32(-1), SFInt32(153), SFInt32(168), SFInt32(163), SFInt32(-1), SFInt32(153), SFInt32(166), SFInt32(168), SFInt32(-1), SFInt32(153), SFInt32(169), SFInt32(166), SFInt32(-1), SFInt32(155), SFInt32(169), SFInt32(153), SFInt32(-1), SFInt32(155), SFInt32(167), SFInt32(169), SFInt32(-1), SFInt32(154), SFInt32(167), SFInt32(155), SFInt32(-1), SFInt32(154), SFInt32(163), SFInt32(167), SFInt32(-1), SFInt32(154), SFInt32(157), SFInt32(163), SFInt32(-1), SFInt32(163), SFInt32(168), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(170), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(173), SFInt32(-1), SFInt32(169), SFInt32(167), SFInt32(171), SFInt32(-1), SFInt32(167), SFInt32(168), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(172), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(166), SFInt32(-1), SFInt32(170), SFInt32(173), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(177), SFInt32(174), SFInt32(-1), SFInt32(173), SFInt32(175), SFInt32(177), SFInt32(-1), SFInt32(173), SFInt32(171), SFInt32(175), SFInt32(-1), SFInt32(171), SFInt32(172), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(176), SFInt32(175), SFInt32(-1), SFInt32(172), SFInt32(174), SFInt32(176), SFInt32(-1), SFInt32(170), SFInt32(174), SFInt32(172), SFInt32(-1), SFInt32(178), SFInt32(176), SFInt32(174), SFInt32(-1), SFInt32(178), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(175), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(177), SFInt32(-1), SFInt32(86), SFInt32(30), SFInt32(221), SFInt32(-1), SFInt32(86), SFInt32(221), SFInt32(219), SFInt32(-1), SFInt32(86), SFInt32(219), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(219), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(32), SFInt32(220), SFInt32(-1), SFInt32(78), SFInt32(220), SFInt32(218), SFInt32(-1), SFInt32(78), SFInt32(218), SFInt32(221), SFInt32(-1), SFInt32(78), SFInt32(221), SFInt32(30), SFInt32(-1), SFInt32(221), SFInt32(225), SFInt32(219), SFInt32(-1), SFInt32(219), SFInt32(225), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(33), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(220), SFInt32(219), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(220), SFInt32(-1), SFInt32(220), SFInt32(34), SFInt32(218), SFInt32(-1), SFInt32(221), SFInt32(218), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(225), SFInt32(221), SFInt32(-1), SFInt32(225), SFInt32(226), SFInt32(228), SFInt32(-1), SFInt32(225), SFInt32(228), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(228), SFInt32(229), SFInt32(-1), SFInt32(35), SFInt32(229), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(229), SFInt32(227), SFInt32(-1), SFInt32(33), SFInt32(227), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(227), SFInt32(226), SFInt32(-1), SFInt32(34), SFInt32(226), SFInt32(225), SFInt32(-1), SFInt32(226), SFInt32(234), SFInt32(228), SFInt32(-1), SFInt32(228), SFInt32(234), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(229), SFInt32(228), SFInt32(-1), SFInt32(232), SFInt32(233), SFInt32(229), SFInt32(-1), SFInt32(229), SFInt32(233), SFInt32(227), SFInt32(-1), SFInt32(227), SFInt32(233), SFInt32(231), SFInt32(-1), SFInt32(227), SFInt32(231), SFInt32(226), SFInt32(-1), SFInt32(226), SFInt32(231), SFInt32(234), SFInt32(-1), SFInt32(231), SFInt32(235), SFInt32(234), SFInt32(-1), SFInt32(235), SFInt32(238), SFInt32(234), SFInt32(-1), SFInt32(234), SFInt32(238), SFInt32(232), SFInt32(-1), SFInt32(238), SFInt32(236), SFInt32(232), SFInt32(-1), SFInt32(232), SFInt32(236), SFInt32(233), SFInt32(-1), SFInt32(236), SFInt32(237), SFInt32(233), SFInt32(-1), SFInt32(233), SFInt32(237), SFInt32(231), SFInt32(-1), SFInt32(231), SFInt32(237), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(239), SFInt32(243), SFInt32(-1), SFInt32(235), SFInt32(243), SFInt32(238), SFInt32(-1), SFInt32(238), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(238), SFInt32(242), SFInt32(244), SFInt32(-1), SFInt32(238), SFInt32(244), SFInt32(236), SFInt32(-1), SFInt32(236), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(236), SFInt32(240), SFInt32(237), SFInt32(-1), SFInt32(237), SFInt32(240), SFInt32(241), SFInt32(-1), SFInt32(237), SFInt32(241), SFInt32(235), SFInt32(-1), SFInt32(235), SFInt32(241), SFInt32(239), SFInt32(-1), SFInt32(243), SFInt32(239), SFInt32(245), SFInt32(-1), SFInt32(243), SFInt32(245), SFInt32(242), SFInt32(-1), SFInt32(245), SFInt32(257), SFInt32(242), SFInt32(-1), SFInt32(257), SFInt32(259), SFInt32(242), SFInt32(-1), SFInt32(242), SFInt32(259), SFInt32(258), SFInt32(-1), SFInt32(242), SFInt32(258), SFInt32(244), SFInt32(-1), SFInt32(244), SFInt32(246), SFInt32(240), SFInt32(-1), SFInt32(258), SFInt32(246), SFInt32(244), SFInt32(-1), SFInt32(240), SFInt32(246), SFInt32(248), SFInt32(-1), SFInt32(240), SFInt32(248), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(240), SFInt32(250), SFInt32(-1), SFInt32(241), SFInt32(250), SFInt32(252), SFInt32(-1), SFInt32(241), SFInt32(252), SFInt32(253), SFInt32(-1), SFInt32(241), SFInt32(253), SFInt32(251), SFInt32(-1), SFInt32(241), SFInt32(251), SFInt32(249), SFInt32(-1), SFInt32(241), SFInt32(249), SFInt32(239), SFInt32(-1), SFInt32(239), SFInt32(249), SFInt32(247), SFInt32(-1), SFInt32(239), SFInt32(247), SFInt32(245), SFInt32(-1), SFInt32(247), SFInt32(254), SFInt32(245), SFInt32(-1), SFInt32(245), SFInt32(254), SFInt32(257), SFInt32(-1), SFInt32(254), SFInt32(260), SFInt32(257), SFInt32(-1), SFInt32(257), SFInt32(260), SFInt32(259), SFInt32(-1), SFInt32(259), SFInt32(260), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(259), SFInt32(262), SFInt32(-1), SFInt32(258), SFInt32(262), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(258), SFInt32(261), SFInt32(-1), SFInt32(246), SFInt32(258), SFInt32(255), SFInt32(-1), SFInt32(255), SFInt32(248), SFInt32(246), SFInt32(-1), SFInt32(255), SFInt32(270), SFInt32(248), SFInt32(-1), SFInt32(248), SFInt32(270), SFInt32(273), SFInt32(-1), SFInt32(248), SFInt32(273), SFInt32(275), SFInt32(-1), SFInt32(248), SFInt32(275), SFInt32(250), SFInt32(-1), SFInt32(250), SFInt32(275), SFInt32(252), SFInt32(-1), SFInt32(252), SFInt32(275), SFInt32(277), SFInt32(-1), SFInt32(252), SFInt32(277), SFInt32(253), SFInt32(-1), SFInt32(253), SFInt32(277), SFInt32(278), SFInt32(-1), SFInt32(276), SFInt32(253), SFInt32(278), SFInt32(-1), SFInt32(251), SFInt32(253), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(251), SFInt32(276), SFInt32(-1), SFInt32(249), SFInt32(276), SFInt32(274), SFInt32(-1), SFInt32(247), SFInt32(249), SFInt32(274), SFInt32(-1), SFInt32(272), SFInt32(247), SFInt32(274), SFInt32(-1), SFInt32(269), SFInt32(247), SFInt32(272), SFInt32(-1), SFInt32(247), SFInt32(269), SFInt32(254), SFInt32(-1), SFInt32(254), SFInt32(269), SFInt32(271), SFInt32(-1), SFInt32(256), SFInt32(254), SFInt32(271), SFInt32(-1), SFInt32(254), SFInt32(256), SFInt32(260), SFInt32(-1), SFInt32(260), SFInt32(256), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(261), SFInt32(263), SFInt32(-1), SFInt32(256), SFInt32(255), SFInt32(261), SFInt32(-1), SFInt32(255), SFInt32(256), SFInt32(271), SFInt32(-1), SFInt32(270), SFInt32(255), SFInt32(271), SFInt32(-1), SFInt32(262), SFInt32(260), SFInt32(265), SFInt32(-1), SFInt32(262), SFInt32(265), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(262), SFInt32(267), SFInt32(-1), SFInt32(266), SFInt32(261), SFInt32(267), SFInt32(-1), SFInt32(261), SFInt32(266), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(261), SFInt32(268), SFInt32(-1), SFInt32(263), SFInt32(268), SFInt32(265), SFInt32(-1), SFInt32(263), SFInt32(265), SFInt32(260), SFInt32(-1), SFInt32(264), SFInt32(267), SFInt32(265), SFInt32(-1), SFInt32(264), SFInt32(265), SFInt32(268), SFInt32(-1), SFInt32(264), SFInt32(268), SFInt32(266), SFInt32(-1), SFInt32(264), SFInt32(266), SFInt32(267), SFInt32(-1), SFInt32(276), SFInt32(278), SFInt32(323), SFInt32(-1), SFInt32(276), SFInt32(323), SFInt32(321), SFInt32(-1), SFInt32(281), SFInt32(321), SFInt32(324), SFInt32(-1), SFInt32(276), SFInt32(321), SFInt32(281), SFInt32(-1), SFInt32(274), SFInt32(276), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(323), SFInt32(278), SFInt32(-1), SFInt32(277), SFInt32(322), SFInt32(323), SFInt32(-1), SFInt32(281), SFInt32(324), SFInt32(322), SFInt32(-1), SFInt32(322), SFInt32(277), SFInt32(281), SFInt32(-1), SFInt32(277), SFInt32(275), SFInt32(281), SFInt32(-1), SFInt32(323), SFInt32(327), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(323), SFInt32(325), SFInt32(-1), SFInt32(321), SFInt32(325), SFInt32(328), SFInt32(-1), SFInt32(321), SFInt32(328), SFInt32(324), SFInt32(-1), SFInt32(322), SFInt32(324), SFInt32(328), SFInt32(-1), SFInt32(322), SFInt32(328), SFInt32(326), SFInt32(-1), SFInt32(322), SFInt32(326), SFInt32(323), SFInt32(-1), SFInt32(323), SFInt32(326), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(329), SFInt32(328), SFInt32(-1), SFInt32(328), SFInt32(329), SFInt32(332), SFInt32(-1), SFInt32(328), SFInt32(332), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(328), SFInt32(330), SFInt32(-1), SFInt32(326), SFInt32(330), SFInt32(331), SFInt32(-1), SFInt32(326), SFInt32(331), SFInt32(327), SFInt32(-1), SFInt32(325), SFInt32(327), SFInt32(331), SFInt32(-1), SFInt32(325), SFInt32(331), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(332), SFInt32(329), SFInt32(-1), SFInt32(333), SFInt32(329), SFInt32(331), SFInt32(-1), SFInt32(333), SFInt32(331), SFInt32(330), SFInt32(-1), SFInt32(333), SFInt32(330), SFInt32(332), SFInt32(-1), SFInt32(274), SFInt32(281), SFInt32(310), SFInt32(-1), SFInt32(308), SFInt32(274), SFInt32(310), SFInt32(-1), SFInt32(280), SFInt32(308), SFInt32(311), SFInt32(-1), SFInt32(274), SFInt32(308), SFInt32(280), SFInt32(-1), SFInt32(272), SFInt32(274), SFInt32(280), SFInt32(-1), SFInt32(275), SFInt32(310), SFInt32(281), SFInt32(-1), SFInt32(275), SFInt32(309), SFInt32(310), SFInt32(-1), SFInt32(275), SFInt32(311), SFInt32(309), SFInt32(-1), SFInt32(275), SFInt32(280), SFInt32(311), SFInt32(-1), SFInt32(275), SFInt32(273), SFInt32(280), SFInt32(-1), SFInt32(273), SFInt32(296), SFInt32(280), SFInt32(-1), SFInt32(308), SFInt32(310), SFInt32(314), SFInt32(-1), SFInt32(308), SFInt32(314), SFInt32(312), SFInt32(-1), SFInt32(308), SFInt32(312), SFInt32(311), SFInt32(-1), SFInt32(311), SFInt32(312), SFInt32(315), SFInt32(-1), SFInt32(312), SFInt32(316), SFInt32(315), SFInt32(-1), SFInt32(315), SFInt32(316), SFInt32(319), SFInt32(-1), SFInt32(309), SFInt32(311), SFInt32(315), SFInt32(-1), SFInt32(309), SFInt32(315), SFInt32(313), SFInt32(-1), SFInt32(309), SFInt32(313), SFInt32(314), SFInt32(-1), SFInt32(309), SFInt32(314), SFInt32(310), SFInt32(-1), SFInt32(315), SFInt32(319), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(315), SFInt32(317), SFInt32(-1), SFInt32(313), SFInt32(317), SFInt32(314), SFInt32(-1), SFInt32(314), SFInt32(317), SFInt32(318), SFInt32(-1), SFInt32(312), SFInt32(314), SFInt32(318), SFInt32(-1), SFInt32(316), SFInt32(312), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(316), SFInt32(318), SFInt32(-1), SFInt32(320), SFInt32(318), SFInt32(317), SFInt32(-1), SFInt32(320), SFInt32(317), SFInt32(319), SFInt32(-1), SFInt32(320), SFInt32(319), SFInt32(316), SFInt32(-1), SFInt32(272), SFInt32(280), SFInt32(297), SFInt32(-1), SFInt32(272), SFInt32(297), SFInt32(295), SFInt32(-1), SFInt32(272), SFInt32(295), SFInt32(298), SFInt32(-1), SFInt32(272), SFInt32(298), SFInt32(279), SFInt32(-1), SFInt32(279), SFInt32(298), SFInt32(296), SFInt32(-1), SFInt32(273), SFInt32(279), SFInt32(296), SFInt32(-1), SFInt32(280), SFInt32(296), SFInt32(297), SFInt32(-1), SFInt32(295), SFInt32(299), SFInt32(298), SFInt32(-1), SFInt32(298), SFInt32(299), SFInt32(302), SFInt32(-1), SFInt32(298), SFInt32(302), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(298), SFInt32(300), SFInt32(-1), SFInt32(296), SFInt32(300), SFInt32(297), SFInt32(-1), SFInt32(297), SFInt32(300), SFInt32(301), SFInt32(-1), SFInt32(295), SFInt32(297), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(295), SFInt32(301), SFInt32(-1), SFInt32(299), SFInt32(303), SFInt32(302), SFInt32(-1), SFInt32(302), SFInt32(303), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(302), SFInt32(306), SFInt32(-1), SFInt32(300), SFInt32(306), SFInt32(304), SFInt32(-1), SFInt32(300), SFInt32(304), SFInt32(301), SFInt32(-1), SFInt32(301), SFInt32(304), SFInt32(305), SFInt32(-1), SFInt32(301), SFInt32(305), SFInt32(299), SFInt32(-1), SFInt32(299), SFInt32(305), SFInt32(303), SFInt32(-1), SFInt32(307), SFInt32(303), SFInt32(305), SFInt32(-1), SFInt32(307), SFInt32(305), SFInt32(304), SFInt32(-1), SFInt32(307), SFInt32(304), SFInt32(306), SFInt32(-1), SFInt32(307), SFInt32(306), SFInt32(303), SFInt32(-1), SFInt32(269), SFInt32(272), SFInt32(279), SFInt32(-1), SFInt32(269), SFInt32(279), SFInt32(284), SFInt32(-1), SFInt32(269), SFInt32(284), SFInt32(282), SFInt32(-1), SFInt32(269), SFInt32(282), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(269), SFInt32(285), SFInt32(-1), SFInt32(271), SFInt32(285), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(271), SFInt32(283), SFInt32(-1), SFInt32(270), SFInt32(283), SFInt32(279), SFInt32(-1), SFInt32(270), SFInt32(279), SFInt32(273), SFInt32(-1), SFInt32(279), SFInt32(283), SFInt32(284), SFInt32(-1), SFInt32(282), SFInt32(286), SFInt32(285), SFInt32(-1), SFInt32(285), SFInt32(286), SFInt32(289), SFInt32(-1), SFInt32(285), SFInt32(289), SFInt32(287), SFInt32(-1), SFInt32(285), SFInt32(287), SFInt32(283), SFInt32(-1), SFInt32(283), SFInt32(287), SFInt32(284), SFInt32(-1), SFInt32(284), SFInt32(287), SFInt32(288), SFInt32(-1), SFInt32(284), SFInt32(288), SFInt32(286), SFInt32(-1), SFInt32(286), SFInt32(282), SFInt32(284), SFInt32(-1), SFInt32(286), SFInt32(290), SFInt32(289), SFInt32(-1), SFInt32(289), SFInt32(290), SFInt32(293), SFInt32(-1), SFInt32(289), SFInt32(293), SFInt32(291), SFInt32(-1), SFInt32(289), SFInt32(291), SFInt32(287), SFInt32(-1), SFInt32(287), SFInt32(291), SFInt32(288), SFInt32(-1), SFInt32(288), SFInt32(291), SFInt32(292), SFInt32(-1), SFInt32(288), SFInt32(292), SFInt32(290), SFInt32(-1), SFInt32(286), SFInt32(288), SFInt32(290), SFInt32(-1), SFInt32(294), SFInt32(290), SFInt32(292), SFInt32(-1), SFInt32(294), SFInt32(292), SFInt32(291), SFInt32(-1), SFInt32(294), SFInt32(291), SFInt32(293), SFInt32(-1), SFInt32(294), SFInt32(293), SFInt32(290), SFInt32(-1), SFInt32(97), SFInt32(334), SFInt32(336), SFInt32(-1), SFInt32(97), SFInt32(336), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(336), SFInt32(96), SFInt32(-1), SFInt32(336), SFInt32(335), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(335), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(335), SFInt32(337), SFInt32(-1), SFInt32(95), SFInt32(337), SFInt32(334), SFInt32(-1), SFInt32(95), SFInt32(334), SFInt32(97), SFInt32(-1), SFInt32(334), SFInt32(341), SFInt32(336), SFInt32(-1), SFInt32(336), SFInt32(341), SFInt32(338), SFInt32(-1), SFInt32(336), SFInt32(338), SFInt32(335), SFInt32(-1), SFInt32(335), SFInt32(338), SFInt32(340), SFInt32(-1), SFInt32(335), SFInt32(340), SFInt32(337), SFInt32(-1), SFInt32(337), SFInt32(340), SFInt32(339), SFInt32(-1), SFInt32(337), SFInt32(339), SFInt32(334), SFInt32(-1), SFInt32(334), SFInt32(339), SFInt32(341), SFInt32(-1), SFInt32(341), SFInt32(345), SFInt32(342), SFInt32(-1), SFInt32(341), SFInt32(342), SFInt32(338), SFInt32(-1), SFInt32(338), SFInt32(342), SFInt32(340), SFInt32(-1), SFInt32(340), SFInt32(342), SFInt32(344), SFInt32(-1), SFInt32(340), SFInt32(344), SFInt32(339), SFInt32(-1), SFInt32(339), SFInt32(344), SFInt32(343), SFInt32(-1), SFInt32(339), SFInt32(343), SFInt32(345), SFInt32(-1), SFInt32(339), SFInt32(345), SFInt32(341), SFInt32(-1), SFInt32(345), SFInt32(349), SFInt32(342), SFInt32(-1), SFInt32(342), SFInt32(349), SFInt32(351), SFInt32(-1), SFInt32(342), SFInt32(351), SFInt32(346), SFInt32(-1), SFInt32(342), SFInt32(346), SFInt32(344), SFInt32(-1), SFInt32(71), SFInt32(346), SFInt32(348), SFInt32(-1), SFInt32(71), SFInt32(344), SFInt32(346), SFInt32(-1), SFInt32(71), SFInt32(348), SFInt32(347), SFInt32(-1), SFInt32(71), SFInt32(347), SFInt32(344), SFInt32(-1), SFInt32(344), SFInt32(347), SFInt32(343), SFInt32(-1), SFInt32(343), SFInt32(347), SFInt32(352), SFInt32(-1), SFInt32(343), SFInt32(352), SFInt32(349), SFInt32(-1), SFInt32(343), SFInt32(349), SFInt32(345), SFInt32(-1), SFInt32(349), SFInt32(352), SFInt32(356), SFInt32(-1), SFInt32(349), SFInt32(356), SFInt32(353), SFInt32(-1), SFInt32(349), SFInt32(353), SFInt32(355), SFInt32(-1), SFInt32(349), SFInt32(355), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(356), SFInt32(352), SFInt32(-1), SFInt32(354), SFInt32(352), SFInt32(350), SFInt32(-1), SFInt32(354), SFInt32(350), SFInt32(351), SFInt32(-1), SFInt32(354), SFInt32(351), SFInt32(355), SFInt32(-1), SFInt32(353), SFInt32(356), SFInt32(357), SFInt32(-1), SFInt32(353), SFInt32(357), SFInt32(358), SFInt32(-1), SFInt32(353), SFInt32(358), SFInt32(359), SFInt32(-1), SFInt32(353), SFInt32(359), SFInt32(360), SFInt32(-1), SFInt32(353), SFInt32(360), SFInt32(361), SFInt32(-1), SFInt32(353), SFInt32(361), SFInt32(355), SFInt32(-1), SFInt32(354), SFInt32(357), SFInt32(356), SFInt32(-1), SFInt32(350), SFInt32(346), SFInt32(351), SFInt32(-1), SFInt32(348), SFInt32(346), SFInt32(347), SFInt32(-1), SFInt32(350), SFInt32(347), SFInt32(346), SFInt32(-1), SFInt32(350), SFInt32(352), SFInt32(347), SFInt32(-1), SFInt32(354), SFInt32(358), SFInt32(357), SFInt32(-1), SFInt32(354), SFInt32(359), SFInt32(358), SFInt32(-1), SFInt32(354), SFInt32(360), SFInt32(359), SFInt32(-1), SFInt32(354), SFInt32(361), SFInt32(360), SFInt32(-1), SFInt32(354), SFInt32(355), SFInt32(361), SFInt32(-1), SFInt32(101), SFInt32(362), SFInt32(365), SFInt32(-1), SFInt32(101), SFInt32(365), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(365), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(365), SFInt32(363), SFInt32(-1), SFInt32(100), SFInt32(363), SFInt32(98), SFInt32(-1), SFInt32(98), SFInt32(363), SFInt32(364), SFInt32(-1), SFInt32(98), SFInt32(364), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(364), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(369), SFInt32(367), SFInt32(-1), SFInt32(362), SFInt32(367), SFInt32(365), SFInt32(-1), SFInt32(365), SFInt32(367), SFInt32(363), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(367), SFInt32(368), SFInt32(-1), SFInt32(363), SFInt32(368), SFInt32(366), SFInt32(-1), SFInt32(363), SFInt32(366), SFInt32(364), SFInt32(-1), SFInt32(364), SFInt32(366), SFInt32(362), SFInt32(-1), SFInt32(362), SFInt32(366), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(373), SFInt32(371), SFInt32(-1), SFInt32(369), SFInt32(371), SFInt32(367), SFInt32(-1), SFInt32(367), SFInt32(371), SFInt32(368), SFInt32(-1), SFInt32(368), SFInt32(371), SFInt32(372), SFInt32(-1), SFInt32(368), SFInt32(372), SFInt32(366), SFInt32(-1), SFInt32(366), SFInt32(372), SFInt32(370), SFInt32(-1), SFInt32(366), SFInt32(370), SFInt32(369), SFInt32(-1), SFInt32(369), SFInt32(370), SFInt32(373), SFInt32(-1), SFInt32(373), SFInt32(377), SFInt32(380), SFInt32(-1), SFInt32(373), SFInt32(380), SFInt32(375), SFInt32(-1), SFInt32(373), SFInt32(375), SFInt32(371), SFInt32(-1), SFInt32(371), SFInt32(375), SFInt32(372), SFInt32(-1), SFInt32(372), SFInt32(375), SFInt32(376), SFInt32(-1), SFInt32(372), SFInt32(376), SFInt32(374), SFInt32(-1), SFInt32(372), SFInt32(374), SFInt32(370), SFInt32(-1), SFInt32(370), SFInt32(374), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(370), SFInt32(379), SFInt32(-1), SFInt32(373), SFInt32(379), SFInt32(377), SFInt32(-1), SFInt32(377), SFInt32(379), SFInt32(383), SFInt32(-1), SFInt32(377), SFInt32(383), SFInt32(381), SFInt32(-1), SFInt32(377), SFInt32(381), SFInt32(384), SFInt32(-1), SFInt32(377), SFInt32(384), SFInt32(380), SFInt32(-1), SFInt32(381), SFInt32(383), SFInt32(389), SFInt32(-1), SFInt32(381), SFInt32(389), SFInt32(388), SFInt32(-1), SFInt32(381), SFInt32(388), SFInt32(387), SFInt32(-1), SFInt32(381), SFInt32(387), SFInt32(386), SFInt32(-1), SFInt32(381), SFInt32(386), SFInt32(385), SFInt32(-1), SFInt32(381), SFInt32(385), SFInt32(384), SFInt32(-1), SFInt32(376), SFInt32(375), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(379), SFInt32(374), SFInt32(-1), SFInt32(378), SFInt32(374), SFInt32(375), SFInt32(-1), SFInt32(378), SFInt32(375), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(386), SFInt32(387), SFInt32(-1), SFInt32(382), SFInt32(387), SFInt32(388), SFInt32(-1), SFInt32(382), SFInt32(388), SFInt32(389), SFInt32(-1), SFInt32(382), SFInt32(389), SFInt32(383), SFInt32(-1), SFInt32(382), SFInt32(383), SFInt32(379), SFInt32(-1), SFInt32(382), SFInt32(379), SFInt32(378), SFInt32(-1), SFInt32(382), SFInt32(378), SFInt32(380), SFInt32(-1), SFInt32(382), SFInt32(380), SFInt32(384), SFInt32(-1), SFInt32(382), SFInt32(384), SFInt32(385), SFInt32(-1), SFInt32(382), SFInt32(385), SFInt32(386), SFInt32(-1)]),
                      creaseAngle_ : 3.1,
                      coord_ : 
                        Coordinate(
                          DEF_ : SFString('TheSkinCoord'),
                          point_ : MFVec3f([SFVec3f([0,1.77,0]),SFVec3f([0,1.665,0.09]),SFVec3f([-0.033,1.62,0.087]),SFVec3f([0.033,1.62,0.087]),SFVec3f([0,1.55,0.097]),SFVec3f([-0.077,1.64,-0.01]),SFVec3f([-0.0527,1.58,0.015]),SFVec3f([0.077,1.64,-0.01]),SFVec3f([0.0527,1.58,0.015]),SFVec3f([0,1.625,-0.0925]),SFVec3f([-0.03,1.46,0.035]),SFVec3f([0,1.44,0.03]),SFVec3f([0.03,1.46,0.035]),SFVec3f([-0.1135,1.318,0.095]),SFVec3f([0.1135,1.318,0.095]),SFVec3f([0,1.25,0.113]),SFVec3f([-0.087,1.19,0.09]),SFVec3f([-0.0935,1.03,0.075]),SFVec3f([0.087,1.19,0.09]),SFVec3f([0.0935,1.03,0.075]),SFVec3f([-0.1425,1.065,0.0033]),SFVec3f([-0.15,0.9,-0.01]),SFVec3f([0.1425,1.065,0.0033]),SFVec3f([0.15,0.9,-0.01]),SFVec3f([0,1.53,-0.084]),SFVec3f([0.0049,1.1908,-0.1113]),SFVec3f([-0.0773,1.019,-0.12]),SFVec3f([0.0773,1.019,-0.12]),SFVec3f([0.005,1.0915,-0.1091]),SFVec3f([-0.178,1.4825,-0.0625]),SFVec3f([-0.17,1.38,0.007]),SFVec3f([-0.1884,0.8676,-0.036]),SFVec3f([-0.16,1.38,-0.127]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.23,1.133,-0.055]),SFVec3f([-0.1977,0.8169,-0.0177]),SFVec3f([-0.1941,0.6772,-0.0423]),SFVec3f([-0.2117,0.8562,-0.0584]),SFVec3f([-0.1929,0.789,-0.1064]),SFVec3f([0.175,1.4825,-0.06]),SFVec3f([0.17,1.38,0.007]),SFVec3f([0.1901,0.8645,-0.0415]),SFVec3f([0.16,1.38,-0.125]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.23,1.133,-0.055]),SFVec3f([0.2009,0.8139,-0.0237]),SFVec3f([0.2056,0.6743,-0.0482]),SFVec3f([0.2142,0.8529,-0.0648]),SFVec3f([0.1929,0.786,-0.1122]),SFVec3f([-0.1,0.4913,-0.03]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.165,0.01,0.12]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.09,0.056,0.0125]),SFVec3f([-0.115,0.02,0.122]),SFVec3f([-0.115,0.04,-0.055]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([0.0993,0.4881,-0.0309]),SFVec3f([0.17,0.466,0]),SFVec3f([0.05,0.4867,0]),SFVec3f([0.165,0.01,0.12]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.09,0.056,0.0125]),SFVec3f([0.115,0.02,0.122]),SFVec3f([0.115,0.04,-0.055]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0,0.875,0]),SFVec3f([-0.0646,1.5149,-0.038]),SFVec3f([0.0646,1.5149,-0.038]),SFVec3f([0,1.07225,0.09]),SFVec3f([-0.11,1.427,-0.1375]),SFVec3f([-0.235,1.42,-0.0625]),SFVec3f([0.11,1.427,-0.1375]),SFVec3f([0.235,1.42,-0.0625]),SFVec3f([0,1.41,-0.145]),SFVec3f([0,0.925,0.08]),SFVec3f([-0.087,1.19,-0.09]),SFVec3f([0.087,1.19,-0.09]),SFVec3f([0.172,1.32,-0.03]),SFVec3f([-0.172,1.32,-0.03]),SFVec3f([0.15,1.23,-0.015]),SFVec3f([-0.15,1.23,-0.015]),SFVec3f([0.079,0.92,-0.14]),SFVec3f([0.1,0.9,0.077]),SFVec3f([-0.079,0.92,-0.14]),SFVec3f([-0.1,0.9,0.075]),SFVec3f([0,0.87,0]),SFVec3f([0.171,0.65,0]),SFVec3f([0.02,0.65,0]),SFVec3f([0.1,0.65,-0.08]),SFVec3f([0.1,0.65,0.07]),SFVec3f([-0.171,0.65,0]),SFVec3f([-0.02,0.65,0]),SFVec3f([-0.1,0.65,-0.08]),SFVec3f([-0.1,0.65,0.07]),SFVec3f([0.25,1.27,-0.04]),SFVec3f([0.17,1.27,-0.04]),SFVec3f([0.2,1.27,-0.09]),SFVec3f([0.2,1.27,0.02]),SFVec3f([0.244,1.1388,-0.04]),SFVec3f([0.165,1.1388,-0.04]),SFVec3f([0.2,1.1388,-0.08]),SFVec3f([0.2,1.1388,-0.013]),SFVec3f([0.225,1,-0.01]),SFVec3f([0.225,1,-0.07]),SFVec3f([0.185,1,-0.01]),SFVec3f([0.185,1,-0.07]),SFVec3f([0.2,1.1388,-0.04]),SFVec3f([0.225,0.92,-0.04]),SFVec3f([0.175,0.92,-0.04]),SFVec3f([0.2,0.92,-0.065]),SFVec3f([0.2,0.92,-0.015]),SFVec3f([0.225,0.89,-0.04]),SFVec3f([0.175,0.89,-0.04]),SFVec3f([0.2,0.89,-0.065]),SFVec3f([0.2,0.89,-0.015]),SFVec3f([0.218,0.86,-0.04]),SFVec3f([0.184,0.86,-0.04]),SFVec3f([0.2,0.87,-0.07]),SFVec3f([0.2,0.87,0]),SFVec3f([0.21,0.85,0]),SFVec3f([0.1854,0.85,0]),SFVec3f([0.212,0.84,-0.015]),SFVec3f([0.183,0.84,-0.015]),SFVec3f([0.213,0.835,-0.04]),SFVec3f([0.19,0.835,-0.04]),SFVec3f([0.211,0.835,-0.065]),SFVec3f([0.192,0.835,-0.065]),SFVec3f([0.208,0.84,-0.085]),SFVec3f([0.19,0.84,-0.085]),SFVec3f([0.2,0.84,-0.095]),SFVec3f([0.215,0.82,0]),SFVec3f([0.193,0.815,0.005]),SFVec3f([0.198,0.8,0.012]),SFVec3f([0.21,0.82,0.03]),SFVec3f([0.19,0.82,0.03]),SFVec3f([0.2,0.835,0.039]),SFVec3f([0.212,0.8,0.05]),SFVec3f([0.188,0.8,0.05]),SFVec3f([0.2,0.807,0.057]),SFVec3f([0.2,0.793,0.035]),SFVec3f([0.2,0.774,0.076]),SFVec3f([0.212,0.78,0.07]),SFVec3f([0.188,0.78,0.07]),SFVec3f([0.2,0.785,0.075]),SFVec3f([0.2,0.77,0.062]),SFVec3f([0.215,0.793,-0.015]),SFVec3f([0.187,0.793,-0.015]),SFVec3f([0.2,0.793,-0.005]),SFVec3f([0.215,0.788,-0.04]),SFVec3f([0.187,0.788,-0.04]),SFVec3f([0.215,0.793,-0.065]),SFVec3f([0.187,0.793,-0.065]),SFVec3f([0.21,0.79,-0.085]),SFVec3f([0.19,0.79,-0.085]),SFVec3f([0.2,0.79,-0.095]),SFVec3f([0.19,0.77,-0.0275]),SFVec3f([0.19,0.77,-0.0525]),SFVec3f([0.19,0.78,-0.0775]),SFVec3f([0.212,0.745,-0.015]),SFVec3f([0.188,0.745,-0.02]),SFVec3f([0.2,0.745,-0.0255]),SFVec3f([0.2,0.745,-0.0045]),SFVec3f([0.211,0.72,-0.015]),SFVec3f([0.189,0.72,-0.015]),SFVec3f([0.2,0.72,-0.0252]),SFVec3f([0.2,0.72,-0.0048]),SFVec3f([0.21,0.695,-0.015]),SFVec3f([0.19,0.695,-0.015]),SFVec3f([0.2,0.695,-0.025]),SFVec3f([0.2,0.695,-0.005]),SFVec3f([0.2,0.685,-0.015]),SFVec3f([0.215,0.74,-0.04]),SFVec3f([0.185,0.74,-0.04]),SFVec3f([0.2,0.74,-0.055]),SFVec3f([0.2,0.74,-0.025]),SFVec3f([0.21,0.7142,-0.04]),SFVec3f([0.19,0.7142,-0.04]),SFVec3f([0.2,0.7142,-0.053]),SFVec3f([0.2,0.7142,-0.027]),SFVec3f([0.21,0.68,-0.04]),SFVec3f([0.19,0.68,-0.04]),SFVec3f([0.2,0.68,-0.05]),SFVec3f([0.2,0.68,-0.03]),SFVec3f([0.2,0.67,-0.04]),SFVec3f([0.212,0.74,-0.065]),SFVec3f([0.188,0.74,-0.065]),SFVec3f([0.2,0.74,-0.0756]),SFVec3f([0.2,0.74,-0.0542]),SFVec3f([0.21,0.7177,-0.065]),SFVec3f([0.19,0.7177,-0.065]),SFVec3f([0.2,0.7177,-0.0751]),SFVec3f([0.2,0.7177,-0.0549]),SFVec3f([0.21,0.695,-0.065]),SFVec3f([0.19,0.695,-0.065]),SFVec3f([0.2,0.695,-0.075]),SFVec3f([0.2,0.695,-0.055]),SFVec3f([0.2,0.685,-0.065]),SFVec3f([0.211,0.755,-0.085]),SFVec3f([0.189,0.755,-0.085]),SFVec3f([0.2,0.755,-0.0952]),SFVec3f([0.2,0.755,-0.0748]),SFVec3f([0.21,0.735,-0.085]),SFVec3f([0.19,0.735,-0.085]),SFVec3f([0.2,0.735,-0.0951]),SFVec3f([0.2,0.735,-0.0749]),SFVec3f([0.21,0.72,-0.085]),SFVec3f([0.19,0.72,-0.085]),SFVec3f([0.2,0.72,-0.095]),SFVec3f([0.2,0.72,-0.075]),SFVec3f([0.2,0.71,-0.085]),SFVec3f([-0.23,1.23,-0.04]),SFVec3f([-0.16,1.23,-0.04]),SFVec3f([-0.2,1.235,-0.105]),SFVec3f([-0.2,1.235,0.02]),SFVec3f([-0.244,1.1388,-0.04]),SFVec3f([-0.165,1.1388,-0.04]),SFVec3f([-0.2,1.1388,-0.08]),SFVec3f([-0.2,1.1388,0.013]),SFVec3f([-0.225,1,-0.01]),SFVec3f([-0.225,1,-0.07]),SFVec3f([-0.185,1,-0.01]),SFVec3f([-0.185,1,-0.07]),SFVec3f([-0.2,1.1388,-0.04]),SFVec3f([-0.225,0.92,-0.04]),SFVec3f([-0.175,0.92,-0.04]),SFVec3f([-0.2,0.92,-0.065]),SFVec3f([-0.2,0.92,-0.015]),SFVec3f([-0.225,0.89,-0.04]),SFVec3f([-0.175,0.89,-0.04]),SFVec3f([-0.2,0.89,-0.065]),SFVec3f([-0.2,0.89,-0.015]),SFVec3f([-0.218,0.86,-0.04]),SFVec3f([-0.184,0.86,-0.04]),SFVec3f([-0.2,0.87,-0.07]),SFVec3f([-0.2,0.87,0]),SFVec3f([-0.21,0.85,0]),SFVec3f([-0.1854,0.85,0]),SFVec3f([-0.212,0.84,-0.015]),SFVec3f([-0.183,0.84,-0.015]),SFVec3f([-0.213,0.835,-0.04]),SFVec3f([-0.19,0.835,-0.04]),SFVec3f([-0.211,0.835,-0.065]),SFVec3f([-0.192,0.835,-0.065]),SFVec3f([-0.208,0.84,-0.085]),SFVec3f([-0.19,0.84,-0.085]),SFVec3f([-0.2,0.84,-0.095]),SFVec3f([-0.215,0.82,0]),SFVec3f([-0.193,0.815,0.005]),SFVec3f([-0.198,0.8,0.012]),SFVec3f([-0.21,0.82,0.03]),SFVec3f([-0.19,0.82,0.03]),SFVec3f([-0.2,0.835,0.039]),SFVec3f([-0.212,0.8,0.05]),SFVec3f([-0.188,0.8,0.05]),SFVec3f([-0.2,0.807,0.057]),SFVec3f([-0.2,0.793,0.035]),SFVec3f([-0.2,0.774,0.076]),SFVec3f([-0.212,0.78,0.07]),SFVec3f([-0.188,0.78,0.07]),SFVec3f([-0.2,0.785,0.075]),SFVec3f([-0.2,0.77,0.062]),SFVec3f([-0.215,0.793,-0.015]),SFVec3f([-0.187,0.793,-0.015]),SFVec3f([-0.2,0.793,-0.005]),SFVec3f([-0.215,0.788,-0.04]),SFVec3f([-0.187,0.788,-0.04]),SFVec3f([-0.215,0.793,-0.065]),SFVec3f([-0.187,0.793,-0.065]),SFVec3f([-0.21,0.79,-0.085]),SFVec3f([-0.19,0.79,-0.085]),SFVec3f([-0.2,0.79,-0.095]),SFVec3f([-0.19,0.77,-0.0275]),SFVec3f([-0.19,0.77,-0.0525]),SFVec3f([-0.19,0.78,-0.0775]),SFVec3f([-0.212,0.745,-0.015]),SFVec3f([-0.188,0.745,-0.02]),SFVec3f([-0.2,0.745,-0.0255]),SFVec3f([-0.2,0.745,-0.0045]),SFVec3f([-0.211,0.72,-0.015]),SFVec3f([-0.189,0.72,-0.015]),SFVec3f([-0.2,0.72,-0.0252]),SFVec3f([-0.2,0.72,-0.0048]),SFVec3f([-0.21,0.695,-0.015]),SFVec3f([-0.19,0.695,-0.015]),SFVec3f([-0.2,0.695,-0.025]),SFVec3f([-0.2,0.695,-0.005]),SFVec3f([-0.2,0.685,-0.015]),SFVec3f([-0.215,0.74,-0.04]),SFVec3f([-0.185,0.74,-0.04]),SFVec3f([-0.2,0.74,-0.055]),SFVec3f([-0.2,0.74,-0.025]),SFVec3f([-0.21,0.7142,-0.04]),SFVec3f([-0.19,0.7142,-0.04]),SFVec3f([-0.2,0.7142,-0.053]),SFVec3f([-0.2,0.7142,-0.027]),SFVec3f([-0.21,0.68,-0.04]),SFVec3f([-0.19,0.68,-0.04]),SFVec3f([-0.2,0.68,-0.05]),SFVec3f([-0.2,0.68,-0.03]),SFVec3f([-0.2,0.67,-0.04]),SFVec3f([-0.212,0.74,-0.065]),SFVec3f([-0.188,0.74,-0.065]),SFVec3f([-0.2,0.74,-0.0756]),SFVec3f([-0.2,0.74,-0.0542]),SFVec3f([-0.21,0.7177,-0.065]),SFVec3f([-0.19,0.7177,-0.065]),SFVec3f([-0.2,0.7177,-0.0751]),SFVec3f([-0.2,0.7177,-0.0549]),SFVec3f([-0.21,0.695,-0.065]),SFVec3f([-0.19,0.695,-0.065]),SFVec3f([-0.2,0.695,-0.075]),SFVec3f([-0.2,0.695,-0.055]),SFVec3f([-0.2,0.685,-0.065]),SFVec3f([-0.211,0.755,-0.085]),SFVec3f([-0.189,0.755,-0.085]),SFVec3f([-0.2,0.755,-0.0952]),SFVec3f([-0.2,0.755,-0.0748]),SFVec3f([-0.21,0.735,-0.085]),SFVec3f([-0.19,0.735,-0.085]),SFVec3f([-0.2,0.735,-0.0951]),SFVec3f([-0.2,0.735,-0.0749]),SFVec3f([-0.21,0.72,-0.085]),SFVec3f([-0.19,0.72,-0.085]),SFVec3f([-0.2,0.72,-0.095]),SFVec3f([-0.2,0.72,-0.075]),SFVec3f([-0.2,0.71,-0.085]),SFVec3f([0.115,0.466,0.06]),SFVec3f([0.115,0.466,-0.055]),SFVec3f([0.15,0.466,0]),SFVec3f([0.05,0.466,0]),SFVec3f([0.17,0.3,0]),SFVec3f([0.06,0.3,0]),SFVec3f([0.1,0.3,-0.05]),SFVec3f([0.1,0.3,0.05]),SFVec3f([0.15,0.07,0]),SFVec3f([0.085,0.086,0.0125]),SFVec3f([0.115,0.069,-0.045]),SFVec3f([0.117,0.0975,0.0615]),SFVec3f([0.1375,0.006,-0.03]),SFVec3f([0.095,0.006,-0.03]),SFVec3f([0.115,0.015,-0.045]),SFVec3f([0.115,0.06,0.1]),SFVec3f([0.115,0,0.07]),SFVec3f([0.165,0,0.07]),SFVec3f([0.095,0,0.07]),SFVec3f([0.115,0.04,0.13]),SFVec3f([0.125,0,0.12]),SFVec3f([0.165,0,0.12]),SFVec3f([0.087,0,0.122]),SFVec3f([0.09,0.012,0.188]),SFVec3f([0.11,0.011,0.19]),SFVec3f([0.128,0.011,0.185]),SFVec3f([0.142,0.011,0.178]),SFVec3f([0.154,0.01,0.168]),SFVec3f([-0.115,0.466,0.06]),SFVec3f([-0.115,0.466,-0.055]),SFVec3f([-0.17,0.466,0]),SFVec3f([-0.05,0.466,0]),SFVec3f([-0.17,0.3,0]),SFVec3f([-0.06,0.3,0]),SFVec3f([-0.1,0.3,-0.05]),SFVec3f([-0.1,0.3,0.05]),SFVec3f([-0.15,0.07,0]),SFVec3f([-0.085,0.086,0.0125]),SFVec3f([-0.115,0.069,-0.045]),SFVec3f([-0.117,0.0975,0.0615]),SFVec3f([-0.1375,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.095,0.006,-0.03]),SFVec3f([-0.115,0.06,0.1]),SFVec3f([-0.115,0,0.07]),SFVec3f([-0.165,0,0.07]),SFVec3f([-0.095,0,0.07]),SFVec3f([-0.115,0.04,0.13]),SFVec3f([-0.125,0,0.12]),SFVec3f([-0.165,0,0.12]),SFVec3f([-0.087,0,0.122]),SFVec3f([-0.09,0.012,0.188]),SFVec3f([-0.11,0.011,0.19]),SFVec3f([-0.128,0.011,0.185]),SFVec3f([-0.142,0.011,0.178]),SFVec3f([-0.154,0.01,0.168])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(0), SFColor(1), SFColor(1), SFColor(1), SFColor(1)]))),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('SkinAppearance'),
                      texture_ : 
                        ImageTexture(
                          DEF_ : SFString('zBlueSpiralBkg2'),
                          description_ : SFString('Blue Spiral Pattern'),
                          url_ : MFString([SFString("./data/zBlueSpiralBkg2.gif"), SFString("zBlueSpiralBkg2.gif"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")])),
                      material_ : 
                        Material(
                          DEF_ : SFString('SkinMaterial'),
                          ambientIntensity_ : 0.6,
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                          shininess_ : 0.6,
                          transparency_ : 0.2))),
              skinCoord_ : 
                Coordinate(
                  USE_ : SFString('TheSkinCoord')),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  children_ : [
                    HAnimSegment(
                      name_ : SFString('sacrum'),
                      DEF_ : SFString('hanim_sacrum'),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                          children_ : [
                            Transform(
                              /*Empty Transform*/
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape')))]),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016])])),
                              /*from humanoid_root to sacroiliac vertices 2*/
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                        HAnimSite(
                          name_ : SFString('buttocks_standing_wall_contact_point'),
                          DEF_ : SFString('hanim_buttocks_standing_wall_contact_point'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite buttocks_standing_wall_contact_point')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('crotch'),
                          DEF_ : SFString('hanim_crotch'),
                          translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite crotch')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('l_asis'),
                          DEF_ : SFString('hanim_l_asis'),
                          translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_asis')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('l_iliocristale'),
                          DEF_ : SFString('hanim_l_iliocristale'),
                          translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_iliocristale')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('l_psis'),
                          DEF_ : SFString('hanim_l_psis'),
                          translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_psis')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('l_trochanterion'),
                          DEF_ : SFString('hanim_l_trochanterion'),
                          translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite l_trochanterion')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('r_asis'),
                          DEF_ : SFString('hanim_r_asis'),
                          translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_asis')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('r_iliocristale'),
                          DEF_ : SFString('hanim_r_iliocristale'),
                          translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_iliocristale')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('r_psis'),
                          DEF_ : SFString('hanim_r_psis'),
                          translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_psis')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('r_trochanterion'),
                          DEF_ : SFString('hanim_r_trochanterion'),
                          translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite r_trochanterion')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0.0028,1.0568,-0.0776])])),
                              /*from humanoid_root to vl5 vertices 2*/
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                        HAnimSite(
                          name_ : SFString('navel'),
                          DEF_ : SFString('hanim_navel'),
                          translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite navel')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('waist_preferred_anterior'),
                          DEF_ : SFString('hanim_waist_preferred_anterior'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite waist_preferred_anterior')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))]),

                        HAnimSite(
                          name_ : SFString('waist_preferred_posterior'),
                          DEF_ : SFString('hanim_waist_preferred_posterior'),
                          translation_ : SFVec3f([SFDouble(0.29), SFDouble(1.0915), SFDouble(-0.1091)]),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimSite waist_preferred_posterior')),

                            Shape(
                              USE_ : SFString('HAnimSiteShape'))])]),

                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('pelvis'),
                          DEF_ : SFString('hanim_pelvis'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              children_ : [
                                Transform(
                                  /*Empty Transform*/
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape')))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001])])),
                                  /*from sacroiliac to l_hip vertices 2*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                            HAnimSite(
                              name_ : SFString('l_femoral_lateral_epicondyles'),
                              DEF_ : SFString('hanim_l_femoral_lateral_epicondyles'),
                              translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_femoral_lateral_epicondyles')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_femoral_medial_epicondyles'),
                              DEF_ : SFString('hanim_l_femoral_medial_epicondyles'),
                              translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_femoral_medial_epicondyles')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_knee_crease'),
                              DEF_ : SFString('hanim_l_knee_crease'),
                              translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_knee_crease')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_suprapatella'),
                              DEF_ : SFString('hanim_l_suprapatella'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_suprapatella')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.095,0.9171,0.0029])])),
                                  /*from sacroiliac to r_hip vertices 2*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                            HAnimSite(
                              name_ : SFString('r_femoral_lateral_epicondyles'),
                              DEF_ : SFString('hanim_r_femoral_lateral_epicondyles'),
                              translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_femoral_lateral_epicondyles')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('r_femoral_medial_epicondyles'),
                              DEF_ : SFString('hanim_r_femoral_medial_epicondyles'),
                              translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_femoral_medial_epicondyles')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('r_knee_crease'),
                              DEF_ : SFString('hanim_r_knee_crease'),
                              translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_knee_crease')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('r_suprapatella'),
                              DEF_ : SFString('hanim_r_suprapatella'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_suprapatella')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_thigh'),
                              DEF_ : SFString('hanim_l_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Transform(
                                      /*Empty Transform*/
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])),
                                      /*from l_hip to l_knee vertices 2*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                HAnimSite(
                                  name_ : SFString('l_lateral_malleolus'),
                                  DEF_ : SFString('hanim_l_lateral_malleolus'),
                                  translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_lateral_malleolus')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('l_medial_malleolus'),
                                  DEF_ : SFString('hanim_l_medial_malleolus'),
                                  translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_medial_malleolus')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('l_tibiale'),
                                  DEF_ : SFString('hanim_l_tibiale'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_tibiale')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_calf'),
                                  DEF_ : SFString('hanim_l_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Transform(
                                          /*Empty Transform*/
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])])),
                                          /*from l_knee to l_talocrural vertices 2*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                    HAnimSite(
                                      name_ : SFString('l_calcaneus_posterior'),
                                      DEF_ : SFString('hanim_l_calcaneus_posterior'),
                                      translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_calcaneus_posterior')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      name_ : SFString('l_sphyrion'),
                                      DEF_ : SFString('hanim_l_sphyrion'),
                                      translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_sphyrion')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_talus'),
                                      DEF_ : SFString('hanim_l_talus'),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(0.15), SFDouble(0.15), SFDouble(0.15)]),
                                          translation_ : SFVec3f([SFDouble(0.08), SFDouble(0.06), SFDouble(-0.025)]),
                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                                          /*Transform left foot*/
                                          children_ : [
                                            Transform(
                                              /*Empty Transform left foot*/
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.0781,0.0283,-0.097])])),
                                              /*from l_talocrural to l_talocalcaneonavicular vertices 2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.0889,0.0494,-0.1278])])),
                                              /*from l_talocrural to l_calcaneocuboid vertices 2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                    HAnimJoint(
                                      name_ : SFString('l_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0.0781), SFDouble(0.0283), SFDouble(-0.097)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_navicular'),
                                          DEF_ : SFString('hanim_l_navicular'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0781), SFDouble(0.0283), SFDouble(-0.097)]),
                                              children_ : [
                                                Transform(
                                                  /*Empty Transform*/
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0781,0.0283,-0.097]),SFVec3f([0.0672,0.0235,-0.0835])])),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0781,0.0283,-0.097]),SFVec3f([0.0812,0.025,-0.0805])])),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0781,0.0283,-0.097]),SFVec3f([0.0928,0.0248,-0.0821])])),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0.0672), SFDouble(0.0235), SFDouble(-0.0835)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_1'),
                                              DEF_ : SFString('hanim_l_cuneiform_1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0672), SFDouble(0.0235), SFDouble(-0.0835)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0672,0.0235,-0.0835]),SFVec3f([0.0644,0.0147,-0.0577])])),
                                                      /*from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0.0644), SFDouble(0.0147), SFDouble(-0.0577)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsal_1'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0644), SFDouble(0.0147), SFDouble(-0.0577)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0644,0.0147,-0.0577]),SFVec3f([0.0619,0.0059,-0.0083])])),
                                                          /*from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_phalanx_1'),
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_1'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_phalanx_1')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0.0619), SFDouble(0.0059), SFDouble(-0.0083)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0619), SFDouble(0.0059), SFDouble(-0.0083)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0619,0.0059,-0.0083]),SFVec3f([0.0619,0.0059,-0.0083])])),
                                                              /*from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                        HAnimSite(
                                                          name_ : SFString('l_tarsal_distal_phalanx_1_tip'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_tarsal_distal_phalanx_1_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'))])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0.0812), SFDouble(0.025), SFDouble(-0.0805)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_2'),
                                              DEF_ : SFString('hanim_l_cuneiform_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0812), SFDouble(0.025), SFDouble(-0.0805)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0812,0.025,-0.0805]),SFVec3f([0.08,0.0175,-0.0608])])),
                                                      /*from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0.08), SFDouble(0.0175), SFDouble(-0.0608)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.08), SFDouble(0.0175), SFDouble(-0.0608)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.08,0.0175,-0.0608]),SFVec3f([0.0824,0.0064,-0.004])])),
                                                          /*from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0.0824), SFDouble(0.0064), SFDouble(-0.004)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0824), SFDouble(0.0064), SFDouble(-0.004)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0824,0.0064,-0.004]),SFVec3f([0.0841,0.0041,0.0121])])),
                                                              /*from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0041), SFDouble(0.0121)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0041), SFDouble(0.0121)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0841,0.0041,0.0121]),SFVec3f([0.0841,0.0013,0.0216])])),
                                                                  /*from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_2_tip'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip'),
                                                              translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_2_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0.0841), SFDouble(0.0013), SFDouble(0.0216)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0.0928), SFDouble(0.0248), SFDouble(-0.0821)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuneiform_3'),
                                              DEF_ : SFString('hanim_l_cuneiform_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0928), SFDouble(0.0248), SFDouble(-0.0821)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0928,0.0248,-0.0821]),SFVec3f([0.0944,0.0175,-0.0625])])),
                                                      /*from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0.0944), SFDouble(0.0175), SFDouble(-0.0625)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsal_3'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0944), SFDouble(0.0175), SFDouble(-0.0625)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0944,0.0175,-0.0625]),SFVec3f([0.0963,0.0065,-0.0065])])),
                                                          /*from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0.0963), SFDouble(0.0065), SFDouble(-0.0065)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0963), SFDouble(0.0065), SFDouble(-0.0065)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0963,0.0065,-0.0065]),SFVec3f([0.0987,0.0034,0.0086])])),
                                                              /*from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0.0987), SFDouble(0.0034), SFDouble(0.0086)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0987), SFDouble(0.0034), SFDouble(0.0086)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0987,0.0034,0.0086]),SFVec3f([0.1002,0.0013,0.0178])])),
                                                                  /*from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_3_tip'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_3_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0.1002), SFDouble(0.0013), SFDouble(0.0178)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('l_calcaneocuboid'),
                                      DEF_ : SFString('hanim_l_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0.0889), SFDouble(0.0494), SFDouble(-0.1278)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_calcaneus'),
                                          DEF_ : SFString('hanim_l_calcaneus'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0889), SFDouble(0.0494), SFDouble(-0.1278)]),
                                              children_ : [
                                                Transform(
                                                  /*Empty Transform*/
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0889,0.0494,-0.1278]),SFVec3f([0.1105,0.0267,-0.0998])])),
                                                  /*from l_calcaneocuboid to l_transversetarsal vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_transversetarsal'),
                                          DEF_ : SFString('hanim_l_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0.1105), SFDouble(0.0267), SFDouble(-0.0998)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_cuboid'),
                                              DEF_ : SFString('hanim_l_cuboid'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1105), SFDouble(0.0267), SFDouble(-0.0998)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1105,0.0267,-0.0998]),SFVec3f([0.1063,0.016,-0.0634])])),
                                                      /*from l_transversetarsal to l_tarsometatarsal_4 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1105,0.0267,-0.0998]),SFVec3f([0.1206,0.0124,-0.0671])])),
                                                      /*from l_transversetarsal to l_tarsometatarsal_5 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0.1063), SFDouble(0.016), SFDouble(-0.0634)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsal_4'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1063), SFDouble(0.016), SFDouble(-0.0634)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1063,0.016,-0.0634]),SFVec3f([0.1097,0.0058,-0.0107])])),
                                                          /*from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0.1097), SFDouble(0.0058), SFDouble(-0.0107)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.1097), SFDouble(0.0058), SFDouble(-0.0107)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.1097,0.0058,-0.0107]),SFVec3f([0.114,0.0037,0.0044])])),
                                                              /*from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0.114), SFDouble(0.0037), SFDouble(0.0044)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.114), SFDouble(0.0037), SFDouble(0.0044)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.114,0.0037,0.0044]),SFVec3f([0.1155,0.0008,0.0118])])),
                                                                  /*from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_4_tip'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_4_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0.1155), SFDouble(0.0008), SFDouble(0.0118)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0.1206), SFDouble(0.0124), SFDouble(-0.0671)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_metatarsal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsal_5'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1206), SFDouble(0.0124), SFDouble(-0.0671)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1206,0.0124,-0.0671]),SFVec3f([0.1239,0.0051,-0.0153])])),
                                                          /*from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_phalanx_5'),
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_5'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_phalanx_5')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0.1239), SFDouble(0.0051), SFDouble(-0.0153)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_tarsal_proximal_phalanx_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.1239), SFDouble(0.0051), SFDouble(-0.0153)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.1239,0.0051,-0.0153]),SFVec3f([0.1262,0.0023,-0.0077])])),
                                                              /*from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0.1262), SFDouble(0.0023), SFDouble(-0.0077)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('l_tarsal_middle_phalanx_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.1262), SFDouble(0.0023), SFDouble(-0.0077)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.1262,0.0023,-0.0077]),SFVec3f([0.1271,0,0])])),
                                                                  /*from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('l_tarsal_distal_phalanx_5_tip'),
                                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_tarsal_distal_phalanx_5_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0.1271), SFDouble(0), SFDouble(0)]))])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                  children_ : [
                                    Transform(
                                      /*Empty Transform*/
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.095,0.9171,0.0029]),SFVec3f([-0.0867,0.4913,0.0318])])),
                                      /*from r_hip to r_knee vertices 2*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                HAnimSite(
                                  name_ : SFString('r_lateral_malleolus'),
                                  DEF_ : SFString('hanim_r_lateral_malleolus'),
                                  translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_lateral_malleolus')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('r_medial_malleolus'),
                                  DEF_ : SFString('hanim_r_medial_malleolus'),
                                  translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_medial_malleolus')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('r_tibiale'),
                                  DEF_ : SFString('hanim_r_tibiale'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_tibiale')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                      children_ : [
                                        Transform(
                                          /*Empty Transform*/
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.0867,0.4913,0.0318]),SFVec3f([-0.0801,0.0712,-0.0766])])),
                                          /*from r_knee to r_talocrural vertices 2*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                    HAnimSite(
                                      name_ : SFString('r_calcaneus_posterior'),
                                      DEF_ : SFString('hanim_r_calcaneus_posterior'),
                                      translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_calcaneus_posterior')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      name_ : SFString('r_sphyrion'),
                                      DEF_ : SFString('hanim_r_sphyrion'),
                                      translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_sphyrion')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_talus'),
                                      DEF_ : SFString('hanim_r_talus'),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(0.15), SFDouble(0.15), SFDouble(0.15)]),
                                          translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.06), SFDouble(-0.025)]),
                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                                          /*Transform right foot*/
                                          children_ : [
                                            Transform(
                                              /*Empty Transform right foot*/
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-0.0781,0.0283,-0.097])])),
                                              /*from r_talocrural to r_talocalcaneonavicular vertices 2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0801,0.0712,-0.0766]),SFVec3f([-0.0889,0.0494,-0.1278])])),
                                              /*from r_talocrural to r_calcaneocuboid vertices 2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_r_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(-0.0781), SFDouble(0.0283), SFDouble(-0.097)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_navicular'),
                                          DEF_ : SFString('hanim_r_navicular'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0781), SFDouble(0.0283), SFDouble(-0.097)]),
                                              children_ : [
                                                Transform(
                                                  /*Empty Transform*/
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0781,0.0283,-0.097]),SFVec3f([-0.0672,0.0235,-0.0835])])),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0781,0.0283,-0.097]),SFVec3f([-0.0812,0.025,-0.0805])])),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0781,0.0283,-0.097]),SFVec3f([-0.0928,0.0248,-0.0821])])),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(-0.0672), SFDouble(0.0235), SFDouble(-0.0835)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_1'),
                                              DEF_ : SFString('hanim_r_cuneiform_1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0672), SFDouble(0.0235), SFDouble(-0.0835)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.0672,0.0235,-0.0835]),SFVec3f([-0.0644,0.0147,-0.0577])])),
                                                      /*from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(-0.0644), SFDouble(0.0147), SFDouble(-0.0577)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsal_1'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0644), SFDouble(0.0147), SFDouble(-0.0577)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.0644,0.0147,-0.0577]),SFVec3f([-0.0619,0.0059,-0.0083])])),
                                                          /*from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('r_metatarsal_phalanx_1'),
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_1'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_phalanx_1')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(-0.0619), SFDouble(0.0059), SFDouble(-0.0083)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_1'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0619), SFDouble(0.0059), SFDouble(-0.0083)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0619,0.0059,-0.0083]),SFVec3f([-0.0619,0.0059,-0.0083])])),
                                                              /*from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                        HAnimSite(
                                                          name_ : SFString('r_tarsal_distal_phalanx_1_tip'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_tarsal_distal_phalanx_1_tip')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_1'))])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(-0.0812), SFDouble(0.025), SFDouble(-0.0805)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_2'),
                                              DEF_ : SFString('hanim_r_cuneiform_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0812), SFDouble(0.025), SFDouble(-0.0805)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.0812,0.025,-0.0805]),SFVec3f([-0.08,0.0175,-0.0608])])),
                                                      /*from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(-0.08), SFDouble(0.0175), SFDouble(-0.0608)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsal_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.08), SFDouble(0.0175), SFDouble(-0.0608)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.08,0.0175,-0.0608]),SFVec3f([-0.0823,0.0064,-0.004])])),
                                                          /*from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(-0.0823), SFDouble(0.0064), SFDouble(-0.004)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0823), SFDouble(0.0064), SFDouble(-0.004)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0823,0.0064,-0.004]),SFVec3f([-0.0841,0.0041,0.0121])])),
                                                              /*from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0041), SFDouble(0.0121)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_2'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0041), SFDouble(0.0121)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.0841,0.0041,0.0121]),SFVec3f([-0.0841,0.0013,0.0216])])),
                                                                  /*from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_2_tip'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip'),
                                                              translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_2_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(-0.0841), SFDouble(0.0013), SFDouble(0.0216)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(-0.0928), SFDouble(0.0248), SFDouble(-0.0821)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuneiform_3'),
                                              DEF_ : SFString('hanim_r_cuneiform_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.0928), SFDouble(0.0248), SFDouble(-0.0821)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.0928,0.0248,-0.0821]),SFVec3f([-0.0944,0.0175,-0.0625])])),
                                                      /*from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(-0.0944), SFDouble(0.0175), SFDouble(-0.0625)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsal_3'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.0944), SFDouble(0.0175), SFDouble(-0.0625)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.0944,0.0175,-0.0625]),SFVec3f([-0.0963,0.0065,-0.0065])])),
                                                          /*from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(-0.0963), SFDouble(0.0065), SFDouble(-0.0065)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_3'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.0963), SFDouble(0.0065), SFDouble(-0.0065)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0963,0.0065,-0.0065]),SFVec3f([-0.0987,0.0034,0.0086])])),
                                                              /*from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(-0.0987), SFDouble(0.0034), SFDouble(0.0086)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_3'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.0987), SFDouble(0.0034), SFDouble(0.0086)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.0987,0.0034,0.0086]),SFVec3f([-0.1002,0.0013,0.0178])])),
                                                                  /*from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_3_tip'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_3_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(-0.1002), SFDouble(0.0013), SFDouble(0.0178)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('r_calcaneocuboid'),
                                      DEF_ : SFString('hanim_r_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(-0.0889), SFDouble(0.0494), SFDouble(-0.1278)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_calcaneus'),
                                          DEF_ : SFString('hanim_r_calcaneus'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0889), SFDouble(0.0494), SFDouble(-0.1278)]),
                                              children_ : [
                                                Transform(
                                                  /*Empty Transform*/
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.0889,0.0494,-0.1278]),SFVec3f([-0.1105,0.0267,-0.0998])])),
                                                  /*from r_calcaneocuboid to r_transversetarsal vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_transversetarsal'),
                                          DEF_ : SFString('hanim_r_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(-0.1105), SFDouble(0.0267), SFDouble(-0.0998)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_cuboid'),
                                              DEF_ : SFString('hanim_r_cuboid'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1105), SFDouble(0.0267), SFDouble(-0.0998)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1105,0.0267,-0.0998]),SFVec3f([-0.1063,0.016,-0.0634])])),
                                                      /*from r_transversetarsal to r_tarsometatarsal_4 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1105,0.0267,-0.0998]),SFVec3f([-0.1206,0.0124,-0.0671])])),
                                                      /*from r_transversetarsal to r_tarsometatarsal_5 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(-0.1063), SFDouble(0.016), SFDouble(-0.0634)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsal_4'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1063), SFDouble(0.016), SFDouble(-0.0634)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1063,0.016,-0.0634]),SFVec3f([-0.1097,0.0058,-0.0107])])),
                                                          /*from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(-0.1097), SFDouble(0.0058), SFDouble(-0.0107)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_4'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.1097), SFDouble(0.0058), SFDouble(-0.0107)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.1097,0.0058,-0.0107]),SFVec3f([-0.114,0.0037,0.0044])])),
                                                              /*from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(-0.114), SFDouble(0.0037), SFDouble(0.0044)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_4'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.114), SFDouble(0.0037), SFDouble(0.0044)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.114,0.0037,0.0044]),SFVec3f([-0.1155,0.0008,0.0118])])),
                                                                  /*from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_4_tip'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_4_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(-0.1155), SFDouble(0.0008), SFDouble(0.0118)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(-0.1206), SFDouble(0.0124), SFDouble(-0.0671)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_metatarsal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsal_5'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1206), SFDouble(0.0124), SFDouble(-0.0671)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1206,0.0124,-0.0671]),SFVec3f([-0.1239,0.0051,-0.0153])])),
                                                          /*from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('r_metatarsal_phalanx_5'),
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_5'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_phalanx_5')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(-0.1239), SFDouble(0.0051), SFDouble(-0.0153)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_tarsal_proximal_phalanx_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_5'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(-0.1239), SFDouble(0.0051), SFDouble(-0.0153)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.1239,0.0051,-0.0153]),SFVec3f([-0.1262,0.0023,-0.0077])])),
                                                              /*from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(-0.1262), SFDouble(0.0023), SFDouble(-0.0077)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('r_tarsal_middle_phalanx_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_middle_phalanx_5'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(-0.1262), SFDouble(0.0023), SFDouble(-0.0077)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.1262,0.0023,-0.0077]),SFVec3f([-0.1271,0,0])])),
                                                                  /*from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('r_tarsal_distal_phalanx_5_tip'),
                                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_tarsal_distal_phalanx_5_tip')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(-0.1271), SFDouble(0), SFDouble(0)]))])])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l5'),
                          DEF_ : SFString('hanim_l5'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                              children_ : [
                                Transform(
                                  /*Empty Transform*/
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape')))]),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])])),
                                  /*from vl5 to vl4 vertices 2*/
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l4'),
                              DEF_ : SFString('hanim_l4'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                  children_ : [
                                    Transform(
                                      /*Empty Transform*/
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape')))]),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])])),
                                      /*from vl4 to vl3 vertices 2*/
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l3'),
                                  DEF_ : SFString('hanim_l3'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                      children_ : [
                                        Transform(
                                          /*Empty Transform*/
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape')))]),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])])),
                                          /*from vl3 to vl2 vertices 2*/
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                    HAnimSite(
                                      name_ : SFString('l_rib10'),
                                      DEF_ : SFString('hanim_l_rib10'),
                                      translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite l_rib10')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      name_ : SFString('r_rib10'),
                                      DEF_ : SFString('hanim_r_rib10'),
                                      translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite r_rib10')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))]),

                                    HAnimSite(
                                      name_ : SFString('spine_2_middle_back'),
                                      DEF_ : SFString('hanim_spine_2_middle_back'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimSite spine_2_middle_back')),

                                        Shape(
                                          USE_ : SFString('HAnimSiteShape'))])]),

                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l2'),
                                      DEF_ : SFString('hanim_l2'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                          children_ : [
                                            Transform(
                                              /*Empty Transform*/
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape')))]),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])])),
                                              /*from vl2 to vl1 vertices 2*/
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l1'),
                                          DEF_ : SFString('hanim_l1'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                              children_ : [
                                                Transform(
                                                  /*Empty Transform*/
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape')))]),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])])),
                                                  /*from vl1 to vt12 vertices 2*/
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('t12'),
                                              DEF_ : SFString('hanim_t12'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                  children_ : [
                                                    Transform(
                                                      /*Empty Transform*/
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape')))]),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])])),
                                                      /*from vt12 to vt11 vertices 2*/
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('t11'),
                                                  DEF_ : SFString('hanim_t11'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        Transform(
                                                          /*Empty Transform*/
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape')))]),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])])),
                                                          /*from vt11 to vt10 vertices 2*/
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('substernale'),
                                                      DEF_ : SFString('hanim_substernale'),
                                                      translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite substernale')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t10'),
                                                      DEF_ : SFString('hanim_t10'),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                          children_ : [
                                                            Transform(
                                                              /*Empty Transform*/
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])),
                                                              /*from vt10 to vt9 vertices 2*/
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                        HAnimSite(
                                                          name_ : SFString('l_thelion'),
                                                          DEF_ : SFString('hanim_l_thelion'),
                                                          translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite l_thelion')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                        HAnimSite(
                                                          name_ : SFString('r_thelion'),
                                                          DEF_ : SFString('hanim_r_thelion'),
                                                          translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite r_thelion')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t9'),
                                                          DEF_ : SFString('hanim_t9'),
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                              children_ : [
                                                                Transform(
                                                                  /*Empty Transform*/
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])])),
                                                                  /*from vt9 to vt8 vertices 2*/
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t8'),
                                                              DEF_ : SFString('hanim_t8'),
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                  children_ : [
                                                                    Transform(
                                                                      /*Empty Transform*/
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])])),
                                                                      /*from vt8 to vt7 vertices 2*/
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t7'),
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                      children_ : [
                                                                        Transform(
                                                                          /*Empty Transform*/
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])])),
                                                                          /*from vt7 to vt6 vertices 2*/
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                    HAnimSite(
                                                                      name_ : SFString('l_chest_midsagittal_plane'),
                                                                      DEF_ : SFString('hanim_l_chest_midsagittal_plane'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite l_chest_midsagittal_plane')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('mesosternale'),
                                                                      DEF_ : SFString('hanim_mesosternale'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite mesosternale')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('r_chest_midsagittal_plane'),
                                                                      DEF_ : SFString('hanim_r_chest_midsagittal_plane'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite r_chest_midsagittal_plane')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                    HAnimSite(
                                                                      name_ : SFString('rear_center_midsagittal_plane'),
                                                                      DEF_ : SFString('hanim_rear_center_midsagittal_plane'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimSite rear_center_midsagittal_plane')),

                                                                        Shape(
                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t6'),
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                          children_ : [
                                                                            Transform(
                                                                              /*Empty Transform*/
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])])),
                                                                              /*from vt6 to vt5 vertices 2*/
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                        HAnimSite(
                                                                          name_ : SFString('spine_1_middle_back'),
                                                                          DEF_ : SFString('hanim_spine_1_middle_back'),
                                                                          children_ : [
                                                                            TouchSensor(
                                                                              description_ : SFString('HAnimSite spine_1_middle_back')),

                                                                            Shape(
                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t5'),
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                              children_ : [
                                                                                Transform(
                                                                                  /*Empty Transform*/
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])])),
                                                                                  /*from vt5 to vt4 vertices 2*/
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t4'),
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              children_ : [
                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      /*Empty Transform*/
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])])),
                                                                                      /*from vt4 to vt3 vertices 2*/
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t3'),
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          /*Empty Transform*/
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])])),
                                                                                          /*from vt3 to vt2 vertices 2*/
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t2'),
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              /*Empty Transform*/
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])])),
                                                                                              /*from vt2 to vt1 vertices 2*/
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                        HAnimSite(
                                                                                          name_ : SFString('cervicale'),
                                                                                          DEF_ : SFString('hanim_cervicale'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite cervicale')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                        HAnimSite(
                                                                                          name_ : SFString('suprasternale'),
                                                                                          DEF_ : SFString('hanim_suprasternale'),
                                                                                          translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimSite suprasternale')),

                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t1'),
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  /*Empty Transform*/
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301])])),
                                                                                                  /*from vt1 to vc7 vertices 2*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_neck_base'),
                                                                                              DEF_ : SFString('hanim_l_neck_base'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_neck_base')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_neck_base'),
                                                                                              DEF_ : SFString('hanim_r_neck_base'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_neck_base')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.082,1.4488,-0.0353])])),
                                                                                                  /*from vt1 to l_sternoclavicular vertices 2*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_acromion'),
                                                                                              DEF_ : SFString('hanim_l_acromion'),
                                                                                              translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_acromion')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_axilla_distal_pt'),
                                                                                              DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_distal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_axilla_posterior_folds'),
                                                                                              DEF_ : SFString('hanim_l_axilla_posterior_folds'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_posterior_folds')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_axilla_proximal'),
                                                                                              DEF_ : SFString('hanim_l_axilla_proximal'),
                                                                                              translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_axilla_proximal')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('l_clavicale'),
                                                                                              DEF_ : SFString('hanim_l_clavicale'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite l_clavicale')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([-0.0694,1.46,-0.033])])),
                                                                                                  /*from vt1 to r_sternoclavicular vertices 2*/
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_acromion'),
                                                                                              DEF_ : SFString('hanim_r_acromion'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_acromion')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_axilla_distal_pt'),
                                                                                              DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_distal_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_axilla_posterior_folds'),
                                                                                              DEF_ : SFString('hanim_r_axilla_posterior_folds'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_posterior_folds')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_axilla_proximal'),
                                                                                              DEF_ : SFString('hanim_r_axilla_proximal'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_axilla_proximal')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('r_clavicale'),
                                                                                              DEF_ : SFString('hanim_r_clavicale'),
                                                                                              translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite r_clavicale')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('c7'),
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      /*Empty Transform*/
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])])),
                                                                                                      /*from vc7 to vc6 vertices 2*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('c6'),
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          /*Empty Transform*/
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])])),
                                                                                                          /*from vc6 to vc5 vertices 2*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c5'),
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              /*Empty Transform*/
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])])),
                                                                                                              /*from vc5 to vc4 vertices 2*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c4'),
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  /*Empty Transform*/
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])])),
                                                                                                                  /*from vc4 to vc3 vertices 2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c3'),
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      /*Empty Transform*/
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.58,-0.0103]),SFVec3f([0.0066,1.5928,-0.0103])])),
                                                                                                                      /*from vc3 to vc2 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('adams_apple'),
                                                                                                                  DEF_ : SFString('hanim_adams_apple'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite adams_apple')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])])),
                                                                                                                          /*from vc2 to vc1 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])])),
                                                                                                                              /*from vc1 to skullbase vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('glabella'),
                                                                                                                          DEF_ : SFString('hanim_glabella'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite glabella')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_ectocanthus'),
                                                                                                                          DEF_ : SFString('hanim_l_ectocanthus'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_ectocanthus')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_infraorbitale'),
                                                                                                                          DEF_ : SFString('hanim_l_infraorbitale'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_infraorbitale')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_tragion'),
                                                                                                                          DEF_ : SFString('hanim_l_tragion'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite l_tragion')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('nuchale'),
                                                                                                                          DEF_ : SFString('hanim_nuchale'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite nuchale')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('opisthocranion'),
                                                                                                                          DEF_ : SFString('hanim_opisthocranion'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite opisthocranion')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_ectocanthus'),
                                                                                                                          DEF_ : SFString('hanim_r_ectocanthus'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_ectocanthus')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_infraorbitale'),
                                                                                                                          DEF_ : SFString('hanim_r_infraorbitale'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_infraorbitale')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('r_tragion'),
                                                                                                                          DEF_ : SFString('hanim_r_tragion'),
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite r_tragion')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('sellion'),
                                                                                                                          DEF_ : SFString('hanim_sellion'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite sellion')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('skull_vertex'),
                                                                                                                          DEF_ : SFString('hanim_skull_vertex'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimSite skull_vertex')),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0503,1.4157,-0.0689])])),
                                                                                                                                  /*from skullbase to l_eyelid_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0507,1.4157,-0.0689])])),
                                                                                                                                  /*from skullbase to r_eyelid_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0479,1.3963,-0.0188])])),
                                                                                                                                  /*from skullbase to l_eyeball_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0483,1.3963,-0.0188])])),
                                                                                                                                  /*from skullbase to r_eyeball_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0216,1.4053,0.0051])])),
                                                                                                                                  /*from skullbase to l_eyebrow_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0219,1.4053,0.0051])])),
                                                                                                                                  /*from skullbase to r_eyebrow_joint vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0002,1.3043,-0.0865])])),
                                                                                                                                  /*from skullbase to temporomandibular vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_gonion'),
                                                                                                                              DEF_ : SFString('hanim_l_gonion'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_gonion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('menton'),
                                                                                                                              DEF_ : SFString('hanim_menton'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite menton')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_gonion'),
                                                                                                                              DEF_ : SFString('hanim_r_gonion'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_gonion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('supramenton'),
                                                                                                                              DEF_ : SFString('hanim_supramenton'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite supramenton')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0503), SFDouble(1.4157), SFDouble(-0.0689)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0507), SFDouble(1.4157), SFDouble(-0.0689)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0479), SFDouble(1.3963), SFDouble(-0.0188)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0483), SFDouble(1.3963), SFDouble(-0.0188)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0216), SFDouble(1.4053), SFDouble(0.0051)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0219), SFDouble(1.4053), SFDouble(0.0051)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0002), SFDouble(1.3043), SFDouble(-0.0865)]))])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      /*Empty Transform*/
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])),
                                                                                                      /*from l_sternoclavicular to l_acromioclavicular vertices 2*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          /*Empty Transform*/
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])])),
                                                                                                          /*from l_acromioclavicular to l_shoulder vertices 2*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_bideltoid'),
                                                                                                      DEF_ : SFString('hanim_l_bideltoid'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_bideltoid')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_humeral_lateral_epicondyles'),
                                                                                                      DEF_ : SFString('hanim_l_humeral_lateral_epicondyles'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite l_humeral_lateral_epicondyles')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              /*Empty Transform*/
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])),
                                                                                                              /*from l_shoulder to l_elbow vertices 2*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_humeral_medial_epicondyles'),
                                                                                                          DEF_ : SFString('hanim_l_humeral_medial_epicondyles'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_humeral_medial_epicondyles')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_olecranon'),
                                                                                                          DEF_ : SFString('hanim_l_olecranon'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_olecranon')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_radial_styloid'),
                                                                                                          DEF_ : SFString('hanim_l_radial_styloid'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_radial_styloid')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_radiale'),
                                                                                                          DEF_ : SFString('hanim_l_radiale'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_radiale')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  /*Empty Transform*/
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])),
                                                                                                                  /*from l_elbow to l_radiocarpal vertices 2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_ulnar_styloid'),
                                                                                                              DEF_ : SFString('hanim_l_ulnar_styloid'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_ulnar_styloid')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_carpal'),
                                                                                                              DEF_ : SFString('hanim_l_carpal'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.85), SFDouble(-0.05)]),
                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-3.14)]),
                                                                                                                  /*Transform left hand*/
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                                                                                                                      /*Transform left hand*/
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1811,0.6975,-0.0826])])),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_1 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1811,0.6984,-0.0935])])),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_2 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1809,0.7,-0.1067])])),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_3 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1809,0.6973,-0.1276])])),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_4_5 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1811), SFDouble(0.6975), SFDouble(-0.0826)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_trapezium'),
                                                                                                                  DEF_ : SFString('hanim_l_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1811), SFDouble(0.6975), SFDouble(-0.0826)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1811,0.6975,-0.0826]),SFVec3f([0.1924,0.8472,-0.0534])])),
                                                                                                                          /*from l_midcarpal_1 to l_carpometacarpal_1 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])])),
                                                                                                                              /*from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])])),
                                                                                                                                  /*from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_carpal_distal_phalanx_1_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1811), SFDouble(0.6984), SFDouble(-0.0935)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_trapezoid'),
                                                                                                                  DEF_ : SFString('hanim_l_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1811), SFDouble(0.6984), SFDouble(-0.0935)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1811,0.6984,-0.0935]),SFVec3f([0.1983,0.8024,-0.028])])),
                                                                                                                          /*from l_midcarpal_2 to l_carpometacarpal_2 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_2'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_2')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])])),
                                                                                                                              /*from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])])),
                                                                                                                                  /*from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])])),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_2_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_dactylion'),
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_dactylion')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1809), SFDouble(0.7), SFDouble(-0.1067)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_capitate'),
                                                                                                                  DEF_ : SFString('hanim_l_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1809), SFDouble(0.7), SFDouble(-0.1067)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1809,0.7,-0.1067]),SFVec3f([0.1987,0.8029,-0.053])])),
                                                                                                                          /*from l_midcarpal_3 to l_carpometacarpal_3 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_3'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_3')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])])),
                                                                                                                              /*from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])])),
                                                                                                                                  /*from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])])),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_3_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1809), SFDouble(0.6973), SFDouble(-0.1276)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_hamate'),
                                                                                                                  DEF_ : SFString('hanim_l_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1809), SFDouble(0.6973), SFDouble(-0.1276)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1809,0.6973,-0.1276]),SFVec3f([0.1956,0.8019,-0.0794])])),
                                                                                                                          /*from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1809,0.6973,-0.1276]),SFVec3f([0.1925,0.8066,-0.1036])])),
                                                                                                                          /*from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_metacarpal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite l_metacarpal_phalanx_5')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])])),
                                                                                                                              /*from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])])),
                                                                                                                                  /*from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])])),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_4_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_metacarpal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpal_5'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])])),
                                                                                                                              /*from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])])),
                                                                                                                                  /*from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_middle_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])])),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]))])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      /*Empty Transform*/
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.0694,1.46,-0.033]),SFVec3f([-0.0836,1.4281,-0.0401])])),
                                                                                                      /*from r_sternoclavicular to r_acromioclavicular vertices 2*/
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          /*Empty Transform*/
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0836,1.4281,-0.0401]),SFVec3f([-0.1907,1.4407,-0.0325])])),
                                                                                                          /*from r_acromioclavicular to r_shoulder vertices 2*/
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_bideltoid'),
                                                                                                      DEF_ : SFString('hanim_r_bideltoid'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_bideltoid')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_humeral_lateral_epicondyles'),
                                                                                                      DEF_ : SFString('hanim_r_humeral_lateral_epicondyles'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimSite r_humeral_lateral_epicondyles')),

                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              /*Empty Transform*/
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1907,1.4407,-0.0325]),SFVec3f([-0.1949,1.1388,-0.062])])),
                                                                                                              /*from r_shoulder to r_elbow vertices 2*/
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_humeral_medial_epicondyles'),
                                                                                                          DEF_ : SFString('hanim_r_humeral_medial_epicondyles'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_humeral_medial_epicondyles')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_olecranon'),
                                                                                                          DEF_ : SFString('hanim_r_olecranon'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_olecranon')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_radial_styloid'),
                                                                                                          DEF_ : SFString('hanim_r_radial_styloid'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_radial_styloid')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_radiale'),
                                                                                                          DEF_ : SFString('hanim_r_radiale'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_radiale')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  /*Empty Transform*/
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1949,1.1388,-0.062]),SFVec3f([-0.1959,0.8694,-0.0521])])),
                                                                                                                  /*from r_elbow to r_radiocarpal vertices 2*/
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_ulnar_styloid'),
                                                                                                              DEF_ : SFString('hanim_r_ulnar_styloid'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_ulnar_styloid')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_carpal'),
                                                                                                              DEF_ : SFString('hanim_r_carpal'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.85), SFDouble(-0.05)]),
                                                                                                                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-3.14)]),
                                                                                                                  /*Transform right hand*/
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                                                                                                                      /*Transform right hand*/
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1811,0.6975,-0.0826])])),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_1 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1811,0.6984,-0.0935])])),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_2 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1809,0.7,-0.1067])])),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_3 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1959,0.8694,-0.0521]),SFVec3f([-0.1809,0.6973,-0.1276])])),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_4_5 vertices 2*/
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1811), SFDouble(0.6975), SFDouble(-0.0826)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_trapezium'),
                                                                                                                  DEF_ : SFString('hanim_r_trapezium'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(0.6975), SFDouble(-0.0826)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1811,0.6975,-0.0826]),SFVec3f([-0.1899,0.8502,-0.0473])])),
                                                                                                                          /*from r_midcarpal_1 to r_carpometacarpal_1 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_1'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1899,0.8502,-0.0473]),SFVec3f([-0.1874,0.8256,0.0306])])),
                                                                                                                              /*from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1874,0.8256,0.0306]),SFVec3f([-0.1864,0.819,0.0506])])),
                                                                                                                                  /*from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_1_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_tip'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_carpal_distal_phalanx_1_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1811), SFDouble(0.6984), SFDouble(-0.0935)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_trapezoid'),
                                                                                                                  DEF_ : SFString('hanim_r_trapezoid'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1811), SFDouble(0.6984), SFDouble(-0.0935)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1811,0.6984,-0.0935]),SFVec3f([-0.1961,0.8055,-0.0218])])),
                                                                                                                          /*from r_midcarpal_2 to r_carpometacarpal_2 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_2'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_2')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1961,0.8055,-0.0218]),SFVec3f([-0.1961,0.7846,-0.0218])])),
                                                                                                                              /*from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1961,0.7846,-0.0218]),SFVec3f([-0.1954,0.7393,-0.0185])])),
                                                                                                                                  /*from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1954,0.7393,-0.0185]),SFVec3f([-0.1945,0.7169,-0.0173])])),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_2_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_dactylion'),
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_dactylion')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1809), SFDouble(0.7), SFDouble(-0.1067)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_capitate'),
                                                                                                                  DEF_ : SFString('hanim_r_capitate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(0.7), SFDouble(-0.1067)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1809,0.7,-0.1067]),SFVec3f([-0.1972,0.806,-0.0468])])),
                                                                                                                          /*from r_midcarpal_3 to r_carpometacarpal_3 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_3'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_3')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_3'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1972,0.806,-0.0468]),SFVec3f([-0.1972,0.7849,-0.0468])])),
                                                                                                                              /*from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1972,0.7849,-0.0468]),SFVec3f([-0.195,0.7304,-0.0441])])),
                                                                                                                                  /*from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.195,0.7304,-0.0441]),SFVec3f([-0.1939,0.7042,-0.0432])])),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_3_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1809), SFDouble(0.6973), SFDouble(-0.1276)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_hamate'),
                                                                                                                  DEF_ : SFString('hanim_r_hamate'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1809), SFDouble(0.6973), SFDouble(-0.1276)]),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          /*Empty Transform*/
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape')))]),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1809,0.6973,-0.1276]),SFVec3f([-0.1951,0.8049,-0.0732])])),
                                                                                                                          /*from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1809,0.6973,-0.1276]),SFVec3f([-0.1926,0.8096,-0.0975])])),
                                                                                                                          /*from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2*/
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('r_metacarpal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5'),
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimSite r_metacarpal_phalanx_5')),

                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_4'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.8049,-0.0732]),SFVec3f([-0.1951,0.7845,-0.0732])])),
                                                                                                                              /*from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1951,0.7845,-0.0732]),SFVec3f([-0.192,0.7318,-0.0716])])),
                                                                                                                                  /*from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.192,0.7318,-0.0716]),SFVec3f([-0.1908,0.7077,-0.0706])])),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_4_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_metacarpal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpal_5'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              /*Empty Transform*/
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape')))]),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1926,0.8096,-0.0975]),SFVec3f([-0.1926,0.7896,-0.0975])])),
                                                                                                                              /*from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2*/
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))]),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1926,0.7896,-0.0975]),SFVec3f([-0.1902,0.7483,-0.0963])])),
                                                                                                                                  /*from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2*/
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_middle_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                                  children_ : [
                                                                                                                                    Transform(
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      child_ : 
                                                                                                                                        Shape(
                                                                                                                                          USE_ : SFString('HAnimJointShape')))]),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1902,0.7483,-0.0963]),SFVec3f([-0.1908,0.754,-0.096])])),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2*/
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_carpal_distal_phalanx_5_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]))])])])])])])])])])])])])])])])])])])])])])])])])])])]),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt12')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt11')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt10')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt9')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt8')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc1')),

                HAnimJoint(
                  USE_ : SFString('hanim_skullbase')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_temporomandibular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_sacrum')),

                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_navicular')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calcaneus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuboid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_navicular')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuneiform_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calcaneus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_cuboid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_t12')),

                HAnimSegment(
                  USE_ : SFString('hanim_t11')),

                HAnimSegment(
                  USE_ : SFString('hanim_t10')),

                HAnimSegment(
                  USE_ : SFString('hanim_t9')),

                HAnimSegment(
                  USE_ : SFString('hanim_t8')),

                HAnimSegment(
                  USE_ : SFString('hanim_t7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t6')),

                HAnimSegment(
                  USE_ : SFString('hanim_t5')),

                HAnimSegment(
                  USE_ : SFString('hanim_t4')),

                HAnimSegment(
                  USE_ : SFString('hanim_t3')),

                HAnimSegment(
                  USE_ : SFString('hanim_t2')),

                HAnimSegment(
                  USE_ : SFString('hanim_t1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c7')),

                HAnimSegment(
                  USE_ : SFString('hanim_c6')),

                HAnimSegment(
                  USE_ : SFString('hanim_c5')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_c3')),

                HAnimSegment(
                  USE_ : SFString('hanim_c2')),

                HAnimSegment(
                  USE_ : SFString('hanim_c1')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_trapezium')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_trapezoid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_capitate')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hamate')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_trapezium')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_trapezoid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_capitate')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hamate')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_5')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_buttocks_standing_wall_contact_point'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_crotch')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_asis')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_psis')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_trochanterion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_asis')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_iliocristale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_psis')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_trochanterion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_navel')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_anterior')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_posterior')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_knee_crease')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_suprapatella')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_knee_crease')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_suprapatella')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_lateral_malleolus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_medial_malleolus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tibiale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneus_posterior')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_sphyrion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_1')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_5')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_lateral_malleolus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_medial_malleolus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tibiale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_sphyrion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_1')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_5')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_rib10')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_rib10')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_spine_2_middle_back')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_substernale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thelion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_chest_midsagittal_plane')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_mesosternale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_chest_midsagittal_plane')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_rear_center_midsagittal_plane')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_spine_1_middle_back')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_cervicale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_suprasternale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_neck_base')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_neck_base')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_acromion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_posterior_folds')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_proximal')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_acromion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_posterior_folds')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_proximal')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_adams_apple')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_glabella')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ectocanthus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_infraorbitale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tragion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_nuchale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_opisthocranion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ectocanthus')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_infraorbitale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tragion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_sellion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_vertex')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_menton')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_supramenton')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_bideltoid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_lateral_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_olecranon')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radial_styloid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radiale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ulnar_styloid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_2')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_3')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_5')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_bideltoid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicondyles')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_olecranon')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radial_styloid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radiale')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ulnar_styloid')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_2')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_3')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_5')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5_tip')))]));
void main() { exit(0); }
