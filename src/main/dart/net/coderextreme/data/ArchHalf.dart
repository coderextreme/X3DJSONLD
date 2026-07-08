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
              content_ : SFString('ArchHalf.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Michele Foti, Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('15 December 2014')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ArchModelingDiagrams.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/Arch')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d')),

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
              title_ : SFString('ArchHalf.x3d')),

            Shape(
              DEF_ : SFString('Arch'),
              /*note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly*/
              geometry_ : 
                IndexedFaceSet(
                  DEF_ : SFString('ArchIndex'),
                  convex_ : false,
                  coordIndex_ : MFInt32([SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(61), SFInt32(62), SFInt32(144), SFInt32(-1), SFInt32(149), SFInt32(31), SFInt32(144), SFInt32(147), SFInt32(-1), SFInt32(134), SFInt32(147), SFInt32(144), SFInt32(145), SFInt32(-1), SFInt32(145), SFInt32(144), SFInt32(62), SFInt32(141), SFInt32(-1), SFInt32(132), SFInt32(133), SFInt32(141), SFInt32(62), SFInt32(-1), SFInt32(94), SFInt32(95), SFInt32(96), SFInt32(97), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(101), SFInt32(102), SFInt32(103), SFInt32(104), SFInt32(105), SFInt32(106), SFInt32(107), SFInt32(108), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(112), SFInt32(113), SFInt32(114), SFInt32(115), SFInt32(116), SFInt32(117), SFInt32(118), SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(143), SFInt32(-1), SFInt32(148), SFInt32(94), SFInt32(143), SFInt32(146), SFInt32(-1), SFInt32(142), SFInt32(128), SFInt32(146), SFInt32(143), SFInt32(-1), SFInt32(140), SFInt32(125), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(125), SFInt32(126), SFInt32(127), SFInt32(140), SFInt32(-1), SFInt32(31), SFInt32(94), SFInt32(95), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(95), SFInt32(96), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(96), SFInt32(97), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(97), SFInt32(98), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(98), SFInt32(99), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(99), SFInt32(100), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(100), SFInt32(101), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(101), SFInt32(102), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(102), SFInt32(103), SFInt32(40), SFInt32(-1), SFInt32(40), SFInt32(103), SFInt32(104), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(104), SFInt32(105), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(105), SFInt32(106), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(106), SFInt32(107), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(107), SFInt32(108), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(108), SFInt32(109), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(109), SFInt32(110), SFInt32(47), SFInt32(-1), SFInt32(47), SFInt32(110), SFInt32(111), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(111), SFInt32(112), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(112), SFInt32(113), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(113), SFInt32(114), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(114), SFInt32(115), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(115), SFInt32(116), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(116), SFInt32(117), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(117), SFInt32(118), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(118), SFInt32(119), SFInt32(56), SFInt32(-1), SFInt32(56), SFInt32(119), SFInt32(120), SFInt32(57), SFInt32(-1), SFInt32(57), SFInt32(120), SFInt32(121), SFInt32(58), SFInt32(-1), SFInt32(58), SFInt32(121), SFInt32(122), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(122), SFInt32(123), SFInt32(60), SFInt32(-1), SFInt32(60), SFInt32(123), SFInt32(124), SFInt32(61), SFInt32(-1), SFInt32(61), SFInt32(124), SFInt32(125), SFInt32(62), SFInt32(-1), SFInt32(148), SFInt32(149), SFInt32(147), SFInt32(146), SFInt32(-1), SFInt32(146), SFInt32(147), SFInt32(134), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(134), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(140), SFInt32(141), SFInt32(145), SFInt32(142), SFInt32(-1), SFInt32(127), SFInt32(133), SFInt32(141), SFInt32(140), SFInt32(-1), SFInt32(127), SFInt32(126), SFInt32(132), SFInt32(133), SFInt32(-1), SFInt32(126), SFInt32(132), SFInt32(62), SFInt32(125), SFInt32(-1), SFInt32(31), SFInt32(94), SFInt32(143), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(143), SFInt32(144), SFInt32(145), SFInt32(-1), SFInt32(140), SFInt32(125), SFInt32(62), SFInt32(141), SFInt32(-1), SFInt32(31), SFInt32(94), SFInt32(148), SFInt32(149), SFInt32(-1)]),
                  solid_ : false,
                  coord_ : 
                    Coordinate(
                      DEF_ : SFString('ArchChord'),
                      point_ : MFVec3f([SFVec3f([2,0,0]),SFVec3f([1.997498435543818,0.1,0]),SFVec3f([1.98997487421324,0.2,0]),SFVec3f([1.977371993328519,0.3,0]),SFVec3f([1.9595917942265424,0.4,0]),SFVec3f([1.9364916731037085,0.5,0]),SFVec3f([1.907878402833891,0.6,0]),SFVec3f([1.8734993995195193,0.7,0]),SFVec3f([1.833030277982336,0.8,0]),SFVec3f([1.786057109949175,0.9,0]),SFVec3f([1.7320508075688774,1,0]),SFVec3f([1.6703293088490068,1.1,0]),SFVec3f([1.6,1.2,0]),SFVec3f([1.5198684153570663,1.3,0]),SFVec3f([1.42828568570857,1.4,0]),SFVec3f([1.3228756555322954,1.5,0]),SFVec3f([1.2,1.6,0]),SFVec3f([1.0535653752852738,1.7,0]),SFVec3f([0.9020947843768965,1.785,0]),SFVec3f([0.7599342076785331,1.85,0]),SFVec3f([0.6244997998398398,1.9,0]),SFVec3f([0.5425633603552678,1.925,0]),SFVec3f([0.4444097208657794,1.95,0]),SFVec3f([0.36181625170796194,1.967,0]),SFVec3f([0.2821347195933173,1.98,0]),SFVec3f([0.19974984355438344,1.99,0]),SFVec3f([0.16718552568927703,1.993,0]),SFVec3f([0.14133294025102577,1.995,0]),SFVec3f([0.10950342460398416,1.997,0]),SFVec3f([0.08942035562443253,1.998,0]),SFVec3f([0.06323764701505419,1.999,0]),SFVec3f([0,2,0]),SFVec3f([-0.06323764701505419,1.999,0]),SFVec3f([-0.08942035562443253,1.998,0]),SFVec3f([-0.10950342460398416,1.997,0]),SFVec3f([-0.14133294025102577,1.995,0]),SFVec3f([-0.16718552568927703,1.993,0]),SFVec3f([-0.19974984355438344,1.99,0]),SFVec3f([-0.2821347195933173,1.98,0]),SFVec3f([-0.36181625170796194,1.967,0]),SFVec3f([-0.4444097208657794,1.95,0]),SFVec3f([-0.5425633603552678,1.925,0]),SFVec3f([-0.6244997998398398,1.9,0]),SFVec3f([-0.7599342076785331,1.85,0]),SFVec3f([-0.9020947843768965,1.785,0]),SFVec3f([-1.0535653752852738,1.7,0]),SFVec3f([-1.2,1.6,0]),SFVec3f([-1.3228756555322954,1.5,0]),SFVec3f([-1.42828568570857,1.4,0]),SFVec3f([-1.5198684153570663,1.3,0]),SFVec3f([-1.6,1.2,0]),SFVec3f([-1.6703293088490068,1.1,0]),SFVec3f([-1.7320508075688774,1,0]),SFVec3f([-1.786057109949175,0.9,0]),SFVec3f([-1.833030277982336,0.8,0]),SFVec3f([-1.8734993995195193,0.7,0]),SFVec3f([-1.907878402833891,0.6,0]),SFVec3f([-1.9364916731037085,0.5,0]),SFVec3f([-1.9595917942265424,0.4,0]),SFVec3f([-1.977371993328519,0.3,0]),SFVec3f([-1.98997487421324,0.2,0]),SFVec3f([-1.997498435543818,0.1,0]),SFVec3f([-2,0,0]),SFVec3f([2,0,3]),SFVec3f([1.997498435543818,0.1,3]),SFVec3f([1.98997487421324,0.2,3]),SFVec3f([1.977371993328519,0.3,3]),SFVec3f([1.9595917942265424,0.4,3]),SFVec3f([1.9364916731037085,0.5,3]),SFVec3f([1.907878402833891,0.6,3]),SFVec3f([1.8734993995195193,0.7,3]),SFVec3f([1.833030277982336,0.8,3]),SFVec3f([1.786057109949175,0.9,3]),SFVec3f([1.7320508075688774,1,3]),SFVec3f([1.6703293088490068,1.1,3]),SFVec3f([1.6,1.2,3]),SFVec3f([1.5198684153570663,1.3,3]),SFVec3f([1.42828568570857,1.4,3]),SFVec3f([1.3228756555322954,1.5,3]),SFVec3f([1.2,1.6,3]),SFVec3f([1.0535653752852738,1.7,3]),SFVec3f([0.9020947843768965,1.785,3]),SFVec3f([0.7599342076785331,1.85,3]),SFVec3f([0.6244997998398398,1.9,3]),SFVec3f([0.5425633603552678,1.925,3]),SFVec3f([0.4444097208657794,1.95,3]),SFVec3f([0.36181625170796194,1.967,3]),SFVec3f([0.2821347195933173,1.98,3]),SFVec3f([0.19974984355438344,1.99,3]),SFVec3f([0.16718552568927703,1.993,3]),SFVec3f([0.14133294025102577,1.995,3]),SFVec3f([0.10950342460398416,1.997,3]),SFVec3f([0.08942035562443253,1.998,3]),SFVec3f([0.06323764701505419,1.999,3]),SFVec3f([0,2,3]),SFVec3f([-0.06323764701505419,1.999,3]),SFVec3f([-0.08942035562443253,1.998,3]),SFVec3f([-0.10950342460398416,1.997,3]),SFVec3f([-0.14133294025102577,1.995,3]),SFVec3f([-0.16718552568927703,1.993,3]),SFVec3f([-0.19974984355438344,1.99,3]),SFVec3f([-0.2821347195933173,1.98,3]),SFVec3f([-0.36181625170796194,1.967,3]),SFVec3f([-0.4444097208657794,1.95,3]),SFVec3f([-0.5425633603552678,1.925,3]),SFVec3f([-0.6244997998398398,1.9,3]),SFVec3f([-0.7599342076785331,1.85,3]),SFVec3f([-0.9020947843768965,1.785,3]),SFVec3f([-1.0535653752852738,1.7,3]),SFVec3f([-1.2,1.6,3]),SFVec3f([-1.3228756555322954,1.5,3]),SFVec3f([-1.42828568570857,1.4,3]),SFVec3f([-1.5198684153570663,1.3,3]),SFVec3f([-1.6,1.2,3]),SFVec3f([-1.6703293088490068,1.1,3]),SFVec3f([-1.7320508075688774,1,3]),SFVec3f([-1.786057109949175,0.9,3]),SFVec3f([-1.833030277982336,0.8,3]),SFVec3f([-1.8734993995195193,0.7,3]),SFVec3f([-1.907878402833891,0.6,3]),SFVec3f([-1.9364916731037085,0.5,3]),SFVec3f([-1.9595917942265424,0.4,3]),SFVec3f([-1.977371993328519,0.3,3]),SFVec3f([-1.98997487421324,0.2,3]),SFVec3f([-1.997498435543818,0.1,3]),SFVec3f([-2,0,3]),SFVec3f([-2,-1,3]),SFVec3f([-2.5,-1,3]),SFVec3f([-2.5,2.5,3]),SFVec3f([2.5,2.5,3]),SFVec3f([2.5,-1,3]),SFVec3f([2,-1,3]),SFVec3f([-2,-1,0]),SFVec3f([-2.5,-1,0]),SFVec3f([-2.5,2.5,0]),SFVec3f([2.5,2.5,0]),SFVec3f([2.5,-1,0]),SFVec3f([2,-1,0]),SFVec3f([2.5,0,3]),SFVec3f([2.5,0,0]),SFVec3f([-2.5,0,3]),SFVec3f([-2.5,0,0]),SFVec3f([-2.5,2,3]),SFVec3f([-2,2,3]),SFVec3f([-2,2,0]),SFVec3f([-2.5,2,0]),SFVec3f([-2,2.5,3]),SFVec3f([-2,2.5,0]),SFVec3f([0,2.5,3]),SFVec3f([0,2.5,0]),SFVec3f([2,2,3]),SFVec3f([2.5,2,3]),SFVec3f([2.5,2,0]),SFVec3f([2,2,0]),SFVec3f([2,2.5,3]),SFVec3f([2,2.5,0])]))),
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      DEF_ : SFString('MaterialNode'),
                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.75), SFDouble(0.25)]))))]));
void main() { exit(0); }
