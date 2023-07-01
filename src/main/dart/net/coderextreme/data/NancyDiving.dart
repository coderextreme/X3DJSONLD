// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('H-Anim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('NancyDiving.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Nancy having fun scuba diving!')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Etsuko Lippi')),

            meta(
              name_ : SFString('translators'),
              content_ : SFString('Tom Miller and Don Brutzman, NPS')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('17 December 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('4 July 2020')),

            meta(
              name_ : SFString('hint'),
              content_ : SFString('Default orientation along X axis (vice HAnim required Y axis) since diving posture is typically prone.')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('problem with left arm animation')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Viewpoint nodes need to be made child nodes under HAnimHumanoid with containerField\'iewpoint\'')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyDiving.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Background(
              groundColor_ : MFColor([SFColor(0), SFColor(0.4), SFColor(1)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0.4), SFColor(1)])),

            Viewpoint(
              DEF_ : SFString('DefaultViewpoint'),
              description_ : SFString('Nancy diving, view from right side'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(3)])),

            Group(
              DEF_ : SFString('HighResolution'),
              children_ : [
                Transform(
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                  children_ : [
                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1.57)]),
                      children_ : [
                        Group(
                          DEF_ : SFString('Viewpoints'),
                          children_ : [
                            Viewpoint(
                              description_ : SFString('Nancy diving, view from below'),
                              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(4)])),

                            Viewpoint(
                              description_ : SFString('Nancy diving, view from ahead'),
                              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                              position_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(0)])),

                            Viewpoint(
                              description_ : SFString('Nancy diving, view from left side'),
                              orientation_ : SFRotation([SFDouble(-0.58), SFDouble(0.58), SFDouble(-0.58), SFDouble(2.09)]),
                              position_ : SFVec3f([SFDouble(3), SFDouble(0), SFDouble(0)])),

                            Transform(
                              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(-3), SFDouble(-0.8)]),
                              children_ : [
                                Viewpoint(
                                  description_ : SFString('Nancy diving view from behind'),
                                  orientation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(3.14)]),
                                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),

                            Viewpoint(
                              description_ : SFString('Nancy diving view from above'),
                              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-4)])),

                            Transform(
                              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.45), SFDouble(-0.04)]),
                              children_ : [
                                Viewpoint(
                                  description_ : SFString('Nancy diving, view through her goggles'),
                                  orientation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(3.14)]),
                                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])]),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
                          children_ : [
                            HAnimHumanoid(
                              name_ : SFString('Nancy'),
                              DEF_ : SFString('hanim_Nancy'),
                              version_ : SFString('2.0'),
                              joints_ : [
                                HAnimJoint(
                                  name_ : SFString('humanoid_root'),
                                  DEF_ : SFString('hanim_humanoid_root'),
                                  center_ : SFVec3f([SFDouble(-0.00405), SFDouble(0.855), SFDouble(-0.000113)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('sacroiliac'),
                                      DEF_ : SFString('hanim_sacroiliac'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1.01), SFDouble(-0.0204)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('pelvis'),
                                          DEF_ : SFString('hanim_pelvis'),
                                          children_ : [
                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      DEF_ : SFString('Pants_Color'),
                                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.502)]))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(40), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(40), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(40), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(40), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(40), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(9), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(8), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(8), SFInt32(10), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(12), SFInt32(-1), SFInt32(7), SFInt32(0), SFInt32(47), SFInt32(-1), SFInt32(50), SFInt32(5), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(47), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(50), SFInt32(9), SFInt32(56), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(14), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(19), SFInt32(-1), SFInt32(13), SFInt32(55), SFInt32(17), SFInt32(-1), SFInt32(60), SFInt32(17), SFInt32(55), SFInt32(-1), SFInt32(17), SFInt32(19), SFInt32(13), SFInt32(-1), SFInt32(19), SFInt32(16), SFInt32(12), SFInt32(-1), SFInt32(16), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(14), SFInt32(56), SFInt32(9), SFInt32(-1), SFInt32(56), SFInt32(14), SFInt32(64), SFInt32(-1), SFInt32(17), SFInt32(60), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(17), SFInt32(-1), SFInt32(21), SFInt32(64), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(24), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(24), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(24), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(64), SFInt32(21), SFInt32(69), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(20), SFInt32(63), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(19), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(21), SFInt32(-1), SFInt32(28), SFInt32(69), SFInt32(21), SFInt32(-1), SFInt32(27), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(69), SFInt32(28), SFInt32(79), SFInt32(-1), SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(-1), SFInt32(30), SFInt32(23), SFInt32(33), SFInt32(-1), SFInt32(23), SFInt32(24), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(34), SFInt32(-1), SFInt32(83), SFInt32(27), SFInt32(77), SFInt32(-1), SFInt32(37), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(33), SFInt32(32), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(79), SFInt32(28), SFInt32(-1), SFInt32(79), SFInt32(31), SFInt32(84), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(36), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(37), SFInt32(-1), SFInt32(34), SFInt32(27), SFInt32(83), SFInt32(-1), SFInt32(83), SFInt32(38), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(37), SFInt32(25), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(33), SFInt32(-1), SFInt32(36), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(84), SFInt32(31), SFInt32(89), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(89), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(39), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(39), SFInt32(-1), SFInt32(38), SFInt32(83), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(89), SFInt32(35), SFInt32(-1), SFInt32(40), SFInt32(41), SFInt32(0), SFInt32(-1), SFInt32(40), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(40), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(40), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(40), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(49), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(48), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(48), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(46), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(47), SFInt32(0), SFInt32(-1), SFInt32(41), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(42), SFInt32(48), SFInt32(46), SFInt32(-1), SFInt32(51), SFInt32(44), SFInt32(49), SFInt32(-1), SFInt32(51), SFInt32(48), SFInt32(44), SFInt32(-1), SFInt32(48), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(49), SFInt32(45), SFInt32(50), SFInt32(-1), SFInt32(56), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(57), SFInt32(51), SFInt32(49), SFInt32(-1), SFInt32(58), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(59), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(62), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(62), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(59), SFInt32(62), SFInt32(-1), SFInt32(53), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(51), SFInt32(61), SFInt32(58), SFInt32(-1), SFInt32(49), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(64), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(67), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(68), SFInt32(62), SFInt32(59), SFInt32(-1), SFInt32(60), SFInt32(63), SFInt32(20), SFInt32(-1), SFInt32(60), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(59), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(58), SFInt32(61), SFInt32(67), SFInt32(-1), SFInt32(57), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(66), SFInt32(57), SFInt32(-1), SFInt32(71), SFInt32(63), SFInt32(62), SFInt32(-1), SFInt32(69), SFInt32(65), SFInt32(64), SFInt32(-1), SFInt32(74), SFInt32(66), SFInt32(65), SFInt32(-1), SFInt32(78), SFInt32(68), SFInt32(67), SFInt32(-1), SFInt32(70), SFInt32(71), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(72), SFInt32(27), SFInt32(-1), SFInt32(63), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(68), SFInt32(78), SFInt32(76), SFInt32(-1), SFInt32(67), SFInt32(75), SFInt32(78), SFInt32(-1), SFInt32(66), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(65), SFInt32(73), SFInt32(74), SFInt32(-1), SFInt32(65), SFInt32(69), SFInt32(73), SFInt32(-1), SFInt32(77), SFInt32(27), SFInt32(72), SFInt32(-1), SFInt32(71), SFInt32(82), SFInt32(72), SFInt32(-1), SFInt32(79), SFInt32(73), SFInt32(69), SFInt32(-1), SFInt32(81), SFInt32(75), SFInt32(74), SFInt32(-1), SFInt32(82), SFInt32(71), SFInt32(70), SFInt32(-1), SFInt32(77), SFInt32(72), SFInt32(83), SFInt32(-1), SFInt32(73), SFInt32(79), SFInt32(80), SFInt32(-1), SFInt32(84), SFInt32(80), SFInt32(79), SFInt32(-1), SFInt32(86), SFInt32(75), SFInt32(81), SFInt32(-1), SFInt32(83), SFInt32(72), SFInt32(82), SFInt32(-1), SFInt32(82), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(70), SFInt32(87), SFInt32(82), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(80), SFInt32(84), SFInt32(-1), SFInt32(89), SFInt32(85), SFInt32(80), SFInt32(-1), SFInt32(90), SFInt32(86), SFInt32(85), SFInt32(-1), SFInt32(90), SFInt32(87), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(83), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(90), SFInt32(89), SFInt32(-1), SFInt32(85), SFInt32(89), SFInt32(90), SFInt32(-1), SFInt32(50), SFInt32(45), SFInt32(5), SFInt32(-1), SFInt32(45), SFInt32(40), SFInt32(5), SFInt32(-1), SFInt32(10), SFInt32(8), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(22), SFInt32(14), SFInt32(10), SFInt32(-1), SFInt32(57), SFInt32(66), SFInt32(51), SFInt32(-1), SFInt32(66), SFInt32(61), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(58), SFInt32(48), SFInt32(-1), SFInt32(58), SFInt32(52), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(53), SFInt32(46), SFInt32(-1), SFInt32(53), SFInt32(54), SFInt32(46), SFInt32(-1), SFInt32(76), SFInt32(70), SFInt32(68), SFInt32(-1), SFInt32(70), SFInt32(62), SFInt32(68), SFInt32(-1), SFInt32(29), SFInt32(32), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(35), SFInt32(31), SFInt32(-1), SFInt32(85), SFInt32(81), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(73), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(74), SFInt32(73), SFInt32(-1), SFInt32(39), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(37), SFInt32(34), SFInt32(38), SFInt32(-1), SFInt32(82), SFInt32(87), SFInt32(88), SFInt32(-1), SFInt32(87), SFInt32(90), SFInt32(88), SFInt32(-1), SFInt32(87), SFInt32(78), SFInt32(86), SFInt32(-1), SFInt32(78), SFInt32(75), SFInt32(86), SFInt32(-1), SFInt32(61), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(66), SFInt32(75), SFInt32(67), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(23), SFInt32(30), SFInt32(15), SFInt32(-1), SFInt32(30), SFInt32(22), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(12), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(46), SFInt32(54), SFInt32(47), SFInt32(-1), SFInt32(54), SFInt32(55), SFInt32(47), SFInt32(-1), SFInt32(87), SFInt32(76), SFInt32(78), SFInt32(-1), SFInt32(87), SFInt32(70), SFInt32(76), SFInt32(-1)]),
                                                  creaseAngle_ : 1.14,
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,1.06,0.0218]),SFVec3f([0.0561,1.07,0.00726]),SFVec3f([0.0851,1.07,-0.0115]),SFVec3f([0.104,1.07,-0.0497]),SFVec3f([0.0851,1.07,-0.0851]),SFVec3f([0.032,1.06,-0.0985]),SFVec3f([0.0873,1.04,0.0078]),SFVec3f([0.033,1.04,0.0395]),SFVec3f([0.123,1.05,-0.0405]),SFVec3f([0.0609,1.02,-0.106]),SFVec3f([0.0894,0.996,-0.106]),SFVec3f([0.143,1,-0.0309]),SFVec3f([0.117,1,0.0164]),SFVec3f([0.0314,0.999,0.0502]),SFVec3f([0.0314,0.96,-0.13]),SFVec3f([0.156,0.966,-0.0405]),SFVec3f([0.156,0.968,-0.00724]),SFVec3f([0.0341,0.954,0.0513]),SFVec3f([0.115,0.96,-0.0916]),SFVec3f([0.121,0.926,0.0352]),SFVec3f([0.0357,0.92,0.0497]),SFVec3f([0.0314,0.91,-0.146]),SFVec3f([0.0991,0.91,-0.131]),SFVec3f([0.169,0.883,-0.0448]),SFVec3f([0.169,0.885,-0.00939]),SFVec3f([0.123,0.873,0.0384]),SFVec3f([0.0926,0.872,0.047]),SFVec3f([0.0325,0.873,0.0287]),SFVec3f([0.0293,0.866,-0.142]),SFVec3f([0.102,0.869,-0.131]),SFVec3f([0.129,0.868,-0.103]),SFVec3f([0.0314,0.84,-0.125]),SFVec3f([0.101,0.844,-0.122]),SFVec3f([0.133,0.846,-0.0878]),SFVec3f([0.0653,0.835,0.0132]),SFVec3f([0.0615,0.824,-0.111]),SFVec3f([0.0985,0.823,-0.101]),SFVec3f([0.132,0.826,-0.0448]),SFVec3f([0.0609,0.821,-0.0158]),SFVec3f([0.0599,0.812,-0.0545]),SFVec3f([0,1.08,-0.0266]),SFVec3f([-0.0561,1.07,0.00726]),SFVec3f([-0.0851,1.07,-0.0115]),SFVec3f([-0.104,1.07,-0.0497]),SFVec3f([-0.0851,1.07,-0.0851]),SFVec3f([-0.032,1.06,-0.0985]),SFVec3f([-0.0873,1.04,0.0078]),SFVec3f([-0.033,1.04,0.0395]),SFVec3f([-0.123,1.05,-0.0405]),SFVec3f([-0.0609,1.02,-0.106]),SFVec3f([0,1.02,-0.108]),SFVec3f([-0.0894,0.996,-0.106]),SFVec3f([-0.143,1,-0.0309]),SFVec3f([-0.144,1,-0.011]),SFVec3f([-0.117,1,0.0164]),SFVec3f([-0.0314,0.999,0.0502]),SFVec3f([0,0.961,-0.123]),SFVec3f([-0.0314,0.96,-0.13]),SFVec3f([-0.156,0.966,-0.0405]),SFVec3f([-0.156,0.968,-0.00724]),SFVec3f([-0.0341,0.954,0.0513]),SFVec3f([-0.115,0.96,-0.0916]),SFVec3f([-0.121,0.926,0.0352]),SFVec3f([-0.0357,0.92,0.0497]),SFVec3f([0,0.91,-0.127]),SFVec3f([-0.0314,0.91,-0.146]),SFVec3f([-0.0991,0.91,-0.131]),SFVec3f([-0.167,0.911,-0.0448]),SFVec3f([-0.167,0.912,-0.00671]),SFVec3f([0,0.883,-0.129]),SFVec3f([-0.123,0.873,0.0384]),SFVec3f([-0.0926,0.872,0.047]),SFVec3f([-0.0325,0.873,0.0287]),SFVec3f([-0.0293,0.866,-0.142]),SFVec3f([-0.102,0.869,-0.131]),SFVec3f([-0.129,0.868,-0.103]),SFVec3f([-0.166,0.863,-0.0148]),SFVec3f([0,0.863,-0.00456]),SFVec3f([-0.166,0.862,-0.0459]),SFVec3f([0,0.858,-0.1]),SFVec3f([-0.0314,0.84,-0.125]),SFVec3f([-0.101,0.844,-0.122]),SFVec3f([-0.0653,0.835,0.0132]),SFVec3f([0,0.839,-0.0217]),SFVec3f([0,0.835,-0.0867]),SFVec3f([-0.0615,0.824,-0.111]),SFVec3f([-0.0985,0.823,-0.101]),SFVec3f([-0.132,0.826,-0.0448]),SFVec3f([-0.0609,0.821,-0.0158]),SFVec3f([0,0.831,-0.0626]),SFVec3f([-0.0599,0.812,-0.0545])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_hip'),
                                          DEF_ : SFString('hanim_l_hip'),
                                          center_ : SFVec3f([SFDouble(0.122), SFDouble(0.888271), SFDouble(-0.0693267)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_thigh'),
                                              DEF_ : SFString('hanim_l_thigh'),
                                              children_ : [
                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('Pants_Color'))),
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(10), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(11), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(12), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(13), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(15), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(8), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(4), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(3), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(20), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(19), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(12), SFInt32(-1), SFInt32(23), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(12), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(11), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(10), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(26), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(27), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(29), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(23), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(28), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(32), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(17), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(26), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(27), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(13), SFInt32(-1), SFInt32(22), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(9), SFInt32(15), SFInt32(24), SFInt32(-1), SFInt32(10), SFInt32(9), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(17), SFInt32(-1), SFInt32(6), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(24), SFInt32(31), SFInt32(17), SFInt32(-1), SFInt32(31), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(30), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(31), SFInt32(24), SFInt32(23), SFInt32(-1)]),
                                                      creaseAngle_ : 1.32,
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0969,0.804,-0.0486]),SFVec3f([0.101,0.876,0.0336]),SFVec3f([0.17,0.894,-0.00778]),SFVec3f([0.17,0.891,-0.076]),SFVec3f([0.124,0.858,-0.129]),SFVec3f([0.076,0.843,-0.143]),SFVec3f([0.025,0.819,-0.0889]),SFVec3f([0.0507,0.847,0.0196]),SFVec3f([0.00349,0.826,-0.0287]),SFVec3f([0.0991,0.808,0.0406]),SFVec3f([0.161,0.814,-0.00187]),SFVec3f([0.165,0.808,-0.0755]),SFVec3f([0.122,0.788,-0.126]),SFVec3f([0.00993,0.762,-0.0937]),SFVec3f([0.00993,0.762,-0.0309]),SFVec3f([0.0491,0.777,0.0185]),SFVec3f([0.0755,0.766,-0.139]),SFVec3f([0.13,0.597,-0.00618]),SFVec3f([0.132,0.6,-0.0593]),SFVec3f([0.108,0.603,-0.105]),SFVec3f([0.0722,0.601,-0.118]),SFVec3f([0.0314,0.59,-0.0953]),SFVec3f([0.0239,0.566,-0.0427]),SFVec3f([0.047,0.566,0.0051]),SFVec3f([0.0878,0.581,0.0217]),SFVec3f([0.114,0.499,-0.0132]),SFVec3f([0.116,0.488,-0.061]),SFVec3f([0.103,0.567,-0.0991]),SFVec3f([0.0362,0.557,-0.0926]),SFVec3f([0.025,0.486,-0.047]),SFVec3f([0.0507,0.497,-0.00188]),SFVec3f([0.0862,0.513,0.018]),SFVec3f([0.0733,0.579,-0.108])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('l_knee'),
                                              DEF_ : SFString('hanim_l_knee'),
                                              center_ : SFVec3f([SFDouble(0.0738), SFDouble(0.517), SFDouble(-0.0284)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_calf'),
                                                  DEF_ : SFString('hanim_l_calf'),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('Pants_Color'))),
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(0), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(11), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(12), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(13), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(3), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(5), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(15), SFInt32(-1), SFInt32(22), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(20), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(12), SFInt32(-1), SFInt32(23), SFInt32(9), SFInt32(14), SFInt32(-1), SFInt32(9), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(12), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(9), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(24), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(25), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(26), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(30), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(31), SFInt32(16), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(22), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(21), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(18), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(17), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(16), SFInt32(31), SFInt32(24), SFInt32(-1), SFInt32(33), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(36), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(37), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(29), SFInt32(36), SFInt32(30), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(33), SFInt32(-1), SFInt32(31), SFInt32(37), SFInt32(24), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(37), SFInt32(32), SFInt32(-1), SFInt32(38), SFInt32(37), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(36), SFInt32(38), SFInt32(-1), SFInt32(41), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(42), SFInt32(39), SFInt32(34), SFInt32(-1), SFInt32(44), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(45), SFInt32(38), SFInt32(36), SFInt32(-1), SFInt32(46), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(36), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(35), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(39), SFInt32(42), SFInt32(47), SFInt32(-1), SFInt32(32), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(40), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(45), SFInt32(-1), SFInt32(41), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(44), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(42), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(28), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(28), SFInt32(-1), SFInt32(34), SFInt32(39), SFInt32(27), SFInt32(-1), SFInt32(39), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(34), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(34), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(40), SFInt32(32), SFInt32(46), SFInt32(-1), SFInt32(32), SFInt32(37), SFInt32(46), SFInt32(-1), SFInt32(10), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(11), SFInt32(-1), SFInt32(14), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(8), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(10), SFInt32(-1), SFInt32(15), SFInt32(19), SFInt32(10), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(43), SFInt32(35), SFInt32(47), SFInt32(-1), SFInt32(35), SFInt32(39), SFInt32(47), SFInt32(-1)]),
                                                          creaseAngle_ : 1.57,
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0883,0.532,-0.00349]),SFVec3f([0.0609,0.533,-0.00833]),SFVec3f([0.0814,0.55,-0.0395]),SFVec3f([0.0529,0.536,-0.0368]),SFVec3f([0.0577,0.544,-0.0577]),SFVec3f([0.0722,0.546,-0.0717]),SFVec3f([0.0975,0.54,-0.0647]),SFVec3f([0.105,0.539,-0.0438]),SFVec3f([0.104,0.539,-0.0223]),SFVec3f([0.0862,0.506,0.0158]),SFVec3f([0.101,0.51,-0.0798]),SFVec3f([0.0706,0.51,-0.101]),SFVec3f([0.0406,0.513,-0.0744]),SFVec3f([0.0368,0.51,-0.0357]),SFVec3f([0.0556,0.506,-0.000272]),SFVec3f([0.117,0.508,-0.0169]),SFVec3f([0.0878,0.361,-0.0126]),SFVec3f([0.123,0.363,-0.04]),SFVec3f([0.123,0.363,-0.0663]),SFVec3f([0.107,0.367,-0.107]),SFVec3f([0.0588,0.365,-0.122]),SFVec3f([0.0228,0.358,-0.0926]),SFVec3f([0.0239,0.358,-0.0475]),SFVec3f([0.0497,0.358,-0.0234]),SFVec3f([0.118,0.311,-0.0411]),SFVec3f([0.118,0.309,-0.0685]),SFVec3f([0.105,0.31,-0.108]),SFVec3f([0.0572,0.308,-0.123]),SFVec3f([0.0201,0.309,-0.0937]),SFVec3f([0.0191,0.311,-0.0508]),SFVec3f([0.0475,0.307,-0.0282]),SFVec3f([0.0883,0.309,-0.018]),SFVec3f([0.0959,0.124,-0.04]),SFVec3f([0.0905,0.12,-0.0647]),SFVec3f([0.0738,0.117,-0.0814]),SFVec3f([0.0373,0.121,-0.0636]),SFVec3f([0.0416,0.124,-0.0416]),SFVec3f([0.0744,0.13,-0.0212]),SFVec3f([0.0561,0.13,-0.0245]),SFVec3f([0.0529,0.121,-0.0873]),SFVec3f([0.0948,0.0897,-0.0368]),SFVec3f([0.0916,0.0779,-0.0604]),SFVec3f([0.0717,0.0854,-0.0765]),SFVec3f([0.0406,0.0918,-0.0626]),SFVec3f([0.0384,0.0881,-0.0363]),SFVec3f([0.054,0.0972,-0.0175]),SFVec3f([0.0765,0.11,-0.0169]),SFVec3f([0.0486,0.0999,-0.0835])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('l_ankle'),
                                                  DEF_ : SFString('hanim_l_ankle'),
                                                  center_ : SFVec3f([SFDouble(0.0645), SFDouble(0.0719), SFDouble(-0.048)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_hindfoot'),
                                                      DEF_ : SFString('hanim_l_hindfoot'),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  DEF_ : SFString('Shoe_Color'),
                                                                  ambientIntensity_ : 0.25,
                                                                  diffuseColor_ : SFColor([SFDouble(0.753), SFDouble(1), SFDouble(0.243)]))),
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(0), SFInt32(-1), SFInt32(23), SFInt32(24), SFInt32(0), SFInt32(-1), SFInt32(25), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(25), SFInt32(2), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(16), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(27), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(27), SFInt32(14), SFInt32(-1), SFInt32(28), SFInt32(27), SFInt32(12), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(29), SFInt32(12), SFInt32(-1), SFInt32(8), SFInt32(29), SFInt32(10), SFInt32(-1), SFInt32(6), SFInt32(37), SFInt32(8), SFInt32(-1), SFInt32(24), SFInt32(30), SFInt32(25), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(31), SFInt32(24), SFInt32(-1), SFInt32(32), SFInt32(31), SFInt32(22), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(22), SFInt32(-1), SFInt32(33), SFInt32(32), SFInt32(20), SFInt32(-1), SFInt32(26), SFInt32(33), SFInt32(20), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(26), SFInt32(-1), SFInt32(27), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(35), SFInt32(34), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(35), SFInt32(28), SFInt32(-1), SFInt32(36), SFInt32(35), SFInt32(29), SFInt32(-1), SFInt32(8), SFInt32(36), SFInt32(29), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(3), SFInt32(38), SFInt32(6), SFInt32(-1), SFInt32(39), SFInt32(38), SFInt32(3), SFInt32(-1), SFInt32(30), SFInt32(39), SFInt32(25), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(41), SFInt32(30), SFInt32(-1), SFInt32(42), SFInt32(41), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(42), SFInt32(31), SFInt32(-1), SFInt32(43), SFInt32(42), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(43), SFInt32(32), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(34), SFInt32(44), SFInt32(33), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(34), SFInt32(-1), SFInt32(35), SFInt32(45), SFInt32(34), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(35), SFInt32(-1), SFInt32(36), SFInt32(46), SFInt32(35), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(36), SFInt32(-1), SFInt32(37), SFInt32(47), SFInt32(36), SFInt32(-1), SFInt32(38), SFInt32(47), SFInt32(37), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(38), SFInt32(-1), SFInt32(49), SFInt32(48), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(49), SFInt32(38), SFInt32(-1), SFInt32(40), SFInt32(49), SFInt32(39), SFInt32(-1), SFInt32(30), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(47), SFInt32(48), SFInt32(50), SFInt32(-1), SFInt32(46), SFInt32(47), SFInt32(50), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(50), SFInt32(-1), SFInt32(44), SFInt32(45), SFInt32(50), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(50), SFInt32(-1), SFInt32(42), SFInt32(43), SFInt32(50), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(50), SFInt32(-1), SFInt32(40), SFInt32(41), SFInt32(50), SFInt32(-1), SFInt32(49), SFInt32(40), SFInt32(50), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(11), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(17), SFInt32(19), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(19), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(21), SFInt32(-1), SFInt32(5), SFInt32(7), SFInt32(21), SFInt32(-1), SFInt32(5), SFInt32(21), SFInt32(23), SFInt32(-1), SFInt32(5), SFInt32(23), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(39), SFInt32(-1), SFInt32(4), SFInt32(25), SFInt32(39), SFInt32(-1)]),
                                                              creaseAngle_ : 1.57,
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0529,0,-0.0923]),SFVec3f([0.0863,0,-0.0862]),SFVec3f([0.0727,0,-0.0994]),SFVec3f([0.0863,0.0219,-0.0862]),SFVec3f([0.0727,0.0219,-0.0994]),SFVec3f([0.1,0,-0.0594]),SFVec3f([0.1,0.0219,-0.0594]),SFVec3f([0.113,0,0.0645]),SFVec3f([0.113,0.0219,0.0645]),SFVec3f([0.112,0,0.117]),SFVec3f([0.112,0.0156,0.117]),SFVec3f([0.0701,0,0.146]),SFVec3f([0.0701,0.0156,0.146]),SFVec3f([0.0468,0,0.153]),SFVec3f([0.0468,0.0156,0.153]),SFVec3f([0.0215,0,0.146]),SFVec3f([0.0215,0.0156,0.146]),SFVec3f([0.0165,0,0.125]),SFVec3f([0.0165,0.0156,0.125]),SFVec3f([0.0211,0,0.0377]),SFVec3f([0.0211,0.0219,0.0377]),SFVec3f([0.0393,0,-0.0129]),SFVec3f([0.0393,0.0219,-0.0129]),SFVec3f([0.0433,0,-0.0534]),SFVec3f([0.0433,0.0219,-0.0534]),SFVec3f([0.0529,0.0219,-0.0923]),SFVec3f([0.0305,0.0253,0.0938]),SFVec3f([0.0505,0.0253,0.099]),SFVec3f([0.0854,0.0253,0.0834]),SFVec3f([0.102,0.0253,0.0707]),SFVec3f([0.0568,0.0573,-0.0918]),SFVec3f([0.0492,0.0573,-0.0497]),SFVec3f([0.0435,0.0573,-0.0225]),SFVec3f([0.0442,0.0573,0.0235]),SFVec3f([0.0623,0.0573,0.0366]),SFVec3f([0.0911,0.0573,0.0159]),SFVec3f([0.0962,0.0573,-0.0121]),SFVec3f([0.0911,0.0573,-0.0482]),SFVec3f([0.0758,0.0573,-0.0899]),SFVec3f([0.0676,0.0573,-0.0962]),SFVec3f([0.0578,0.0953,-0.0896]),SFVec3f([0.0489,0.0953,-0.0757]),SFVec3f([0.0447,0.0953,-0.0432]),SFVec3f([0.0451,0.0953,-0.0128]),SFVec3f([0.0624,0.0953,-0.00466]),SFVec3f([0.0857,0.0953,-0.0134]),SFVec3f([0.0953,0.0953,-0.038]),SFVec3f([0.0843,0.0953,-0.0803]),SFVec3f([0.0761,0.0953,-0.0889]),SFVec3f([0.0682,0.0953,-0.0929]),SFVec3f([0.0675,0.13,-0.0608])])))),

                                                        Transform(
                                                          scale_ : SFVec3f([SFDouble(0.015), SFDouble(0.015), SFDouble(0.015)]),
                                                          children_ : [
                                                            Transform(
                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                              translation_ : SFVec3f([SFDouble(6), SFDouble(-0.5), SFDouble(-7.5)]),
                                                              children_ : [
                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(0.753), SFDouble(1), SFDouble(0.243)]))),
                                                                  geometry_ : 
                                                                    Extrusion(
                                                                      DEF_ : SFString('FinExtrusionLeft'),
                                                                      ccw_ : false,
                                                                      creaseAngle_ : 3.14,
                                                                      crossSection_ : MFVec2f([SFVec2f([-1,0]),SFVec2f([-0.8,2]),SFVec2f([-0.7,3]),SFVec2f([0,5.2]),SFVec2f([0.7,3]),SFVec2f([0.8,2]),SFVec2f([1,0]),SFVec2f([0.8,-2]),SFVec2f([0.7,-3]),SFVec2f([0,-5.2]),SFVec2f([-0.7,-3]),SFVec2f([-0.8,-2]),SFVec2f([-1,0])]),
                                                                      scale_ : MFVec2f([SFVec2f([0.25,0.25]),SFVec2f([0.5,0.75]),SFVec2f([0.5,1.2]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35])]),
                                                                      spine_ : MFVec3f([SFVec3f([0,0,1]),SFVec3f([0,0,5]),SFVec3f([0,0,8]),SFVec3f([0,0,12]),SFVec3f([0,0,15]),SFVec3f([0.5,0,18]),SFVec3f([1.5,0,25]),SFVec3f([2.5,0,30]),SFVec3f([4,0,34])])))])])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_hip'),
                                          DEF_ : SFString('hanim_r_hip'),
                                          center_ : SFVec3f([SFDouble(-0.11), SFDouble(0.892362), SFDouble(-0.0732533)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_thigh'),
                                              DEF_ : SFString('hanim_r_thigh'),
                                              children_ : [
                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('Pants_Color'))),
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(5), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(0), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(0), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(10), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(11), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(12), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(13), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(15), SFInt32(-1), SFInt32(7), SFInt32(1), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(15), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(16), SFInt32(12), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(4), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(3), SFInt32(-1), SFInt32(10), SFInt32(9), SFInt32(2), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(20), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(22), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(12), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(26), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(27), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(28), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(23), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(30), SFInt32(31), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(29), SFInt32(-1), SFInt32(25), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(28), SFInt32(-1), SFInt32(24), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(22), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(24), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(23), SFInt32(-1), SFInt32(25), SFInt32(31), SFInt32(17), SFInt32(-1), SFInt32(31), SFInt32(24), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(24), SFInt32(10), SFInt32(-1), SFInt32(24), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(18), SFInt32(17), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(12), SFInt32(19), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(13), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(6), SFInt32(8), SFInt32(-1)]),
                                                      creaseAngle_ : 1.61,
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.0969,0.804,-0.0486]),SFVec3f([-0.101,0.876,0.0336]),SFVec3f([-0.17,0.894,-0.00778]),SFVec3f([-0.17,0.891,-0.076]),SFVec3f([-0.124,0.858,-0.129]),SFVec3f([-0.076,0.843,-0.143]),SFVec3f([-0.025,0.819,-0.0889]),SFVec3f([-0.0507,0.847,0.0196]),SFVec3f([-0.00349,0.826,-0.0287]),SFVec3f([-0.0991,0.808,0.0406]),SFVec3f([-0.161,0.814,-0.00187]),SFVec3f([-0.165,0.808,-0.0755]),SFVec3f([-0.122,0.788,-0.126]),SFVec3f([-0.00993,0.762,-0.0937]),SFVec3f([-0.00993,0.762,-0.0309]),SFVec3f([-0.0491,0.777,0.0185]),SFVec3f([-0.0755,0.766,-0.139]),SFVec3f([-0.13,0.597,-0.00618]),SFVec3f([-0.132,0.6,-0.0593]),SFVec3f([-0.108,0.603,-0.105]),SFVec3f([-0.0722,0.601,-0.118]),SFVec3f([-0.0314,0.59,-0.0953]),SFVec3f([-0.0239,0.566,-0.0427]),SFVec3f([-0.047,0.566,0.0051]),SFVec3f([-0.0878,0.581,0.0217]),SFVec3f([-0.114,0.499,-0.0132]),SFVec3f([-0.116,0.488,-0.061]),SFVec3f([-0.103,0.567,-0.0991]),SFVec3f([-0.0362,0.557,-0.0926]),SFVec3f([-0.025,0.486,-0.047]),SFVec3f([-0.0507,0.497,-0.00188]),SFVec3f([-0.0862,0.513,0.018])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('r_knee'),
                                              DEF_ : SFString('hanim_r_knee'),
                                              center_ : SFVec3f([SFDouble(-0.0699), SFDouble(0.51), SFDouble(-0.0166)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_calf'),
                                                  DEF_ : SFString('hanim_r_calf'),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('Pants_Color'))),
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(14), SFInt32(25), SFInt32(18), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(18), SFInt32(-1), SFInt32(32), SFInt32(27), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(22), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(10), SFInt32(18), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(18), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(14), SFInt32(8), SFInt32(17), SFInt32(-1), SFInt32(6), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(32), SFInt32(39), SFInt32(-1), SFInt32(32), SFInt32(25), SFInt32(42), SFInt32(-1), SFInt32(25), SFInt32(14), SFInt32(30), SFInt32(-1), SFInt32(17), SFInt32(30), SFInt32(14), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(25), SFInt32(-1), SFInt32(42), SFInt32(39), SFInt32(32), SFInt32(-1), SFInt32(39), SFInt32(24), SFInt32(22), SFInt32(-1), SFInt32(24), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(17), SFInt32(8), SFInt32(-1), SFInt32(39), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(17), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(24), SFInt32(39), SFInt32(26), SFInt32(-1), SFInt32(39), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(30), SFInt32(17), SFInt32(34), SFInt32(-1), SFInt32(16), SFInt32(34), SFInt32(17), SFInt32(-1), SFInt32(34), SFInt32(43), SFInt32(30), SFInt32(-1), SFInt32(44), SFInt32(26), SFInt32(39), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(1), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(16), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(7), SFInt32(-1), SFInt32(5), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(46), SFInt32(-1), SFInt32(43), SFInt32(34), SFInt32(36), SFInt32(-1), SFInt32(34), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(36), SFInt32(34), SFInt32(-1), SFInt32(36), SFInt32(46), SFInt32(43), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(45), SFInt32(28), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(7), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(2), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(15), SFInt32(20), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(46), SFInt32(-1), SFInt32(13), SFInt32(2), SFInt32(7), SFInt32(-1), SFInt32(3), SFInt32(20), SFInt32(15), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(13), SFInt32(-1), SFInt32(36), SFInt32(20), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(23), SFInt32(-1), SFInt32(21), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(41), SFInt32(37), SFInt32(40), SFInt32(-1), SFInt32(37), SFInt32(29), SFInt32(31), SFInt32(-1), SFInt32(29), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(31), SFInt32(29), SFInt32(-1), SFInt32(31), SFInt32(40), SFInt32(37), SFInt32(-1), SFInt32(40), SFInt32(38), SFInt32(41), SFInt32(-1), SFInt32(35), SFInt32(23), SFInt32(33), SFInt32(-1), SFInt32(23), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(13), SFInt32(-1), SFInt32(31), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(40), SFInt32(31), SFInt32(11), SFInt32(-1), SFInt32(40), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(23), SFInt32(38), SFInt32(-1), SFInt32(12), SFInt32(38), SFInt32(40), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(38), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(7), SFInt32(-1), SFInt32(21), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(45), SFInt32(33), SFInt32(28), SFInt32(-1), SFInt32(33), SFInt32(21), SFInt32(28), SFInt32(-1), SFInt32(33), SFInt32(45), SFInt32(41), SFInt32(-1), SFInt32(45), SFInt32(37), SFInt32(41), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(35), SFInt32(-1), SFInt32(41), SFInt32(38), SFInt32(35), SFInt32(-1), SFInt32(20), SFInt32(3), SFInt32(47), SFInt32(-1), SFInt32(11), SFInt32(19), SFInt32(47), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(47), SFInt32(-1), SFInt32(13), SFInt32(47), SFInt32(3), SFInt32(-1), SFInt32(13), SFInt32(11), SFInt32(47), SFInt32(-1), SFInt32(4), SFInt32(8), SFInt32(6), SFInt32(-1), SFInt32(26), SFInt32(5), SFInt32(24), SFInt32(-1), SFInt32(5), SFInt32(9), SFInt32(24), SFInt32(-1), SFInt32(6), SFInt32(9), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(5), SFInt32(0), SFInt32(-1)]),
                                                          creaseAngle_ : 1.57,
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.123,0.363,-0.0663]),SFVec3f([-0.123,0.363,-0.04]),SFVec3f([-0.118,0.309,-0.0685]),SFVec3f([-0.118,0.311,-0.0411]),SFVec3f([-0.117,0.508,-0.0169]),SFVec3f([-0.107,0.367,-0.107]),SFVec3f([-0.105,0.539,-0.0438]),SFVec3f([-0.105,0.31,-0.108]),SFVec3f([-0.104,0.539,-0.0223]),SFVec3f([-0.101,0.51,-0.0798]),SFVec3f([-0.0975,0.54,-0.0647]),SFVec3f([-0.0948,0.0897,-0.0368]),SFVec3f([-0.0916,0.0779,-0.0604]),SFVec3f([-0.0905,0.12,-0.0647]),SFVec3f([-0.0883,0.532,-0.00349]),SFVec3f([-0.0883,0.309,-0.018]),SFVec3f([-0.0878,0.361,-0.0126]),SFVec3f([-0.0862,0.506,0.0158]),SFVec3f([-0.0814,0.55,-0.0395]),SFVec3f([-0.0765,0.11,-0.0169]),SFVec3f([-0.0744,0.13,-0.0212]),SFVec3f([-0.0738,0.117,-0.0814]),SFVec3f([-0.0722,0.546,-0.0717]),SFVec3f([-0.0717,0.0854,-0.0765]),SFVec3f([-0.0706,0.51,-0.101]),SFVec3f([-0.0609,0.533,-0.00833]),SFVec3f([-0.0588,0.365,-0.122]),SFVec3f([-0.0577,0.544,-0.0577]),SFVec3f([-0.0572,0.308,-0.123]),SFVec3f([-0.0561,0.13,-0.0245]),SFVec3f([-0.0556,0.506,-0.000272]),SFVec3f([-0.054,0.0972,-0.0175]),SFVec3f([-0.0529,0.536,-0.0368]),SFVec3f([-0.0529,0.121,-0.0873]),SFVec3f([-0.0497,0.358,-0.0234]),SFVec3f([-0.0486,0.0999,-0.0835]),SFVec3f([-0.0475,0.307,-0.0282]),SFVec3f([-0.0416,0.124,-0.0416]),SFVec3f([-0.0406,0.0918,-0.0626]),SFVec3f([-0.0406,0.513,-0.0744]),SFVec3f([-0.0384,0.0881,-0.0363]),SFVec3f([-0.0373,0.121,-0.0636]),SFVec3f([-0.0368,0.51,-0.0357]),SFVec3f([-0.0239,0.358,-0.0475]),SFVec3f([-0.0228,0.358,-0.0926]),SFVec3f([-0.0201,0.309,-0.0937]),SFVec3f([-0.0191,0.311,-0.0508]),SFVec3f([-0.0985,0.125,-0.0375])]))))]),

                                                HAnimJoint(
                                                  name_ : SFString('r_ankle'),
                                                  DEF_ : SFString('hanim_r_ankle'),
                                                  center_ : SFVec3f([SFDouble(-0.064), SFDouble(0.0753), SFDouble(-0.0412)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_hindfoot'),
                                                      DEF_ : SFString('hanim_r_hindfoot'),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('Shoe_Color'))),
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(6), SFInt32(50), SFInt32(0), SFInt32(-1), SFInt32(50), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(50), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(1), SFInt32(8), SFInt32(50), SFInt32(-1), SFInt32(49), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(49), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(46), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(46), SFInt32(10), SFInt32(49), SFInt32(-1), SFInt32(2), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(11), SFInt32(46), SFInt32(-1), SFInt32(3), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(3), SFInt32(12), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(4), SFInt32(13), SFInt32(3), SFInt32(-1), SFInt32(45), SFInt32(14), SFInt32(4), SFInt32(-1), SFInt32(47), SFInt32(15), SFInt32(45), SFInt32(-1), SFInt32(19), SFInt32(15), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(18), SFInt32(-1), SFInt32(5), SFInt32(18), SFInt32(48), SFInt32(-1), SFInt32(6), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(17), SFInt32(-1), SFInt32(0), SFInt32(17), SFInt32(6), SFInt32(-1), SFInt32(14), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(14), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(12), SFInt32(22), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(17), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(16), SFInt32(24), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(18), SFInt32(25), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(21), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(30), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(9), SFInt32(31), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(17), SFInt32(32), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(23), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(37), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(26), SFInt32(38), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(39), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(29), SFInt32(41), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(31), SFInt32(43), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(44), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(44), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(44), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(44), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(44), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(44), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(44), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(44), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(44), SFInt32(34), SFInt32(33), SFInt32(-1), SFInt32(44), SFInt32(33), SFInt32(43), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(45), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(45), SFInt32(2), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(48), SFInt32(46), SFInt32(49), SFInt32(-1), SFInt32(5), SFInt32(48), SFInt32(49), SFInt32(-1), SFInt32(5), SFInt32(49), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(1), SFInt32(50), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(17), SFInt32(7), SFInt32(32), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(32), SFInt32(-1), SFInt32(19), SFInt32(47), SFInt32(48), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(48), SFInt32(-1), SFInt32(20), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(45), SFInt32(15), SFInt32(-1)]),
                                                              creaseAngle_ : 1.57,
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.0727,0,-0.0994]),SFVec3f([-0.1,0,-0.0594]),SFVec3f([-0.0701,0,0.146]),SFVec3f([-0.0468,0,0.153]),SFVec3f([-0.0215,0,0.146]),SFVec3f([-0.0433,0,-0.0534]),SFVec3f([-0.0529,0,-0.0923]),SFVec3f([-0.0727,0.0219,-0.0994]),SFVec3f([-0.0863,0.0219,-0.0862]),SFVec3f([-0.1,0.0219,-0.0594]),SFVec3f([-0.108,0.0219,-0.00479]),SFVec3f([-0.112,0.0156,0.117]),SFVec3f([-0.0701,0.0156,0.146]),SFVec3f([-0.0468,0.0156,0.153]),SFVec3f([-0.0215,0.0156,0.146]),SFVec3f([-0.0165,0.017,0.0777]),SFVec3f([-0.0433,0.0219,-0.0534]),SFVec3f([-0.0529,0.0219,-0.0923]),SFVec3f([-0.0445,0.0273,-0.0189]),SFVec3f([-0.0265,0.0253,0.0549]),SFVec3f([-0.0305,0.0253,0.0938]),SFVec3f([-0.069,0.0253,0.0938]),SFVec3f([-0.102,0.0253,0.0707]),SFVec3f([-0.0568,0.0573,-0.0918]),SFVec3f([-0.0492,0.0573,-0.0497]),SFVec3f([-0.0424,0.0573,-0.00142]),SFVec3f([-0.0478,0.0573,0.0341]),SFVec3f([-0.0623,0.0573,0.0366]),SFVec3f([-0.0864,0.0573,0.0245]),SFVec3f([-0.0962,0.0573,-0.0121]),SFVec3f([-0.0845,0.0573,-0.0764]),SFVec3f([-0.0758,0.0573,-0.0899]),SFVec3f([-0.0676,0.0573,-0.0962]),SFVec3f([-0.0578,0.0953,-0.0896]),SFVec3f([-0.0489,0.0953,-0.0757]),SFVec3f([-0.0459,0.0953,-0.0615]),SFVec3f([-0.0435,0.0953,-0.0292]),SFVec3f([-0.0485,0.0953,-0.00582]),SFVec3f([-0.0624,0.0953,-0.00466]),SFVec3f([-0.0857,0.0953,-0.0134]),SFVec3f([-0.0953,0.0953,-0.038]),SFVec3f([-0.0843,0.0953,-0.0803]),SFVec3f([-0.0761,0.0953,-0.0889]),SFVec3f([-0.0682,0.0953,-0.0929]),SFVec3f([-0.0675,0.13,-0.0608]),SFVec3f([-0.0165,0,0.125]),SFVec3f([-0.112,0,0.117]),SFVec3f([-0.0165,0,0.0777]),SFVec3f([-0.0393,0,-0.0129]),SFVec3f([-0.108,0,-0.00479]),SFVec3f([-0.0863,0,-0.0862])])))),

                                                        Transform(
                                                          scale_ : SFVec3f([SFDouble(0.015), SFDouble(0.015), SFDouble(0.015)]),
                                                          children_ : [
                                                            Transform(
                                                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                              translation_ : SFVec3f([SFDouble(-5), SFDouble(-0.5), SFDouble(-7.5)]),
                                                              children_ : [
                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(0.753), SFDouble(1), SFDouble(0.243)]))),
                                                                  geometry_ : 
                                                                    Extrusion(
                                                                      DEF_ : SFString('FinExtrusionRight'),
                                                                      ccw_ : false,
                                                                      creaseAngle_ : 3.14,
                                                                      crossSection_ : MFVec2f([SFVec2f([-1,0]),SFVec2f([-0.8,2]),SFVec2f([-0.7,3]),SFVec2f([0,5.2]),SFVec2f([0.7,3]),SFVec2f([0.8,2]),SFVec2f([1,0]),SFVec2f([0.8,-2]),SFVec2f([0.7,-3]),SFVec2f([0,-5.2]),SFVec2f([-0.7,-3]),SFVec2f([-0.8,-2]),SFVec2f([-1,0])]),
                                                                      scale_ : MFVec2f([SFVec2f([0.25,0.25]),SFVec2f([0.5,0.75]),SFVec2f([0.5,1.2]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35]),SFVec2f([0.5,1.35])]),
                                                                      spine_ : MFVec3f([SFVec3f([0,0,1]),SFVec3f([0,0,5]),SFVec3f([0,0,8]),SFVec3f([0,0,12]),SFVec3f([0,0,15]),SFVec3f([0.5,0,18]),SFVec3f([1.5,0,25]),SFVec3f([2.5,0,30]),SFVec3f([4,0,34])])))])])])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l1'),
                                          DEF_ : SFString('hanim_l1'),
                                          children_ : [
                                            Transform(
                                              scale_ : SFVec3f([SFDouble(1.05), SFDouble(1.05), SFDouble(1.05)]),
                                              translation_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                                              children_ : [
                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          DEF_ : SFString('WetShirtColor'),
                                                          ambientIntensity_ : 0.25,
                                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.502)])),
                                                      texture_ : 
                                                        ImageTexture(
                                                          DEF_ : SFString('small_logo_Tex'),
                                                          url_ : MFString([SFString("small_logo.gif"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif")]))),
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(12), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(6), SFInt32(-1), SFInt32(12), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(4), SFInt32(7), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(13), SFInt32(-1), SFInt32(4), SFInt32(13), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(19), SFInt32(15), SFInt32(-1), SFInt32(19), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(19), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(20), SFInt32(4), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(20), SFInt32(-1), SFInt32(18), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(21), SFInt32(-1), SFInt32(16), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(22), SFInt32(16), SFInt32(23), SFInt32(-1), SFInt32(8), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(23), SFInt32(8), SFInt32(10), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(28), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(25), SFInt32(33), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(34), SFInt32(-1), SFInt32(33), SFInt32(25), SFInt32(34), SFInt32(-1), SFInt32(24), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(27), SFInt32(35), SFInt32(24), SFInt32(-1), SFInt32(33), SFInt32(36), SFInt32(31), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(26), SFInt32(30), SFInt32(-1), SFInt32(38), SFInt32(37), SFInt32(30), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(40), SFInt32(-1), SFInt32(41), SFInt32(38), SFInt32(30), SFInt32(-1), SFInt32(35), SFInt32(27), SFInt32(42), SFInt32(-1), SFInt32(37), SFInt32(42), SFInt32(27), SFInt32(-1), SFInt32(40), SFInt32(35), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(37), SFInt32(43), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(36), SFInt32(33), SFInt32(45), SFInt32(-1), SFInt32(40), SFInt32(42), SFInt32(47), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(42), SFInt32(-1), SFInt32(47), SFInt32(48), SFInt32(40), SFInt32(-1), SFInt32(39), SFInt32(40), SFInt32(48), SFInt32(-1), SFInt32(47), SFInt32(43), SFInt32(49), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(49), SFInt32(-1), SFInt32(50), SFInt32(49), SFInt32(44), SFInt32(-1), SFInt32(51), SFInt32(46), SFInt32(52), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(45), SFInt32(53), SFInt32(-1), SFInt32(33), SFInt32(53), SFInt32(45), SFInt32(-1), SFInt32(33), SFInt32(39), SFInt32(53), SFInt32(-1), SFInt32(49), SFInt32(54), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(56), SFInt32(52), SFInt32(-1), SFInt32(57), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(57), SFInt32(55), SFInt32(52), SFInt32(-1), SFInt32(58), SFInt32(57), SFInt32(53), SFInt32(-1), SFInt32(59), SFInt32(58), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(39), SFInt32(59), SFInt32(-1), SFInt32(39), SFInt32(48), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(48), SFInt32(54), SFInt32(-1), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(49), SFInt32(61), SFInt32(-1), SFInt32(59), SFInt32(54), SFInt32(61), SFInt32(-1), SFInt32(60), SFInt32(59), SFInt32(61), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(62), SFInt32(50), SFInt32(-1), SFInt32(62), SFInt32(61), SFInt32(49), SFInt32(-1), SFInt32(64), SFInt32(63), SFInt32(50), SFInt32(-1), SFInt32(63), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(66), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(65), SFInt32(67), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(65), SFInt32(-1), SFInt32(64), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(64), SFInt32(70), SFInt32(65), SFInt32(-1), SFInt32(70), SFInt32(68), SFInt32(65), SFInt32(-1), SFInt32(69), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(73), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(66), SFInt32(76), SFInt32(60), SFInt32(-1), SFInt32(67), SFInt32(77), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(77), SFInt32(61), SFInt32(-1), SFInt32(77), SFInt32(66), SFInt32(61), SFInt32(-1), SFInt32(66), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(77), SFInt32(67), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(79), SFInt32(78), SFInt32(77), SFInt32(-1), SFInt32(68), SFInt32(70), SFInt32(80), SFInt32(-1), SFInt32(70), SFInt32(72), SFInt32(80), SFInt32(-1), SFInt32(80), SFInt32(79), SFInt32(68), SFInt32(-1), SFInt32(74), SFInt32(73), SFInt32(81), SFInt32(-1), SFInt32(73), SFInt32(76), SFInt32(82), SFInt32(-1), SFInt32(82), SFInt32(81), SFInt32(73), SFInt32(-1), SFInt32(76), SFInt32(66), SFInt32(83), SFInt32(-1), SFInt32(78), SFInt32(83), SFInt32(66), SFInt32(-1), SFInt32(83), SFInt32(82), SFInt32(76), SFInt32(-1), SFInt32(78), SFInt32(79), SFInt32(84), SFInt32(-1), SFInt32(79), SFInt32(80), SFInt32(84), SFInt32(-1), SFInt32(84), SFInt32(85), SFInt32(78), SFInt32(-1), SFInt32(86), SFInt32(84), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(82), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(88), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(83), SFInt32(89), SFInt32(-1), SFInt32(83), SFInt32(78), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(87), SFInt32(82), SFInt32(-1), SFInt32(78), SFInt32(85), SFInt32(89), SFInt32(-1), SFInt32(90), SFInt32(91), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(94), SFInt32(91), SFInt32(-1), SFInt32(95), SFInt32(96), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(90), SFInt32(95), SFInt32(-1), SFInt32(29), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(96), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(97), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(97), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(97), SFInt32(95), SFInt32(-1), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(98), SFInt32(91), SFInt32(99), SFInt32(-1), SFInt32(101), SFInt32(92), SFInt32(91), SFInt32(-1), SFInt32(98), SFInt32(101), SFInt32(91), SFInt32(-1), SFInt32(101), SFInt32(102), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(102), SFInt32(93), SFInt32(-1), SFInt32(36), SFInt32(103), SFInt32(31), SFInt32(-1), SFInt32(51), SFInt32(103), SFInt32(36), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(100), SFInt32(31), SFInt32(-1), SFInt32(100), SFInt32(103), SFInt32(98), SFInt32(-1), SFInt32(104), SFInt32(90), SFInt32(93), SFInt32(-1), SFInt32(90), SFInt32(104), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(105), SFInt32(41), SFInt32(-1), SFInt32(104), SFInt32(105), SFInt32(95), SFInt32(-1), SFInt32(106), SFInt32(101), SFInt32(98), SFInt32(-1), SFInt32(102), SFInt32(101), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(93), SFInt32(102), SFInt32(-1), SFInt32(93), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(108), SFInt32(104), SFInt32(107), SFInt32(-1), SFInt32(107), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(107), SFInt32(111), SFInt32(-1), SFInt32(107), SFInt32(102), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(102), SFInt32(106), SFInt32(-1), SFInt32(111), SFInt32(112), SFInt32(109), SFInt32(-1), SFInt32(106), SFInt32(112), SFInt32(111), SFInt32(-1), SFInt32(113), SFInt32(110), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(113), SFInt32(114), SFInt32(-1), SFInt32(51), SFInt32(52), SFInt32(115), SFInt32(-1), SFInt32(116), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(117), SFInt32(106), SFInt32(116), SFInt32(-1), SFInt32(118), SFInt32(109), SFInt32(112), SFInt32(-1), SFInt32(119), SFInt32(108), SFInt32(109), SFInt32(-1), SFInt32(108), SFInt32(119), SFInt32(113), SFInt32(-1), SFInt32(109), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(120), SFInt32(113), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(52), SFInt32(56), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(115), SFInt32(52), SFInt32(-1), SFInt32(115), SFInt32(122), SFInt32(123), SFInt32(-1), SFInt32(117), SFInt32(124), SFInt32(125), SFInt32(-1), SFInt32(106), SFInt32(117), SFInt32(125), SFInt32(-1), SFInt32(118), SFInt32(112), SFInt32(106), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(125), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(126), SFInt32(124), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(114), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(127), SFInt32(128), SFInt32(-1), SFInt32(113), SFInt32(120), SFInt32(127), SFInt32(-1), SFInt32(114), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(130), SFInt32(126), SFInt32(123), SFInt32(-1), SFInt32(122), SFInt32(130), SFInt32(123), SFInt32(-1), SFInt32(131), SFInt32(120), SFInt32(121), SFInt32(-1), SFInt32(131), SFInt32(127), SFInt32(120), SFInt32(-1), SFInt32(132), SFInt32(129), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(127), SFInt32(132), SFInt32(-1), SFInt32(74), SFInt32(81), SFInt32(133), SFInt32(-1), SFInt32(81), SFInt32(134), SFInt32(133), SFInt32(-1), SFInt32(121), SFInt32(135), SFInt32(131), SFInt32(-1), SFInt32(136), SFInt32(132), SFInt32(127), SFInt32(-1), SFInt32(132), SFInt32(136), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(71), SFInt32(129), SFInt32(-1), SFInt32(138), SFInt32(129), SFInt32(132), SFInt32(-1), SFInt32(137), SFInt32(138), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(72), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(139), SFInt32(80), SFInt32(-1), SFInt32(71), SFInt32(138), SFInt32(139), SFInt32(-1), SFInt32(140), SFInt32(135), SFInt32(121), SFInt32(-1), SFInt32(140), SFInt32(121), SFInt32(125), SFInt32(-1), SFInt32(141), SFInt32(127), SFInt32(131), SFInt32(-1), SFInt32(127), SFInt32(141), SFInt32(136), SFInt32(-1), SFInt32(131), SFInt32(135), SFInt32(141), SFInt32(-1), SFInt32(142), SFInt32(141), SFInt32(135), SFInt32(-1), SFInt32(143), SFInt32(136), SFInt32(141), SFInt32(-1), SFInt32(136), SFInt32(143), SFInt32(137), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(144), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(144), SFInt32(139), SFInt32(138), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(137), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(134), SFInt32(-1), SFInt32(145), SFInt32(140), SFInt32(146), SFInt32(-1), SFInt32(134), SFInt32(81), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(135), SFInt32(140), SFInt32(-1), SFInt32(135), SFInt32(147), SFInt32(142), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(147), SFInt32(-1), SFInt32(148), SFInt32(80), SFInt32(139), SFInt32(-1), SFInt32(80), SFInt32(148), SFInt32(86), SFInt32(-1), SFInt32(139), SFInt32(144), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(149), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(150), SFInt32(149), SFInt32(-1), SFInt32(151), SFInt32(148), SFInt32(144), SFInt32(-1), SFInt32(144), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(152), SFInt32(145), SFInt32(81), SFInt32(-1), SFInt32(81), SFInt32(88), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(153), SFInt32(142), SFInt32(147), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(153), SFInt32(150), SFInt32(142), SFInt32(-1), SFInt32(154), SFInt32(86), SFInt32(148), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(154), SFInt32(-1), SFInt32(155), SFInt32(28), SFInt32(25), SFInt32(-1), SFInt32(155), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(155), SFInt32(25), SFInt32(32), SFInt32(-1), SFInt32(155), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(155), SFInt32(31), SFInt32(100), SFInt32(-1), SFInt32(155), SFInt32(100), SFInt32(99), SFInt32(-1), SFInt32(155), SFInt32(99), SFInt32(91), SFInt32(-1), SFInt32(155), SFInt32(91), SFInt32(94), SFInt32(-1), SFInt32(155), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(155), SFInt32(96), SFInt32(29), SFInt32(-1), SFInt32(156), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(156), SFInt32(154), SFInt32(151), SFInt32(-1), SFInt32(156), SFInt32(149), SFInt32(150), SFInt32(-1), SFInt32(156), SFInt32(150), SFInt32(153), SFInt32(-1), SFInt32(156), SFInt32(153), SFInt32(152), SFInt32(-1), SFInt32(156), SFInt32(152), SFInt32(88), SFInt32(-1), SFInt32(156), SFInt32(88), SFInt32(87), SFInt32(-1), SFInt32(156), SFInt32(87), SFInt32(89), SFInt32(-1), SFInt32(156), SFInt32(89), SFInt32(85), SFInt32(-1), SFInt32(156), SFInt32(85), SFInt32(84), SFInt32(-1), SFInt32(156), SFInt32(84), SFInt32(86), SFInt32(-1), SFInt32(156), SFInt32(86), SFInt32(154), SFInt32(-1), SFInt32(76), SFInt32(157), SFInt32(60), SFInt32(-1), SFInt32(76), SFInt32(73), SFInt32(158), SFInt32(157), SFInt32(-1), SFInt32(159), SFInt32(158), SFInt32(73), SFInt32(75), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(56), SFInt32(55), SFInt32(-1), SFInt32(60), SFInt32(162), SFInt32(58), SFInt32(-1), SFInt32(162), SFInt32(60), SFInt32(157), SFInt32(-1), SFInt32(161), SFInt32(55), SFInt32(163), SFInt32(-1), SFInt32(57), SFInt32(164), SFInt32(163), SFInt32(55), SFInt32(-1), SFInt32(160), SFInt32(163), SFInt32(164), SFInt32(-1), SFInt32(160), SFInt32(164), SFInt32(159), SFInt32(-1), SFInt32(164), SFInt32(57), SFInt32(165), SFInt32(-1), SFInt32(164), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(57), SFInt32(58), SFInt32(166), SFInt32(165), SFInt32(-1), SFInt32(166), SFInt32(58), SFInt32(162), SFInt32(-1), SFInt32(165), SFInt32(166), SFInt32(159), SFInt32(-1), SFInt32(166), SFInt32(162), SFInt32(157), SFInt32(158), SFInt32(159), SFInt32(-1), SFInt32(140), SFInt32(125), SFInt32(167), SFInt32(-1), SFInt32(124), SFInt32(168), SFInt32(125), SFInt32(-1), SFInt32(168), SFInt32(167), SFInt32(125), SFInt32(-1), SFInt32(124), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(146), SFInt32(140), SFInt32(167), SFInt32(170), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(167), SFInt32(-1), SFInt32(168), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(146), SFInt32(170), SFInt32(171), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(172), SFInt32(134), SFInt32(146), SFInt32(171), SFInt32(-1), SFInt32(134), SFInt32(172), SFInt32(130), SFInt32(-1), SFInt32(169), SFInt32(124), SFInt32(126), SFInt32(173), SFInt32(-1), SFInt32(173), SFInt32(126), SFInt32(130), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(173), SFInt32(130), SFInt32(172), SFInt32(-1), SFInt32(122), SFInt32(74), SFInt32(133), SFInt32(174), SFInt32(-1), SFInt32(133), SFInt32(134), SFInt32(174), SFInt32(-1), SFInt32(130), SFInt32(122), SFInt32(174), SFInt32(-1), SFInt32(134), SFInt32(130), SFInt32(174), SFInt32(-1), SFInt32(122), SFInt32(56), SFInt32(175), SFInt32(74), SFInt32(-1), SFInt32(74), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(175), SFInt32(56), SFInt32(161), SFInt32(176), SFInt32(-1), SFInt32(74), SFInt32(176), SFInt32(75), SFInt32(-1), SFInt32(176), SFInt32(161), SFInt32(163), SFInt32(-1), SFInt32(176), SFInt32(160), SFInt32(75), SFInt32(-1), SFInt32(176), SFInt32(163), SFInt32(160), SFInt32(-1), SFInt32(115), SFInt32(116), SFInt32(177), SFInt32(51), SFInt32(-1), SFInt32(106), SFInt32(98), SFInt32(177), SFInt32(116), SFInt32(-1), SFInt32(51), SFInt32(177), SFInt32(103), SFInt32(-1), SFInt32(177), SFInt32(98), SFInt32(103), SFInt32(-1)]),
                                                      creaseAngle_ : 1.59,
                                                      coord_ : 
                                                        Coordinate(
                                                          DEF_ : SFString('pointValues'),
                                                          point_ : MFVec3f([SFVec3f([0.043,1.25,0.0614]),SFVec3f([0.101,1.25,0.0614]),SFVec3f([0.103,1.31,0.0195]),SFVec3f([0.021,1.32,0.0276]),SFVec3f([0.0572,1.27,-0.153]),SFVec3f([0.0524,1.15,-0.134]),SFVec3f([0,1.19,-0.14]),SFVec3f([0,1.26,-0.147]),SFVec3f([-0.0572,1.27,-0.153]),SFVec3f([-0.0228,1.18,-0.14]),SFVec3f([-0.0524,1.15,-0.134]),SFVec3f([0,1.13,-0.126]),SFVec3f([-0.0228,1.13,-0.124]),SFVec3f([0,1.31,-0.146]),SFVec3f([-0.0545,1.35,-0.138]),SFVec3f([0,1.35,-0.136]),SFVec3f([-0.0593,1.3,-0.151]),SFVec3f([0.0593,1.3,-0.151]),SFVec3f([0.0545,1.35,-0.138]),SFVec3f([-0.0255,1.3,-0.146]),SFVec3f([0.0975,1.26,-0.15]),SFVec3f([0.1,1.3,-0.148]),SFVec3f([-0.1,1.3,-0.148]),SFVec3f([-0.0975,1.26,-0.15]),SFVec3f([-0.117,1.41,-0.0395]),SFVec3f([-0.0674,1.45,-0.0314]),SFVec3f([-0.0926,1.41,-0.0937]),SFVec3f([-0.124,1.4,-0.0706]),SFVec3f([-0.0583,1.44,-0.0615]),SFVec3f([-0.0228,1.46,-0.0872]),SFVec3f([-0.0534,1.42,-0.112]),SFVec3f([-0.0228,1.42,0.00351]),SFVec3f([-0.0593,1.43,-0.0185]),SFVec3f([-0.0787,1.39,-0.00293]),SFVec3f([-0.112,1.4,-0.0131]),SFVec3f([-0.164,1.39,-0.0373]),SFVec3f([-0.0153,1.39,0.0159]),SFVec3f([-0.0953,1.35,-0.136]),SFVec3f([-0.0545,1.35,-0.138]),SFVec3f([-0.139,1.34,0.00297]),SFVec3f([-0.137,1.34,-0.0368]),SFVec3f([0,1.35,-0.136]),SFVec3f([-0.156,1.35,-0.0915]),SFVec3f([-0.132,1.29,-0.127]),SFVec3f([-0.1,1.3,-0.148]),SFVec3f([-0.0418,1.35,0.0168]),SFVec3f([-0.013,1.37,0.0167]),SFVec3f([-0.151,1.28,-0.0878]),SFVec3f([-0.136,1.32,-0.0406]),SFVec3f([-0.124,1.26,-0.125]),SFVec3f([-0.0975,1.26,-0.15]),SFVec3f([0.00228,1.37,0.0167]),SFVec3f([-0.00959,1.32,0.0276]),SFVec3f([-0.0918,1.31,0.0195]),SFVec3f([-0.141,1.25,-0.0744]),SFVec3f([-0.0316,1.25,0.0614]),SFVec3f([-0.00261,1.25,0.0458]),SFVec3f([-0.0611,1.25,0.0668]),SFVec3f([-0.0896,1.25,0.0614]),SFVec3f([-0.126,1.24,0.012]),SFVec3f([-0.126,1.22,0.0141]),SFVec3f([-0.129,1.17,-0.0523]),SFVec3f([-0.115,1.16,-0.105]),SFVec3f([-0.0851,1.18,-0.134]),SFVec3f([-0.0524,1.15,-0.134]),SFVec3f([-0.083,1.13,-0.122]),SFVec3f([-0.117,1.15,-0.018]),SFVec3f([-0.11,1.1,-0.0846]),SFVec3f([-0.0808,1.1,-0.111]),SFVec3f([-0.0228,1.13,-0.124]),SFVec3f([-0.0524,1.1,-0.119]),SFVec3f([0,1.13,-0.126]),SFVec3f([-0.0228,1.1,-0.116]),SFVec3f([-0.0563,1.15,0.0377]),SFVec3f([-0.00476,1.18,0.0458]),SFVec3f([-0.0343,1.18,0.0485]),SFVec3f([-0.0966,1.15,-0.00413]),SFVec3f([-0.12,1.1,-0.0373]),SFVec3f([-0.121,1.07,-0.0356]),SFVec3f([-0.106,1.07,-0.0711]),SFVec3f([-0.0475,1.06,-0.105]),SFVec3f([0,1.08,0.0556]),SFVec3f([-0.0787,1.08,0.0347]),SFVec3f([-0.103,1.08,0.00296]),SFVec3f([-0.0975,1.01,-0.0873]),SFVec3f([-0.134,0.998,-0.0314]),SFVec3f([-0.0475,1.02,-0.109]),SFVec3f([-0.0325,1.02,0.0529]),SFVec3f([0,1.02,0.0422]),SFVec3f([-0.0975,1.02,0.0132]),SFVec3f([0.0926,1.41,-0.0937]),SFVec3f([0.0674,1.45,-0.0314]),SFVec3f([0.117,1.41,-0.0395]),SFVec3f([0.124,1.4,-0.0706]),SFVec3f([0.0583,1.44,-0.0615]),SFVec3f([0.0534,1.42,-0.112]),SFVec3f([0.0228,1.46,-0.0872]),SFVec3f([0,1.4,-0.112]),SFVec3f([0.0787,1.39,-0.00293]),SFVec3f([0.0593,1.43,-0.0185]),SFVec3f([0.0228,1.42,0.00351]),SFVec3f([0.112,1.4,-0.0131]),SFVec3f([0.164,1.39,-0.0373]),SFVec3f([0.0153,1.39,0.0159]),SFVec3f([0.0953,1.35,-0.136]),SFVec3f([0.0545,1.35,-0.138]),SFVec3f([0.139,1.34,0.00297]),SFVec3f([0.156,1.35,-0.0915]),SFVec3f([0.132,1.29,-0.127]),SFVec3f([0.151,1.28,-0.0878]),SFVec3f([0.1,1.3,-0.148]),SFVec3f([0.137,1.34,-0.0368]),SFVec3f([0.147,1.32,-0.0406]),SFVec3f([0.124,1.26,-0.125]),SFVec3f([0.0975,1.26,-0.15]),SFVec3f([0.021,1.32,0.0276]),SFVec3f([0.0532,1.35,0.0168]),SFVec3f([0.103,1.31,0.0195]),SFVec3f([0.135,1.29,-0.0406]),SFVec3f([0.141,1.25,-0.0744]),SFVec3f([0.132,1.18,-0.083]),SFVec3f([0.134,1.19,-0.0572]),SFVec3f([0.014,1.25,0.0458]),SFVec3f([0.043,1.25,0.0614]),SFVec3f([0.101,1.25,0.0614]),SFVec3f([0.138,1.24,0.012]),SFVec3f([0.065,1.23,0.0743]),SFVec3f([0.115,1.16,-0.105]),SFVec3f([0.0851,1.18,-0.134]),SFVec3f([0.0524,1.15,-0.134]),SFVec3f([0.043,1.2,0.0641]),SFVec3f([0.127,1.14,-0.0427]),SFVec3f([0.083,1.13,-0.122]),SFVec3f([0.0162,1.18,0.0458]),SFVec3f([0.0457,1.18,0.0485]),SFVec3f([0.117,1.15,-0.018]),SFVec3f([0.11,1.1,-0.0846]),SFVec3f([0.0808,1.1,-0.111]),SFVec3f([0.0524,1.1,-0.119]),SFVec3f([0.0228,1.1,-0.116]),SFVec3f([0.108,1.15,-0.00413]),SFVec3f([0.12,1.1,-0.0373]),SFVec3f([0.121,1.07,-0.0356]),SFVec3f([0.106,1.07,-0.0711]),SFVec3f([0.0475,1.06,-0.105]),SFVec3f([0.0787,1.08,0.0347]),SFVec3f([0.0844,1.15,0.0297]),SFVec3f([0.103,1.08,0.00296]),SFVec3f([0,1.07,-0.11]),SFVec3f([0.0975,1.01,-0.0873]),SFVec3f([0.134,0.998,-0.0475]),SFVec3f([0.0475,1.02,-0.109]),SFVec3f([0.0325,1.02,0.0529]),SFVec3f([0.0975,1.02,0.0132]),SFVec3f([0,1.02,-0.117]),SFVec3f([0,1.44,-0.0389]),SFVec3f([0,1.01,-0.0259]),SFVec3f([-0.104,1.19,0.0423]),SFVec3f([-0.0778,1.19,0.0642]),SFVec3f([-0.078,1.19,0.0644]),SFVec3f([-0.0493,1.2,0.0664]),SFVec3f([-0.0281,1.22,0.0587]),SFVec3f([-0.104,1.2,0.0568]),SFVec3f([-0.0484,1.21,0.0692]),SFVec3f([-0.0549,1.21,0.0708]),SFVec3f([-0.0806,1.21,0.0713]),SFVec3f([-0.0852,1.21,0.0703]),SFVec3f([0.116,1.19,0.043]),SFVec3f([0.114,1.21,0.0572]),SFVec3f([0.0967,1.21,0.0701]),SFVec3f([0.11,1.19,0.0502]),SFVec3f([0.093,1.19,0.0622]),SFVec3f([0.0832,1.19,0.0662]),SFVec3f([0.0863,1.21,0.0728]),SFVec3f([0.0154,1.21,0.0458]),SFVec3f([-0.00393,1.21,0.0458]),SFVec3f([-0.0145,1.2,0.0512]),SFVec3f([0.0534,1.35,0.0168])])),
                                                      texCoord_ : 
                                                        TextureCoordinate(
                                                          point_ : MFVec2f([SFVec2f([0.1611,-0.02056]),SFVec2f([0.9468,-0.02056]),SFVec2f([0.9739,0.9344]),SFVec2f([-0.137,1.094]),SFVec2f([0.1973,0.6424]),SFVec2f([0.2231,0.04876]),SFVec2f([0.5054,0.2466]),SFVec2f([0.5054,0.5929]),SFVec2f([0.8135,0.6424]),SFVec2f([0.6282,0.1972]),SFVec2f([0.7876,0.04876]),SFVec2f([0.5054,-0.05018]),SFVec2f([0.6282,-0.05018]),SFVec2f([0.5054,0.8403]),SFVec2f([0.7989,1.038]),SFVec2f([0.5054,1.038]),SFVec2f([0.8248,0.7908]),SFVec2f([0.186,0.7908]),SFVec2f([0.2118,1.038]),SFVec2f([0.6427,0.7908]),SFVec2f([-0.01977,0.5929]),SFVec2f([-0.03324,0.7908]),SFVec2f([1.044,0.7908]),SFVec2f([1.031,0.5929]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0])]))))]),

                                            Transform(
                                              scale_ : SFVec3f([SFDouble(1.25), SFDouble(1.1), SFDouble(1.3)]),
                                              translation_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                                              children_ : [
                                                Group(
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(-1.2), SFDouble(0)]),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  DEF_ : SFString('BCLColor'),
                                                                  ambientIntensity_ : 0.25,
                                                                  diffuseColor_ : SFColor([SFDouble(0.0588), SFDouble(0.0588), SFDouble(0.0588)]),
                                                                  shininess_ : 0.5)),
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(12), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(6), SFInt32(-1), SFInt32(12), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(4), SFInt32(7), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(13), SFInt32(-1), SFInt32(4), SFInt32(13), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(19), SFInt32(15), SFInt32(-1), SFInt32(19), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(19), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(20), SFInt32(4), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(20), SFInt32(-1), SFInt32(18), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(21), SFInt32(-1), SFInt32(16), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(22), SFInt32(16), SFInt32(23), SFInt32(-1), SFInt32(8), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(23), SFInt32(8), SFInt32(10), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(28), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(34), SFInt32(-1), SFInt32(33), SFInt32(25), SFInt32(34), SFInt32(-1), SFInt32(24), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(27), SFInt32(35), SFInt32(24), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(26), SFInt32(30), SFInt32(-1), SFInt32(38), SFInt32(37), SFInt32(30), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(41), SFInt32(38), SFInt32(30), SFInt32(-1), SFInt32(35), SFInt32(27), SFInt32(42), SFInt32(-1), SFInt32(37), SFInt32(42), SFInt32(27), SFInt32(-1), SFInt32(42), SFInt32(37), SFInt32(43), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(37), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(42), SFInt32(-1), SFInt32(47), SFInt32(43), SFInt32(49), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(49), SFInt32(-1), SFInt32(50), SFInt32(49), SFInt32(44), SFInt32(-1), SFInt32(33), SFInt32(39), SFInt32(53), SFInt32(-1), SFInt32(49), SFInt32(54), SFInt32(47), SFInt32(-1), SFInt32(59), SFInt32(58), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(39), SFInt32(59), SFInt32(-1), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(49), SFInt32(61), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(62), SFInt32(50), SFInt32(-1), SFInt32(62), SFInt32(61), SFInt32(49), SFInt32(-1), SFInt32(64), SFInt32(63), SFInt32(50), SFInt32(-1), SFInt32(63), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(66), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(65), SFInt32(67), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(65), SFInt32(-1), SFInt32(64), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(64), SFInt32(70), SFInt32(65), SFInt32(-1), SFInt32(70), SFInt32(68), SFInt32(65), SFInt32(-1), SFInt32(69), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(66), SFInt32(76), SFInt32(60), SFInt32(-1), SFInt32(67), SFInt32(77), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(77), SFInt32(61), SFInt32(-1), SFInt32(77), SFInt32(66), SFInt32(61), SFInt32(-1), SFInt32(66), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(77), SFInt32(67), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(79), SFInt32(78), SFInt32(77), SFInt32(-1), SFInt32(68), SFInt32(70), SFInt32(80), SFInt32(-1), SFInt32(70), SFInt32(72), SFInt32(80), SFInt32(-1), SFInt32(80), SFInt32(79), SFInt32(68), SFInt32(-1), SFInt32(73), SFInt32(76), SFInt32(82), SFInt32(-1), SFInt32(76), SFInt32(66), SFInt32(83), SFInt32(-1), SFInt32(78), SFInt32(83), SFInt32(66), SFInt32(-1), SFInt32(83), SFInt32(82), SFInt32(76), SFInt32(-1), SFInt32(78), SFInt32(79), SFInt32(84), SFInt32(-1), SFInt32(79), SFInt32(80), SFInt32(84), SFInt32(-1), SFInt32(84), SFInt32(85), SFInt32(78), SFInt32(-1), SFInt32(86), SFInt32(84), SFInt32(80), SFInt32(-1), SFInt32(82), SFInt32(83), SFInt32(89), SFInt32(-1), SFInt32(83), SFInt32(78), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(87), SFInt32(82), SFInt32(-1), SFInt32(78), SFInt32(85), SFInt32(89), SFInt32(-1), SFInt32(90), SFInt32(91), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(94), SFInt32(91), SFInt32(-1), SFInt32(95), SFInt32(96), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(90), SFInt32(95), SFInt32(-1), SFInt32(29), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(96), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(97), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(97), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(97), SFInt32(95), SFInt32(-1), SFInt32(101), SFInt32(92), SFInt32(91), SFInt32(-1), SFInt32(98), SFInt32(101), SFInt32(91), SFInt32(-1), SFInt32(101), SFInt32(102), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(102), SFInt32(93), SFInt32(-1), SFInt32(104), SFInt32(90), SFInt32(93), SFInt32(-1), SFInt32(90), SFInt32(104), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(105), SFInt32(41), SFInt32(-1), SFInt32(104), SFInt32(105), SFInt32(95), SFInt32(-1), SFInt32(106), SFInt32(101), SFInt32(98), SFInt32(-1), SFInt32(102), SFInt32(101), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(93), SFInt32(102), SFInt32(-1), SFInt32(93), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(108), SFInt32(104), SFInt32(107), SFInt32(-1), SFInt32(107), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(110), SFInt32(-1), SFInt32(113), SFInt32(110), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(113), SFInt32(114), SFInt32(-1), SFInt32(119), SFInt32(108), SFInt32(109), SFInt32(-1), SFInt32(108), SFInt32(119), SFInt32(113), SFInt32(-1), SFInt32(120), SFInt32(113), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(117), SFInt32(124), SFInt32(125), SFInt32(-1), SFInt32(106), SFInt32(117), SFInt32(125), SFInt32(-1), SFInt32(127), SFInt32(114), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(127), SFInt32(128), SFInt32(-1), SFInt32(113), SFInt32(120), SFInt32(127), SFInt32(-1), SFInt32(114), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(131), SFInt32(120), SFInt32(121), SFInt32(-1), SFInt32(131), SFInt32(127), SFInt32(120), SFInt32(-1), SFInt32(132), SFInt32(129), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(127), SFInt32(132), SFInt32(-1), SFInt32(121), SFInt32(135), SFInt32(131), SFInt32(-1), SFInt32(136), SFInt32(132), SFInt32(127), SFInt32(-1), SFInt32(132), SFInt32(136), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(71), SFInt32(129), SFInt32(-1), SFInt32(138), SFInt32(129), SFInt32(132), SFInt32(-1), SFInt32(137), SFInt32(138), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(72), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(139), SFInt32(80), SFInt32(-1), SFInt32(71), SFInt32(138), SFInt32(139), SFInt32(-1), SFInt32(140), SFInt32(135), SFInt32(121), SFInt32(-1), SFInt32(140), SFInt32(121), SFInt32(125), SFInt32(-1), SFInt32(141), SFInt32(127), SFInt32(131), SFInt32(-1), SFInt32(127), SFInt32(141), SFInt32(136), SFInt32(-1), SFInt32(131), SFInt32(135), SFInt32(141), SFInt32(-1), SFInt32(142), SFInt32(141), SFInt32(135), SFInt32(-1), SFInt32(143), SFInt32(136), SFInt32(141), SFInt32(-1), SFInt32(136), SFInt32(143), SFInt32(137), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(144), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(144), SFInt32(139), SFInt32(138), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(137), SFInt32(-1), SFInt32(145), SFInt32(140), SFInt32(146), SFInt32(-1), SFInt32(147), SFInt32(135), SFInt32(140), SFInt32(-1), SFInt32(135), SFInt32(147), SFInt32(142), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(147), SFInt32(-1), SFInt32(148), SFInt32(80), SFInt32(139), SFInt32(-1), SFInt32(80), SFInt32(148), SFInt32(86), SFInt32(-1), SFInt32(139), SFInt32(144), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(149), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(150), SFInt32(149), SFInt32(-1), SFInt32(151), SFInt32(148), SFInt32(144), SFInt32(-1), SFInt32(144), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(153), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(153), SFInt32(142), SFInt32(147), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(153), SFInt32(150), SFInt32(142), SFInt32(-1), SFInt32(154), SFInt32(86), SFInt32(148), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(154), SFInt32(-1), SFInt32(76), SFInt32(157), SFInt32(60), SFInt32(-1), SFInt32(76), SFInt32(73), SFInt32(158), SFInt32(157), SFInt32(-1), SFInt32(60), SFInt32(162), SFInt32(58), SFInt32(-1), SFInt32(162), SFInt32(60), SFInt32(157), SFInt32(-1), SFInt32(166), SFInt32(58), SFInt32(162), SFInt32(-1), SFInt32(165), SFInt32(166), SFInt32(159), SFInt32(-1), SFInt32(166), SFInt32(162), SFInt32(157), SFInt32(158), SFInt32(159), SFInt32(-1), SFInt32(140), SFInt32(125), SFInt32(167), SFInt32(-1), SFInt32(124), SFInt32(168), SFInt32(125), SFInt32(-1), SFInt32(168), SFInt32(167), SFInt32(125), SFInt32(-1), SFInt32(124), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(146), SFInt32(140), SFInt32(167), SFInt32(170), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(167), SFInt32(-1), SFInt32(168), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(146), SFInt32(170), SFInt32(171), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(98), SFInt32(117), SFInt32(106), SFInt32(-1)]),
                                                              creaseAngle_ : 1.59,
                                                              solid_ : false,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('pointValues')),
                                                              texCoord_ : 
                                                                TextureCoordinate(
                                                                  point_ : MFVec2f([SFVec2f([0.1611,-0.02056]),SFVec2f([0.9468,-0.02056]),SFVec2f([0.9739,0.9344]),SFVec2f([-0.137,1.094]),SFVec2f([0.1973,0.6424]),SFVec2f([0.2231,0.04876]),SFVec2f([0.5054,0.2466]),SFVec2f([0.5054,0.5929]),SFVec2f([0.8135,0.6424]),SFVec2f([0.6282,0.1972]),SFVec2f([0.7876,0.04876]),SFVec2f([0.5054,-0.05018]),SFVec2f([0.6282,-0.05018]),SFVec2f([0.5054,0.8403]),SFVec2f([0.7989,1.038]),SFVec2f([0.5054,1.038]),SFVec2f([0.8248,0.7908]),SFVec2f([0.186,0.7908]),SFVec2f([0.2118,1.038]),SFVec2f([0.6427,0.7908]),SFVec2f([-0.01977,0.5929]),SFVec2f([-0.03324,0.7908]),SFVec2f([1.044,0.7908]),SFVec2f([1.031,0.5929]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0])]))))]),

                                                    Transform(
                                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                      scale_ : SFVec3f([SFDouble(2), SFDouble(1.5), SFDouble(1.5)]),
                                                      translation_ : SFVec3f([SFDouble(0.13), SFDouble(0.22), SFDouble(-0.1)]),
                                                      children_ : [
                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.4)]),
                                                          children_ : [
                                                            Shape(
                                                              DEF_ : SFString('BCLSnorkelPad'),
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('BCLColor'))),
                                                              geometry_ : 
                                                                Extrusion(
                                                                  crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013])]),
                                                                  spine_ : MFVec3f([SFVec3f([-0.03,0.01,0]),SFVec3f([-0.005,0.04,0]),SFVec3f([0,0.06,0]),SFVec3f([-0.01,0.075,0])])))])]),

                                                    Transform(
                                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                                      translation_ : SFVec3f([SFDouble(0.07), SFDouble(0.08), SFDouble(0.125)]),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  DEF_ : SFString('BCLSnorkel'),
                                                                  diffuseColor_ : SFColor([SFDouble(0.25), SFDouble(0.25), SFDouble(0.25)]),
                                                                  shininess_ : 0.5,
                                                                  transparency_ : 0.1)),
                                                          geometry_ : 
                                                            Extrusion(
                                                              crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013]),SFVec2f([-0.00494,-0.01196]),SFVec2f([-0.00923,-0.00923]),SFVec2f([-0.01196,-0.00494]),SFVec2f([-0.013,0]),SFVec2f([-0.01196,0.00494]),SFVec2f([-0.00923,0.00923]),SFVec2f([-0.00494,0.01196]),SFVec2f([0,0.013])]),
                                                              scale_ : MFVec2f([SFVec2f([0.8,0.8]),SFVec2f([1,1])]),
                                                              spine_ : MFVec3f([SFVec3f([0.03,0.03,-0.05]),SFVec3f([0.05,0.2,0])])))]),

                                                    Group(
                                                      DEF_ : SFString('buckle'),
                                                      children_ : [
                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.68)]),
                                                          translation_ : SFVec3f([SFDouble(-0.08), SFDouble(0.1), SFDouble(0.029)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  DEF_ : SFString('buckleHolder'),
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(0.25), SFDouble(0.25), SFDouble(0.25)]))),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.03), SFDouble(0.03), SFDouble(0.005)])))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.68)]),
                                                          translation_ : SFVec3f([SFDouble(0.03), SFDouble(0.1), SFDouble(0.027)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('buckleHolder')),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.15), SFDouble(0.03), SFDouble(0.001)])))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.68)]),
                                                          translation_ : SFVec3f([SFDouble(-0.045), SFDouble(0.1), SFDouble(0.028)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  DEF_ : SFString('pin'),
                                                                  material_ : 
                                                                    Material()),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.02), SFDouble(0.028), SFDouble(0.005)])))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                          translation_ : SFVec3f([SFDouble(-0.06), SFDouble(0.1), SFDouble(0.029)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('pin')),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.0024))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                          translation_ : SFVec3f([SFDouble(-0.06), SFDouble(0.109), SFDouble(0.0217)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('pin')),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.0024))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                                          translation_ : SFVec3f([SFDouble(-0.06), SFDouble(0.091), SFDouble(0.036)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('pin')),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.0024))])]),

                                                    Group(
                                                      DEF_ : SFString('buckleBelt'),
                                                      children_ : [
                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-0.68)]),
                                                          translation_ : SFVec3f([SFDouble(-0.07), SFDouble(-0.12), SFDouble(0.038)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('buckleHolder')),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.04), SFDouble(0.1), SFDouble(0.005)])))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.005), SFDouble(-0.12), SFDouble(0.053)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('buckleHolder')),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.12), SFDouble(0.11), SFDouble(0.001)])))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.68)]),
                                                          translation_ : SFVec3f([SFDouble(0.075), SFDouble(-0.12), SFDouble(0.038)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  USE_ : SFString('buckleHolder')),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.04), SFDouble(0.1), SFDouble(0.005)])))])])])]),

                                            Transform(
                                              DEF_ : SFString('ScubaTank'),
                                              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                                              scale_ : SFVec3f([SFDouble(0.8), SFDouble(0.8), SFDouble(0.8)]),
                                              translation_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                                              children_ : [
                                                Inline(
                                                  url_ : MFString([SFString("ScubaTank.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"), SFString("ScubaTank.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.wrl")]))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_shoulder'),
                                          DEF_ : SFString('hanim_l_shoulder'),
                                          center_ : SFVec3f([SFDouble(0.167), SFDouble(1.36), SFDouble(-0.0518)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_upperarm'),
                                              DEF_ : SFString('hanim_l_upperarm'),
                                              children_ : [
                                                Transform(
                                                  DEF_ : SFString('l_upperarm_adjust'),
                                                  center_ : SFVec3f([SFDouble(0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.119)]),
                                                  translation_ : SFVec3f([SFDouble(0.167), SFDouble(1.36), SFDouble(-0.0518)]),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('WetShirtColor'))),
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(7), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(8), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(10), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(10), SFInt32(6), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(3), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(11), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(14), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(15), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(11), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(8), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(8), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(7), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(21), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(11), SFInt32(-1), SFInt32(15), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(14), SFInt32(20), SFInt32(-1), SFInt32(14), SFInt32(13), SFInt32(20), SFInt32(-1), SFInt32(12), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(17), SFInt32(-1), SFInt32(12), SFInt32(18), SFInt32(16), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(7), SFInt32(-1), SFInt32(16), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(19), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(21), SFInt32(-1), SFInt32(19), SFInt32(17), SFInt32(21), SFInt32(-1)]),
                                                          creaseAngle_ : 1.65,
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.174,1.37,-0.0625]),SFVec3f([0.185,1.38,-0.0395]),SFVec3f([0.156,1.39,-0.0464]),SFVec3f([0.174,1.37,-0.0158]),SFVec3f([0.154,1.37,-0.0185]),SFVec3f([0.157,1.38,-0.0733]),SFVec3f([0.182,1.33,-0.0728]),SFVec3f([0.151,1.33,-0.0937]),SFVec3f([0.15,1.34,-0.000787]),SFVec3f([0.185,1.33,-0.00025]),SFVec3f([0.201,1.33,-0.0411]),SFVec3f([0.189,1.26,-0.0808]),SFVec3f([0.155,1.26,-0.0867]),SFVec3f([0.151,1.26,-0.000789]),SFVec3f([0.19,1.26,-0.00401]),SFVec3f([0.209,1.26,-0.0427]),SFVec3f([0.141,1.26,-0.0421]),SFVec3f([0.203,1.08,-0.0744]),SFVec3f([0.162,1.05,-0.0561]),SFVec3f([0.169,1.08,-0.00885]),SFVec3f([0.208,1.07,-0.00133]),SFVec3f([0.221,1.08,-0.0352])]))))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_elbow'),
                                              DEF_ : SFString('hanim_l_elbow'),
                                              center_ : SFVec3f([SFDouble(0.196), SFDouble(1.07), SFDouble(-0.0518)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_forearm'),
                                                  DEF_ : SFString('hanim_l_forearm'),
                                                  children_ : [
                                                    Transform(
                                                      DEF_ : SFString('l_forearm_adjust'),
                                                      center_ : SFVec3f([SFDouble(0.198), SFDouble(0.961), SFDouble(-0.0405)]),
                                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                                      translation_ : SFVec3f([SFDouble(0.196), SFDouble(1.07), SFDouble(-0.0518)]),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('WetShirtColor'))),
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(0), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(10), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(11), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(3), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(5), SFInt32(8), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(17), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(13), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(10), SFInt32(-1), SFInt32(16), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(9), SFInt32(-1), SFInt32(15), SFInt32(9), SFInt32(12), SFInt32(-1), SFInt32(18), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(18), SFInt32(7), SFInt32(11), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(8), SFInt32(-1), SFInt32(15), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(10), SFInt32(-1)]),
                                                              creaseAngle_ : 1.75,
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.177,1.09,-0.0609]),SFVec3f([0.202,1.1,-0.0566]),SFVec3f([0.189,1.1,-0.0395]),SFVec3f([0.213,1.1,-0.025]),SFVec3f([0.203,1.1,-0.0158]),SFVec3f([0.182,1.09,-0.00563]),SFVec3f([0.167,1.09,-0.0325]),SFVec3f([0.176,1.08,-0.0781]),SFVec3f([0.16,1.06,-0.0373]),SFVec3f([0.214,1.07,-0.00402]),SFVec3f([0.228,1.07,-0.0319]),SFVec3f([0.208,1.08,-0.0765]),SFVec3f([0.179,1.07,-0.00294]),SFVec3f([0.21,0.818,-0.0615]),SFVec3f([0.201,0.82,-0.0405]),SFVec3f([0.205,0.819,-0.00832]),SFVec3f([0.224,0.818,-0.00778]),SFVec3f([0.237,0.82,-0.0282]),SFVec3f([0.231,0.819,-0.0609])]))))])]),

                                                HAnimJoint(
                                                  name_ : SFString('l_wrist'),
                                                  DEF_ : SFString('hanim_l_wrist'),
                                                  center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('l_hand'),
                                                      DEF_ : SFString('hanim_l_hand'),
                                                      children_ : [
                                                        Transform(
                                                          DEF_ : SFString('l_hand_adjust'),
                                                          center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                                          rotation_ : SFRotation([SFDouble(-0.06361), SFDouble(-0.9967), SFDouble(0.04988), SFDouble(1.333)]),
                                                          translation_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      DEF_ : SFString('Skin_Color'),
                                                                      ambientIntensity_ : 0.25,
                                                                      diffuseColor_ : SFColor([SFDouble(0.749), SFDouble(0.601), SFDouble(0.462)]))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(17), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(31), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(26), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(23), SFInt32(-1), SFInt32(28), SFInt32(27), SFInt32(23), SFInt32(-1), SFInt32(28), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(11), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(17), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(11), SFInt32(9), SFInt32(-1), SFInt32(31), SFInt32(19), SFInt32(9), SFInt32(-1), SFInt32(31), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(4), SFInt32(31), SFInt32(7), SFInt32(-1), SFInt32(4), SFInt32(7), SFInt32(3), SFInt32(-1), SFInt32(30), SFInt32(21), SFInt32(19), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(19), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(16), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(10), SFInt32(16), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(10), SFInt32(18), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(1), SFInt32(-1), SFInt32(39), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(40), SFInt32(-1), SFInt32(37), SFInt32(40), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(36), SFInt32(41), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(35), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(34), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(33), SFInt32(44), SFInt32(32), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(44), SFInt32(-1), SFInt32(20), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(20), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(47), SFInt32(18), SFInt32(20), SFInt32(-1), SFInt32(47), SFInt32(20), SFInt32(46), SFInt32(-1), SFInt32(8), SFInt32(47), SFInt32(1), SFInt32(-1), SFInt32(22), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(23), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(37), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(40), SFInt32(38), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(30), SFInt32(-1), SFInt32(47), SFInt32(31), SFInt32(1), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(31), SFInt32(-1), SFInt32(29), SFInt32(30), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(45), SFInt32(31), SFInt32(46), SFInt32(-1), SFInt32(45), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(41), SFInt32(-1), SFInt32(29), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(25), SFInt32(39), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(39), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(23), SFInt32(34), SFInt32(22), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(32), SFInt32(21), SFInt32(-1), SFInt32(32), SFInt32(20), SFInt32(21), SFInt32(-1)]),
                                                                  creaseAngle_ : 1.48,
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.211,0.828,-0.0434]),SFVec3f([0.194,0.81,-0.0445]),SFVec3f([0.237,0.82,-0.0425]),SFVec3f([0.236,0.82,-0.0237]),SFVec3f([0.194,0.81,-0.0254]),SFVec3f([0.21,0.828,-0.0247]),SFVec3f([0.252,0.801,-0.0424]),SFVec3f([0.252,0.801,-0.0231]),SFVec3f([0.269,0.765,-0.0426]),SFVec3f([0.268,0.765,-0.0225]),SFVec3f([0.273,0.732,-0.0395]),SFVec3f([0.272,0.732,-0.0223]),SFVec3f([0.27,0.704,-0.0342]),SFVec3f([0.27,0.704,-0.0224]),SFVec3f([0.262,0.703,-0.0345]),SFVec3f([0.261,0.703,-0.0227]),SFVec3f([0.256,0.717,-0.0389]),SFVec3f([0.256,0.717,-0.023]),SFVec3f([0.255,0.738,-0.0408]),SFVec3f([0.255,0.738,-0.023]),SFVec3f([0.251,0.734,-0.0406]),SFVec3f([0.251,0.734,-0.0232]),SFVec3f([0.251,0.692,-0.0232]),SFVec3f([0.248,0.657,-0.0233]),SFVec3f([0.24,0.645,-0.0236]),SFVec3f([0.226,0.637,-0.0241]),SFVec3f([0.213,0.639,-0.0246]),SFVec3f([0.197,0.652,-0.0253]),SFVec3f([0.188,0.669,-0.0256]),SFVec3f([0.184,0.697,-0.0258]),SFVec3f([0.183,0.73,-0.0258]),SFVec3f([0.187,0.77,-0.0257]),SFVec3f([0.244,0.696,-0.0375]),SFVec3f([0.244,0.692,-0.0372]),SFVec3f([0.242,0.661,-0.0345]),SFVec3f([0.241,0.658,-0.0343]),SFVec3f([0.241,0.656,-0.0341]),SFVec3f([0.231,0.646,-0.0336]),SFVec3f([0.206,0.65,-0.0349]),SFVec3f([0.218,0.644,-0.034]),SFVec3f([0.205,0.652,-0.0352]),SFVec3f([0.198,0.667,-0.0367]),SFVec3f([0.195,0.691,-0.039]),SFVec3f([0.194,0.696,-0.0395]),SFVec3f([0.193,0.725,-0.042]),SFVec3f([0.193,0.731,-0.0425]),SFVec3f([0.197,0.765,-0.0449]),SFVec3f([0.197,0.77,-0.0453])]))))])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_shoulder'),
                                          DEF_ : SFString('hanim_r_shoulder'),
                                          center_ : SFVec3f([SFDouble(-0.167), SFDouble(1.36), SFDouble(-0.0458)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_upperarm'),
                                              DEF_ : SFString('hanim_r_upperarm'),
                                              children_ : [
                                                Transform(
                                                  DEF_ : SFString('r_upperarm_adjust'),
                                                  center_ : SFVec3f([SFDouble(-0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.0836)]),
                                                  translation_ : SFVec3f([SFDouble(-0.167), SFDouble(1.36), SFDouble(-0.0458)]),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('WetShirtColor'))),
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(14), SFInt32(10), SFInt32(20), SFInt32(-1), SFInt32(10), SFInt32(13), SFInt32(20), SFInt32(-1), SFInt32(13), SFInt32(22), SFInt32(20), SFInt32(-1), SFInt32(19), SFInt32(14), SFInt32(20), SFInt32(-1), SFInt32(14), SFInt32(19), SFInt32(12), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(24), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(25), SFInt32(-1), SFInt32(22), SFInt32(13), SFInt32(25), SFInt32(-1), SFInt32(13), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(10), SFInt32(14), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(5), SFInt32(14), SFInt32(-1), SFInt32(5), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(11), SFInt32(25), SFInt32(13), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(20), SFInt32(-1), SFInt32(24), SFInt32(12), SFInt32(19), SFInt32(-1), SFInt32(12), SFInt32(24), SFInt32(9), SFInt32(-1), SFInt32(25), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(11), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(8), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(23), SFInt32(25), SFInt32(-1), SFInt32(23), SFInt32(27), SFInt32(25), SFInt32(-1), SFInt32(21), SFInt32(9), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(21), SFInt32(7), SFInt32(-1), SFInt32(27), SFInt32(23), SFInt32(18), SFInt32(-1), SFInt32(23), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(2), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(6), SFInt32(18), SFInt32(8), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(16), SFInt32(7), SFInt32(21), SFInt32(-1), SFInt32(7), SFInt32(16), SFInt32(4), SFInt32(-1), SFInt32(16), SFInt32(26), SFInt32(17), SFInt32(-1), SFInt32(26), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(18), SFInt32(6), SFInt32(3), SFInt32(-1), SFInt32(6), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(26), SFInt32(-1), SFInt32(17), SFInt32(4), SFInt32(16), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(15), SFInt32(4), SFInt32(17), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(27), SFInt32(21), SFInt32(24), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(21), SFInt32(-1), SFInt32(26), SFInt32(16), SFInt32(21), SFInt32(-1)]),
                                                          creaseAngle_ : 1.53,
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.221,1.08,-0.0352]),SFVec3f([-0.214,1.14,-0.0405]),SFVec3f([-0.209,1.26,-0.0427]),SFVec3f([-0.208,1.07,-0.00133]),SFVec3f([-0.203,1.08,-0.0744]),SFVec3f([-0.201,1.33,-0.0411]),SFVec3f([-0.198,1.14,-0.0024]),SFVec3f([-0.198,1.13,-0.076]),SFVec3f([-0.19,1.26,-0.00401]),SFVec3f([-0.189,1.26,-0.0808]),SFVec3f([-0.185,1.38,-0.0395]),SFVec3f([-0.185,1.33,-0.00025]),SFVec3f([-0.182,1.33,-0.0728]),SFVec3f([-0.174,1.37,-0.0158]),SFVec3f([-0.174,1.37,-0.0625]),SFVec3f([-0.169,1.08,-0.00885]),SFVec3f([-0.167,1.13,-0.0744]),SFVec3f([-0.162,1.05,-0.0561]),SFVec3f([-0.16,1.13,-0.000793]),SFVec3f([-0.157,1.38,-0.0733]),SFVec3f([-0.156,1.39,-0.0464]),SFVec3f([-0.155,1.26,-0.0867]),SFVec3f([-0.154,1.37,-0.0185]),SFVec3f([-0.151,1.26,-0.000789]),SFVec3f([-0.151,1.33,-0.0937]),SFVec3f([-0.15,1.34,-0.000787]),SFVec3f([-0.15,1.13,-0.0411]),SFVec3f([-0.141,1.26,-0.0421])]))))])]),

                                            HAnimJoint(
                                              name_ : SFString('r_elbow'),
                                              DEF_ : SFString('hanim_r_elbow'),
                                              center_ : SFVec3f([SFDouble(-0.192), SFDouble(1.07), SFDouble(-0.0498)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_forearm'),
                                                  DEF_ : SFString('hanim_r_forearm'),
                                                  children_ : [
                                                    Transform(
                                                      DEF_ : SFString('r_forearm_adjust'),
                                                      center_ : SFVec3f([SFDouble(-0.198), SFDouble(0.961), SFDouble(-0.0397)]),
                                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1254)]),
                                                      translation_ : SFVec3f([SFDouble(-0.192), SFDouble(1.07), SFDouble(-0.0498)]),
                                                      children_ : [
                                                        Shape(
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('WetShirtColor'))),
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(20), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(8), SFInt32(15), SFInt32(-1), SFInt32(8), SFInt32(12), SFInt32(15), SFInt32(-1), SFInt32(12), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(15), SFInt32(-1), SFInt32(22), SFInt32(20), SFInt32(15), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(24), SFInt32(-1), SFInt32(18), SFInt32(12), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(13), SFInt32(3), SFInt32(-1), SFInt32(13), SFInt32(20), SFInt32(10), SFInt32(-1), SFInt32(21), SFInt32(10), SFInt32(20), SFInt32(-1), SFInt32(10), SFInt32(3), SFInt32(13), SFInt32(-1), SFInt32(3), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(24), SFInt32(18), SFInt32(-1), SFInt32(24), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(21), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(19), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(10), SFInt32(5), SFInt32(-1), SFInt32(10), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(5), SFInt32(10), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(19), SFInt32(-1), SFInt32(16), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(23), SFInt32(17), SFInt32(21), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(17), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(1), SFInt32(4), SFInt32(6), SFInt32(-1), SFInt32(4), SFInt32(16), SFInt32(6), SFInt32(-1), SFInt32(23), SFInt32(9), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(23), SFInt32(14), SFInt32(-1), SFInt32(23), SFInt32(16), SFInt32(11), SFInt32(-1), SFInt32(4), SFInt32(11), SFInt32(16), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(23), SFInt32(-1), SFInt32(11), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(11), SFInt32(0), SFInt32(14), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(2), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1)]),
                                                              creaseAngle_ : 1.73,
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([-0.237,0.82,-0.0282]),SFVec3f([-0.235,1.02,-0.033]),SFVec3f([-0.231,0.819,-0.0609]),SFVec3f([-0.228,1.07,-0.0319]),SFVec3f([-0.224,0.818,-0.00778]),SFVec3f([-0.221,1.01,-0.0744]),SFVec3f([-0.218,1.01,-0.00133]),SFVec3f([-0.214,1.07,-0.00402]),SFVec3f([-0.213,1.1,-0.025]),SFVec3f([-0.21,0.818,-0.0615]),SFVec3f([-0.208,1.08,-0.0765]),SFVec3f([-0.205,0.819,-0.00832]),SFVec3f([-0.203,1.1,-0.0158]),SFVec3f([-0.202,1.1,-0.0566]),SFVec3f([-0.201,0.82,-0.0405]),SFVec3f([-0.189,1.1,-0.0395]),SFVec3f([-0.183,1.01,-0.00831]),SFVec3f([-0.183,1.01,-0.0781]),SFVec3f([-0.182,1.09,-0.00563]),SFVec3f([-0.179,1.07,-0.00294]),SFVec3f([-0.177,1.09,-0.0609]),SFVec3f([-0.176,1.08,-0.0781]),SFVec3f([-0.167,1.09,-0.0325]),SFVec3f([-0.166,1,-0.0405]),SFVec3f([-0.16,1.06,-0.0373])]))))])]),

                                                HAnimJoint(
                                                  name_ : SFString('r_wrist'),
                                                  DEF_ : SFString('hanim_r_wrist'),
                                                  center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('r_hand'),
                                                      DEF_ : SFString('hanim_r_hand'),
                                                      children_ : [
                                                        Transform(
                                                          DEF_ : SFString('r_hand_adjust'),
                                                          center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                                          rotation_ : SFRotation([SFDouble(-0.09024), SFDouble(0.994), SFDouble(-0.0624), SFDouble(1.216)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('Skin_Color'))),
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(10), SFInt32(9), SFInt32(0), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(1), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(1), SFInt32(11), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(2), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(3), SFInt32(13), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(4), SFInt32(14), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(5), SFInt32(15), SFInt32(4), SFInt32(-1), SFInt32(6), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(7), SFInt32(17), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(18), SFInt32(7), SFInt32(-1), SFInt32(10), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(10), SFInt32(30), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(31), SFInt32(-1), SFInt32(0), SFInt32(31), SFInt32(10), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(24), SFInt32(-1), SFInt32(21), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(21), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(14), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(18), SFInt32(29), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(29), SFInt32(-1), SFInt32(12), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(30), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(28), SFInt32(-1), SFInt32(18), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(32), SFInt32(38), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(33), SFInt32(39), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(34), SFInt32(40), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(35), SFInt32(41), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(36), SFInt32(42), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(37), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(8), SFInt32(-1), SFInt32(44), SFInt32(8), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(8), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(46), SFInt32(7), SFInt32(2), SFInt32(-1), SFInt32(46), SFInt32(2), SFInt32(47), SFInt32(-1), SFInt32(9), SFInt32(47), SFInt32(2), SFInt32(-1), SFInt32(25), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(25), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(33), SFInt32(-1), SFInt32(24), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(40), SFInt32(39), SFInt32(21), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(21), SFInt32(-1), SFInt32(43), SFInt32(19), SFInt32(8), SFInt32(-1), SFInt32(43), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(43), SFInt32(42), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(41), SFInt32(-1), SFInt32(20), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(38), SFInt32(22), SFInt32(39), SFInt32(-1), SFInt32(22), SFInt32(21), SFInt32(39), SFInt32(-1), SFInt32(32), SFInt32(23), SFInt32(38), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(38), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(35), SFInt32(-1), SFInt32(27), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(27), SFInt32(37), SFInt32(28), SFInt32(-1), SFInt32(37), SFInt32(44), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(29), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(29), SFInt32(9), SFInt32(30), SFInt32(-1), SFInt32(29), SFInt32(47), SFInt32(9), SFInt32(-1), SFInt32(28), SFInt32(45), SFInt32(29), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(29), SFInt32(-1)]),
                                                                  creaseAngle_ : 1.57,
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([-0.237,0.82,-0.0425]),SFVec3f([-0.252,0.801,-0.0424]),SFVec3f([-0.269,0.765,-0.0426]),SFVec3f([-0.273,0.732,-0.0395]),SFVec3f([-0.27,0.704,-0.0342]),SFVec3f([-0.262,0.703,-0.0345]),SFVec3f([-0.256,0.717,-0.0389]),SFVec3f([-0.255,0.738,-0.0408]),SFVec3f([-0.251,0.734,-0.0406]),SFVec3f([-0.194,0.81,-0.0445]),SFVec3f([-0.211,0.828,-0.0434]),SFVec3f([-0.236,0.82,-0.0237]),SFVec3f([-0.252,0.801,-0.0231]),SFVec3f([-0.268,0.765,-0.0225]),SFVec3f([-0.272,0.732,-0.0223]),SFVec3f([-0.27,0.704,-0.0224]),SFVec3f([-0.261,0.703,-0.0227]),SFVec3f([-0.256,0.717,-0.023]),SFVec3f([-0.255,0.738,-0.023]),SFVec3f([-0.251,0.734,-0.0232]),SFVec3f([-0.251,0.692,-0.0232]),SFVec3f([-0.248,0.657,-0.0233]),SFVec3f([-0.24,0.645,-0.0236]),SFVec3f([-0.226,0.637,-0.0241]),SFVec3f([-0.213,0.639,-0.0246]),SFVec3f([-0.197,0.652,-0.0253]),SFVec3f([-0.188,0.669,-0.0256]),SFVec3f([-0.184,0.697,-0.0258]),SFVec3f([-0.183,0.73,-0.0258]),SFVec3f([-0.187,0.77,-0.0257]),SFVec3f([-0.194,0.81,-0.0254]),SFVec3f([-0.21,0.828,-0.0247]),SFVec3f([-0.221,0.641,-0.0336]),SFVec3f([-0.21,0.65,-0.0348]),SFVec3f([-0.206,0.652,-0.0352]),SFVec3f([-0.198,0.667,-0.0368]),SFVec3f([-0.193,0.692,-0.0392]),SFVec3f([-0.192,0.696,-0.0396]),SFVec3f([-0.231,0.646,-0.0336]),SFVec3f([-0.238,0.656,-0.0342]),SFVec3f([-0.24,0.658,-0.0344]),SFVec3f([-0.24,0.662,-0.0347]),SFVec3f([-0.243,0.692,-0.0372]),SFVec3f([-0.243,0.696,-0.0376]),SFVec3f([-0.192,0.725,-0.0421]),SFVec3f([-0.192,0.73,-0.0426]),SFVec3f([-0.195,0.766,-0.0451]),SFVec3f([-0.196,0.77,-0.0454])]))))])])])])]),

                                        HAnimJoint(
                                          name_ : SFString('vc4'),
                                          DEF_ : SFString('hanim_vc4'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.43), SFDouble(-0.0458)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('c4'),
                                              DEF_ : SFString('hanim_c4'),
                                              children_ : [
                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('WetShirtColor'))),
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      DEF_ : SFString('neck'),
                                                      coordIndex_ : MFInt32([SFInt32(6), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(6), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(11), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(3), SFInt32(11), SFInt32(-1), SFInt32(6), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(7), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(11), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(13), SFInt32(-1), SFInt32(2), SFInt32(13), SFInt32(10), SFInt32(-1), SFInt32(1), SFInt32(0), SFInt32(15), SFInt32(-1), SFInt32(1), SFInt32(15), SFInt32(13), SFInt32(-1), SFInt32(9), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(12), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(7), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 1.91,
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0105,1.54,-0.1]),SFVec3f([0.0357,1.54,-0.0685]),SFVec3f([0.0382,1.55,-0.0474]),SFVec3f([0.0105,1.55,-0.0204]),SFVec3f([0.0373,1.4,-0.0593]),SFVec3f([0.0577,1.4,-0.0266]),SFVec3f([0.0158,1.4,0.00512]),SFVec3f([0.0132,1.41,-0.0824]),SFVec3f([-0.0158,1.4,0.00512]),SFVec3f([-0.0577,1.4,-0.0266]),SFVec3f([-0.0382,1.55,-0.0474]),SFVec3f([-0.0105,1.55,-0.0204]),SFVec3f([-0.0373,1.4,-0.0593]),SFVec3f([-0.0357,1.54,-0.0685]),SFVec3f([-0.0132,1.41,-0.0824]),SFVec3f([-0.0105,1.54,-0.1])]))))]),

                                            HAnimJoint(
                                              name_ : SFString('skullbase'),
                                              DEF_ : SFString('hanim_skullbase'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.0409)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('skull'),
                                                  DEF_ : SFString('hanim_skull'),
                                                  children_ : [
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('Skin_Color'))),
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          DEF_ : SFString('headIFS'),
                                                          colorIndex_ : MFInt32([SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(4), SFInt32(4), SFInt32(-1)]),
                                                          coordIndex_ : MFInt32([SFInt32(48), SFInt32(87), SFInt32(58), SFInt32(-1), SFInt32(91), SFInt32(92), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(92), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(93), SFInt32(231), SFInt32(-1), SFInt32(232), SFInt32(86), SFInt32(233), SFInt32(-1), SFInt32(86), SFInt32(89), SFInt32(233), SFInt32(-1), SFInt32(89), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(49), SFInt32(55), SFInt32(57), SFInt32(-1), SFInt32(102), SFInt32(86), SFInt32(96), SFInt32(-1), SFInt32(86), SFInt32(90), SFInt32(96), SFInt32(-1), SFInt32(97), SFInt32(95), SFInt32(96), SFInt32(-1), SFInt32(97), SFInt32(127), SFInt32(95), SFInt32(-1), SFInt32(41), SFInt32(96), SFInt32(154), SFInt32(-1), SFInt32(41), SFInt32(102), SFInt32(96), SFInt32(-1), SFInt32(99), SFInt32(102), SFInt32(41), SFInt32(-1), SFInt32(153), SFInt32(99), SFInt32(41), SFInt32(-1), SFInt32(102), SFInt32(40), SFInt32(86), SFInt32(-1), SFInt32(234), SFInt32(235), SFInt32(236), SFInt32(-1), SFInt32(87), SFInt32(237), SFInt32(58), SFInt32(-1), SFInt32(56), SFInt32(57), SFInt32(91), SFInt32(-1), SFInt32(87), SFInt32(234), SFInt32(237), SFInt32(-1), SFInt32(234), SFInt32(236), SFInt32(237), SFInt32(-1), SFInt32(89), SFInt32(49), SFInt32(57), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(55), SFInt32(-1), SFInt32(40), SFInt32(89), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(56), SFInt32(233), SFInt32(-1), SFInt32(232), SFInt32(90), SFInt32(86), SFInt32(-1), SFInt32(90), SFInt32(97), SFInt32(96), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(88), SFInt32(-1), SFInt32(93), SFInt32(94), SFInt32(231), SFInt32(-1), SFInt32(232), SFInt32(231), SFInt32(94), SFInt32(-1), SFInt32(97), SFInt32(90), SFInt32(232), SFInt32(-1), SFInt32(96), SFInt32(42), SFInt32(154), SFInt32(-1), SFInt32(95), SFInt32(42), SFInt32(96), SFInt32(-1), SFInt32(53), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(53), SFInt32(45), SFInt32(51), SFInt32(-1), SFInt32(53), SFInt32(51), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(51), SFInt32(52), SFInt32(-1), SFInt32(92), SFInt32(52), SFInt32(93), SFInt32(-1), SFInt32(94), SFInt32(93), SFInt32(52), SFInt32(-1), SFInt32(94), SFInt32(52), SFInt32(4), SFInt32(-1), SFInt32(97), SFInt32(232), SFInt32(94), SFInt32(-1), SFInt32(54), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(54), SFInt32(46), SFInt32(53), SFInt32(-1), SFInt32(55), SFInt32(47), SFInt32(54), SFInt32(-1), SFInt32(50), SFInt32(47), SFInt32(55), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(50), SFInt32(-1), SFInt32(34), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(35), SFInt32(34), SFInt32(49), SFInt32(-1), SFInt32(35), SFInt32(49), SFInt32(89), SFInt32(-1), SFInt32(35), SFInt32(89), SFInt32(40), SFInt32(-1), SFInt32(99), SFInt32(39), SFInt32(102), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(40), SFInt32(-1), SFInt32(31), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(14), SFInt32(32), SFInt32(35), SFInt32(-1), SFInt32(14), SFInt32(35), SFInt32(39), SFInt32(-1), SFInt32(14), SFInt32(39), SFInt32(98), SFInt32(-1), SFInt32(137), SFInt32(38), SFInt32(153), SFInt32(-1), SFInt32(38), SFInt32(99), SFInt32(153), SFInt32(-1), SFInt32(38), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(37), SFInt32(238), SFInt32(239), SFInt32(-1), SFInt32(11), SFInt32(238), SFInt32(37), SFInt32(-1), SFInt32(101), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(241), SFInt32(141), SFInt32(242), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(242), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(243), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(32), SFInt32(-1), SFInt32(13), SFInt32(32), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(31), SFInt32(-1), SFInt32(15), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(2), SFInt32(70), SFInt32(10), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(141), SFInt32(-1), SFInt32(70), SFInt32(69), SFInt32(12), SFInt32(-1), SFInt32(70), SFInt32(12), SFInt32(10), SFInt32(-1), SFInt32(69), SFInt32(68), SFInt32(13), SFInt32(-1), SFInt32(69), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(15), SFInt32(-1), SFInt32(68), SFInt32(15), SFInt32(13), SFInt32(-1), SFInt32(67), SFInt32(66), SFInt32(16), SFInt32(-1), SFInt32(67), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(98), SFInt32(39), SFInt32(99), SFInt32(-1), SFInt32(101), SFInt32(11), SFInt32(37), SFInt32(-1), SFInt32(100), SFInt32(101), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(141), SFInt32(10), SFInt32(242), SFInt32(-1), SFInt32(12), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(239), SFInt32(-1), SFInt32(36), SFInt32(239), SFInt32(244), SFInt32(-1), SFInt32(57), SFInt32(55), SFInt32(91), SFInt32(-1), SFInt32(55), SFInt32(54), SFInt32(91), SFInt32(-1), SFInt32(39), SFInt32(40), SFInt32(102), SFInt32(-1), SFInt32(123), SFInt32(103), SFInt32(120), SFInt32(-1), SFInt32(114), SFInt32(122), SFInt32(104), SFInt32(-1), SFInt32(115), SFInt32(122), SFInt32(114), SFInt32(-1), SFInt32(208), SFInt32(105), SFInt32(115), SFInt32(-1), SFInt32(210), SFInt32(119), SFInt32(211), SFInt32(-1), SFInt32(210), SFInt32(106), SFInt32(119), SFInt32(-1), SFInt32(116), SFInt32(107), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(108), SFInt32(117), SFInt32(-1), SFInt32(126), SFInt32(119), SFInt32(109), SFInt32(-1), SFInt32(126), SFInt32(110), SFInt32(119), SFInt32(-1), SFInt32(126), SFInt32(95), SFInt32(125), SFInt32(-1), SFInt32(95), SFInt32(127), SFInt32(125), SFInt32(-1), SFInt32(154), SFInt32(126), SFInt32(111), SFInt32(-1), SFInt32(126), SFInt32(109), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(109), SFInt32(112), SFInt32(-1), SFInt32(111), SFInt32(112), SFInt32(153), SFInt32(-1), SFInt32(119), SFInt32(113), SFInt32(109), SFInt32(-1), SFInt32(207), SFInt32(213), SFInt32(214), SFInt32(-1), SFInt32(123), SFInt32(209), SFInt32(103), SFInt32(-1), SFInt32(213), SFInt32(212), SFInt32(214), SFInt32(-1), SFInt32(209), SFInt32(214), SFInt32(103), SFInt32(-1), SFInt32(209), SFInt32(207), SFInt32(214), SFInt32(-1), SFInt32(107), SFInt32(117), SFInt32(106), SFInt32(-1), SFInt32(108), SFInt32(118), SFInt32(117), SFInt32(-1), SFInt32(119), SFInt32(106), SFInt32(113), SFInt32(-1), SFInt32(210), SFInt32(116), SFInt32(106), SFInt32(-1), SFInt32(119), SFInt32(110), SFInt32(211), SFInt32(-1), SFInt32(126), SFInt32(125), SFInt32(110), SFInt32(-1), SFInt32(115), SFInt32(105), SFInt32(122), SFInt32(-1), SFInt32(208), SFInt32(124), SFInt32(105), SFInt32(-1), SFInt32(124), SFInt32(208), SFInt32(211), SFInt32(-1), SFInt32(211), SFInt32(110), SFInt32(125), SFInt32(-1), SFInt32(154), SFInt32(42), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(42), SFInt32(95), SFInt32(-1), SFInt32(168), SFInt32(128), SFInt32(121), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(121), SFInt32(-1), SFInt32(122), SFInt32(170), SFInt32(121), SFInt32(-1), SFInt32(172), SFInt32(170), SFInt32(122), SFInt32(-1), SFInt32(105), SFInt32(172), SFInt32(122), SFInt32(-1), SFInt32(172), SFInt32(105), SFInt32(124), SFInt32(-1), SFInt32(4), SFInt32(172), SFInt32(124), SFInt32(-1), SFInt32(124), SFInt32(211), SFInt32(125), SFInt32(-1), SFInt32(128), SFInt32(130), SFInt32(129), SFInt32(-1), SFInt32(121), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(130), SFInt32(108), SFInt32(-1), SFInt32(108), SFInt32(130), SFInt32(118), SFInt32(-1), SFInt32(118), SFInt32(131), SFInt32(132), SFInt32(-1), SFInt32(117), SFInt32(118), SFInt32(132), SFInt32(-1), SFInt32(117), SFInt32(132), SFInt32(133), SFInt32(-1), SFInt32(106), SFInt32(117), SFInt32(133), SFInt32(-1), SFInt32(113), SFInt32(106), SFInt32(133), SFInt32(-1), SFInt32(109), SFInt32(152), SFInt32(112), SFInt32(-1), SFInt32(113), SFInt32(133), SFInt32(152), SFInt32(-1), SFInt32(133), SFInt32(132), SFInt32(134), SFInt32(-1), SFInt32(135), SFInt32(133), SFInt32(134), SFInt32(-1), SFInt32(133), SFInt32(135), SFInt32(136), SFInt32(-1), SFInt32(152), SFInt32(133), SFInt32(136), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(136), SFInt32(-1), SFInt32(153), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(153), SFInt32(112), SFInt32(138), SFInt32(-1), SFInt32(112), SFInt32(148), SFInt32(138), SFInt32(-1), SFInt32(219), SFInt32(217), SFInt32(139), SFInt32(-1), SFInt32(36), SFInt32(240), SFInt32(149), SFInt32(-1), SFInt32(139), SFInt32(217), SFInt32(140), SFInt32(-1), SFInt32(149), SFInt32(139), SFInt32(151), SFInt32(-1), SFInt32(36), SFInt32(149), SFInt32(100), SFInt32(-1), SFInt32(220), SFInt32(141), SFInt32(241), SFInt32(-1), SFInt32(220), SFInt32(150), SFInt32(142), SFInt32(-1), SFInt32(136), SFInt32(143), SFInt32(150), SFInt32(-1), SFInt32(221), SFInt32(136), SFInt32(150), SFInt32(-1), SFInt32(135), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(136), SFInt32(135), SFInt32(143), SFInt32(-1), SFInt32(134), SFInt32(158), SFInt32(144), SFInt32(-1), SFInt32(135), SFInt32(134), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(161), SFInt32(2), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(2), SFInt32(-1), SFInt32(150), SFInt32(145), SFInt32(161), SFInt32(-1), SFInt32(142), SFInt32(150), SFInt32(161), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(145), SFInt32(-1), SFInt32(150), SFInt32(143), SFInt32(145), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(146), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(146), SFInt32(-1), SFInt32(158), SFInt32(160), SFInt32(147), SFInt32(-1), SFInt32(144), SFInt32(158), SFInt32(147), SFInt32(-1), SFInt32(112), SFInt32(152), SFInt32(148), SFInt32(-1), SFInt32(139), SFInt32(140), SFInt32(151), SFInt32(-1), SFInt32(149), SFInt32(151), SFInt32(100), SFInt32(-1), SFInt32(240), SFInt32(218), SFInt32(149), SFInt32(-1), SFInt32(220), SFInt32(142), SFInt32(141), SFInt32(-1), SFInt32(220), SFInt32(221), SFInt32(150), SFInt32(-1), SFInt32(219), SFInt32(139), SFInt32(149), SFInt32(-1), SFInt32(218), SFInt32(219), SFInt32(149), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(107), SFInt32(-1), SFInt32(104), SFInt32(129), SFInt32(108), SFInt32(-1), SFInt32(109), SFInt32(113), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(41), SFInt32(111), SFInt32(-1), SFInt32(129), SFInt32(104), SFInt32(122), SFInt32(-1), SFInt32(129), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(91), SFInt32(54), SFInt32(92), SFInt32(-1), SFInt32(54), SFInt32(53), SFInt32(92), SFInt32(-1), SFInt32(97), SFInt32(94), SFInt32(127), SFInt32(-1), SFInt32(127), SFInt32(94), SFInt32(4), SFInt32(-1), SFInt32(125), SFInt32(127), SFInt32(124), SFInt32(-1), SFInt32(127), SFInt32(4), SFInt32(124), SFInt32(-1), SFInt32(154), SFInt32(111), SFInt32(41), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(33), SFInt32(-1), SFInt32(31), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(30), SFInt32(-1), SFInt32(16), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(66), SFInt32(65), SFInt32(17), SFInt32(-1), SFInt32(66), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(2), SFInt32(73), SFInt32(156), SFInt32(-1), SFInt32(2), SFInt32(156), SFInt32(70), SFInt32(-1), SFInt32(156), SFInt32(72), SFInt32(66), SFInt32(-1), SFInt32(156), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(156), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(156), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(156), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(72), SFInt32(71), SFInt32(65), SFInt32(-1), SFInt32(72), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(30), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(51), SFInt32(43), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(43), SFInt32(1), SFInt32(-1), SFInt32(52), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(245), SFInt32(246), SFInt32(27), SFInt32(-1), SFInt32(245), SFInt32(27), SFInt32(3), SFInt32(-1), SFInt32(246), SFInt32(247), SFInt32(28), SFInt32(-1), SFInt32(246), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(248), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(248), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(248), SFInt32(28), SFInt32(247), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(0), SFInt32(-1), SFInt32(27), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(27), SFInt32(28), SFInt32(25), SFInt32(-1), SFInt32(27), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(29), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(25), SFInt32(28), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(249), SFInt32(250), SFInt32(22), SFInt32(-1), SFInt32(249), SFInt32(22), SFInt32(248), SFInt32(-1), SFInt32(250), SFInt32(60), SFInt32(23), SFInt32(-1), SFInt32(250), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(17), SFInt32(254), SFInt32(18), SFInt32(-1), SFInt32(65), SFInt32(254), SFInt32(17), SFInt32(-1), SFInt32(71), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(63), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(63), SFInt32(75), SFInt32(61), SFInt32(-1), SFInt32(64), SFInt32(255), SFInt32(254), SFInt32(-1), SFInt32(75), SFInt32(62), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(76), SFInt32(60), SFInt32(-1), SFInt32(76), SFInt32(77), SFInt32(23), SFInt32(-1), SFInt32(76), SFInt32(23), SFInt32(60), SFInt32(-1), SFInt32(77), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(77), SFInt32(78), SFInt32(25), SFInt32(-1), SFInt32(77), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(78), SFInt32(84), SFInt32(26), SFInt32(-1), SFInt32(78), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(84), SFInt32(192), SFInt32(0), SFInt32(-1), SFInt32(84), SFInt32(0), SFInt32(26), SFInt32(-1), SFInt32(84), SFInt32(83), SFInt32(193), SFInt32(-1), SFInt32(84), SFInt32(193), SFInt32(192), SFInt32(-1), SFInt32(79), SFInt32(83), SFInt32(84), SFInt32(-1), SFInt32(79), SFInt32(84), SFInt32(78), SFInt32(-1), SFInt32(76), SFInt32(79), SFInt32(78), SFInt32(-1), SFInt32(76), SFInt32(78), SFInt32(77), SFInt32(-1), SFInt32(80), SFInt32(83), SFInt32(79), SFInt32(-1), SFInt32(80), SFInt32(204), SFInt32(83), SFInt32(-1), SFInt32(75), SFInt32(81), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(204), SFInt32(-1), SFInt32(81), SFInt32(204), SFInt32(80), SFInt32(-1), SFInt32(74), SFInt32(81), SFInt32(75), SFInt32(-1), SFInt32(74), SFInt32(82), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(5), SFInt32(85), SFInt32(-1), SFInt32(82), SFInt32(85), SFInt32(81), SFInt32(-1), SFInt32(155), SFInt32(8), SFInt32(71), SFInt32(-1), SFInt32(155), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(64), SFInt32(-1), SFInt32(8), SFInt32(64), SFInt32(71), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(255), SFInt32(-1), SFInt32(6), SFInt32(255), SFInt32(64), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(256), SFInt32(-1), SFInt32(7), SFInt32(256), SFInt32(255), SFInt32(-1), SFInt32(9), SFInt32(257), SFInt32(256), SFInt32(-1), SFInt32(73), SFInt32(155), SFInt32(156), SFInt32(-1), SFInt32(155), SFInt32(72), SFInt32(156), SFInt32(-1), SFInt32(204), SFInt32(193), SFInt32(83), SFInt32(-1), SFInt32(64), SFInt32(254), SFInt32(65), SFInt32(-1), SFInt32(131), SFInt32(157), SFInt32(134), SFInt32(-1), SFInt32(132), SFInt32(131), SFInt32(134), SFInt32(-1), SFInt32(157), SFInt32(159), SFInt32(158), SFInt32(-1), SFInt32(134), SFInt32(157), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(206), SFInt32(160), SFInt32(-1), SFInt32(158), SFInt32(159), SFInt32(160), SFInt32(-1), SFInt32(203), SFInt32(73), SFInt32(2), SFInt32(-1), SFInt32(161), SFInt32(203), SFInt32(2), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(203), SFInt32(-1), SFInt32(147), SFInt32(160), SFInt32(203), SFInt32(-1), SFInt32(146), SFInt32(147), SFInt32(203), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(203), SFInt32(-1), SFInt32(161), SFInt32(145), SFInt32(203), SFInt32(-1), SFInt32(206), SFInt32(163), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(206), SFInt32(162), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(159), SFInt32(-1), SFInt32(170), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(171), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(172), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(1), SFInt32(171), SFInt32(172), SFInt32(-1), SFInt32(4), SFInt32(1), SFInt32(172), SFInt32(-1), SFInt32(173), SFInt32(227), SFInt32(245), SFInt32(-1), SFInt32(3), SFInt32(173), SFInt32(245), SFInt32(-1), SFInt32(174), SFInt32(226), SFInt32(227), SFInt32(-1), SFInt32(173), SFInt32(174), SFInt32(227), SFInt32(-1), SFInt32(176), SFInt32(175), SFInt32(215), SFInt32(-1), SFInt32(174), SFInt32(176), SFInt32(215), SFInt32(-1), SFInt32(226), SFInt32(174), SFInt32(215), SFInt32(-1), SFInt32(0), SFInt32(177), SFInt32(173), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(173), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(173), SFInt32(-1), SFInt32(177), SFInt32(178), SFInt32(173), SFInt32(-1), SFInt32(178), SFInt32(179), SFInt32(176), SFInt32(-1), SFInt32(174), SFInt32(178), SFInt32(176), SFInt32(-1), SFInt32(179), SFInt32(180), SFInt32(175), SFInt32(-1), SFInt32(176), SFInt32(179), SFInt32(175), SFInt32(-1), SFInt32(175), SFInt32(225), SFInt32(216), SFInt32(-1), SFInt32(215), SFInt32(175), SFInt32(216), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(225), SFInt32(-1), SFInt32(175), SFInt32(180), SFInt32(225), SFInt32(-1), SFInt32(164), SFInt32(228), SFInt32(159), SFInt32(-1), SFInt32(159), SFInt32(228), SFInt32(206), SFInt32(-1), SFInt32(206), SFInt32(185), SFInt32(163), SFInt32(-1), SFInt32(187), SFInt32(186), SFInt32(184), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(184), SFInt32(-1), SFInt32(228), SFInt32(229), SFInt32(185), SFInt32(-1), SFInt32(183), SFInt32(182), SFInt32(187), SFInt32(-1), SFInt32(181), SFInt32(188), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(181), SFInt32(180), SFInt32(188), SFInt32(-1), SFInt32(180), SFInt32(179), SFInt32(189), SFInt32(-1), SFInt32(178), SFInt32(190), SFInt32(189), SFInt32(-1), SFInt32(179), SFInt32(178), SFInt32(189), SFInt32(-1), SFInt32(177), SFInt32(191), SFInt32(190), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(190), SFInt32(-1), SFInt32(0), SFInt32(192), SFInt32(191), SFInt32(-1), SFInt32(177), SFInt32(0), SFInt32(191), SFInt32(-1), SFInt32(193), SFInt32(205), SFInt32(191), SFInt32(-1), SFInt32(192), SFInt32(193), SFInt32(191), SFInt32(-1), SFInt32(191), SFInt32(205), SFInt32(194), SFInt32(-1), SFInt32(190), SFInt32(191), SFInt32(194), SFInt32(-1), SFInt32(190), SFInt32(194), SFInt32(188), SFInt32(-1), SFInt32(189), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(194), SFInt32(205), SFInt32(195), SFInt32(-1), SFInt32(205), SFInt32(204), SFInt32(195), SFInt32(-1), SFInt32(195), SFInt32(196), SFInt32(187), SFInt32(-1), SFInt32(204), SFInt32(85), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(204), SFInt32(196), SFInt32(-1), SFInt32(187), SFInt32(196), SFInt32(186), SFInt32(-1), SFInt32(196), SFInt32(197), SFInt32(186), SFInt32(-1), SFInt32(85), SFInt32(5), SFInt32(197), SFInt32(-1), SFInt32(196), SFInt32(85), SFInt32(197), SFInt32(-1), SFInt32(163), SFInt32(198), SFInt32(202), SFInt32(-1), SFInt32(162), SFInt32(163), SFInt32(202), SFInt32(-1), SFInt32(185), SFInt32(199), SFInt32(198), SFInt32(-1), SFInt32(163), SFInt32(185), SFInt32(198), SFInt32(-1), SFInt32(229), SFInt32(200), SFInt32(199), SFInt32(-1), SFInt32(185), SFInt32(229), SFInt32(199), SFInt32(-1), SFInt32(230), SFInt32(201), SFInt32(200), SFInt32(-1), SFInt32(229), SFInt32(230), SFInt32(200), SFInt32(-1), SFInt32(230), SFInt32(257), SFInt32(201), SFInt32(-1), SFInt32(203), SFInt32(202), SFInt32(73), SFInt32(-1), SFInt32(203), SFInt32(162), SFInt32(202), SFInt32(-1), SFInt32(205), SFInt32(193), SFInt32(204), SFInt32(-1), SFInt32(206), SFInt32(228), SFInt32(185), SFInt32(-1), SFInt32(198), SFInt32(8), SFInt32(155), SFInt32(-1), SFInt32(198), SFInt32(155), SFInt32(202), SFInt32(-1), SFInt32(155), SFInt32(73), SFInt32(202), SFInt32(-1), SFInt32(199), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(199), SFInt32(8), SFInt32(198), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(199), SFInt32(-1), SFInt32(7), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(201), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(201), SFInt32(7), SFInt32(200), SFInt32(-1), SFInt32(201), SFInt32(257), SFInt32(9), SFInt32(-1), SFInt32(188), SFInt32(194), SFInt32(195), SFInt32(-1), SFInt32(188), SFInt32(195), SFInt32(182), SFInt32(-1), SFInt32(195), SFInt32(187), SFInt32(182), SFInt32(-1), SFInt32(80), SFInt32(79), SFInt32(76), SFInt32(-1), SFInt32(80), SFInt32(62), SFInt32(75), SFInt32(-1), SFInt32(80), SFInt32(76), SFInt32(62), SFInt32(-1), SFInt32(47), SFInt32(50), SFInt32(33), SFInt32(-1), SFInt32(131), SFInt32(118), SFInt32(130), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(47), SFInt32(-1), SFInt32(21), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(20), SFInt32(33), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(47), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(30), SFInt32(19), SFInt32(-1), SFInt32(30), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(62), SFInt32(60), SFInt32(251), SFInt32(-1), SFInt32(60), SFInt32(250), SFInt32(251), SFInt32(-1), SFInt32(252), SFInt32(61), SFInt32(251), SFInt32(-1), SFInt32(61), SFInt32(62), SFInt32(251), SFInt32(-1), SFInt32(252), SFInt32(63), SFInt32(61), SFInt32(-1), SFInt32(252), SFInt32(253), SFInt32(63), SFInt32(-1), SFInt32(166), SFInt32(130), SFInt32(167), SFInt32(-1), SFInt32(130), SFInt32(128), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(131), SFInt32(130), SFInt32(-1), SFInt32(166), SFInt32(165), SFInt32(131), SFInt32(-1), SFInt32(165), SFInt32(157), SFInt32(131), SFInt32(-1), SFInt32(165), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(224), SFInt32(181), SFInt32(182), SFInt32(-1), SFInt32(224), SFInt32(225), SFInt32(181), SFInt32(-1), SFInt32(224), SFInt32(183), SFInt32(223), SFInt32(-1), SFInt32(224), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(184), SFInt32(223), SFInt32(-1), SFInt32(184), SFInt32(222), SFInt32(223), SFInt32(-1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              DEF_ : SFString('Face'),
                                                              point_ : MFVec3f([SFVec3f([0,1.708,-0.0435]),SFVec3f([0,1.655,0.04322]),SFVec3f([0,1.486,0.02335]),SFVec3f([0,1.694,0.007789]),SFVec3f([0,1.631,0.051]),SFVec3f([0,1.524,-0.102]),SFVec3f([0.04,1.51,-0.07278]),SFVec3f([0.04029,1.514,-0.08254]),SFVec3f([0.03528,1.502,-0.05013]),SFVec3f([0.03479,1.517,-0.09269]),SFVec3f([0.0116,1.494,0.03382]),SFVec3f([0.01946,1.52,0.03421]),SFVec3f([0.02204,1.494,0.0272]),SFVec3f([0.02734,1.498,0.02215]),SFVec3f([0.02788,1.528,0.03084]),SFVec3f([0.0338,1.503,0.0124]),SFVec3f([0.04008,1.509,0.002821]),SFVec3f([0.05122,1.518,-0.02784]),SFVec3f([0.05867,1.544,-0.03316]),SFVec3f([0.06433,1.563,-0.03678]),SFVec3f([0.06732,1.583,-0.03683]),SFVec3f([0.06769,1.617,-0.03436]),SFVec3f([0.06641,1.637,-0.03046]),SFVec3f([0.06818,1.637,-0.04285]),SFVec3f([0.06308,1.666,-0.04036]),SFVec3f([0.05305,1.685,-0.03987]),SFVec3f([0.03136,1.7,-0.0413]),SFVec3f([0.02919,1.688,0.0091]),SFVec3f([0.05272,1.674,-0.001657]),SFVec3f([0.06061,1.66,-0.0101]),SFVec3f([0.05254,1.541,-0.01363]),SFVec3f([0.04099,1.527,0.008832]),SFVec3f([0.03528,1.524,0.02097]),SFVec3f([0.05792,1.557,-0.004307]),SFVec3f([0.04413,1.539,0.0149]),SFVec3f([0.03746,1.539,0.02656]),SFVec3f([0.003407,1.524,0.04155]),SFVec3f([0.01481,1.526,0.03912]),SFVec3f([0.005112,1.532,0.04358]),SFVec3f([0.02438,1.542,0.03578]),SFVec3f([0.02636,1.55,0.03808]),SFVec3f([0.006135,1.55,0.0545]),SFVec3f([0,1.559,0.05502]),SFVec3f([0.02958,1.651,0.03965]),SFVec3f([0.04847,1.643,0.02895]),SFVec3f([0.05856,1.63,0.01803]),SFVec3f([0.06182,1.614,0.008199]),SFVec3f([0.06194,1.6,0.002668]),SFVec3f([0.01489,1.583,0.04109]),SFVec3f([0.05282,1.569,0.02821]),SFVec3f([0.05767,1.58,0.0184]),SFVec3f([0.04643,1.625,0.03705]),SFVec3f([0.0264,1.628,0.04807]),SFVec3f([0.0556,1.609,0.02579]),SFVec3f([0.05467,1.599,0.02153]),SFVec3f([0.05316,1.589,0.0207]),SFVec3f([0.03603,1.58,0.03536]),SFVec3f([0.04597,1.586,0.02904]),SFVec3f([0.02106,1.592,0.03748]),SFVec3f([0.03428,1.595,0.03294]),SFVec3f([0.06808,1.617,-0.06112]),SFVec3f([0.06714,1.564,-0.07003]),SFVec3f([0.06993,1.594,-0.08238]),SFVec3f([0.05324,1.536,-0.05922]),SFVec3f([0.04904,1.521,-0.05132]),SFVec3f([0.04758,1.514,-0.03107]),SFVec3f([0.03539,1.503,-0.00093]),SFVec3f([0.02999,1.498,0.006194]),SFVec3f([0.02308,1.492,0.01628]),SFVec3f([0.01772,1.488,0.02135]),SFVec3f([0.01378,1.488,0.02484]),SFVec3f([0.04349,1.512,-0.03987]),SFVec3f([0.02308,1.499,-0.02088]),SFVec3f([0,1.487,-0.018]),SFVec3f([0.04795,1.531,-0.08973]),SFVec3f([0.05739,1.555,-0.0982]),SFVec3f([0.06815,1.622,-0.107]),SFVec3f([0.06872,1.655,-0.08466]),SFVec3f([0.05233,1.678,-0.09642]),SFVec3f([0.05334,1.631,-0.1239]),SFVec3f([0.05011,1.581,-0.1193]),SFVec3f([0.04359,1.551,-0.1067]),SFVec3f([0.03839,1.528,-0.09652]),SFVec3f([0.03399,1.636,-0.1304]),SFVec3f([0.03224,1.685,-0.1024]),SFVec3f([0,1.557,-0.1126]),SFVec3f([0.01864,1.566,0.04105]),SFVec3f([0.0249,1.58,0.0387]),SFVec3f([0.02735,1.596,0.03552]),SFVec3f([0.04317,1.564,0.03643]),SFVec3f([0.01246,1.577,0.04276]),SFVec3f([0.04354,1.59,0.02822]),SFVec3f([0.04557,1.601,0.03652]),SFVec3f([0.0291,1.603,0.04274]),SFVec3f([0.01856,1.6,0.04349]),SFVec3f([0,1.579,0.04893]),SFVec3f([0.01064,1.558,0.04476]),SFVec3f([0.005501,1.578,0.04574]),SFVec3f([0.01405,1.531,0.04152]),SFVec3f([0.01037,1.544,0.04266]),SFVec3f([0,1.515,0.03836]),SFVec3f([0.00797,1.515,0.03774]),SFVec3f([0.01824,1.55,0.04063]),SFVec3f([-0.0249,1.58,0.0387]),SFVec3f([-0.04354,1.59,0.02822]),SFVec3f([-0.0291,1.603,0.04274]),SFVec3f([-0.04317,1.564,0.03643]),SFVec3f([-0.04597,1.586,0.02904]),SFVec3f([-0.05316,1.589,0.0207]),SFVec3f([-0.01824,1.55,0.04063]),SFVec3f([-0.01246,1.577,0.04276]),SFVec3f([-0.006135,1.55,0.0545]),SFVec3f([-0.01037,1.544,0.04266]),SFVec3f([-0.02636,1.55,0.03808]),SFVec3f([-0.03428,1.595,0.03294]),SFVec3f([-0.02735,1.596,0.03552]),SFVec3f([-0.03603,1.58,0.03536]),SFVec3f([-0.05282,1.569,0.02821]),SFVec3f([-0.05767,1.58,0.0184]),SFVec3f([-0.01864,1.566,0.04105]),SFVec3f([-0.01489,1.583,0.04109]),SFVec3f([-0.0556,1.609,0.02579]),SFVec3f([-0.04557,1.601,0.03652]),SFVec3f([-0.02106,1.592,0.03748]),SFVec3f([-0.01856,1.6,0.04349]),SFVec3f([-0.005501,1.578,0.04574]),SFVec3f([-0.01064,1.558,0.04476]),SFVec3f([0,1.592,0.04694]),SFVec3f([-0.06182,1.614,0.008199]),SFVec3f([-0.05467,1.599,0.02153]),SFVec3f([-0.06194,1.6,0.002668]),SFVec3f([-0.05792,1.557,-0.004307]),SFVec3f([-0.04413,1.539,0.0149]),SFVec3f([-0.03746,1.539,0.02656]),SFVec3f([-0.04099,1.527,0.008832]),SFVec3f([-0.03528,1.524,0.02097]),SFVec3f([-0.02788,1.528,0.03084]),SFVec3f([0,1.53,0.04236]),SFVec3f([-0.005112,1.532,0.04358]),SFVec3f([-0.01481,1.526,0.03912]),SFVec3f([-0.01946,1.52,0.03421]),SFVec3f([0,1.495,0.0348]),SFVec3f([-0.0116,1.494,0.03382]),SFVec3f([-0.02734,1.498,0.02215]),SFVec3f([-0.0338,1.503,0.0124]),SFVec3f([-0.01772,1.488,0.02135]),SFVec3f([-0.02308,1.492,0.01628]),SFVec3f([-0.02999,1.498,0.006194]),SFVec3f([-0.01405,1.531,0.04152]),SFVec3f([-0.003407,1.524,0.04155]),SFVec3f([-0.02204,1.494,0.0272]),SFVec3f([-0.00797,1.515,0.03774]),SFVec3f([-0.02438,1.542,0.03578]),SFVec3f([0,1.543,0.04432]),SFVec3f([0,1.555,0.05692]),SFVec3f([0.02295,1.492,-0.02694]),SFVec3f([0.007322,1.489,-0.01677]),SFVec3f([-0.05254,1.541,-0.01363]),SFVec3f([-0.04008,1.509,0.002821]),SFVec3f([-0.05122,1.518,-0.02784]),SFVec3f([-0.03539,1.503,-0.00093]),SFVec3f([-0.01378,1.488,0.02484]),SFVec3f([-0.02308,1.499,-0.02088]),SFVec3f([-0.04349,1.512,-0.03987]),SFVec3f([-0.05867,1.544,-0.03316]),SFVec3f([-0.06433,1.563,-0.03678]),SFVec3f([-0.06732,1.583,-0.03683]),SFVec3f([-0.06769,1.617,-0.03436]),SFVec3f([-0.05856,1.63,0.01803]),SFVec3f([-0.04847,1.643,0.02895]),SFVec3f([-0.04643,1.625,0.03705]),SFVec3f([-0.02958,1.651,0.03965]),SFVec3f([-0.0264,1.628,0.04807]),SFVec3f([-0.02919,1.688,0.0091]),SFVec3f([-0.05272,1.674,-0.001657]),SFVec3f([-0.06641,1.637,-0.03046]),SFVec3f([-0.06061,1.66,-0.0101]),SFVec3f([-0.03136,1.7,-0.0413]),SFVec3f([-0.05305,1.685,-0.03987]),SFVec3f([-0.06308,1.666,-0.04036]),SFVec3f([-0.06818,1.637,-0.04285]),SFVec3f([-0.06808,1.617,-0.06112]),SFVec3f([-0.06993,1.594,-0.08238]),SFVec3f([-0.06714,1.564,-0.07003]),SFVec3f([-0.05324,1.536,-0.05922]),SFVec3f([-0.04904,1.521,-0.05132]),SFVec3f([-0.04795,1.531,-0.08973]),SFVec3f([-0.05739,1.555,-0.0982]),SFVec3f([-0.06815,1.622,-0.107]),SFVec3f([-0.06872,1.655,-0.08466]),SFVec3f([-0.05233,1.678,-0.09642]),SFVec3f([-0.03224,1.685,-0.1024]),SFVec3f([0,1.69,-0.1047]),SFVec3f([0,1.64,-0.1342]),SFVec3f([-0.05334,1.631,-0.1239]),SFVec3f([-0.05011,1.581,-0.1193]),SFVec3f([-0.04359,1.551,-0.1067]),SFVec3f([-0.03839,1.528,-0.09652]),SFVec3f([-0.03528,1.502,-0.05013]),SFVec3f([-0.04,1.51,-0.07278]),SFVec3f([-0.04029,1.514,-0.08254]),SFVec3f([-0.03479,1.517,-0.09269]),SFVec3f([-0.02295,1.492,-0.02694]),SFVec3f([-0.007322,1.489,-0.01677]),SFVec3f([0,1.588,-0.1329]),SFVec3f([-0.03399,1.636,-0.1304]),SFVec3f([-0.04758,1.514,-0.03107]),SFVec3f([-0.03428,1.595,0.03294]),SFVec3f([-0.02106,1.592,0.03748]),SFVec3f([-0.02735,1.596,0.03552]),SFVec3f([-0.0249,1.58,0.0387]),SFVec3f([-0.01489,1.583,0.04109]),SFVec3f([-0.04597,1.586,0.02904]),SFVec3f([-0.04354,1.59,0.02822]),SFVec3f([-0.03603,1.58,0.03536]),SFVec3f([-0.05856,1.63,0.01803]),SFVec3f([-0.06182,1.614,0.008199]),SFVec3f([-0.02788,1.528,0.03084]),SFVec3f([-0.005112,1.532,0.04358]),SFVec3f([-0.01405,1.531,0.04152]),SFVec3f([-0.00797,1.515,0.03774]),SFVec3f([-0.01946,1.52,0.03421]),SFVec3f([-0.05867,1.544,-0.03316]),SFVec3f([-0.06433,1.563,-0.03678]),SFVec3f([-0.06732,1.583,-0.03683]),SFVec3f([-0.06769,1.617,-0.03436]),SFVec3f([-0.04847,1.643,0.02895]),SFVec3f([-0.02958,1.651,0.03965]),SFVec3f([-0.05324,1.536,-0.05922]),SFVec3f([-0.04795,1.531,-0.08973]),SFVec3f([-0.03839,1.528,-0.09652]),SFVec3f([0.02106,1.592,0.03748]),SFVec3f([0.01489,1.583,0.04109]),SFVec3f([0.0249,1.58,0.0387]),SFVec3f([0.03603,1.58,0.03536]),SFVec3f([0.04354,1.59,0.02822]),SFVec3f([0.03428,1.595,0.03294]),SFVec3f([0.02735,1.596,0.03552]),SFVec3f([0.02788,1.528,0.03084]),SFVec3f([0.01405,1.531,0.04152]),SFVec3f([0,1.53,0.04236]),SFVec3f([0,1.515,0.03836]),SFVec3f([0.00797,1.515,0.03774]),SFVec3f([0.01946,1.52,0.03421]),SFVec3f([0.005112,1.532,0.04358]),SFVec3f([0,1.655,0.04322]),SFVec3f([0.02958,1.651,0.03965]),SFVec3f([0.04847,1.643,0.02895]),SFVec3f([0.05856,1.63,0.01803]),SFVec3f([0.06182,1.614,0.008199]),SFVec3f([0.06769,1.617,-0.03436]),SFVec3f([0.06732,1.583,-0.03683]),SFVec3f([0.06433,1.563,-0.03678]),SFVec3f([0.05867,1.544,-0.03316]),SFVec3f([0.05324,1.536,-0.05922]),SFVec3f([0.04795,1.531,-0.08973]),SFVec3f([0.03839,1.528,-0.09652]),SFVec3f([0,1.524,-0.102])])),
                                                          color_ : 
                                                            Color(
                                                              color_ : MFColor([SFColor(0.749), SFColor(0.601), SFColor(0.462), SFColor(0.1735), SFColor(0.2602), SFColor(0.749), SFColor(0.6364), SFColor(0.133), SFColor(0.1526), SFColor(0.4545), SFColor(0.2759), SFColor(0.1902), SFColor(0), SFColor(0), SFColor(0.502)])))),

                                                    Transform(
                                                      DEF_ : SFString('maskAndSnorkel'),
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.0409)]),
                                                      children_ : [
                                                        Inline(
                                                          DEF_ : SFString('MaskAndSnorkel'),
                                                          url_ : MFString([SFString("MaskAndSnorkel.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"), SFString("MaskAndSnorkel.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.wrl")]))]),

                                                    Transform(
                                                      DEF_ : SFString('mouthpiece'),
                                                      rotation_ : SFRotation([SFDouble(0.86), SFDouble(-0.58), SFDouble(-0.58), SFDouble(2.09)]),
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.0409)]),
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.0018), SFDouble(0)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      DEF_ : SFString('gray'),
                                                                      ambientIntensity_ : 0.3,
                                                                      diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0.9), SFDouble(0.89)]),
                                                                      shininess_ : 0.1,
                                                                      specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]))),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.006,
                                                                  radius_ : 0.015))]),

                                                        Transform(
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      DEF_ : SFString('black'),
                                                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]))),
                                                              geometry_ : 
                                                                Cone(
                                                                  bottomRadius_ : 0.03,
                                                                  height_ : 0.01))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.015), SFDouble(0)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('black'))),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.03))]),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.025), SFDouble(0)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('black'))),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.015))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(0.9)]),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.04), SFDouble(0)]),
                                                          children_ : [
                                                            Shape(
                                                              DEF_ : SFString('mouthpiecePlastic'),
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                              geometry_ : 
                                                                Box(
                                                                  size_ : SFVec3f([SFDouble(0.002), SFDouble(0.03), SFDouble(0.018)])))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-0.9)]),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.04), SFDouble(0)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('mouthpiecePlastic'))]),

                                                        Transform(
                                                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.015), SFDouble(0.03)]),
                                                          children_ : [
                                                            Shape(
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('gray'))),
                                                              geometry_ : 
                                                                Cylinder(
                                                                  height_ : 0.02,
                                                                  radius_ : 0.0075))]),
                                                      /*x = 0, y = 50, z = -270*/

                                                        Transform(
                                                          DEF_ : SFString('airTube'),
                                                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                                                          scale_ : SFVec3f([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.02), SFDouble(0.055)]),
                                                          children_ : [
                                                            Transform(
                                                              rotation_ : SFRotation([SFDouble(-0.21), SFDouble(0.21), SFDouble(-0.95), SFDouble(4.67)]),
                                                              children_ : [
                                                                Shape(
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]))),
                                                                  geometry_ : 
                                                                    Extrusion(
                                                                      crossSection_ : MFVec2f([SFVec2f([0,0.013]),SFVec2f([0.00494,0.01196]),SFVec2f([0.00923,0.00923]),SFVec2f([0.01196,0.00494]),SFVec2f([0.013,0]),SFVec2f([0.01196,-0.00494]),SFVec2f([0.00923,-0.00923]),SFVec2f([0.00494,-0.01196]),SFVec2f([0,0.013]),SFVec2f([-0.00494,-0.01196]),SFVec2f([-0.00923,-0.00923]),SFVec2f([-0.01196,-0.00494]),SFVec2f([-0.013,0]),SFVec2f([-0.01196,0.00494]),SFVec2f([-0.00923,0.00923]),SFVec2f([-0.00494,0.01196]),SFVec2f([0,0.013])]),
                                                                      spine_ : MFVec3f([SFVec3f([0.005,-0.03,0]),SFVec3f([-0.01,0.02,0]),SFVec3f([-0.03,0.08,0]),SFVec3f([-0.05,0.14,0]),SFVec3f([-0.08,0.19,0]),SFVec3f([-0.1,0.22,0]),SFVec3f([-0.12,0.25,0]),SFVec3f([-0.15,0.27,0]),SFVec3f([-0.18,0.28,0]),SFVec3f([-0.21,0.29,0]),SFVec3f([-0.26,0.28,0]),SFVec3f([-0.28,0.26,0]),SFVec3f([-0.305,0.23,0]),SFVec3f([-0.32,0.2,0]),SFVec3f([-0.34,0.16,0]),SFVec3f([-0.35,0.12,0]),SFVec3f([-0.37,0.04,0]),SFVec3f([-0.385,0,0]),SFVec3f([-0.39,-0.07,0])])))])])]),

                                                    Transform(
                                                      DEF_ : SFString('Bubbles'),
                                                      scale_ : SFVec3f([SFDouble(0.35), SFDouble(0.35), SFDouble(0.35)]),
                                                      translation_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.0409)]),
                                                      children_ : [
                                                        Inline(
                                                          DEF_ : SFString('bubbles'),
                                                          url_ : MFString([SFString("Bubbles.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"), SFString("Bubbles.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.wrl")]))])])])])])]),

                                HAnimJoint(
                                  USE_ : SFString('hanim_humanoid_root')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_sacroiliac')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_vl1')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_vc4')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_skullbase')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_ankle')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_ankle')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_elbow')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_elbow')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_hip')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_hip')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_knee')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_knee')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_shoulder')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_shoulder')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_l_wrist')),

                                HAnimJoint(
                                  USE_ : SFString('hanim_r_wrist')),
                              segments_ : [
                                HAnimSegment(
                                  USE_ : SFString('hanim_pelvis')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l1')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_c4')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_skull')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_calf')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_calf')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_forearm')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_forearm')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_hand')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_hand')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_hindfoot')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_hindfoot')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_thigh')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_thigh')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_l_upperarm')),

                                HAnimSegment(
                                  USE_ : SFString('hanim_r_upperarm'))])])])])]),

            Script(
              DEF_ : SFString('finWarpScript'),
              field_ : [
                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('set_rotationLeft'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('set_rotationRight'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('finWarpLeft'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('finWarpRight'),
                  accessType_ : SFString("outputOnly")),
              ],
ecmascript:eval (0
, function set_rotationLeft(rotationValue, timeStamp)
{
	if (rotationValue[0] <= 0)
	{
		finWarpLeft = false;
	}
	else
	{
		finWarpLeft = true;
	}
//	print ('Left  rotationValue[0] ' + rotationValue[0] + ', finWarpLeft=' + finWarpLeft);
}

, function set_rotationRight(rotationValue, timeStamp)
{
	if (rotationValue[0] <= 0)
	{
		finWarpRight = false;
	}
	else
	{
		finWarpRight = true;
	}
//	print ('Right rotationValue[0] ' + rotationValue[0] + ', finWarpRight=' + finWarpRight);
})),
          /*Fins animation*/

            ProximitySensor(
              DEF_ : SFString('FinTriggerProximitySensor'),
              size_ : SFVec3f([SFDouble(15), SFDouble(15), SFDouble(15)])),

            TimeSensor(
              DEF_ : SFString('FinClock'),
              cycleInterval_ : 7,
              loop_ : true),

            Group(
              children_ : [
                Script(
                  DEF_ : SFString('FinScript'),
                  field_ : [
                    field(
                      type_ : SFString("MFVec3f"),
                      name_ : SFString('keyValueRight'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFVec3f"),
                      name_ : SFString('keyValueLeft'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('set_fraction'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('finL'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('finR'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('finWarpL'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('finWarpR'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('false')),
                  ],
ecmascript:eval (0
, function finL(value, timeStamp)
{
	if (value == 0)
	{
		finWarpL = 0;
	}
	else
	{
		finWarpL = 1;
	}
	//print ('finWarpL' + finWarpL);
}

, function finR(value, timeStamp)
{
	if (value == 0)
	{
		finWarpR = 0;
	}
	else
	{
		finWarpR = 1;
	}
	//print ('finWarpR' + finWarpR);
}
, function finMove(fraction, timeStamp)
 {
	if (finWarpL == 1)
	{
		// level 3 (warp outside) Left
		kVL7 = new SFVec3f(1.25, 0, 25);
		kVL8 = new SFVec3f(2.5, 0, 30);
 		kVL9 = new SFVec3f(3.25, 0, 34);
	}
	else
	{
		// level -2 (warp inside) Left
		kVL7 = new SFVec3f(-1.25, 0, 25);
		kVL8 = new SFVec3f(-2.5, 0, 30);
 		kVL9 = new SFVec3f(-3.25, 0, 34);
	}

	if (finWarpR == 0)
	{
		// level  1 (warp outside ) Right
		kVR7 = new SFVec3f(1.25, 0, 25);
		kVR8 = new SFVec3f(2.5, 0, 30);
 		kVR9 = new SFVec3f(3.25, 0, 34);

	}
	else
	{
		// level  -2 ( warp inside) Right
		kVR7 = new SFVec3f(-1.25, 0, 25);
		kVR8 = new SFVec3f(-2.5, 0, 30);
 		kVR9 = new SFVec3f(-3.25, 0, 34);
	}

	// Left Fin (fixed spine)
	kVL1 = new SFVec3f(0, 0, 1);
	kVL2 = new SFVec3f(0, 0, 5);
	kVL3 = new SFVec3f(0, 0, 8);
	kVL4 = new SFVec3f(0, 0, 12);
	kVL5 = new SFVec3f(0, 0, 15);
	kVL6 = new SFVec3f(0, 0, 18);
	keyValueLeft = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);

	// Right Fin (fixed spine)
	kVR1 = new SFVec3f(0, 0, 1);
	kVR2 = new SFVec3f(0, 0, 5);
	kVR3 = new SFVec3f(0, 0, 8);
	kVR4 = new SFVec3f(0, 0, 12);
	kVR5 = new SFVec3f(0, 0, 15);
	kVR6 = new SFVec3f(0, 0, 18);
	keyValueRight = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);

	//tracePrint ('keyValueLeft =' + keyValueLeft);
	//tracePrint ('keyValueRight=' + keyValueRight);
}

, function set_fraction (value, timeStamp)
{
	finMove(value);
	//tracePrint('time fraction =' + value);
}

, function tracePrint (outputString)
{
	if (traceEnabled) Browser.print ('[Fin Move]' + outputString);
})),

                ROUTE(
                  fromField_ : SFString('finWarpLeft'),
                  fromNode_ : SFString('finWarpScript'),
                  toField_ : SFString('finL'),
                  toNode_ : SFString('FinScript')),

                ROUTE(
                  fromField_ : SFString('finWarpRight'),
                  fromNode_ : SFString('finWarpScript'),
                  toField_ : SFString('finR'),
                  toNode_ : SFString('FinScript')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('FinTriggerProximitySensor'),
                  toField_ : SFString('enabled'),
                  toNode_ : SFString('FinClock')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('FinClock'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('FinScript')),

                ROUTE(
                  fromField_ : SFString('keyValueRight'),
                  fromNode_ : SFString('FinScript'),
                  toField_ : SFString('set_spine'),
                  toNode_ : SFString('FinExtrusionRight')),

                ROUTE(
                  fromField_ : SFString('keyValueLeft'),
                  fromNode_ : SFString('FinScript'),
                  toField_ : SFString('set_spine'),
                  toNode_ : SFString('FinExtrusionLeft'))]),

            NavigationInfo(
              avatarSize_ : MFFloat([SFFloat(0.15), SFFloat(1.53), SFFloat(0.75)]),
              speed_ : 0.5),

            WorldInfo(
              info_ : MFString([SFString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")]),
              title_ : SFString('Nancy - an HAnim compliant avatar by 3Name3D')),

            Group(
              DEF_ : SFString('Animations'),
              children_ : [
                Group(
                  DEF_ : SFString('Dive_Animation'),
                  children_ : [
                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.86001)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.5), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1556), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08678), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.131), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3942), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)])),

                    OrientationInterpolator(
                      DEF_ : SFString('lower_body_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.09018), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056)])),
                  /**/

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.00222418), SFRotation(0.99801), SFRotation(-0.0630095), SFRotation(1.46072), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.497349), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5855), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5852), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.45), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(7.2), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.32), SFFloat(0.64), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5976), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3917), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.5), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.8), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.4), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.2)])),
                  /**/

                    OrientationInterpolator(
                      DEF_ : SFString('head_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.3), SFFloat(0.32), SFFloat(0.4), SFFloat(0.45), SFFloat(0.6), SFFloat(0.65), SFFloat(0.7), SFFloat(0.75), SFFloat(0.85), SFFloat(0.9), SFFloat(0.95), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.999), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.99), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.99), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1)])),

                    OrientationInterpolator(
                      DEF_ : SFString('neck_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('upper_body_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826), SFRotation(-0.01972), SFRotation(-0.5974), SFRotation(0.8017), SFRotation(0.08231), SFRotation(0.009296), SFRotation(-0.9648), SFRotation(0.2627), SFRotation(0.1734), SFRotation(-0.01238), SFRotation(0.9549), SFRotation(-0.2968), SFRotation(0.08732), SFRotation(-0.008125), SFRotation(0.9691), SFRotation(-0.2463), SFRotation(0.158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826)])),

                    OrientationInterpolator(
                      DEF_ : SFString('whole_body_RotationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    PositionInterpolator(
                      DEF_ : SFString('whole_body_TranslationInterpolator_BasicDive'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])])),

                    TimeSensor(
                      DEF_ : SFString('Dive_Time'),
                      cycleInterval_ : 7,
                      loop_ : true,
                      startTime_ : -1),

                    ProximitySensor(
                      DEF_ : SFString('TriggerProximitySensor'),
                      size_ : SFVec3f([SFDouble(50), SFDouble(50), SFDouble(50)]))])]),

            ROUTE(
              fromField_ : SFString('enterTime'),
              fromNode_ : SFString('TriggerProximitySensor'),
              toField_ : SFString('startTime'),
              toNode_ : SFString('Dive_Time')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_ankle_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_knee_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_hip_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_ankle_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_knee_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_hip_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('lower_body_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('head_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('neck_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('upper_body_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('whole_body_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('whole_body_TranslationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_ankle_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_knee_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_hip_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_ankle_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_ankle')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_knee_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_knee')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_hip_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotationLeft'),
              toNode_ : SFString('finWarpScript')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_hip_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotationRight'),
              toNode_ : SFString('finWarpScript')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_hip_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_hip')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('lower_body_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_sacroiliac')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('head_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_skullbase')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('neck_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_vc4')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('upper_body_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_vl1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('whole_body_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_humanoid_root')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('whole_body_TranslationInterpolator_BasicDive'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('hanim_humanoid_root')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_wrist_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_elbow_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('r_shoulder_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_wrist_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_elbow_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Dive_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('l_shoulder_RotationInterpolator_BasicDive')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_wrist_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_elbow_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('r_shoulder_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_r_shoulder')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_wrist_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_wrist')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_elbow_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_elbow')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('l_shoulder_RotationInterpolator_BasicDive'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('hanim_l_shoulder'))]));
void main() { exit(0); }
