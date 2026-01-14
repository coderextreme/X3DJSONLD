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
              content_ : SFString('NancyNativeTags.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Cindy Ballreich')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Tom Miller')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 July 2000')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Tue, 09 Sep 2025 19:39:13 GMT')),

            meta(
              name_ : SFString('error'),
              content_ : SFString('Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('need height, weight. not sure if we should ask a lady her age.')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Canonical HAnim 1.1 specification example, using native X3D tags instead of ProtoDeclaration/ExternProtoDeclaration and ProtoInstance.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyNativeTags.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            HAnimHumanoid(
              DEF_ : SFString('hanim_Nancy'),
              name_ : SFString('Nancy'),
              info_ : MFString([SFString("humanoidVersion=Nancy V1.2b"), SFString("authorEmail=cindy@ballreich.net"), SFString("authorName=Cindy Ballreich"), SFString("copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."), SFString("creationDate=Tue Dec 30 08:30:08 PST 1997"), SFString("gender=female"), SFString("usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo http://www.ballreich.net/vrml/HAnim/small_logo.gif is present and proper credit is given.")]),
              version_ : SFString('1.0'),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  center_ : SFVec3f([SFDouble(-0.00405), SFDouble(0.855), SFDouble(-0.000113)]),
                  children_ : [
                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(1.01), SFDouble(-0.0204)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('Pants_Color'),
                                      ambientIntensity_ : 0.25,
                                      diffuseColor_ : SFColor([SFDouble(0.054), SFDouble(0.233), SFDouble(0.39)]))),
                              geometry_ : 
                                IndexedFaceSet(
                                  creaseAngle_ : 1.14,
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(40), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(40), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(40), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(40), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(40), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(9), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(8), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(8), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(8), SFInt32(10), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(12), SFInt32(-1), SFInt32(7), SFInt32(0), SFInt32(47), SFInt32(-1), SFInt32(50), SFInt32(5), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(47), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(50), SFInt32(9), SFInt32(56), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(14), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(19), SFInt32(-1), SFInt32(13), SFInt32(55), SFInt32(17), SFInt32(-1), SFInt32(60), SFInt32(17), SFInt32(55), SFInt32(-1), SFInt32(17), SFInt32(19), SFInt32(13), SFInt32(-1), SFInt32(19), SFInt32(16), SFInt32(12), SFInt32(-1), SFInt32(16), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(14), SFInt32(56), SFInt32(9), SFInt32(-1), SFInt32(56), SFInt32(14), SFInt32(64), SFInt32(-1), SFInt32(17), SFInt32(60), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(17), SFInt32(-1), SFInt32(21), SFInt32(64), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(24), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(24), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(24), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(64), SFInt32(21), SFInt32(69), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(20), SFInt32(63), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(19), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(21), SFInt32(-1), SFInt32(28), SFInt32(69), SFInt32(21), SFInt32(-1), SFInt32(27), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(69), SFInt32(28), SFInt32(79), SFInt32(-1), SFInt32(29), SFInt32(30), SFInt32(32), SFInt32(-1), SFInt32(30), SFInt32(23), SFInt32(33), SFInt32(-1), SFInt32(23), SFInt32(24), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(34), SFInt32(-1), SFInt32(83), SFInt32(27), SFInt32(77), SFInt32(-1), SFInt32(37), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(33), SFInt32(32), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(79), SFInt32(28), SFInt32(-1), SFInt32(79), SFInt32(31), SFInt32(84), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(36), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(37), SFInt32(-1), SFInt32(34), SFInt32(27), SFInt32(83), SFInt32(-1), SFInt32(83), SFInt32(38), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(37), SFInt32(25), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(33), SFInt32(-1), SFInt32(36), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(84), SFInt32(31), SFInt32(89), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(89), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(39), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(39), SFInt32(-1), SFInt32(38), SFInt32(83), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(89), SFInt32(35), SFInt32(-1), SFInt32(40), SFInt32(41), SFInt32(0), SFInt32(-1), SFInt32(40), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(40), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(40), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(40), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(49), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(48), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(48), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(46), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(47), SFInt32(0), SFInt32(-1), SFInt32(41), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(42), SFInt32(48), SFInt32(46), SFInt32(-1), SFInt32(51), SFInt32(44), SFInt32(49), SFInt32(-1), SFInt32(51), SFInt32(48), SFInt32(44), SFInt32(-1), SFInt32(48), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(49), SFInt32(45), SFInt32(50), SFInt32(-1), SFInt32(56), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(57), SFInt32(51), SFInt32(49), SFInt32(-1), SFInt32(58), SFInt32(53), SFInt32(52), SFInt32(-1), SFInt32(59), SFInt32(54), SFInt32(53), SFInt32(-1), SFInt32(62), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(62), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(59), SFInt32(62), SFInt32(-1), SFInt32(53), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(51), SFInt32(61), SFInt32(58), SFInt32(-1), SFInt32(49), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(64), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(67), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(68), SFInt32(62), SFInt32(59), SFInt32(-1), SFInt32(60), SFInt32(63), SFInt32(20), SFInt32(-1), SFInt32(60), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(59), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(58), SFInt32(61), SFInt32(67), SFInt32(-1), SFInt32(57), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(66), SFInt32(57), SFInt32(-1), SFInt32(71), SFInt32(63), SFInt32(62), SFInt32(-1), SFInt32(69), SFInt32(65), SFInt32(64), SFInt32(-1), SFInt32(74), SFInt32(66), SFInt32(65), SFInt32(-1), SFInt32(78), SFInt32(68), SFInt32(67), SFInt32(-1), SFInt32(70), SFInt32(71), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(72), SFInt32(27), SFInt32(-1), SFInt32(63), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(68), SFInt32(78), SFInt32(76), SFInt32(-1), SFInt32(67), SFInt32(75), SFInt32(78), SFInt32(-1), SFInt32(66), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(65), SFInt32(73), SFInt32(74), SFInt32(-1), SFInt32(65), SFInt32(69), SFInt32(73), SFInt32(-1), SFInt32(77), SFInt32(27), SFInt32(72), SFInt32(-1), SFInt32(71), SFInt32(82), SFInt32(72), SFInt32(-1), SFInt32(79), SFInt32(73), SFInt32(69), SFInt32(-1), SFInt32(81), SFInt32(75), SFInt32(74), SFInt32(-1), SFInt32(82), SFInt32(71), SFInt32(70), SFInt32(-1), SFInt32(77), SFInt32(72), SFInt32(83), SFInt32(-1), SFInt32(73), SFInt32(79), SFInt32(80), SFInt32(-1), SFInt32(84), SFInt32(80), SFInt32(79), SFInt32(-1), SFInt32(86), SFInt32(75), SFInt32(81), SFInt32(-1), SFInt32(83), SFInt32(72), SFInt32(82), SFInt32(-1), SFInt32(82), SFInt32(88), SFInt32(83), SFInt32(-1), SFInt32(70), SFInt32(87), SFInt32(82), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(80), SFInt32(84), SFInt32(-1), SFInt32(89), SFInt32(85), SFInt32(80), SFInt32(-1), SFInt32(90), SFInt32(86), SFInt32(85), SFInt32(-1), SFInt32(90), SFInt32(87), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(83), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(90), SFInt32(89), SFInt32(-1), SFInt32(85), SFInt32(89), SFInt32(90), SFInt32(-1), SFInt32(50), SFInt32(45), SFInt32(5), SFInt32(-1), SFInt32(45), SFInt32(40), SFInt32(5), SFInt32(-1), SFInt32(10), SFInt32(8), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(22), SFInt32(14), SFInt32(10), SFInt32(-1), SFInt32(57), SFInt32(66), SFInt32(51), SFInt32(-1), SFInt32(66), SFInt32(61), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(58), SFInt32(48), SFInt32(-1), SFInt32(58), SFInt32(52), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(53), SFInt32(46), SFInt32(-1), SFInt32(53), SFInt32(54), SFInt32(46), SFInt32(-1), SFInt32(76), SFInt32(70), SFInt32(68), SFInt32(-1), SFInt32(70), SFInt32(62), SFInt32(68), SFInt32(-1), SFInt32(29), SFInt32(32), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(35), SFInt32(31), SFInt32(-1), SFInt32(85), SFInt32(81), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(73), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(74), SFInt32(73), SFInt32(-1), SFInt32(39), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(37), SFInt32(34), SFInt32(38), SFInt32(-1), SFInt32(82), SFInt32(87), SFInt32(88), SFInt32(-1), SFInt32(87), SFInt32(90), SFInt32(88), SFInt32(-1), SFInt32(87), SFInt32(78), SFInt32(86), SFInt32(-1), SFInt32(78), SFInt32(75), SFInt32(86), SFInt32(-1), SFInt32(61), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(66), SFInt32(75), SFInt32(67), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(23), SFInt32(30), SFInt32(15), SFInt32(-1), SFInt32(30), SFInt32(22), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(12), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(46), SFInt32(54), SFInt32(47), SFInt32(-1), SFInt32(54), SFInt32(55), SFInt32(47), SFInt32(-1), SFInt32(87), SFInt32(76), SFInt32(78), SFInt32(-1), SFInt32(87), SFInt32(70), SFInt32(76), SFInt32(-1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,1.06,0.0218]),SFVec3f([0.0561,1.07,0.00726]),SFVec3f([0.0851,1.07,-0.0115]),SFVec3f([0.104,1.07,-0.0497]),SFVec3f([0.0851,1.07,-0.0851]),SFVec3f([0.032,1.06,-0.0985]),SFVec3f([0.0873,1.04,0.0078]),SFVec3f([0.033,1.04,0.0395]),SFVec3f([0.123,1.05,-0.0405]),SFVec3f([0.0609,1.02,-0.106]),SFVec3f([0.0894,0.996,-0.106]),SFVec3f([0.143,1,-0.0309]),SFVec3f([0.117,1,0.0164]),SFVec3f([0.0314,0.999,0.0502]),SFVec3f([0.0314,0.96,-0.13]),SFVec3f([0.156,0.966,-0.0405]),SFVec3f([0.156,0.968,-0.00724]),SFVec3f([0.0341,0.954,0.0513]),SFVec3f([0.115,0.96,-0.0916]),SFVec3f([0.121,0.926,0.0352]),SFVec3f([0.0357,0.92,0.0497]),SFVec3f([0.0314,0.91,-0.146]),SFVec3f([0.0991,0.91,-0.131]),SFVec3f([0.169,0.883,-0.0448]),SFVec3f([0.169,0.885,-0.00939]),SFVec3f([0.123,0.873,0.0384]),SFVec3f([0.0926,0.872,0.047]),SFVec3f([0.0325,0.873,0.0287]),SFVec3f([0.0293,0.866,-0.142]),SFVec3f([0.102,0.869,-0.131]),SFVec3f([0.129,0.868,-0.103]),SFVec3f([0.0314,0.84,-0.125]),SFVec3f([0.101,0.844,-0.122]),SFVec3f([0.133,0.846,-0.0878]),SFVec3f([0.0653,0.835,0.0132]),SFVec3f([0.0615,0.824,-0.111]),SFVec3f([0.0985,0.823,-0.101]),SFVec3f([0.132,0.826,-0.0448]),SFVec3f([0.0609,0.821,-0.0158]),SFVec3f([0.0599,0.812,-0.0545]),SFVec3f([0,1.08,-0.0266]),SFVec3f([-0.0561,1.07,0.00726]),SFVec3f([-0.0851,1.07,-0.0115]),SFVec3f([-0.104,1.07,-0.0497]),SFVec3f([-0.0851,1.07,-0.0851]),SFVec3f([-0.032,1.06,-0.0985]),SFVec3f([-0.0873,1.04,0.0078]),SFVec3f([-0.033,1.04,0.0395]),SFVec3f([-0.123,1.05,-0.0405]),SFVec3f([-0.0609,1.02,-0.106]),SFVec3f([0,1.02,-0.108]),SFVec3f([-0.0894,0.996,-0.106]),SFVec3f([-0.143,1,-0.0309]),SFVec3f([-0.144,1,-0.011]),SFVec3f([-0.117,1,0.0164]),SFVec3f([-0.0314,0.999,0.0502]),SFVec3f([0,0.961,-0.123]),SFVec3f([-0.0314,0.96,-0.13]),SFVec3f([-0.156,0.966,-0.0405]),SFVec3f([-0.156,0.968,-0.00724]),SFVec3f([-0.0341,0.954,0.0513]),SFVec3f([-0.115,0.96,-0.0916]),SFVec3f([-0.121,0.926,0.0352]),SFVec3f([-0.0357,0.92,0.0497]),SFVec3f([0,0.91,-0.127]),SFVec3f([-0.0314,0.91,-0.146]),SFVec3f([-0.0991,0.91,-0.131]),SFVec3f([-0.167,0.911,-0.0448]),SFVec3f([-0.167,0.912,-0.00671]),SFVec3f([0,0.883,-0.129]),SFVec3f([-0.123,0.873,0.0384]),SFVec3f([-0.0926,0.872,0.047]),SFVec3f([-0.0325,0.873,0.0287]),SFVec3f([-0.0293,0.866,-0.142]),SFVec3f([-0.102,0.869,-0.131]),SFVec3f([-0.129,0.868,-0.103]),SFVec3f([-0.166,0.863,-0.0148]),SFVec3f([0,0.863,-0.00456]),SFVec3f([-0.166,0.862,-0.0459]),SFVec3f([0,0.858,-0.1]),SFVec3f([-0.0314,0.84,-0.125]),SFVec3f([-0.101,0.844,-0.122]),SFVec3f([-0.0653,0.835,0.0132]),SFVec3f([0,0.839,-0.0217]),SFVec3f([0,0.835,-0.0867]),SFVec3f([-0.0615,0.824,-0.111]),SFVec3f([-0.0985,0.823,-0.101]),SFVec3f([-0.132,0.826,-0.0448]),SFVec3f([-0.0609,0.821,-0.0158]),SFVec3f([0,0.831,-0.0626]),SFVec3f([-0.0599,0.812,-0.0545])]))))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_hip'),
                          name_ : SFString('l_hip'),
                          center_ : SFVec3f([SFDouble(0.122), SFDouble(0.888271), SFDouble(-0.0693267)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_thigh'),
                              name_ : SFString('l_thigh'),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('Pants_Color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      creaseAngle_ : 1.32,
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(10), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(11), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(12), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(13), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(15), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(8), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(4), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(3), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(20), SFInt32(13), SFInt32(16), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(19), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(12), SFInt32(-1), SFInt32(23), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(12), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(11), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(10), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(26), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(27), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(29), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(23), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(28), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(32), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(17), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(25), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(26), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(32), SFInt32(27), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(13), SFInt32(-1), SFInt32(22), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(9), SFInt32(15), SFInt32(24), SFInt32(-1), SFInt32(10), SFInt32(9), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(24), SFInt32(17), SFInt32(-1), SFInt32(6), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(24), SFInt32(31), SFInt32(17), SFInt32(-1), SFInt32(31), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(30), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(31), SFInt32(24), SFInt32(23), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0969,0.804,-0.0486]),SFVec3f([0.101,0.876,0.0336]),SFVec3f([0.17,0.894,-0.00778]),SFVec3f([0.17,0.891,-0.076]),SFVec3f([0.124,0.858,-0.129]),SFVec3f([0.076,0.843,-0.143]),SFVec3f([0.025,0.819,-0.0889]),SFVec3f([0.0507,0.847,0.0196]),SFVec3f([0.00349,0.826,-0.0287]),SFVec3f([0.0991,0.808,0.0406]),SFVec3f([0.161,0.814,-0.00187]),SFVec3f([0.165,0.808,-0.0755]),SFVec3f([0.122,0.788,-0.126]),SFVec3f([0.00993,0.762,-0.0937]),SFVec3f([0.00993,0.762,-0.0309]),SFVec3f([0.0491,0.777,0.0185]),SFVec3f([0.0755,0.766,-0.139]),SFVec3f([0.13,0.597,-0.00618]),SFVec3f([0.132,0.6,-0.0593]),SFVec3f([0.108,0.603,-0.105]),SFVec3f([0.0722,0.601,-0.118]),SFVec3f([0.0314,0.59,-0.0953]),SFVec3f([0.0239,0.566,-0.0427]),SFVec3f([0.047,0.566,0.0051]),SFVec3f([0.0878,0.581,0.0217]),SFVec3f([0.114,0.499,-0.0132]),SFVec3f([0.116,0.488,-0.061]),SFVec3f([0.103,0.567,-0.0991]),SFVec3f([0.0362,0.557,-0.0926]),SFVec3f([0.025,0.486,-0.047]),SFVec3f([0.0507,0.497,-0.00188]),SFVec3f([0.0862,0.513,0.018]),SFVec3f([0.0733,0.579,-0.108])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_knee'),
                              name_ : SFString('l_knee'),
                              center_ : SFVec3f([SFDouble(0.0738), SFDouble(0.517), SFDouble(-0.0284)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_calf'),
                                  name_ : SFString('l_calf'),
                                  children_ : [
                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Pants_Color'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          creaseAngle_ : 1.57,
                                          coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(0), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(11), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(12), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(13), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(3), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(5), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(15), SFInt32(-1), SFInt32(22), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(20), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(12), SFInt32(-1), SFInt32(23), SFInt32(9), SFInt32(14), SFInt32(-1), SFInt32(9), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(12), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(9), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(24), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(25), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(26), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(30), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(31), SFInt32(16), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(22), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(21), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(18), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(17), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(16), SFInt32(31), SFInt32(24), SFInt32(-1), SFInt32(33), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(36), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(37), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(29), SFInt32(36), SFInt32(30), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(33), SFInt32(-1), SFInt32(31), SFInt32(37), SFInt32(24), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(37), SFInt32(32), SFInt32(-1), SFInt32(38), SFInt32(37), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(36), SFInt32(38), SFInt32(-1), SFInt32(41), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(42), SFInt32(39), SFInt32(34), SFInt32(-1), SFInt32(44), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(45), SFInt32(38), SFInt32(36), SFInt32(-1), SFInt32(46), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(36), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(35), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(39), SFInt32(42), SFInt32(47), SFInt32(-1), SFInt32(32), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(40), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(45), SFInt32(-1), SFInt32(41), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(44), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(42), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(28), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(28), SFInt32(-1), SFInt32(34), SFInt32(39), SFInt32(27), SFInt32(-1), SFInt32(39), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(34), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(34), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(40), SFInt32(32), SFInt32(46), SFInt32(-1), SFInt32(32), SFInt32(37), SFInt32(46), SFInt32(-1), SFInt32(10), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(11), SFInt32(-1), SFInt32(14), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(8), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(10), SFInt32(-1), SFInt32(15), SFInt32(19), SFInt32(10), SFInt32(-1), SFInt32(15), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(43), SFInt32(35), SFInt32(47), SFInt32(-1), SFInt32(35), SFInt32(39), SFInt32(47), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0883,0.532,-0.00349]),SFVec3f([0.0609,0.533,-0.00833]),SFVec3f([0.0814,0.55,-0.0395]),SFVec3f([0.0529,0.536,-0.0368]),SFVec3f([0.0577,0.544,-0.0577]),SFVec3f([0.0722,0.546,-0.0717]),SFVec3f([0.0975,0.54,-0.0647]),SFVec3f([0.105,0.539,-0.0438]),SFVec3f([0.104,0.539,-0.0223]),SFVec3f([0.0862,0.506,0.0158]),SFVec3f([0.101,0.51,-0.0798]),SFVec3f([0.0706,0.51,-0.101]),SFVec3f([0.0406,0.513,-0.0744]),SFVec3f([0.0368,0.51,-0.0357]),SFVec3f([0.0556,0.506,-0.000272]),SFVec3f([0.117,0.508,-0.0169]),SFVec3f([0.0878,0.361,-0.0126]),SFVec3f([0.123,0.363,-0.04]),SFVec3f([0.123,0.363,-0.0663]),SFVec3f([0.107,0.367,-0.107]),SFVec3f([0.0588,0.365,-0.122]),SFVec3f([0.0228,0.358,-0.0926]),SFVec3f([0.0239,0.358,-0.0475]),SFVec3f([0.0497,0.358,-0.0234]),SFVec3f([0.118,0.311,-0.0411]),SFVec3f([0.118,0.309,-0.0685]),SFVec3f([0.105,0.31,-0.108]),SFVec3f([0.0572,0.308,-0.123]),SFVec3f([0.0201,0.309,-0.0937]),SFVec3f([0.0191,0.311,-0.0508]),SFVec3f([0.0475,0.307,-0.0282]),SFVec3f([0.0883,0.309,-0.018]),SFVec3f([0.0959,0.124,-0.04]),SFVec3f([0.0905,0.12,-0.0647]),SFVec3f([0.0738,0.117,-0.0814]),SFVec3f([0.0373,0.121,-0.0636]),SFVec3f([0.0416,0.124,-0.0416]),SFVec3f([0.0744,0.13,-0.0212]),SFVec3f([0.0561,0.13,-0.0245]),SFVec3f([0.0529,0.121,-0.0873]),SFVec3f([0.0948,0.0897,-0.0368]),SFVec3f([0.0916,0.0779,-0.0604]),SFVec3f([0.0717,0.0854,-0.0765]),SFVec3f([0.0406,0.0918,-0.0626]),SFVec3f([0.0384,0.0881,-0.0363]),SFVec3f([0.054,0.0972,-0.0175]),SFVec3f([0.0765,0.11,-0.0169]),SFVec3f([0.0486,0.0999,-0.0835])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_ankle'),
                                  name_ : SFString('l_ankle'),
                                  center_ : SFVec3f([SFDouble(0.0645), SFDouble(0.0719), SFDouble(-0.048)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_hindfoot'),
                                      name_ : SFString('l_hindfoot'),
                                      children_ : [
                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  DEF_ : SFString('Shoe_Color'),
                                                  ambientIntensity_ : 0.25)),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              creaseAngle_ : 1.57,
                                              coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(1), SFInt32(3), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(0), SFInt32(-1), SFInt32(23), SFInt32(24), SFInt32(0), SFInt32(-1), SFInt32(25), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(25), SFInt32(2), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(16), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(27), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(27), SFInt32(14), SFInt32(-1), SFInt32(28), SFInt32(27), SFInt32(12), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(29), SFInt32(12), SFInt32(-1), SFInt32(8), SFInt32(29), SFInt32(10), SFInt32(-1), SFInt32(6), SFInt32(37), SFInt32(8), SFInt32(-1), SFInt32(24), SFInt32(30), SFInt32(25), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(31), SFInt32(24), SFInt32(-1), SFInt32(32), SFInt32(31), SFInt32(22), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(22), SFInt32(-1), SFInt32(33), SFInt32(32), SFInt32(20), SFInt32(-1), SFInt32(26), SFInt32(33), SFInt32(20), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(26), SFInt32(-1), SFInt32(27), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(35), SFInt32(34), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(35), SFInt32(28), SFInt32(-1), SFInt32(36), SFInt32(35), SFInt32(29), SFInt32(-1), SFInt32(8), SFInt32(36), SFInt32(29), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(3), SFInt32(38), SFInt32(6), SFInt32(-1), SFInt32(39), SFInt32(38), SFInt32(3), SFInt32(-1), SFInt32(30), SFInt32(39), SFInt32(25), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(30), SFInt32(-1), SFInt32(31), SFInt32(41), SFInt32(30), SFInt32(-1), SFInt32(42), SFInt32(41), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(42), SFInt32(31), SFInt32(-1), SFInt32(43), SFInt32(42), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(43), SFInt32(32), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(34), SFInt32(44), SFInt32(33), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(34), SFInt32(-1), SFInt32(35), SFInt32(45), SFInt32(34), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(35), SFInt32(-1), SFInt32(36), SFInt32(46), SFInt32(35), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(36), SFInt32(-1), SFInt32(37), SFInt32(47), SFInt32(36), SFInt32(-1), SFInt32(38), SFInt32(47), SFInt32(37), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(38), SFInt32(-1), SFInt32(49), SFInt32(48), SFInt32(38), SFInt32(-1), SFInt32(39), SFInt32(49), SFInt32(38), SFInt32(-1), SFInt32(40), SFInt32(49), SFInt32(39), SFInt32(-1), SFInt32(30), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(47), SFInt32(48), SFInt32(50), SFInt32(-1), SFInt32(46), SFInt32(47), SFInt32(50), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(50), SFInt32(-1), SFInt32(44), SFInt32(45), SFInt32(50), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(50), SFInt32(-1), SFInt32(42), SFInt32(43), SFInt32(50), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(50), SFInt32(-1), SFInt32(40), SFInt32(41), SFInt32(50), SFInt32(-1), SFInt32(49), SFInt32(40), SFInt32(50), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(11), SFInt32(15), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(11), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(17), SFInt32(19), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(19), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(21), SFInt32(-1), SFInt32(5), SFInt32(7), SFInt32(21), SFInt32(-1), SFInt32(5), SFInt32(21), SFInt32(23), SFInt32(-1), SFInt32(5), SFInt32(23), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(39), SFInt32(-1), SFInt32(4), SFInt32(25), SFInt32(39), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0529,0,-0.0923]),SFVec3f([0.0863,0,-0.0862]),SFVec3f([0.0727,0,-0.0994]),SFVec3f([0.0863,0.0219,-0.0862]),SFVec3f([0.0727,0.0219,-0.0994]),SFVec3f([0.1,0,-0.0594]),SFVec3f([0.1,0.0219,-0.0594]),SFVec3f([0.113,0,0.0645]),SFVec3f([0.113,0.0219,0.0645]),SFVec3f([0.112,0,0.117]),SFVec3f([0.112,0.0156,0.117]),SFVec3f([0.0701,0,0.146]),SFVec3f([0.0701,0.0156,0.146]),SFVec3f([0.0468,0,0.153]),SFVec3f([0.0468,0.0156,0.153]),SFVec3f([0.0215,0,0.146]),SFVec3f([0.0215,0.0156,0.146]),SFVec3f([0.0165,0,0.125]),SFVec3f([0.0165,0.0156,0.125]),SFVec3f([0.0211,0,0.0377]),SFVec3f([0.0211,0.0219,0.0377]),SFVec3f([0.0393,0,-0.0129]),SFVec3f([0.0393,0.0219,-0.0129]),SFVec3f([0.0433,0,-0.0534]),SFVec3f([0.0433,0.0219,-0.0534]),SFVec3f([0.0529,0.0219,-0.0923]),SFVec3f([0.0305,0.0253,0.0938]),SFVec3f([0.0505,0.0253,0.099]),SFVec3f([0.0854,0.0253,0.0834]),SFVec3f([0.102,0.0253,0.0707]),SFVec3f([0.0568,0.0573,-0.0918]),SFVec3f([0.0492,0.0573,-0.0497]),SFVec3f([0.0435,0.0573,-0.0225]),SFVec3f([0.0442,0.0573,0.0235]),SFVec3f([0.0623,0.0573,0.0366]),SFVec3f([0.0911,0.0573,0.0159]),SFVec3f([0.0962,0.0573,-0.0121]),SFVec3f([0.0911,0.0573,-0.0482]),SFVec3f([0.0758,0.0573,-0.0899]),SFVec3f([0.0676,0.0573,-0.0962]),SFVec3f([0.0578,0.0953,-0.0896]),SFVec3f([0.0489,0.0953,-0.0757]),SFVec3f([0.0447,0.0953,-0.0432]),SFVec3f([0.0451,0.0953,-0.0128]),SFVec3f([0.0624,0.0953,-0.00466]),SFVec3f([0.0857,0.0953,-0.0134]),SFVec3f([0.0953,0.0953,-0.038]),SFVec3f([0.0843,0.0953,-0.0803]),SFVec3f([0.0761,0.0953,-0.0889]),SFVec3f([0.0682,0.0953,-0.0929]),SFVec3f([0.0675,0.13,-0.0608])]))))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_hip'),
                          name_ : SFString('r_hip'),
                          center_ : SFVec3f([SFDouble(-0.11), SFDouble(0.892362), SFDouble(-0.0732533)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_thigh'),
                              name_ : SFString('r_thigh'),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('Pants_Color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      creaseAngle_ : 1.61,
                                      coordIndex_ : MFInt32([SFInt32(5), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(0), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(0), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(2), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(10), SFInt32(-1), SFInt32(3), SFInt32(4), SFInt32(11), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(12), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(13), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(15), SFInt32(-1), SFInt32(7), SFInt32(1), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(15), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(16), SFInt32(12), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(4), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(3), SFInt32(-1), SFInt32(10), SFInt32(9), SFInt32(2), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(20), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(22), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(12), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(26), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(27), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(28), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(23), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(30), SFInt32(31), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(29), SFInt32(-1), SFInt32(25), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(28), SFInt32(-1), SFInt32(24), SFInt32(15), SFInt32(9), SFInt32(-1), SFInt32(22), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(24), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(23), SFInt32(-1), SFInt32(25), SFInt32(31), SFInt32(17), SFInt32(-1), SFInt32(31), SFInt32(24), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(24), SFInt32(10), SFInt32(-1), SFInt32(24), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(18), SFInt32(17), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(12), SFInt32(19), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(13), SFInt32(-1), SFInt32(20), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(6), SFInt32(8), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0969,0.804,-0.0486]),SFVec3f([-0.101,0.876,0.0336]),SFVec3f([-0.17,0.894,-0.00778]),SFVec3f([-0.17,0.891,-0.076]),SFVec3f([-0.124,0.858,-0.129]),SFVec3f([-0.076,0.843,-0.143]),SFVec3f([-0.025,0.819,-0.0889]),SFVec3f([-0.0507,0.847,0.0196]),SFVec3f([-0.00349,0.826,-0.0287]),SFVec3f([-0.0991,0.808,0.0406]),SFVec3f([-0.161,0.814,-0.00187]),SFVec3f([-0.165,0.808,-0.0755]),SFVec3f([-0.122,0.788,-0.126]),SFVec3f([-0.00993,0.762,-0.0937]),SFVec3f([-0.00993,0.762,-0.0309]),SFVec3f([-0.0491,0.777,0.0185]),SFVec3f([-0.0755,0.766,-0.139]),SFVec3f([-0.13,0.597,-0.00618]),SFVec3f([-0.132,0.6,-0.0593]),SFVec3f([-0.108,0.603,-0.105]),SFVec3f([-0.0722,0.601,-0.118]),SFVec3f([-0.0314,0.59,-0.0953]),SFVec3f([-0.0239,0.566,-0.0427]),SFVec3f([-0.047,0.566,0.0051]),SFVec3f([-0.0878,0.581,0.0217]),SFVec3f([-0.114,0.499,-0.0132]),SFVec3f([-0.116,0.488,-0.061]),SFVec3f([-0.103,0.567,-0.0991]),SFVec3f([-0.0362,0.557,-0.0926]),SFVec3f([-0.025,0.486,-0.047]),SFVec3f([-0.0507,0.497,-0.00188]),SFVec3f([-0.0862,0.513,0.018])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_knee'),
                              name_ : SFString('r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0699), SFDouble(0.51), SFDouble(-0.0166)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_calf'),
                                  name_ : SFString('r_calf'),
                                  children_ : [
                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Pants_Color'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          creaseAngle_ : 1.57,
                                          coordIndex_ : MFInt32([SFInt32(14), SFInt32(25), SFInt32(18), SFInt32(-1), SFInt32(25), SFInt32(32), SFInt32(18), SFInt32(-1), SFInt32(32), SFInt32(27), SFInt32(18), SFInt32(-1), SFInt32(27), SFInt32(22), SFInt32(18), SFInt32(-1), SFInt32(22), SFInt32(10), SFInt32(18), SFInt32(-1), SFInt32(10), SFInt32(6), SFInt32(18), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(14), SFInt32(8), SFInt32(17), SFInt32(-1), SFInt32(6), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(27), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(32), SFInt32(39), SFInt32(-1), SFInt32(32), SFInt32(25), SFInt32(42), SFInt32(-1), SFInt32(25), SFInt32(14), SFInt32(30), SFInt32(-1), SFInt32(17), SFInt32(30), SFInt32(14), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(25), SFInt32(-1), SFInt32(42), SFInt32(39), SFInt32(32), SFInt32(-1), SFInt32(39), SFInt32(24), SFInt32(22), SFInt32(-1), SFInt32(24), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(4), SFInt32(17), SFInt32(8), SFInt32(-1), SFInt32(39), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(17), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(24), SFInt32(39), SFInt32(26), SFInt32(-1), SFInt32(39), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(30), SFInt32(17), SFInt32(34), SFInt32(-1), SFInt32(16), SFInt32(34), SFInt32(17), SFInt32(-1), SFInt32(34), SFInt32(43), SFInt32(30), SFInt32(-1), SFInt32(44), SFInt32(26), SFInt32(39), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(1), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(16), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(7), SFInt32(-1), SFInt32(5), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(46), SFInt32(-1), SFInt32(43), SFInt32(34), SFInt32(36), SFInt32(-1), SFInt32(34), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(36), SFInt32(34), SFInt32(-1), SFInt32(36), SFInt32(46), SFInt32(43), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(45), SFInt32(28), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(7), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(2), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(15), SFInt32(20), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(46), SFInt32(-1), SFInt32(13), SFInt32(2), SFInt32(7), SFInt32(-1), SFInt32(3), SFInt32(20), SFInt32(15), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(13), SFInt32(-1), SFInt32(36), SFInt32(20), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(23), SFInt32(-1), SFInt32(21), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(41), SFInt32(37), SFInt32(40), SFInt32(-1), SFInt32(37), SFInt32(29), SFInt32(31), SFInt32(-1), SFInt32(29), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(31), SFInt32(29), SFInt32(-1), SFInt32(31), SFInt32(40), SFInt32(37), SFInt32(-1), SFInt32(40), SFInt32(38), SFInt32(41), SFInt32(-1), SFInt32(35), SFInt32(23), SFInt32(33), SFInt32(-1), SFInt32(23), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(13), SFInt32(-1), SFInt32(31), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(40), SFInt32(31), SFInt32(11), SFInt32(-1), SFInt32(40), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(23), SFInt32(38), SFInt32(-1), SFInt32(12), SFInt32(38), SFInt32(40), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(38), SFInt32(-1), SFInt32(28), SFInt32(21), SFInt32(7), SFInt32(-1), SFInt32(21), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(45), SFInt32(33), SFInt32(28), SFInt32(-1), SFInt32(33), SFInt32(21), SFInt32(28), SFInt32(-1), SFInt32(33), SFInt32(45), SFInt32(41), SFInt32(-1), SFInt32(45), SFInt32(37), SFInt32(41), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(35), SFInt32(-1), SFInt32(41), SFInt32(38), SFInt32(35), SFInt32(-1), SFInt32(20), SFInt32(3), SFInt32(47), SFInt32(-1), SFInt32(11), SFInt32(19), SFInt32(47), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(47), SFInt32(-1), SFInt32(13), SFInt32(47), SFInt32(3), SFInt32(-1), SFInt32(13), SFInt32(11), SFInt32(47), SFInt32(-1), SFInt32(4), SFInt32(8), SFInt32(6), SFInt32(-1), SFInt32(26), SFInt32(5), SFInt32(24), SFInt32(-1), SFInt32(5), SFInt32(9), SFInt32(24), SFInt32(-1), SFInt32(6), SFInt32(9), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(5), SFInt32(0), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.123,0.363,-0.0663]),SFVec3f([-0.123,0.363,-0.04]),SFVec3f([-0.118,0.309,-0.0685]),SFVec3f([-0.118,0.311,-0.0411]),SFVec3f([-0.117,0.508,-0.0169]),SFVec3f([-0.107,0.367,-0.107]),SFVec3f([-0.105,0.539,-0.0438]),SFVec3f([-0.105,0.31,-0.108]),SFVec3f([-0.104,0.539,-0.0223]),SFVec3f([-0.101,0.51,-0.0798]),SFVec3f([-0.0975,0.54,-0.0647]),SFVec3f([-0.0948,0.0897,-0.0368]),SFVec3f([-0.0916,0.0779,-0.0604]),SFVec3f([-0.0905,0.12,-0.0647]),SFVec3f([-0.0883,0.532,-0.00349]),SFVec3f([-0.0883,0.309,-0.018]),SFVec3f([-0.0878,0.361,-0.0126]),SFVec3f([-0.0862,0.506,0.0158]),SFVec3f([-0.0814,0.55,-0.0395]),SFVec3f([-0.0765,0.11,-0.0169]),SFVec3f([-0.0744,0.13,-0.0212]),SFVec3f([-0.0738,0.117,-0.0814]),SFVec3f([-0.0722,0.546,-0.0717]),SFVec3f([-0.0717,0.0854,-0.0765]),SFVec3f([-0.0706,0.51,-0.101]),SFVec3f([-0.0609,0.533,-0.00833]),SFVec3f([-0.0588,0.365,-0.122]),SFVec3f([-0.0577,0.544,-0.0577]),SFVec3f([-0.0572,0.308,-0.123]),SFVec3f([-0.0561,0.13,-0.0245]),SFVec3f([-0.0556,0.506,-0.000272]),SFVec3f([-0.054,0.0972,-0.0175]),SFVec3f([-0.0529,0.536,-0.0368]),SFVec3f([-0.0529,0.121,-0.0873]),SFVec3f([-0.0497,0.358,-0.0234]),SFVec3f([-0.0486,0.0999,-0.0835]),SFVec3f([-0.0475,0.307,-0.0282]),SFVec3f([-0.0416,0.124,-0.0416]),SFVec3f([-0.0406,0.0918,-0.0626]),SFVec3f([-0.0406,0.513,-0.0744]),SFVec3f([-0.0384,0.0881,-0.0363]),SFVec3f([-0.0373,0.121,-0.0636]),SFVec3f([-0.0368,0.51,-0.0357]),SFVec3f([-0.0239,0.358,-0.0475]),SFVec3f([-0.0228,0.358,-0.0926]),SFVec3f([-0.0201,0.309,-0.0937]),SFVec3f([-0.0191,0.311,-0.0508]),SFVec3f([-0.0985,0.125,-0.0375])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_ankle'),
                                  name_ : SFString('r_ankle'),
                                  center_ : SFVec3f([SFDouble(-0.064), SFDouble(0.0753), SFDouble(-0.0412)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_hindfoot'),
                                      name_ : SFString('r_hindfoot'),
                                      children_ : [
                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('Shoe_Color'))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              creaseAngle_ : 1.57,
                                              coordIndex_ : MFInt32([SFInt32(6), SFInt32(50), SFInt32(0), SFInt32(-1), SFInt32(50), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(50), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(1), SFInt32(8), SFInt32(50), SFInt32(-1), SFInt32(49), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(49), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(46), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(46), SFInt32(10), SFInt32(49), SFInt32(-1), SFInt32(2), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(11), SFInt32(46), SFInt32(-1), SFInt32(3), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(3), SFInt32(12), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(4), SFInt32(13), SFInt32(3), SFInt32(-1), SFInt32(45), SFInt32(14), SFInt32(4), SFInt32(-1), SFInt32(47), SFInt32(15), SFInt32(45), SFInt32(-1), SFInt32(19), SFInt32(15), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(18), SFInt32(-1), SFInt32(5), SFInt32(18), SFInt32(48), SFInt32(-1), SFInt32(6), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(0), SFInt32(7), SFInt32(17), SFInt32(-1), SFInt32(0), SFInt32(17), SFInt32(6), SFInt32(-1), SFInt32(14), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(14), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(12), SFInt32(22), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(22), SFInt32(10), SFInt32(-1), SFInt32(17), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(16), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(16), SFInt32(24), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(18), SFInt32(25), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(19), SFInt32(26), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(26), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(20), SFInt32(27), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(21), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(30), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(9), SFInt32(31), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(17), SFInt32(32), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(23), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(24), SFInt32(-1), SFInt32(24), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(37), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(37), SFInt32(38), SFInt32(-1), SFInt32(26), SFInt32(38), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(39), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(29), SFInt32(41), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(30), SFInt32(42), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(31), SFInt32(43), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(44), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(44), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(44), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(44), SFInt32(39), SFInt32(38), SFInt32(-1), SFInt32(44), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(44), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(44), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(44), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(44), SFInt32(34), SFInt32(33), SFInt32(-1), SFInt32(44), SFInt32(33), SFInt32(43), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(45), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(45), SFInt32(2), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(48), SFInt32(46), SFInt32(49), SFInt32(-1), SFInt32(5), SFInt32(48), SFInt32(49), SFInt32(-1), SFInt32(5), SFInt32(49), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(1), SFInt32(-1), SFInt32(6), SFInt32(1), SFInt32(50), SFInt32(-1), SFInt32(30), SFInt32(10), SFInt32(29), SFInt32(-1), SFInt32(10), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(17), SFInt32(7), SFInt32(32), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(32), SFInt32(-1), SFInt32(19), SFInt32(47), SFInt32(48), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(48), SFInt32(-1), SFInt32(20), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(45), SFInt32(15), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.0727,0,-0.0994]),SFVec3f([-0.1,0,-0.0594]),SFVec3f([-0.0701,0,0.146]),SFVec3f([-0.0468,0,0.153]),SFVec3f([-0.0215,0,0.146]),SFVec3f([-0.0433,0,-0.0534]),SFVec3f([-0.0529,0,-0.0923]),SFVec3f([-0.0727,0.0219,-0.0994]),SFVec3f([-0.0863,0.0219,-0.0862]),SFVec3f([-0.1,0.0219,-0.0594]),SFVec3f([-0.108,0.0219,-0.00479]),SFVec3f([-0.112,0.0156,0.117]),SFVec3f([-0.0701,0.0156,0.146]),SFVec3f([-0.0468,0.0156,0.153]),SFVec3f([-0.0215,0.0156,0.146]),SFVec3f([-0.0165,0.017,0.0777]),SFVec3f([-0.0433,0.0219,-0.0534]),SFVec3f([-0.0529,0.0219,-0.0923]),SFVec3f([-0.0445,0.0273,-0.0189]),SFVec3f([-0.0265,0.0253,0.0549]),SFVec3f([-0.0305,0.0253,0.0938]),SFVec3f([-0.069,0.0253,0.0938]),SFVec3f([-0.102,0.0253,0.0707]),SFVec3f([-0.0568,0.0573,-0.0918]),SFVec3f([-0.0492,0.0573,-0.0497]),SFVec3f([-0.0424,0.0573,-0.00142]),SFVec3f([-0.0478,0.0573,0.0341]),SFVec3f([-0.0623,0.0573,0.0366]),SFVec3f([-0.0864,0.0573,0.0245]),SFVec3f([-0.0962,0.0573,-0.0121]),SFVec3f([-0.0845,0.0573,-0.0764]),SFVec3f([-0.0758,0.0573,-0.0899]),SFVec3f([-0.0676,0.0573,-0.0962]),SFVec3f([-0.0578,0.0953,-0.0896]),SFVec3f([-0.0489,0.0953,-0.0757]),SFVec3f([-0.0459,0.0953,-0.0615]),SFVec3f([-0.0435,0.0953,-0.0292]),SFVec3f([-0.0485,0.0953,-0.00582]),SFVec3f([-0.0624,0.0953,-0.00466]),SFVec3f([-0.0857,0.0953,-0.0134]),SFVec3f([-0.0953,0.0953,-0.038]),SFVec3f([-0.0843,0.0953,-0.0803]),SFVec3f([-0.0761,0.0953,-0.0889]),SFVec3f([-0.0682,0.0953,-0.0929]),SFVec3f([-0.0675,0.13,-0.0608]),SFVec3f([-0.0165,0,0.125]),SFVec3f([-0.112,0,0.117]),SFVec3f([-0.0165,0,0.0777]),SFVec3f([-0.0393,0,-0.0129]),SFVec3f([-0.108,0,-0.00479]),SFVec3f([-0.0863,0,-0.0862])]))))])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl1'),
                      name_ : SFString('vl1'),
                      center_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l1'),
                          name_ : SFString('l1'),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('Shirt_Color'),
                                      ambientIntensity_ : 0.25,
                                      diffuseColor_ : SFColor([SFDouble(0.6), SFDouble(0.0745), SFDouble(0.1137)])),
                                  texture_ : 
                                    ImageTexture(
                                      DEF_ : SFString('small_logo_Tex'),
                                      url_ : MFString([SFString("small_logo.gif"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif")]))),
                              geometry_ : 
                                IndexedFaceSet(
                                  creaseAngle_ : 1.59,
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(10), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(12), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(6), SFInt32(-1), SFInt32(12), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(7), SFInt32(8), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(4), SFInt32(7), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(13), SFInt32(-1), SFInt32(4), SFInt32(13), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(19), SFInt32(15), SFInt32(-1), SFInt32(19), SFInt32(13), SFInt32(8), SFInt32(-1), SFInt32(19), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(20), SFInt32(4), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(20), SFInt32(-1), SFInt32(18), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(17), SFInt32(21), SFInt32(-1), SFInt32(16), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(22), SFInt32(16), SFInt32(23), SFInt32(-1), SFInt32(8), SFInt32(23), SFInt32(16), SFInt32(-1), SFInt32(23), SFInt32(8), SFInt32(10), SFInt32(-1), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(28), SFInt32(26), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(25), SFInt32(33), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(34), SFInt32(-1), SFInt32(33), SFInt32(25), SFInt32(34), SFInt32(-1), SFInt32(24), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(27), SFInt32(35), SFInt32(24), SFInt32(-1), SFInt32(33), SFInt32(36), SFInt32(31), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(26), SFInt32(30), SFInt32(-1), SFInt32(38), SFInt32(37), SFInt32(30), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(39), SFInt32(-1), SFInt32(39), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(40), SFInt32(-1), SFInt32(41), SFInt32(38), SFInt32(30), SFInt32(-1), SFInt32(35), SFInt32(27), SFInt32(42), SFInt32(-1), SFInt32(37), SFInt32(42), SFInt32(27), SFInt32(-1), SFInt32(40), SFInt32(35), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(37), SFInt32(43), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(37), SFInt32(-1), SFInt32(36), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(36), SFInt32(33), SFInt32(45), SFInt32(-1), SFInt32(40), SFInt32(42), SFInt32(47), SFInt32(-1), SFInt32(43), SFInt32(47), SFInt32(42), SFInt32(-1), SFInt32(47), SFInt32(48), SFInt32(40), SFInt32(-1), SFInt32(39), SFInt32(40), SFInt32(48), SFInt32(-1), SFInt32(47), SFInt32(43), SFInt32(49), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(49), SFInt32(-1), SFInt32(50), SFInt32(49), SFInt32(44), SFInt32(-1), SFInt32(51), SFInt32(46), SFInt32(52), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(45), SFInt32(53), SFInt32(-1), SFInt32(33), SFInt32(53), SFInt32(45), SFInt32(-1), SFInt32(33), SFInt32(39), SFInt32(53), SFInt32(-1), SFInt32(49), SFInt32(54), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(56), SFInt32(52), SFInt32(-1), SFInt32(57), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(57), SFInt32(55), SFInt32(52), SFInt32(-1), SFInt32(58), SFInt32(57), SFInt32(53), SFInt32(-1), SFInt32(59), SFInt32(58), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(39), SFInt32(59), SFInt32(-1), SFInt32(39), SFInt32(48), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(48), SFInt32(54), SFInt32(-1), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(49), SFInt32(61), SFInt32(-1), SFInt32(59), SFInt32(54), SFInt32(61), SFInt32(-1), SFInt32(60), SFInt32(59), SFInt32(61), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(62), SFInt32(50), SFInt32(-1), SFInt32(62), SFInt32(61), SFInt32(49), SFInt32(-1), SFInt32(64), SFInt32(63), SFInt32(50), SFInt32(-1), SFInt32(63), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(62), SFInt32(63), SFInt32(-1), SFInt32(66), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(65), SFInt32(67), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(65), SFInt32(-1), SFInt32(64), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(64), SFInt32(70), SFInt32(65), SFInt32(-1), SFInt32(70), SFInt32(68), SFInt32(65), SFInt32(-1), SFInt32(69), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(73), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(66), SFInt32(76), SFInt32(60), SFInt32(-1), SFInt32(67), SFInt32(77), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(77), SFInt32(61), SFInt32(-1), SFInt32(77), SFInt32(66), SFInt32(61), SFInt32(-1), SFInt32(66), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(77), SFInt32(67), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(79), SFInt32(78), SFInt32(77), SFInt32(-1), SFInt32(68), SFInt32(70), SFInt32(80), SFInt32(-1), SFInt32(70), SFInt32(72), SFInt32(80), SFInt32(-1), SFInt32(80), SFInt32(79), SFInt32(68), SFInt32(-1), SFInt32(74), SFInt32(73), SFInt32(81), SFInt32(-1), SFInt32(73), SFInt32(76), SFInt32(82), SFInt32(-1), SFInt32(82), SFInt32(81), SFInt32(73), SFInt32(-1), SFInt32(76), SFInt32(66), SFInt32(83), SFInt32(-1), SFInt32(78), SFInt32(83), SFInt32(66), SFInt32(-1), SFInt32(83), SFInt32(82), SFInt32(76), SFInt32(-1), SFInt32(78), SFInt32(79), SFInt32(84), SFInt32(-1), SFInt32(79), SFInt32(80), SFInt32(84), SFInt32(-1), SFInt32(84), SFInt32(85), SFInt32(78), SFInt32(-1), SFInt32(86), SFInt32(84), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(82), SFInt32(87), SFInt32(-1), SFInt32(87), SFInt32(88), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(83), SFInt32(89), SFInt32(-1), SFInt32(83), SFInt32(78), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(87), SFInt32(82), SFInt32(-1), SFInt32(78), SFInt32(85), SFInt32(89), SFInt32(-1), SFInt32(90), SFInt32(91), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(94), SFInt32(91), SFInt32(-1), SFInt32(95), SFInt32(96), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(90), SFInt32(95), SFInt32(-1), SFInt32(29), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(96), SFInt32(95), SFInt32(97), SFInt32(-1), SFInt32(97), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(30), SFInt32(97), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(97), SFInt32(95), SFInt32(-1), SFInt32(98), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(98), SFInt32(91), SFInt32(99), SFInt32(-1), SFInt32(101), SFInt32(92), SFInt32(91), SFInt32(-1), SFInt32(98), SFInt32(101), SFInt32(91), SFInt32(-1), SFInt32(101), SFInt32(102), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(102), SFInt32(93), SFInt32(-1), SFInt32(36), SFInt32(103), SFInt32(31), SFInt32(-1), SFInt32(51), SFInt32(103), SFInt32(36), SFInt32(46), SFInt32(-1), SFInt32(103), SFInt32(100), SFInt32(31), SFInt32(-1), SFInt32(100), SFInt32(103), SFInt32(98), SFInt32(-1), SFInt32(104), SFInt32(90), SFInt32(93), SFInt32(-1), SFInt32(90), SFInt32(104), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(105), SFInt32(41), SFInt32(-1), SFInt32(104), SFInt32(105), SFInt32(95), SFInt32(-1), SFInt32(106), SFInt32(101), SFInt32(98), SFInt32(-1), SFInt32(102), SFInt32(101), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(93), SFInt32(102), SFInt32(-1), SFInt32(93), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(108), SFInt32(104), SFInt32(107), SFInt32(-1), SFInt32(107), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(110), SFInt32(-1), SFInt32(109), SFInt32(107), SFInt32(111), SFInt32(-1), SFInt32(107), SFInt32(102), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(102), SFInt32(106), SFInt32(-1), SFInt32(111), SFInt32(112), SFInt32(109), SFInt32(-1), SFInt32(106), SFInt32(112), SFInt32(111), SFInt32(-1), SFInt32(113), SFInt32(110), SFInt32(108), SFInt32(-1), SFInt32(110), SFInt32(113), SFInt32(114), SFInt32(-1), SFInt32(51), SFInt32(52), SFInt32(115), SFInt32(-1), SFInt32(116), SFInt32(115), SFInt32(117), SFInt32(-1), SFInt32(117), SFInt32(106), SFInt32(116), SFInt32(-1), SFInt32(118), SFInt32(109), SFInt32(112), SFInt32(-1), SFInt32(119), SFInt32(108), SFInt32(109), SFInt32(-1), SFInt32(108), SFInt32(119), SFInt32(113), SFInt32(-1), SFInt32(109), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(120), SFInt32(113), SFInt32(119), SFInt32(-1), SFInt32(119), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(52), SFInt32(56), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(115), SFInt32(52), SFInt32(-1), SFInt32(115), SFInt32(122), SFInt32(123), SFInt32(-1), SFInt32(117), SFInt32(124), SFInt32(125), SFInt32(-1), SFInt32(106), SFInt32(117), SFInt32(125), SFInt32(-1), SFInt32(118), SFInt32(112), SFInt32(106), SFInt32(125), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(125), SFInt32(-1), SFInt32(121), SFInt32(119), SFInt32(125), SFInt32(-1), SFInt32(126), SFInt32(124), SFInt32(123), SFInt32(-1), SFInt32(127), SFInt32(114), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(127), SFInt32(128), SFInt32(-1), SFInt32(113), SFInt32(120), SFInt32(127), SFInt32(-1), SFInt32(114), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(130), SFInt32(126), SFInt32(123), SFInt32(-1), SFInt32(122), SFInt32(130), SFInt32(123), SFInt32(-1), SFInt32(131), SFInt32(120), SFInt32(121), SFInt32(-1), SFInt32(131), SFInt32(127), SFInt32(120), SFInt32(-1), SFInt32(132), SFInt32(129), SFInt32(128), SFInt32(-1), SFInt32(128), SFInt32(127), SFInt32(132), SFInt32(-1), SFInt32(74), SFInt32(81), SFInt32(133), SFInt32(-1), SFInt32(81), SFInt32(134), SFInt32(133), SFInt32(-1), SFInt32(121), SFInt32(135), SFInt32(131), SFInt32(-1), SFInt32(136), SFInt32(132), SFInt32(127), SFInt32(-1), SFInt32(132), SFInt32(136), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(71), SFInt32(129), SFInt32(-1), SFInt32(138), SFInt32(129), SFInt32(132), SFInt32(-1), SFInt32(137), SFInt32(138), SFInt32(132), SFInt32(-1), SFInt32(139), SFInt32(72), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(139), SFInt32(80), SFInt32(-1), SFInt32(71), SFInt32(138), SFInt32(139), SFInt32(-1), SFInt32(140), SFInt32(135), SFInt32(121), SFInt32(-1), SFInt32(140), SFInt32(121), SFInt32(125), SFInt32(-1), SFInt32(141), SFInt32(127), SFInt32(131), SFInt32(-1), SFInt32(127), SFInt32(141), SFInt32(136), SFInt32(-1), SFInt32(131), SFInt32(135), SFInt32(141), SFInt32(-1), SFInt32(142), SFInt32(141), SFInt32(135), SFInt32(-1), SFInt32(143), SFInt32(136), SFInt32(141), SFInt32(-1), SFInt32(136), SFInt32(143), SFInt32(137), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(143), SFInt32(-1), SFInt32(144), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(144), SFInt32(139), SFInt32(138), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(137), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(134), SFInt32(-1), SFInt32(145), SFInt32(140), SFInt32(146), SFInt32(-1), SFInt32(134), SFInt32(81), SFInt32(145), SFInt32(-1), SFInt32(147), SFInt32(135), SFInt32(140), SFInt32(-1), SFInt32(135), SFInt32(147), SFInt32(142), SFInt32(-1), SFInt32(140), SFInt32(145), SFInt32(147), SFInt32(-1), SFInt32(148), SFInt32(80), SFInt32(139), SFInt32(-1), SFInt32(80), SFInt32(148), SFInt32(86), SFInt32(-1), SFInt32(139), SFInt32(144), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(143), SFInt32(142), SFInt32(-1), SFInt32(149), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(142), SFInt32(150), SFInt32(149), SFInt32(-1), SFInt32(151), SFInt32(148), SFInt32(144), SFInt32(-1), SFInt32(144), SFInt32(149), SFInt32(151), SFInt32(-1), SFInt32(152), SFInt32(145), SFInt32(81), SFInt32(-1), SFInt32(81), SFInt32(88), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(147), SFInt32(145), SFInt32(-1), SFInt32(153), SFInt32(142), SFInt32(147), SFInt32(-1), SFInt32(145), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(153), SFInt32(150), SFInt32(142), SFInt32(-1), SFInt32(154), SFInt32(86), SFInt32(148), SFInt32(-1), SFInt32(148), SFInt32(151), SFInt32(154), SFInt32(-1), SFInt32(155), SFInt32(28), SFInt32(25), SFInt32(-1), SFInt32(155), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(155), SFInt32(25), SFInt32(32), SFInt32(-1), SFInt32(155), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(155), SFInt32(31), SFInt32(100), SFInt32(-1), SFInt32(155), SFInt32(100), SFInt32(99), SFInt32(-1), SFInt32(155), SFInt32(99), SFInt32(91), SFInt32(-1), SFInt32(155), SFInt32(91), SFInt32(94), SFInt32(-1), SFInt32(155), SFInt32(94), SFInt32(96), SFInt32(-1), SFInt32(155), SFInt32(96), SFInt32(29), SFInt32(-1), SFInt32(156), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(156), SFInt32(154), SFInt32(151), SFInt32(-1), SFInt32(156), SFInt32(149), SFInt32(150), SFInt32(-1), SFInt32(156), SFInt32(150), SFInt32(153), SFInt32(-1), SFInt32(156), SFInt32(153), SFInt32(152), SFInt32(-1), SFInt32(156), SFInt32(152), SFInt32(88), SFInt32(-1), SFInt32(156), SFInt32(88), SFInt32(87), SFInt32(-1), SFInt32(156), SFInt32(87), SFInt32(89), SFInt32(-1), SFInt32(156), SFInt32(89), SFInt32(85), SFInt32(-1), SFInt32(156), SFInt32(85), SFInt32(84), SFInt32(-1), SFInt32(156), SFInt32(84), SFInt32(86), SFInt32(-1), SFInt32(156), SFInt32(86), SFInt32(154), SFInt32(-1), SFInt32(76), SFInt32(157), SFInt32(60), SFInt32(-1), SFInt32(76), SFInt32(73), SFInt32(158), SFInt32(157), SFInt32(-1), SFInt32(159), SFInt32(158), SFInt32(73), SFInt32(75), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(56), SFInt32(55), SFInt32(-1), SFInt32(60), SFInt32(162), SFInt32(58), SFInt32(-1), SFInt32(162), SFInt32(60), SFInt32(157), SFInt32(-1), SFInt32(161), SFInt32(55), SFInt32(163), SFInt32(-1), SFInt32(57), SFInt32(164), SFInt32(163), SFInt32(55), SFInt32(-1), SFInt32(160), SFInt32(163), SFInt32(164), SFInt32(-1), SFInt32(160), SFInt32(164), SFInt32(159), SFInt32(-1), SFInt32(164), SFInt32(57), SFInt32(165), SFInt32(-1), SFInt32(164), SFInt32(165), SFInt32(159), SFInt32(-1), SFInt32(57), SFInt32(58), SFInt32(166), SFInt32(165), SFInt32(-1), SFInt32(166), SFInt32(58), SFInt32(162), SFInt32(-1), SFInt32(165), SFInt32(166), SFInt32(159), SFInt32(-1), SFInt32(166), SFInt32(162), SFInt32(157), SFInt32(158), SFInt32(159), SFInt32(-1), SFInt32(140), SFInt32(125), SFInt32(167), SFInt32(-1), SFInt32(124), SFInt32(168), SFInt32(125), SFInt32(-1), SFInt32(168), SFInt32(167), SFInt32(125), SFInt32(-1), SFInt32(124), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(146), SFInt32(140), SFInt32(167), SFInt32(170), SFInt32(-1), SFInt32(168), SFInt32(170), SFInt32(167), SFInt32(-1), SFInt32(168), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(146), SFInt32(170), SFInt32(171), SFInt32(-1), SFInt32(169), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(172), SFInt32(134), SFInt32(146), SFInt32(171), SFInt32(-1), SFInt32(134), SFInt32(172), SFInt32(130), SFInt32(-1), SFInt32(169), SFInt32(124), SFInt32(126), SFInt32(173), SFInt32(-1), SFInt32(173), SFInt32(126), SFInt32(130), SFInt32(-1), SFInt32(169), SFInt32(173), SFInt32(172), SFInt32(171), SFInt32(-1), SFInt32(173), SFInt32(130), SFInt32(172), SFInt32(-1), SFInt32(122), SFInt32(74), SFInt32(133), SFInt32(174), SFInt32(-1), SFInt32(133), SFInt32(134), SFInt32(174), SFInt32(-1), SFInt32(130), SFInt32(122), SFInt32(174), SFInt32(-1), SFInt32(134), SFInt32(130), SFInt32(174), SFInt32(-1), SFInt32(122), SFInt32(56), SFInt32(175), SFInt32(74), SFInt32(-1), SFInt32(74), SFInt32(175), SFInt32(176), SFInt32(-1), SFInt32(175), SFInt32(56), SFInt32(161), SFInt32(176), SFInt32(-1), SFInt32(74), SFInt32(176), SFInt32(75), SFInt32(-1), SFInt32(176), SFInt32(161), SFInt32(163), SFInt32(-1), SFInt32(176), SFInt32(160), SFInt32(75), SFInt32(-1), SFInt32(176), SFInt32(163), SFInt32(160), SFInt32(-1), SFInt32(115), SFInt32(116), SFInt32(177), SFInt32(51), SFInt32(-1), SFInt32(106), SFInt32(98), SFInt32(177), SFInt32(116), SFInt32(-1), SFInt32(51), SFInt32(177), SFInt32(103), SFInt32(-1), SFInt32(177), SFInt32(98), SFInt32(103), SFInt32(-1)]),
                                  texCoord_ : 
                                    TextureCoordinate(
                                      point_ : MFVec2f([SFVec2f([0.1611,-0.02056]),SFVec2f([0.9468,-0.02056]),SFVec2f([0.9739,0.9344]),SFVec2f([-0.137,1.094]),SFVec2f([0.1973,0.6424]),SFVec2f([0.2231,0.04876]),SFVec2f([0.5054,0.2466]),SFVec2f([0.5054,0.5929]),SFVec2f([0.8135,0.6424]),SFVec2f([0.6282,0.1972]),SFVec2f([0.7876,0.04876]),SFVec2f([0.5054,-0.05018]),SFVec2f([0.6282,-0.05018]),SFVec2f([0.5054,0.8403]),SFVec2f([0.7989,1.038]),SFVec2f([0.5054,1.038]),SFVec2f([0.8248,0.7908]),SFVec2f([0.186,0.7908]),SFVec2f([0.2118,1.038]),SFVec2f([0.6427,0.7908]),SFVec2f([-0.01977,0.5929]),SFVec2f([-0.03324,0.7908]),SFVec2f([1.044,0.7908]),SFVec2f([1.031,0.5929]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0]),SFVec2f([0,0])])),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.043,1.25,0.0614]),SFVec3f([0.101,1.25,0.0614]),SFVec3f([0.103,1.31,0.0195]),SFVec3f([0.021,1.32,0.0276]),SFVec3f([0.0572,1.27,-0.153]),SFVec3f([0.0524,1.15,-0.134]),SFVec3f([0,1.19,-0.14]),SFVec3f([0,1.26,-0.147]),SFVec3f([-0.0572,1.27,-0.153]),SFVec3f([-0.0228,1.18,-0.14]),SFVec3f([-0.0524,1.15,-0.134]),SFVec3f([0,1.13,-0.126]),SFVec3f([-0.0228,1.13,-0.124]),SFVec3f([0,1.31,-0.146]),SFVec3f([-0.0545,1.35,-0.138]),SFVec3f([0,1.35,-0.136]),SFVec3f([-0.0593,1.3,-0.151]),SFVec3f([0.0593,1.3,-0.151]),SFVec3f([0.0545,1.35,-0.138]),SFVec3f([-0.0255,1.3,-0.146]),SFVec3f([0.0975,1.26,-0.15]),SFVec3f([0.1,1.3,-0.148]),SFVec3f([-0.1,1.3,-0.148]),SFVec3f([-0.0975,1.26,-0.15]),SFVec3f([-0.117,1.41,-0.0395]),SFVec3f([-0.0674,1.45,-0.0314]),SFVec3f([-0.0926,1.41,-0.0937]),SFVec3f([-0.124,1.4,-0.0706]),SFVec3f([-0.0583,1.44,-0.0615]),SFVec3f([-0.0228,1.46,-0.0872]),SFVec3f([-0.0534,1.42,-0.112]),SFVec3f([-0.0228,1.42,0.00351]),SFVec3f([-0.0593,1.43,-0.0185]),SFVec3f([-0.0787,1.39,-0.00293]),SFVec3f([-0.112,1.4,-0.0131]),SFVec3f([-0.164,1.39,-0.0373]),SFVec3f([-0.0153,1.39,0.0159]),SFVec3f([-0.0953,1.35,-0.136]),SFVec3f([-0.0545,1.35,-0.138]),SFVec3f([-0.139,1.34,0.00297]),SFVec3f([-0.137,1.34,-0.0368]),SFVec3f([0,1.35,-0.136]),SFVec3f([-0.156,1.35,-0.0915]),SFVec3f([-0.132,1.29,-0.127]),SFVec3f([-0.1,1.3,-0.148]),SFVec3f([-0.0418,1.35,0.0168]),SFVec3f([-0.013,1.37,0.0167]),SFVec3f([-0.151,1.28,-0.0878]),SFVec3f([-0.136,1.32,-0.0406]),SFVec3f([-0.124,1.26,-0.125]),SFVec3f([-0.0975,1.26,-0.15]),SFVec3f([0.00228,1.37,0.0167]),SFVec3f([-0.00959,1.32,0.0276]),SFVec3f([-0.0918,1.31,0.0195]),SFVec3f([-0.141,1.25,-0.0744]),SFVec3f([-0.0316,1.25,0.0614]),SFVec3f([-0.00261,1.25,0.0458]),SFVec3f([-0.0611,1.25,0.0668]),SFVec3f([-0.0896,1.25,0.0614]),SFVec3f([-0.126,1.24,0.012]),SFVec3f([-0.126,1.22,0.0141]),SFVec3f([-0.129,1.17,-0.0523]),SFVec3f([-0.115,1.16,-0.105]),SFVec3f([-0.0851,1.18,-0.134]),SFVec3f([-0.0524,1.15,-0.134]),SFVec3f([-0.083,1.13,-0.122]),SFVec3f([-0.117,1.15,-0.018]),SFVec3f([-0.11,1.1,-0.0846]),SFVec3f([-0.0808,1.1,-0.111]),SFVec3f([-0.0228,1.13,-0.124]),SFVec3f([-0.0524,1.1,-0.119]),SFVec3f([0,1.13,-0.126]),SFVec3f([-0.0228,1.1,-0.116]),SFVec3f([-0.0563,1.15,0.0377]),SFVec3f([-0.00476,1.18,0.0458]),SFVec3f([-0.0343,1.18,0.0485]),SFVec3f([-0.0966,1.15,-0.00413]),SFVec3f([-0.12,1.1,-0.0373]),SFVec3f([-0.121,1.07,-0.0356]),SFVec3f([-0.106,1.07,-0.0711]),SFVec3f([-0.0475,1.06,-0.105]),SFVec3f([0,1.08,0.0556]),SFVec3f([-0.0787,1.08,0.0347]),SFVec3f([-0.103,1.08,0.00296]),SFVec3f([-0.0975,1.01,-0.0873]),SFVec3f([-0.134,0.998,-0.0314]),SFVec3f([-0.0475,1.02,-0.109]),SFVec3f([-0.0325,1.02,0.0529]),SFVec3f([0,1.02,0.0422]),SFVec3f([-0.0975,1.02,0.0132]),SFVec3f([0.0926,1.41,-0.0937]),SFVec3f([0.0674,1.45,-0.0314]),SFVec3f([0.117,1.41,-0.0395]),SFVec3f([0.124,1.4,-0.0706]),SFVec3f([0.0583,1.44,-0.0615]),SFVec3f([0.0534,1.42,-0.112]),SFVec3f([0.0228,1.46,-0.0872]),SFVec3f([0,1.4,-0.112]),SFVec3f([0.0787,1.39,-0.00293]),SFVec3f([0.0593,1.43,-0.0185]),SFVec3f([0.0228,1.42,0.00351]),SFVec3f([0.112,1.4,-0.0131]),SFVec3f([0.164,1.39,-0.0373]),SFVec3f([0.0153,1.39,0.0159]),SFVec3f([0.0953,1.35,-0.136]),SFVec3f([0.0545,1.35,-0.138]),SFVec3f([0.139,1.34,0.00297]),SFVec3f([0.156,1.35,-0.0915]),SFVec3f([0.132,1.29,-0.127]),SFVec3f([0.151,1.28,-0.0878]),SFVec3f([0.1,1.3,-0.148]),SFVec3f([0.137,1.34,-0.0368]),SFVec3f([0.147,1.32,-0.0406]),SFVec3f([0.124,1.26,-0.125]),SFVec3f([0.0975,1.26,-0.15]),SFVec3f([0.021,1.32,0.0276]),SFVec3f([0.0532,1.35,0.0168]),SFVec3f([0.103,1.31,0.0195]),SFVec3f([0.135,1.29,-0.0406]),SFVec3f([0.141,1.25,-0.0744]),SFVec3f([0.132,1.18,-0.083]),SFVec3f([0.134,1.19,-0.0572]),SFVec3f([0.014,1.25,0.0458]),SFVec3f([0.043,1.25,0.0614]),SFVec3f([0.101,1.25,0.0614]),SFVec3f([0.138,1.24,0.012]),SFVec3f([0.065,1.23,0.0743]),SFVec3f([0.115,1.16,-0.105]),SFVec3f([0.0851,1.18,-0.134]),SFVec3f([0.0524,1.15,-0.134]),SFVec3f([0.043,1.2,0.0641]),SFVec3f([0.127,1.14,-0.0427]),SFVec3f([0.083,1.13,-0.122]),SFVec3f([0.0162,1.18,0.0458]),SFVec3f([0.0457,1.18,0.0485]),SFVec3f([0.117,1.15,-0.018]),SFVec3f([0.11,1.1,-0.0846]),SFVec3f([0.0808,1.1,-0.111]),SFVec3f([0.0524,1.1,-0.119]),SFVec3f([0.0228,1.1,-0.116]),SFVec3f([0.108,1.15,-0.00413]),SFVec3f([0.12,1.1,-0.0373]),SFVec3f([0.121,1.07,-0.0356]),SFVec3f([0.106,1.07,-0.0711]),SFVec3f([0.0475,1.06,-0.105]),SFVec3f([0.0787,1.08,0.0347]),SFVec3f([0.0844,1.15,0.0297]),SFVec3f([0.103,1.08,0.00296]),SFVec3f([0,1.07,-0.11]),SFVec3f([0.0975,1.01,-0.0873]),SFVec3f([0.134,0.998,-0.0475]),SFVec3f([0.0475,1.02,-0.109]),SFVec3f([0.0325,1.02,0.0529]),SFVec3f([0.0975,1.02,0.0132]),SFVec3f([0,1.02,-0.117]),SFVec3f([0,1.44,-0.0389]),SFVec3f([0,1.01,-0.0259]),SFVec3f([-0.104,1.19,0.0423]),SFVec3f([-0.0778,1.19,0.0642]),SFVec3f([-0.078,1.19,0.0644]),SFVec3f([-0.0493,1.2,0.0664]),SFVec3f([-0.0281,1.22,0.0587]),SFVec3f([-0.104,1.2,0.0568]),SFVec3f([-0.0484,1.21,0.0692]),SFVec3f([-0.0549,1.21,0.0708]),SFVec3f([-0.0806,1.21,0.0713]),SFVec3f([-0.0852,1.21,0.0703]),SFVec3f([0.116,1.19,0.043]),SFVec3f([0.114,1.21,0.0572]),SFVec3f([0.0967,1.21,0.0701]),SFVec3f([0.11,1.19,0.0502]),SFVec3f([0.093,1.19,0.0622]),SFVec3f([0.0832,1.19,0.0662]),SFVec3f([0.0863,1.21,0.0728]),SFVec3f([0.0154,1.21,0.0458]),SFVec3f([-0.00393,1.21,0.0458]),SFVec3f([-0.0145,1.2,0.0512]),SFVec3f([0.0534,1.35,0.0168])]))))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_shoulder'),
                          name_ : SFString('l_shoulder'),
                          center_ : SFVec3f([SFDouble(0.167), SFDouble(1.36), SFDouble(-0.0518)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_upperarm'),
                              name_ : SFString('l_upperarm'),
                              children_ : [
                                Transform(
                                  DEF_ : SFString('l_upperarm_adjust'),
                                  translation_ : SFVec3f([SFDouble(0.167), SFDouble(1.36), SFDouble(-0.0518)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.119)]),
                                  center_ : SFVec3f([SFDouble(0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                  child_ : 
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
                                          creaseAngle_ : 1.65,
                                          coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(5), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(7), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(2), SFInt32(-1), SFInt32(8), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(10), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(10), SFInt32(6), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(3), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(11), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(14), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(15), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(11), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(9), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(8), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(8), SFInt32(16), SFInt32(13), SFInt32(-1), SFInt32(7), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(21), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(11), SFInt32(-1), SFInt32(15), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(16), SFInt32(19), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(14), SFInt32(20), SFInt32(-1), SFInt32(14), SFInt32(13), SFInt32(20), SFInt32(-1), SFInt32(12), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(17), SFInt32(-1), SFInt32(12), SFInt32(18), SFInt32(16), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(12), SFInt32(16), SFInt32(7), SFInt32(-1), SFInt32(16), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(19), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(21), SFInt32(-1), SFInt32(19), SFInt32(17), SFInt32(21), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.174,1.37,-0.0625]),SFVec3f([0.185,1.38,-0.0395]),SFVec3f([0.156,1.39,-0.0464]),SFVec3f([0.174,1.37,-0.0158]),SFVec3f([0.154,1.37,-0.0185]),SFVec3f([0.157,1.38,-0.0733]),SFVec3f([0.182,1.33,-0.0728]),SFVec3f([0.151,1.33,-0.0937]),SFVec3f([0.15,1.34,-0.000787]),SFVec3f([0.185,1.33,-0.00025]),SFVec3f([0.201,1.33,-0.0411]),SFVec3f([0.189,1.26,-0.0808]),SFVec3f([0.155,1.26,-0.0867]),SFVec3f([0.151,1.26,-0.000789]),SFVec3f([0.19,1.26,-0.00401]),SFVec3f([0.209,1.26,-0.0427]),SFVec3f([0.141,1.26,-0.0421]),SFVec3f([0.203,1.08,-0.0744]),SFVec3f([0.162,1.05,-0.0561]),SFVec3f([0.169,1.08,-0.00885]),SFVec3f([0.208,1.07,-0.00133]),SFVec3f([0.221,1.08,-0.0352])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_elbow'),
                              name_ : SFString('l_elbow'),
                              center_ : SFVec3f([SFDouble(0.196), SFDouble(1.07), SFDouble(-0.0518)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_forearm'),
                                  name_ : SFString('l_forearm'),
                                  children_ : [
                                    Transform(
                                      DEF_ : SFString('l_forearm_adjust'),
                                      translation_ : SFVec3f([SFDouble(0.196), SFDouble(1.07), SFDouble(-0.0518)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                      center_ : SFVec3f([SFDouble(0.198), SFDouble(0.961), SFDouble(-0.0405)]),
                                      child_ : 
                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('Skin_Color'))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              creaseAngle_ : 1.75,
                                              coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(0), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(9), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(10), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(11), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(7), SFInt32(-1), SFInt32(1), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(3), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(5), SFInt32(8), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(17), SFInt32(15), SFInt32(-1), SFInt32(14), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(13), SFInt32(18), SFInt32(14), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(10), SFInt32(-1), SFInt32(16), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(9), SFInt32(-1), SFInt32(15), SFInt32(9), SFInt32(12), SFInt32(-1), SFInt32(18), SFInt32(13), SFInt32(7), SFInt32(-1), SFInt32(18), SFInt32(7), SFInt32(11), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(8), SFInt32(-1), SFInt32(13), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(8), SFInt32(-1), SFInt32(15), SFInt32(12), SFInt32(8), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(11), SFInt32(10), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.177,1.09,-0.0609]),SFVec3f([0.202,1.1,-0.0566]),SFVec3f([0.189,1.1,-0.0395]),SFVec3f([0.213,1.1,-0.025]),SFVec3f([0.203,1.1,-0.0158]),SFVec3f([0.182,1.09,-0.00563]),SFVec3f([0.167,1.09,-0.0325]),SFVec3f([0.176,1.08,-0.0781]),SFVec3f([0.16,1.06,-0.0373]),SFVec3f([0.214,1.07,-0.00402]),SFVec3f([0.228,1.07,-0.0319]),SFVec3f([0.208,1.08,-0.0765]),SFVec3f([0.179,1.07,-0.00294]),SFVec3f([0.21,0.818,-0.0615]),SFVec3f([0.201,0.82,-0.0405]),SFVec3f([0.205,0.819,-0.00832]),SFVec3f([0.224,0.818,-0.00778]),SFVec3f([0.237,0.82,-0.0282]),SFVec3f([0.231,0.819,-0.0609])])))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_wrist'),
                                  name_ : SFString('l_wrist'),
                                  center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_hand'),
                                      name_ : SFString('l_hand'),
                                      children_ : [
                                        Transform(
                                          DEF_ : SFString('l_hand_adjust'),
                                          translation_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                          rotation_ : SFRotation([SFDouble(-0.06361), SFDouble(-0.9967), SFDouble(0.04988), SFDouble(1.333)]),
                                          center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                          child_ : 
                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('Skin_Color'))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  creaseAngle_ : 1.48,
                                                  coordIndex_ : MFInt32([SFInt32(2), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(-1), SFInt32(11), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(17), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(31), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(26), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(23), SFInt32(-1), SFInt32(28), SFInt32(27), SFInt32(23), SFInt32(-1), SFInt32(28), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(28), SFInt32(22), SFInt32(-1), SFInt32(29), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(30), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(15), SFInt32(13), SFInt32(11), SFInt32(-1), SFInt32(17), SFInt32(15), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(17), SFInt32(11), SFInt32(-1), SFInt32(19), SFInt32(11), SFInt32(9), SFInt32(-1), SFInt32(31), SFInt32(19), SFInt32(9), SFInt32(-1), SFInt32(31), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(4), SFInt32(31), SFInt32(7), SFInt32(-1), SFInt32(4), SFInt32(7), SFInt32(3), SFInt32(-1), SFInt32(30), SFInt32(21), SFInt32(19), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(19), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(16), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(16), SFInt32(-1), SFInt32(10), SFInt32(16), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(10), SFInt32(18), SFInt32(-1), SFInt32(6), SFInt32(8), SFInt32(1), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(1), SFInt32(-1), SFInt32(39), SFInt32(38), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(40), SFInt32(-1), SFInt32(37), SFInt32(40), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(36), SFInt32(41), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(35), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(34), SFInt32(43), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(33), SFInt32(44), SFInt32(32), SFInt32(-1), SFInt32(20), SFInt32(32), SFInt32(44), SFInt32(-1), SFInt32(20), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(20), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(47), SFInt32(18), SFInt32(20), SFInt32(-1), SFInt32(47), SFInt32(20), SFInt32(46), SFInt32(-1), SFInt32(8), SFInt32(47), SFInt32(1), SFInt32(-1), SFInt32(22), SFInt32(33), SFInt32(32), SFInt32(-1), SFInt32(23), SFInt32(35), SFInt32(34), SFInt32(-1), SFInt32(23), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(37), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(40), SFInt32(38), SFInt32(27), SFInt32(-1), SFInt32(29), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(30), SFInt32(-1), SFInt32(47), SFInt32(31), SFInt32(1), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(31), SFInt32(-1), SFInt32(29), SFInt32(30), SFInt32(43), SFInt32(-1), SFInt32(30), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(45), SFInt32(31), SFInt32(46), SFInt32(-1), SFInt32(45), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(28), SFInt32(29), SFInt32(41), SFInt32(-1), SFInt32(29), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(28), SFInt32(40), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(41), SFInt32(40), SFInt32(-1), SFInt32(26), SFInt32(27), SFInt32(39), SFInt32(-1), SFInt32(27), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(25), SFInt32(39), SFInt32(37), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(39), SFInt32(-1), SFInt32(24), SFInt32(36), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(23), SFInt32(34), SFInt32(22), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(32), SFInt32(21), SFInt32(-1), SFInt32(32), SFInt32(20), SFInt32(21), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.211,0.828,-0.0434]),SFVec3f([0.194,0.81,-0.0445]),SFVec3f([0.237,0.82,-0.0425]),SFVec3f([0.236,0.82,-0.0237]),SFVec3f([0.194,0.81,-0.0254]),SFVec3f([0.21,0.828,-0.0247]),SFVec3f([0.252,0.801,-0.0424]),SFVec3f([0.252,0.801,-0.0231]),SFVec3f([0.269,0.765,-0.0426]),SFVec3f([0.268,0.765,-0.0225]),SFVec3f([0.273,0.732,-0.0395]),SFVec3f([0.272,0.732,-0.0223]),SFVec3f([0.27,0.704,-0.0342]),SFVec3f([0.27,0.704,-0.0224]),SFVec3f([0.262,0.703,-0.0345]),SFVec3f([0.261,0.703,-0.0227]),SFVec3f([0.256,0.717,-0.0389]),SFVec3f([0.256,0.717,-0.023]),SFVec3f([0.255,0.738,-0.0408]),SFVec3f([0.255,0.738,-0.023]),SFVec3f([0.251,0.734,-0.0406]),SFVec3f([0.251,0.734,-0.0232]),SFVec3f([0.251,0.692,-0.0232]),SFVec3f([0.248,0.657,-0.0233]),SFVec3f([0.24,0.645,-0.0236]),SFVec3f([0.226,0.637,-0.0241]),SFVec3f([0.213,0.639,-0.0246]),SFVec3f([0.197,0.652,-0.0253]),SFVec3f([0.188,0.669,-0.0256]),SFVec3f([0.184,0.697,-0.0258]),SFVec3f([0.183,0.73,-0.0258]),SFVec3f([0.187,0.77,-0.0257]),SFVec3f([0.244,0.696,-0.0375]),SFVec3f([0.244,0.692,-0.0372]),SFVec3f([0.242,0.661,-0.0345]),SFVec3f([0.241,0.658,-0.0343]),SFVec3f([0.241,0.656,-0.0341]),SFVec3f([0.231,0.646,-0.0336]),SFVec3f([0.206,0.65,-0.0349]),SFVec3f([0.218,0.644,-0.034]),SFVec3f([0.205,0.652,-0.0352]),SFVec3f([0.198,0.667,-0.0367]),SFVec3f([0.195,0.691,-0.039]),SFVec3f([0.194,0.696,-0.0395]),SFVec3f([0.193,0.725,-0.042]),SFVec3f([0.193,0.731,-0.0425]),SFVec3f([0.197,0.765,-0.0449]),SFVec3f([0.197,0.77,-0.0453])])))))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_shoulder'),
                          name_ : SFString('r_shoulder'),
                          center_ : SFVec3f([SFDouble(-0.167), SFDouble(1.36), SFDouble(-0.0458)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_upperarm'),
                              name_ : SFString('r_upperarm'),
                              children_ : [
                                Transform(
                                  DEF_ : SFString('r_upperarm_adjust'),
                                  translation_ : SFVec3f([SFDouble(-0.167), SFDouble(1.36), SFDouble(-0.0458)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.0836)]),
                                  center_ : SFVec3f([SFDouble(-0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                  child_ : 
                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Skin_Color'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          creaseAngle_ : 1.53,
                                          coordIndex_ : MFInt32([SFInt32(14), SFInt32(10), SFInt32(20), SFInt32(-1), SFInt32(10), SFInt32(13), SFInt32(20), SFInt32(-1), SFInt32(13), SFInt32(22), SFInt32(20), SFInt32(-1), SFInt32(19), SFInt32(14), SFInt32(20), SFInt32(-1), SFInt32(14), SFInt32(19), SFInt32(12), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(24), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(25), SFInt32(-1), SFInt32(22), SFInt32(13), SFInt32(25), SFInt32(-1), SFInt32(13), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(10), SFInt32(14), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(5), SFInt32(14), SFInt32(-1), SFInt32(5), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(11), SFInt32(25), SFInt32(13), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(20), SFInt32(-1), SFInt32(24), SFInt32(12), SFInt32(19), SFInt32(-1), SFInt32(12), SFInt32(24), SFInt32(9), SFInt32(-1), SFInt32(25), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(11), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(8), SFInt32(11), SFInt32(-1), SFInt32(8), SFInt32(23), SFInt32(25), SFInt32(-1), SFInt32(23), SFInt32(27), SFInt32(25), SFInt32(-1), SFInt32(21), SFInt32(9), SFInt32(24), SFInt32(-1), SFInt32(9), SFInt32(21), SFInt32(7), SFInt32(-1), SFInt32(27), SFInt32(23), SFInt32(18), SFInt32(-1), SFInt32(23), SFInt32(8), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(2), SFInt32(6), SFInt32(-1), SFInt32(2), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(1), SFInt32(6), SFInt32(2), SFInt32(-1), SFInt32(6), SFInt32(18), SFInt32(8), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(16), SFInt32(7), SFInt32(21), SFInt32(-1), SFInt32(7), SFInt32(16), SFInt32(4), SFInt32(-1), SFInt32(16), SFInt32(26), SFInt32(17), SFInt32(-1), SFInt32(26), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(18), SFInt32(6), SFInt32(3), SFInt32(-1), SFInt32(6), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(7), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(3), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(15), SFInt32(17), SFInt32(26), SFInt32(-1), SFInt32(17), SFInt32(4), SFInt32(16), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(15), SFInt32(-1), SFInt32(15), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(15), SFInt32(4), SFInt32(17), SFInt32(-1), SFInt32(25), SFInt32(27), SFInt32(24), SFInt32(-1), SFInt32(27), SFInt32(21), SFInt32(24), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(21), SFInt32(-1), SFInt32(26), SFInt32(16), SFInt32(21), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.221,1.08,-0.0352]),SFVec3f([-0.214,1.14,-0.0405]),SFVec3f([-0.209,1.26,-0.0427]),SFVec3f([-0.208,1.07,-0.00133]),SFVec3f([-0.203,1.08,-0.0744]),SFVec3f([-0.201,1.33,-0.0411]),SFVec3f([-0.198,1.14,-0.0024]),SFVec3f([-0.198,1.13,-0.076]),SFVec3f([-0.19,1.26,-0.00401]),SFVec3f([-0.189,1.26,-0.0808]),SFVec3f([-0.185,1.38,-0.0395]),SFVec3f([-0.185,1.33,-0.00025]),SFVec3f([-0.182,1.33,-0.0728]),SFVec3f([-0.174,1.37,-0.0158]),SFVec3f([-0.174,1.37,-0.0625]),SFVec3f([-0.169,1.08,-0.00885]),SFVec3f([-0.167,1.13,-0.0744]),SFVec3f([-0.162,1.05,-0.0561]),SFVec3f([-0.16,1.13,-0.000793]),SFVec3f([-0.157,1.38,-0.0733]),SFVec3f([-0.156,1.39,-0.0464]),SFVec3f([-0.155,1.26,-0.0867]),SFVec3f([-0.154,1.37,-0.0185]),SFVec3f([-0.151,1.26,-0.000789]),SFVec3f([-0.151,1.33,-0.0937]),SFVec3f([-0.15,1.34,-0.000787]),SFVec3f([-0.15,1.13,-0.0411]),SFVec3f([-0.141,1.26,-0.0421])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_elbow'),
                              name_ : SFString('r_elbow'),
                              center_ : SFVec3f([SFDouble(-0.192), SFDouble(1.07), SFDouble(-0.0498)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_forearm'),
                                  name_ : SFString('r_forearm'),
                                  children_ : [
                                    Transform(
                                      DEF_ : SFString('r_forearm_adjust'),
                                      translation_ : SFVec3f([SFDouble(-0.192), SFDouble(1.07), SFDouble(-0.0498)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1254)]),
                                      center_ : SFVec3f([SFDouble(-0.198), SFDouble(0.961), SFDouble(-0.0397)]),
                                      child_ : 
                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('Skin_Color'))),
                                          geometry_ : 
                                            IndexedFaceSet(
                                              creaseAngle_ : 1.73,
                                              coordIndex_ : MFInt32([SFInt32(20), SFInt32(13), SFInt32(15), SFInt32(-1), SFInt32(13), SFInt32(8), SFInt32(15), SFInt32(-1), SFInt32(8), SFInt32(12), SFInt32(15), SFInt32(-1), SFInt32(12), SFInt32(18), SFInt32(15), SFInt32(-1), SFInt32(18), SFInt32(22), SFInt32(15), SFInt32(-1), SFInt32(22), SFInt32(20), SFInt32(15), SFInt32(-1), SFInt32(20), SFInt32(22), SFInt32(21), SFInt32(-1), SFInt32(22), SFInt32(18), SFInt32(24), SFInt32(-1), SFInt32(18), SFInt32(12), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(13), SFInt32(3), SFInt32(-1), SFInt32(13), SFInt32(20), SFInt32(10), SFInt32(-1), SFInt32(21), SFInt32(10), SFInt32(20), SFInt32(-1), SFInt32(10), SFInt32(3), SFInt32(13), SFInt32(-1), SFInt32(3), SFInt32(7), SFInt32(8), SFInt32(-1), SFInt32(7), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(24), SFInt32(18), SFInt32(-1), SFInt32(24), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(21), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(19), SFInt32(16), SFInt32(-1), SFInt32(19), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(10), SFInt32(5), SFInt32(-1), SFInt32(10), SFInt32(21), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(5), SFInt32(10), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(3), SFInt32(-1), SFInt32(1), SFInt32(6), SFInt32(7), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(19), SFInt32(-1), SFInt32(16), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(23), SFInt32(17), SFInt32(21), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(17), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(5), SFInt32(-1), SFInt32(1), SFInt32(4), SFInt32(6), SFInt32(-1), SFInt32(4), SFInt32(16), SFInt32(6), SFInt32(-1), SFInt32(23), SFInt32(9), SFInt32(17), SFInt32(-1), SFInt32(9), SFInt32(23), SFInt32(14), SFInt32(-1), SFInt32(23), SFInt32(16), SFInt32(11), SFInt32(-1), SFInt32(4), SFInt32(11), SFInt32(16), SFInt32(-1), SFInt32(11), SFInt32(14), SFInt32(23), SFInt32(-1), SFInt32(11), SFInt32(4), SFInt32(0), SFInt32(-1), SFInt32(11), SFInt32(0), SFInt32(14), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(2), SFInt32(9), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.237,0.82,-0.0282]),SFVec3f([-0.235,1.02,-0.033]),SFVec3f([-0.231,0.819,-0.0609]),SFVec3f([-0.228,1.07,-0.0319]),SFVec3f([-0.224,0.818,-0.00778]),SFVec3f([-0.221,1.01,-0.0744]),SFVec3f([-0.218,1.01,-0.00133]),SFVec3f([-0.214,1.07,-0.00402]),SFVec3f([-0.213,1.1,-0.025]),SFVec3f([-0.21,0.818,-0.0615]),SFVec3f([-0.208,1.08,-0.0765]),SFVec3f([-0.205,0.819,-0.00832]),SFVec3f([-0.203,1.1,-0.0158]),SFVec3f([-0.202,1.1,-0.0566]),SFVec3f([-0.201,0.82,-0.0405]),SFVec3f([-0.189,1.1,-0.0395]),SFVec3f([-0.183,1.01,-0.00831]),SFVec3f([-0.183,1.01,-0.0781]),SFVec3f([-0.182,1.09,-0.00563]),SFVec3f([-0.179,1.07,-0.00294]),SFVec3f([-0.177,1.09,-0.0609]),SFVec3f([-0.176,1.08,-0.0781]),SFVec3f([-0.167,1.09,-0.0325]),SFVec3f([-0.166,1,-0.0405]),SFVec3f([-0.16,1.06,-0.0373])])))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_wrist'),
                                  name_ : SFString('r_wrist'),
                                  center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_hand'),
                                      name_ : SFString('r_hand'),
                                      children_ : [
                                        Transform(
                                          DEF_ : SFString('r_hand_adjust'),
                                          rotation_ : SFRotation([SFDouble(-0.09024), SFDouble(0.994), SFDouble(-0.0624), SFDouble(1.216)]),
                                          center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                          child_ : 
                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('Skin_Color'))),
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  creaseAngle_ : 1.57,
                                                  coordIndex_ : MFInt32([SFInt32(10), SFInt32(9), SFInt32(0), SFInt32(-1), SFInt32(11), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(1), SFInt32(12), SFInt32(11), SFInt32(-1), SFInt32(1), SFInt32(11), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(2), SFInt32(12), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(3), SFInt32(13), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(4), SFInt32(14), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(5), SFInt32(15), SFInt32(4), SFInt32(-1), SFInt32(6), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(6), SFInt32(16), SFInt32(5), SFInt32(-1), SFInt32(7), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(7), SFInt32(17), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(19), SFInt32(18), SFInt32(-1), SFInt32(8), SFInt32(18), SFInt32(7), SFInt32(-1), SFInt32(10), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(10), SFInt32(30), SFInt32(9), SFInt32(-1), SFInt32(0), SFInt32(11), SFInt32(31), SFInt32(-1), SFInt32(0), SFInt32(31), SFInt32(10), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(21), SFInt32(22), SFInt32(24), SFInt32(-1), SFInt32(21), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(21), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(26), SFInt32(-1), SFInt32(20), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(20), SFInt32(27), SFInt32(-1), SFInt32(19), SFInt32(27), SFInt32(28), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(-1), SFInt32(14), SFInt32(16), SFInt32(17), SFInt32(-1), SFInt32(14), SFInt32(17), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(18), SFInt32(-1), SFInt32(13), SFInt32(18), SFInt32(29), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(29), SFInt32(-1), SFInt32(12), SFInt32(29), SFInt32(30), SFInt32(-1), SFInt32(11), SFInt32(12), SFInt32(30), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(28), SFInt32(-1), SFInt32(18), SFInt32(28), SFInt32(29), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(6), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(9), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(9), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(32), SFInt32(38), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(33), SFInt32(39), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(34), SFInt32(40), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(35), SFInt32(41), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(36), SFInt32(42), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(37), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(8), SFInt32(-1), SFInt32(44), SFInt32(8), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(8), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(46), SFInt32(7), SFInt32(2), SFInt32(-1), SFInt32(46), SFInt32(2), SFInt32(47), SFInt32(-1), SFInt32(9), SFInt32(47), SFInt32(2), SFInt32(-1), SFInt32(25), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(25), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(25), SFInt32(24), SFInt32(33), SFInt32(-1), SFInt32(24), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(32), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(40), SFInt32(39), SFInt32(21), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(21), SFInt32(-1), SFInt32(43), SFInt32(19), SFInt32(8), SFInt32(-1), SFInt32(43), SFInt32(20), SFInt32(19), SFInt32(-1), SFInt32(43), SFInt32(42), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(41), SFInt32(-1), SFInt32(20), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(38), SFInt32(22), SFInt32(39), SFInt32(-1), SFInt32(22), SFInt32(21), SFInt32(39), SFInt32(-1), SFInt32(32), SFInt32(23), SFInt32(38), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(38), SFInt32(-1), SFInt32(26), SFInt32(25), SFInt32(35), SFInt32(-1), SFInt32(27), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(27), SFInt32(37), SFInt32(28), SFInt32(-1), SFInt32(37), SFInt32(44), SFInt32(28), SFInt32(-1), SFInt32(26), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(44), SFInt32(45), SFInt32(-1), SFInt32(29), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(29), SFInt32(9), SFInt32(30), SFInt32(-1), SFInt32(29), SFInt32(47), SFInt32(9), SFInt32(-1), SFInt32(28), SFInt32(45), SFInt32(29), SFInt32(-1), SFInt32(45), SFInt32(46), SFInt32(29), SFInt32(-1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.237,0.82,-0.0425]),SFVec3f([-0.252,0.801,-0.0424]),SFVec3f([-0.269,0.765,-0.0426]),SFVec3f([-0.273,0.732,-0.0395]),SFVec3f([-0.27,0.704,-0.0342]),SFVec3f([-0.262,0.703,-0.0345]),SFVec3f([-0.256,0.717,-0.0389]),SFVec3f([-0.255,0.738,-0.0408]),SFVec3f([-0.251,0.734,-0.0406]),SFVec3f([-0.194,0.81,-0.0445]),SFVec3f([-0.211,0.828,-0.0434]),SFVec3f([-0.236,0.82,-0.0237]),SFVec3f([-0.252,0.801,-0.0231]),SFVec3f([-0.268,0.765,-0.0225]),SFVec3f([-0.272,0.732,-0.0223]),SFVec3f([-0.27,0.704,-0.0224]),SFVec3f([-0.261,0.703,-0.0227]),SFVec3f([-0.256,0.717,-0.023]),SFVec3f([-0.255,0.738,-0.023]),SFVec3f([-0.251,0.734,-0.0232]),SFVec3f([-0.251,0.692,-0.0232]),SFVec3f([-0.248,0.657,-0.0233]),SFVec3f([-0.24,0.645,-0.0236]),SFVec3f([-0.226,0.637,-0.0241]),SFVec3f([-0.213,0.639,-0.0246]),SFVec3f([-0.197,0.652,-0.0253]),SFVec3f([-0.188,0.669,-0.0256]),SFVec3f([-0.184,0.697,-0.0258]),SFVec3f([-0.183,0.73,-0.0258]),SFVec3f([-0.187,0.77,-0.0257]),SFVec3f([-0.194,0.81,-0.0254]),SFVec3f([-0.21,0.828,-0.0247]),SFVec3f([-0.221,0.641,-0.0336]),SFVec3f([-0.21,0.65,-0.0348]),SFVec3f([-0.206,0.652,-0.0352]),SFVec3f([-0.198,0.667,-0.0368]),SFVec3f([-0.193,0.692,-0.0392]),SFVec3f([-0.192,0.696,-0.0396]),SFVec3f([-0.231,0.646,-0.0336]),SFVec3f([-0.238,0.656,-0.0342]),SFVec3f([-0.24,0.658,-0.0344]),SFVec3f([-0.24,0.662,-0.0347]),SFVec3f([-0.243,0.692,-0.0372]),SFVec3f([-0.243,0.696,-0.0376]),SFVec3f([-0.192,0.725,-0.0421]),SFVec3f([-0.192,0.73,-0.0426]),SFVec3f([-0.195,0.766,-0.0451]),SFVec3f([-0.196,0.77,-0.0454])])))))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_vc4'),
                          name_ : SFString('vc4'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.43), SFDouble(-0.0458)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_c4'),
                              name_ : SFString('c4'),
                              children_ : [
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('Skin_Color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      DEF_ : SFString('neck'),
                                      creaseAngle_ : 1.91,
                                      coordIndex_ : MFInt32([SFInt32(6), SFInt32(5), SFInt32(2), SFInt32(-1), SFInt32(6), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(7), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(11), SFInt32(10), SFInt32(9), SFInt32(-1), SFInt32(11), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(10), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(9), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(13), SFInt32(14), SFInt32(12), SFInt32(-1), SFInt32(6), SFInt32(3), SFInt32(11), SFInt32(-1), SFInt32(6), SFInt32(11), SFInt32(8), SFInt32(-1), SFInt32(7), SFInt32(14), SFInt32(15), SFInt32(-1), SFInt32(7), SFInt32(15), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(11), SFInt32(-1), SFInt32(2), SFInt32(11), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(1), SFInt32(13), SFInt32(-1), SFInt32(2), SFInt32(13), SFInt32(10), SFInt32(-1), SFInt32(1), SFInt32(0), SFInt32(15), SFInt32(-1), SFInt32(1), SFInt32(15), SFInt32(13), SFInt32(-1), SFInt32(9), SFInt32(5), SFInt32(6), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(9), SFInt32(12), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(4), SFInt32(5), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(7), SFInt32(4), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0105,1.54,-0.1]),SFVec3f([0.0357,1.54,-0.0685]),SFVec3f([0.0382,1.55,-0.0474]),SFVec3f([0.0105,1.55,-0.0204]),SFVec3f([0.0373,1.4,-0.0593]),SFVec3f([0.0577,1.4,-0.0266]),SFVec3f([0.0158,1.4,0.00512]),SFVec3f([0.0132,1.41,-0.0824]),SFVec3f([-0.0158,1.4,0.00512]),SFVec3f([-0.0577,1.4,-0.0266]),SFVec3f([-0.0382,1.55,-0.0474]),SFVec3f([-0.0105,1.55,-0.0204]),SFVec3f([-0.0373,1.4,-0.0593]),SFVec3f([-0.0357,1.54,-0.0685]),SFVec3f([-0.0132,1.41,-0.0824]),SFVec3f([-0.0105,1.54,-0.1])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_skullbase'),
                              name_ : SFString('skullbase'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(1.54), SFDouble(-0.0409)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_skull'),
                                  name_ : SFString('skull'),
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
                                          creaseAngle_ : 0.7854,
                                          colorIndex_ : MFInt32([SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(1), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(2), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(3), SFInt32(3), SFInt32(-1)]),
                                          coordIndex_ : MFInt32([SFInt32(48), SFInt32(87), SFInt32(58), SFInt32(-1), SFInt32(91), SFInt32(92), SFInt32(59), SFInt32(-1), SFInt32(59), SFInt32(92), SFInt32(88), SFInt32(-1), SFInt32(88), SFInt32(93), SFInt32(231), SFInt32(-1), SFInt32(232), SFInt32(86), SFInt32(233), SFInt32(-1), SFInt32(86), SFInt32(89), SFInt32(233), SFInt32(-1), SFInt32(89), SFInt32(57), SFInt32(56), SFInt32(-1), SFInt32(49), SFInt32(55), SFInt32(57), SFInt32(-1), SFInt32(102), SFInt32(86), SFInt32(96), SFInt32(-1), SFInt32(86), SFInt32(90), SFInt32(96), SFInt32(-1), SFInt32(97), SFInt32(95), SFInt32(96), SFInt32(-1), SFInt32(97), SFInt32(127), SFInt32(95), SFInt32(-1), SFInt32(41), SFInt32(96), SFInt32(154), SFInt32(-1), SFInt32(41), SFInt32(102), SFInt32(96), SFInt32(-1), SFInt32(99), SFInt32(102), SFInt32(41), SFInt32(-1), SFInt32(153), SFInt32(99), SFInt32(41), SFInt32(-1), SFInt32(102), SFInt32(40), SFInt32(86), SFInt32(-1), SFInt32(234), SFInt32(235), SFInt32(236), SFInt32(-1), SFInt32(87), SFInt32(237), SFInt32(58), SFInt32(-1), SFInt32(56), SFInt32(57), SFInt32(91), SFInt32(-1), SFInt32(87), SFInt32(234), SFInt32(237), SFInt32(-1), SFInt32(234), SFInt32(236), SFInt32(237), SFInt32(-1), SFInt32(89), SFInt32(49), SFInt32(57), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(55), SFInt32(-1), SFInt32(40), SFInt32(89), SFInt32(86), SFInt32(-1), SFInt32(89), SFInt32(56), SFInt32(233), SFInt32(-1), SFInt32(232), SFInt32(90), SFInt32(86), SFInt32(-1), SFInt32(90), SFInt32(97), SFInt32(96), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(88), SFInt32(-1), SFInt32(93), SFInt32(94), SFInt32(231), SFInt32(-1), SFInt32(232), SFInt32(231), SFInt32(94), SFInt32(-1), SFInt32(97), SFInt32(90), SFInt32(232), SFInt32(-1), SFInt32(96), SFInt32(42), SFInt32(154), SFInt32(-1), SFInt32(95), SFInt32(42), SFInt32(96), SFInt32(-1), SFInt32(53), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(53), SFInt32(45), SFInt32(51), SFInt32(-1), SFInt32(53), SFInt32(51), SFInt32(92), SFInt32(-1), SFInt32(92), SFInt32(51), SFInt32(52), SFInt32(-1), SFInt32(92), SFInt32(52), SFInt32(93), SFInt32(-1), SFInt32(94), SFInt32(93), SFInt32(52), SFInt32(-1), SFInt32(94), SFInt32(52), SFInt32(4), SFInt32(-1), SFInt32(97), SFInt32(232), SFInt32(94), SFInt32(-1), SFInt32(54), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(54), SFInt32(46), SFInt32(53), SFInt32(-1), SFInt32(55), SFInt32(47), SFInt32(54), SFInt32(-1), SFInt32(50), SFInt32(47), SFInt32(55), SFInt32(-1), SFInt32(34), SFInt32(33), SFInt32(50), SFInt32(-1), SFInt32(34), SFInt32(50), SFInt32(49), SFInt32(-1), SFInt32(35), SFInt32(34), SFInt32(49), SFInt32(-1), SFInt32(35), SFInt32(49), SFInt32(89), SFInt32(-1), SFInt32(35), SFInt32(89), SFInt32(40), SFInt32(-1), SFInt32(99), SFInt32(39), SFInt32(102), SFInt32(-1), SFInt32(39), SFInt32(35), SFInt32(40), SFInt32(-1), SFInt32(31), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(31), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(14), SFInt32(32), SFInt32(35), SFInt32(-1), SFInt32(14), SFInt32(35), SFInt32(39), SFInt32(-1), SFInt32(14), SFInt32(39), SFInt32(98), SFInt32(-1), SFInt32(137), SFInt32(38), SFInt32(153), SFInt32(-1), SFInt32(38), SFInt32(99), SFInt32(153), SFInt32(-1), SFInt32(38), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(37), SFInt32(238), SFInt32(239), SFInt32(-1), SFInt32(11), SFInt32(238), SFInt32(37), SFInt32(-1), SFInt32(101), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(241), SFInt32(141), SFInt32(242), SFInt32(-1), SFInt32(10), SFInt32(12), SFInt32(242), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(-1), SFInt32(12), SFInt32(14), SFInt32(243), SFInt32(-1), SFInt32(13), SFInt32(15), SFInt32(32), SFInt32(-1), SFInt32(13), SFInt32(32), SFInt32(14), SFInt32(-1), SFInt32(15), SFInt32(16), SFInt32(31), SFInt32(-1), SFInt32(15), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(2), SFInt32(70), SFInt32(10), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(141), SFInt32(-1), SFInt32(70), SFInt32(69), SFInt32(12), SFInt32(-1), SFInt32(70), SFInt32(12), SFInt32(10), SFInt32(-1), SFInt32(69), SFInt32(68), SFInt32(13), SFInt32(-1), SFInt32(69), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(15), SFInt32(-1), SFInt32(68), SFInt32(15), SFInt32(13), SFInt32(-1), SFInt32(67), SFInt32(66), SFInt32(16), SFInt32(-1), SFInt32(67), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(98), SFInt32(39), SFInt32(99), SFInt32(-1), SFInt32(101), SFInt32(11), SFInt32(37), SFInt32(-1), SFInt32(100), SFInt32(101), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(244), SFInt32(240), SFInt32(-1), SFInt32(141), SFInt32(10), SFInt32(242), SFInt32(-1), SFInt32(12), SFInt32(243), SFInt32(242), SFInt32(-1), SFInt32(36), SFInt32(37), SFInt32(239), SFInt32(-1), SFInt32(36), SFInt32(239), SFInt32(244), SFInt32(-1), SFInt32(57), SFInt32(55), SFInt32(91), SFInt32(-1), SFInt32(55), SFInt32(54), SFInt32(91), SFInt32(-1), SFInt32(39), SFInt32(40), SFInt32(102), SFInt32(-1), SFInt32(123), SFInt32(103), SFInt32(120), SFInt32(-1), SFInt32(114), SFInt32(122), SFInt32(104), SFInt32(-1), SFInt32(115), SFInt32(122), SFInt32(114), SFInt32(-1), SFInt32(208), SFInt32(105), SFInt32(115), SFInt32(-1), SFInt32(210), SFInt32(119), SFInt32(211), SFInt32(-1), SFInt32(210), SFInt32(106), SFInt32(119), SFInt32(-1), SFInt32(116), SFInt32(107), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(108), SFInt32(117), SFInt32(-1), SFInt32(126), SFInt32(119), SFInt32(109), SFInt32(-1), SFInt32(126), SFInt32(110), SFInt32(119), SFInt32(-1), SFInt32(126), SFInt32(95), SFInt32(125), SFInt32(-1), SFInt32(95), SFInt32(127), SFInt32(125), SFInt32(-1), SFInt32(154), SFInt32(126), SFInt32(111), SFInt32(-1), SFInt32(126), SFInt32(109), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(109), SFInt32(112), SFInt32(-1), SFInt32(111), SFInt32(112), SFInt32(153), SFInt32(-1), SFInt32(119), SFInt32(113), SFInt32(109), SFInt32(-1), SFInt32(207), SFInt32(213), SFInt32(214), SFInt32(-1), SFInt32(123), SFInt32(209), SFInt32(103), SFInt32(-1), SFInt32(213), SFInt32(212), SFInt32(214), SFInt32(-1), SFInt32(209), SFInt32(214), SFInt32(103), SFInt32(-1), SFInt32(209), SFInt32(207), SFInt32(214), SFInt32(-1), SFInt32(107), SFInt32(117), SFInt32(106), SFInt32(-1), SFInt32(108), SFInt32(118), SFInt32(117), SFInt32(-1), SFInt32(119), SFInt32(106), SFInt32(113), SFInt32(-1), SFInt32(210), SFInt32(116), SFInt32(106), SFInt32(-1), SFInt32(119), SFInt32(110), SFInt32(211), SFInt32(-1), SFInt32(126), SFInt32(125), SFInt32(110), SFInt32(-1), SFInt32(115), SFInt32(105), SFInt32(122), SFInt32(-1), SFInt32(208), SFInt32(124), SFInt32(105), SFInt32(-1), SFInt32(124), SFInt32(208), SFInt32(211), SFInt32(-1), SFInt32(211), SFInt32(110), SFInt32(125), SFInt32(-1), SFInt32(154), SFInt32(42), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(42), SFInt32(95), SFInt32(-1), SFInt32(168), SFInt32(128), SFInt32(121), SFInt32(-1), SFInt32(170), SFInt32(168), SFInt32(121), SFInt32(-1), SFInt32(122), SFInt32(170), SFInt32(121), SFInt32(-1), SFInt32(172), SFInt32(170), SFInt32(122), SFInt32(-1), SFInt32(105), SFInt32(172), SFInt32(122), SFInt32(-1), SFInt32(172), SFInt32(105), SFInt32(124), SFInt32(-1), SFInt32(4), SFInt32(172), SFInt32(124), SFInt32(-1), SFInt32(124), SFInt32(211), SFInt32(125), SFInt32(-1), SFInt32(128), SFInt32(130), SFInt32(129), SFInt32(-1), SFInt32(121), SFInt32(128), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(130), SFInt32(108), SFInt32(-1), SFInt32(108), SFInt32(130), SFInt32(118), SFInt32(-1), SFInt32(118), SFInt32(131), SFInt32(132), SFInt32(-1), SFInt32(117), SFInt32(118), SFInt32(132), SFInt32(-1), SFInt32(117), SFInt32(132), SFInt32(133), SFInt32(-1), SFInt32(106), SFInt32(117), SFInt32(133), SFInt32(-1), SFInt32(113), SFInt32(106), SFInt32(133), SFInt32(-1), SFInt32(109), SFInt32(152), SFInt32(112), SFInt32(-1), SFInt32(113), SFInt32(133), SFInt32(152), SFInt32(-1), SFInt32(133), SFInt32(132), SFInt32(134), SFInt32(-1), SFInt32(135), SFInt32(133), SFInt32(134), SFInt32(-1), SFInt32(133), SFInt32(135), SFInt32(136), SFInt32(-1), SFInt32(152), SFInt32(133), SFInt32(136), SFInt32(-1), SFInt32(148), SFInt32(152), SFInt32(136), SFInt32(-1), SFInt32(153), SFInt32(138), SFInt32(137), SFInt32(-1), SFInt32(153), SFInt32(112), SFInt32(138), SFInt32(-1), SFInt32(112), SFInt32(148), SFInt32(138), SFInt32(-1), SFInt32(219), SFInt32(217), SFInt32(139), SFInt32(-1), SFInt32(36), SFInt32(240), SFInt32(149), SFInt32(-1), SFInt32(139), SFInt32(217), SFInt32(140), SFInt32(-1), SFInt32(149), SFInt32(139), SFInt32(151), SFInt32(-1), SFInt32(36), SFInt32(149), SFInt32(100), SFInt32(-1), SFInt32(220), SFInt32(141), SFInt32(241), SFInt32(-1), SFInt32(220), SFInt32(150), SFInt32(142), SFInt32(-1), SFInt32(136), SFInt32(143), SFInt32(150), SFInt32(-1), SFInt32(221), SFInt32(136), SFInt32(150), SFInt32(-1), SFInt32(135), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(136), SFInt32(135), SFInt32(143), SFInt32(-1), SFInt32(134), SFInt32(158), SFInt32(144), SFInt32(-1), SFInt32(135), SFInt32(134), SFInt32(144), SFInt32(-1), SFInt32(142), SFInt32(161), SFInt32(2), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(2), SFInt32(-1), SFInt32(150), SFInt32(145), SFInt32(161), SFInt32(-1), SFInt32(142), SFInt32(150), SFInt32(161), SFInt32(-1), SFInt32(143), SFInt32(146), SFInt32(145), SFInt32(-1), SFInt32(150), SFInt32(143), SFInt32(145), SFInt32(-1), SFInt32(144), SFInt32(147), SFInt32(146), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(146), SFInt32(-1), SFInt32(158), SFInt32(160), SFInt32(147), SFInt32(-1), SFInt32(144), SFInt32(158), SFInt32(147), SFInt32(-1), SFInt32(112), SFInt32(152), SFInt32(148), SFInt32(-1), SFInt32(139), SFInt32(140), SFInt32(151), SFInt32(-1), SFInt32(149), SFInt32(151), SFInt32(100), SFInt32(-1), SFInt32(240), SFInt32(218), SFInt32(149), SFInt32(-1), SFInt32(220), SFInt32(142), SFInt32(141), SFInt32(-1), SFInt32(220), SFInt32(221), SFInt32(150), SFInt32(-1), SFInt32(219), SFInt32(139), SFInt32(149), SFInt32(-1), SFInt32(218), SFInt32(219), SFInt32(149), SFInt32(-1), SFInt32(104), SFInt32(108), SFInt32(107), SFInt32(-1), SFInt32(104), SFInt32(129), SFInt32(108), SFInt32(-1), SFInt32(109), SFInt32(113), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(41), SFInt32(111), SFInt32(-1), SFInt32(129), SFInt32(104), SFInt32(122), SFInt32(-1), SFInt32(129), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(91), SFInt32(54), SFInt32(92), SFInt32(-1), SFInt32(54), SFInt32(53), SFInt32(92), SFInt32(-1), SFInt32(97), SFInt32(94), SFInt32(127), SFInt32(-1), SFInt32(127), SFInt32(94), SFInt32(4), SFInt32(-1), SFInt32(125), SFInt32(127), SFInt32(124), SFInt32(-1), SFInt32(127), SFInt32(4), SFInt32(124), SFInt32(-1), SFInt32(154), SFInt32(111), SFInt32(41), SFInt32(-1), SFInt32(31), SFInt32(30), SFInt32(33), SFInt32(-1), SFInt32(31), SFInt32(33), SFInt32(34), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(30), SFInt32(-1), SFInt32(16), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(66), SFInt32(65), SFInt32(17), SFInt32(-1), SFInt32(66), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(2), SFInt32(73), SFInt32(156), SFInt32(-1), SFInt32(2), SFInt32(156), SFInt32(70), SFInt32(-1), SFInt32(156), SFInt32(72), SFInt32(66), SFInt32(-1), SFInt32(156), SFInt32(66), SFInt32(67), SFInt32(-1), SFInt32(156), SFInt32(67), SFInt32(68), SFInt32(-1), SFInt32(156), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(156), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(72), SFInt32(71), SFInt32(65), SFInt32(-1), SFInt32(72), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(17), SFInt32(18), SFInt32(30), SFInt32(-1), SFInt32(45), SFInt32(44), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(44), SFInt32(43), SFInt32(-1), SFInt32(51), SFInt32(43), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(43), SFInt32(1), SFInt32(-1), SFInt32(52), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(245), SFInt32(246), SFInt32(27), SFInt32(-1), SFInt32(245), SFInt32(27), SFInt32(3), SFInt32(-1), SFInt32(246), SFInt32(247), SFInt32(28), SFInt32(-1), SFInt32(246), SFInt32(28), SFInt32(27), SFInt32(-1), SFInt32(248), SFInt32(22), SFInt32(29), SFInt32(-1), SFInt32(248), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(248), SFInt32(28), SFInt32(247), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(0), SFInt32(-1), SFInt32(27), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(27), SFInt32(28), SFInt32(25), SFInt32(-1), SFInt32(27), SFInt32(25), SFInt32(26), SFInt32(-1), SFInt32(29), SFInt32(24), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(25), SFInt32(28), SFInt32(-1), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(-1), SFInt32(22), SFInt32(24), SFInt32(29), SFInt32(-1), SFInt32(249), SFInt32(250), SFInt32(22), SFInt32(-1), SFInt32(249), SFInt32(22), SFInt32(248), SFInt32(-1), SFInt32(250), SFInt32(60), SFInt32(23), SFInt32(-1), SFInt32(250), SFInt32(23), SFInt32(22), SFInt32(-1), SFInt32(17), SFInt32(254), SFInt32(18), SFInt32(-1), SFInt32(65), SFInt32(254), SFInt32(17), SFInt32(-1), SFInt32(71), SFInt32(64), SFInt32(65), SFInt32(-1), SFInt32(63), SFInt32(74), SFInt32(75), SFInt32(-1), SFInt32(63), SFInt32(75), SFInt32(61), SFInt32(-1), SFInt32(64), SFInt32(255), SFInt32(254), SFInt32(-1), SFInt32(75), SFInt32(62), SFInt32(61), SFInt32(-1), SFInt32(62), SFInt32(76), SFInt32(60), SFInt32(-1), SFInt32(76), SFInt32(77), SFInt32(23), SFInt32(-1), SFInt32(76), SFInt32(23), SFInt32(60), SFInt32(-1), SFInt32(77), SFInt32(24), SFInt32(23), SFInt32(-1), SFInt32(77), SFInt32(78), SFInt32(25), SFInt32(-1), SFInt32(77), SFInt32(25), SFInt32(24), SFInt32(-1), SFInt32(78), SFInt32(84), SFInt32(26), SFInt32(-1), SFInt32(78), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(84), SFInt32(192), SFInt32(0), SFInt32(-1), SFInt32(84), SFInt32(0), SFInt32(26), SFInt32(-1), SFInt32(84), SFInt32(83), SFInt32(193), SFInt32(-1), SFInt32(84), SFInt32(193), SFInt32(192), SFInt32(-1), SFInt32(79), SFInt32(83), SFInt32(84), SFInt32(-1), SFInt32(79), SFInt32(84), SFInt32(78), SFInt32(-1), SFInt32(76), SFInt32(79), SFInt32(78), SFInt32(-1), SFInt32(76), SFInt32(78), SFInt32(77), SFInt32(-1), SFInt32(80), SFInt32(83), SFInt32(79), SFInt32(-1), SFInt32(80), SFInt32(204), SFInt32(83), SFInt32(-1), SFInt32(75), SFInt32(81), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(85), SFInt32(204), SFInt32(-1), SFInt32(81), SFInt32(204), SFInt32(80), SFInt32(-1), SFInt32(74), SFInt32(81), SFInt32(75), SFInt32(-1), SFInt32(74), SFInt32(82), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(5), SFInt32(85), SFInt32(-1), SFInt32(82), SFInt32(85), SFInt32(81), SFInt32(-1), SFInt32(155), SFInt32(8), SFInt32(71), SFInt32(-1), SFInt32(155), SFInt32(71), SFInt32(72), SFInt32(-1), SFInt32(8), SFInt32(6), SFInt32(64), SFInt32(-1), SFInt32(8), SFInt32(64), SFInt32(71), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(255), SFInt32(-1), SFInt32(6), SFInt32(255), SFInt32(64), SFInt32(-1), SFInt32(7), SFInt32(9), SFInt32(256), SFInt32(-1), SFInt32(7), SFInt32(256), SFInt32(255), SFInt32(-1), SFInt32(9), SFInt32(257), SFInt32(256), SFInt32(-1), SFInt32(73), SFInt32(155), SFInt32(156), SFInt32(-1), SFInt32(155), SFInt32(72), SFInt32(156), SFInt32(-1), SFInt32(204), SFInt32(193), SFInt32(83), SFInt32(-1), SFInt32(64), SFInt32(254), SFInt32(65), SFInt32(-1), SFInt32(131), SFInt32(157), SFInt32(134), SFInt32(-1), SFInt32(132), SFInt32(131), SFInt32(134), SFInt32(-1), SFInt32(157), SFInt32(159), SFInt32(158), SFInt32(-1), SFInt32(134), SFInt32(157), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(206), SFInt32(160), SFInt32(-1), SFInt32(158), SFInt32(159), SFInt32(160), SFInt32(-1), SFInt32(203), SFInt32(73), SFInt32(2), SFInt32(-1), SFInt32(161), SFInt32(203), SFInt32(2), SFInt32(-1), SFInt32(160), SFInt32(162), SFInt32(203), SFInt32(-1), SFInt32(147), SFInt32(160), SFInt32(203), SFInt32(-1), SFInt32(146), SFInt32(147), SFInt32(203), SFInt32(-1), SFInt32(145), SFInt32(146), SFInt32(203), SFInt32(-1), SFInt32(161), SFInt32(145), SFInt32(203), SFInt32(-1), SFInt32(206), SFInt32(163), SFInt32(162), SFInt32(-1), SFInt32(160), SFInt32(206), SFInt32(162), SFInt32(-1), SFInt32(157), SFInt32(164), SFInt32(159), SFInt32(-1), SFInt32(170), SFInt32(169), SFInt32(168), SFInt32(-1), SFInt32(171), SFInt32(169), SFInt32(170), SFInt32(-1), SFInt32(172), SFInt32(171), SFInt32(170), SFInt32(-1), SFInt32(1), SFInt32(171), SFInt32(172), SFInt32(-1), SFInt32(4), SFInt32(1), SFInt32(172), SFInt32(-1), SFInt32(173), SFInt32(227), SFInt32(245), SFInt32(-1), SFInt32(3), SFInt32(173), SFInt32(245), SFInt32(-1), SFInt32(174), SFInt32(226), SFInt32(227), SFInt32(-1), SFInt32(173), SFInt32(174), SFInt32(227), SFInt32(-1), SFInt32(176), SFInt32(175), SFInt32(215), SFInt32(-1), SFInt32(174), SFInt32(176), SFInt32(215), SFInt32(-1), SFInt32(226), SFInt32(174), SFInt32(215), SFInt32(-1), SFInt32(0), SFInt32(177), SFInt32(173), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(173), SFInt32(-1), SFInt32(178), SFInt32(174), SFInt32(173), SFInt32(-1), SFInt32(177), SFInt32(178), SFInt32(173), SFInt32(-1), SFInt32(178), SFInt32(179), SFInt32(176), SFInt32(-1), SFInt32(174), SFInt32(178), SFInt32(176), SFInt32(-1), SFInt32(179), SFInt32(180), SFInt32(175), SFInt32(-1), SFInt32(176), SFInt32(179), SFInt32(175), SFInt32(-1), SFInt32(175), SFInt32(225), SFInt32(216), SFInt32(-1), SFInt32(215), SFInt32(175), SFInt32(216), SFInt32(-1), SFInt32(180), SFInt32(181), SFInt32(225), SFInt32(-1), SFInt32(175), SFInt32(180), SFInt32(225), SFInt32(-1), SFInt32(164), SFInt32(228), SFInt32(159), SFInt32(-1), SFInt32(159), SFInt32(228), SFInt32(206), SFInt32(-1), SFInt32(206), SFInt32(185), SFInt32(163), SFInt32(-1), SFInt32(187), SFInt32(186), SFInt32(184), SFInt32(-1), SFInt32(183), SFInt32(187), SFInt32(184), SFInt32(-1), SFInt32(228), SFInt32(229), SFInt32(185), SFInt32(-1), SFInt32(183), SFInt32(182), SFInt32(187), SFInt32(-1), SFInt32(181), SFInt32(188), SFInt32(182), SFInt32(-1), SFInt32(180), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(181), SFInt32(180), SFInt32(188), SFInt32(-1), SFInt32(180), SFInt32(179), SFInt32(189), SFInt32(-1), SFInt32(178), SFInt32(190), SFInt32(189), SFInt32(-1), SFInt32(179), SFInt32(178), SFInt32(189), SFInt32(-1), SFInt32(177), SFInt32(191), SFInt32(190), SFInt32(-1), SFInt32(178), SFInt32(177), SFInt32(190), SFInt32(-1), SFInt32(0), SFInt32(192), SFInt32(191), SFInt32(-1), SFInt32(177), SFInt32(0), SFInt32(191), SFInt32(-1), SFInt32(193), SFInt32(205), SFInt32(191), SFInt32(-1), SFInt32(192), SFInt32(193), SFInt32(191), SFInt32(-1), SFInt32(191), SFInt32(205), SFInt32(194), SFInt32(-1), SFInt32(190), SFInt32(191), SFInt32(194), SFInt32(-1), SFInt32(190), SFInt32(194), SFInt32(188), SFInt32(-1), SFInt32(189), SFInt32(190), SFInt32(188), SFInt32(-1), SFInt32(194), SFInt32(205), SFInt32(195), SFInt32(-1), SFInt32(205), SFInt32(204), SFInt32(195), SFInt32(-1), SFInt32(195), SFInt32(196), SFInt32(187), SFInt32(-1), SFInt32(204), SFInt32(85), SFInt32(196), SFInt32(-1), SFInt32(195), SFInt32(204), SFInt32(196), SFInt32(-1), SFInt32(187), SFInt32(196), SFInt32(186), SFInt32(-1), SFInt32(196), SFInt32(197), SFInt32(186), SFInt32(-1), SFInt32(85), SFInt32(5), SFInt32(197), SFInt32(-1), SFInt32(196), SFInt32(85), SFInt32(197), SFInt32(-1), SFInt32(163), SFInt32(198), SFInt32(202), SFInt32(-1), SFInt32(162), SFInt32(163), SFInt32(202), SFInt32(-1), SFInt32(185), SFInt32(199), SFInt32(198), SFInt32(-1), SFInt32(163), SFInt32(185), SFInt32(198), SFInt32(-1), SFInt32(229), SFInt32(200), SFInt32(199), SFInt32(-1), SFInt32(185), SFInt32(229), SFInt32(199), SFInt32(-1), SFInt32(230), SFInt32(201), SFInt32(200), SFInt32(-1), SFInt32(229), SFInt32(230), SFInt32(200), SFInt32(-1), SFInt32(230), SFInt32(257), SFInt32(201), SFInt32(-1), SFInt32(203), SFInt32(202), SFInt32(73), SFInt32(-1), SFInt32(203), SFInt32(162), SFInt32(202), SFInt32(-1), SFInt32(205), SFInt32(193), SFInt32(204), SFInt32(-1), SFInt32(206), SFInt32(228), SFInt32(185), SFInt32(-1), SFInt32(198), SFInt32(8), SFInt32(155), SFInt32(-1), SFInt32(198), SFInt32(155), SFInt32(202), SFInt32(-1), SFInt32(155), SFInt32(73), SFInt32(202), SFInt32(-1), SFInt32(199), SFInt32(6), SFInt32(8), SFInt32(-1), SFInt32(199), SFInt32(8), SFInt32(198), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(199), SFInt32(-1), SFInt32(7), SFInt32(199), SFInt32(200), SFInt32(-1), SFInt32(201), SFInt32(9), SFInt32(7), SFInt32(-1), SFInt32(201), SFInt32(7), SFInt32(200), SFInt32(-1), SFInt32(201), SFInt32(257), SFInt32(9), SFInt32(-1), SFInt32(188), SFInt32(194), SFInt32(195), SFInt32(-1), SFInt32(188), SFInt32(195), SFInt32(182), SFInt32(-1), SFInt32(195), SFInt32(187), SFInt32(182), SFInt32(-1), SFInt32(80), SFInt32(79), SFInt32(76), SFInt32(-1), SFInt32(80), SFInt32(62), SFInt32(75), SFInt32(-1), SFInt32(80), SFInt32(76), SFInt32(62), SFInt32(-1), SFInt32(47), SFInt32(50), SFInt32(33), SFInt32(-1), SFInt32(131), SFInt32(118), SFInt32(130), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(47), SFInt32(-1), SFInt32(21), SFInt32(46), SFInt32(47), SFInt32(-1), SFInt32(20), SFInt32(33), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(47), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(30), SFInt32(19), SFInt32(-1), SFInt32(30), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(62), SFInt32(60), SFInt32(251), SFInt32(-1), SFInt32(60), SFInt32(250), SFInt32(251), SFInt32(-1), SFInt32(252), SFInt32(61), SFInt32(251), SFInt32(-1), SFInt32(61), SFInt32(62), SFInt32(251), SFInt32(-1), SFInt32(252), SFInt32(63), SFInt32(61), SFInt32(-1), SFInt32(252), SFInt32(253), SFInt32(63), SFInt32(-1), SFInt32(166), SFInt32(130), SFInt32(167), SFInt32(-1), SFInt32(130), SFInt32(128), SFInt32(167), SFInt32(-1), SFInt32(166), SFInt32(131), SFInt32(130), SFInt32(-1), SFInt32(166), SFInt32(165), SFInt32(131), SFInt32(-1), SFInt32(165), SFInt32(157), SFInt32(131), SFInt32(-1), SFInt32(165), SFInt32(164), SFInt32(157), SFInt32(-1), SFInt32(224), SFInt32(181), SFInt32(182), SFInt32(-1), SFInt32(224), SFInt32(225), SFInt32(181), SFInt32(-1), SFInt32(224), SFInt32(183), SFInt32(223), SFInt32(-1), SFInt32(224), SFInt32(182), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(184), SFInt32(223), SFInt32(-1), SFInt32(184), SFInt32(222), SFInt32(223), SFInt32(-1)]),
                                          color_ : 
                                            Color(
                                              color_ : MFColor([SFColor(0.749), SFColor(0.601), SFColor(0.462), SFColor(0.1735), SFColor(0.2602), SFColor(0.749), SFColor(0.6364), SFColor(0.133), SFColor(0.1526), SFColor(0.4545), SFColor(0.2759), SFColor(0.1902)])),
                                          coord_ : 
                                            Coordinate(
                                              DEF_ : SFString('Face'),
                                              point_ : MFVec3f([SFVec3f([0,1.708,-0.0435]),SFVec3f([0,1.655,0.04322]),SFVec3f([0,1.486,0.02335]),SFVec3f([0,1.694,0.007789]),SFVec3f([0,1.631,0.051]),SFVec3f([0,1.524,-0.102]),SFVec3f([0.04,1.51,-0.07278]),SFVec3f([0.04029,1.514,-0.08254]),SFVec3f([0.03528,1.502,-0.05013]),SFVec3f([0.03479,1.517,-0.09269]),SFVec3f([0.0116,1.494,0.03382]),SFVec3f([0.01946,1.52,0.03421]),SFVec3f([0.02204,1.494,0.0272]),SFVec3f([0.02734,1.498,0.02215]),SFVec3f([0.02788,1.528,0.03084]),SFVec3f([0.0338,1.503,0.0124]),SFVec3f([0.04008,1.509,0.002821]),SFVec3f([0.05122,1.518,-0.02784]),SFVec3f([0.05867,1.544,-0.03316]),SFVec3f([0.06433,1.563,-0.03678]),SFVec3f([0.06732,1.583,-0.03683]),SFVec3f([0.06769,1.617,-0.03436]),SFVec3f([0.06641,1.637,-0.03046]),SFVec3f([0.06818,1.637,-0.04285]),SFVec3f([0.06308,1.666,-0.04036]),SFVec3f([0.05305,1.685,-0.03987]),SFVec3f([0.03136,1.7,-0.0413]),SFVec3f([0.02919,1.688,0.0091]),SFVec3f([0.05272,1.674,-0.001657]),SFVec3f([0.06061,1.66,-0.0101]),SFVec3f([0.05254,1.541,-0.01363]),SFVec3f([0.04099,1.527,0.008832]),SFVec3f([0.03528,1.524,0.02097]),SFVec3f([0.05792,1.557,-0.004307]),SFVec3f([0.04413,1.539,0.0149]),SFVec3f([0.03746,1.539,0.02656]),SFVec3f([0.003407,1.524,0.04155]),SFVec3f([0.01481,1.526,0.03912]),SFVec3f([0.005112,1.532,0.04358]),SFVec3f([0.02438,1.542,0.03578]),SFVec3f([0.02636,1.55,0.03808]),SFVec3f([0.006135,1.55,0.0545]),SFVec3f([0,1.559,0.05502]),SFVec3f([0.02958,1.651,0.03965]),SFVec3f([0.04847,1.643,0.02895]),SFVec3f([0.05856,1.63,0.01803]),SFVec3f([0.06182,1.614,0.008199]),SFVec3f([0.06194,1.6,0.002668]),SFVec3f([0.01489,1.583,0.04109]),SFVec3f([0.05282,1.569,0.02821]),SFVec3f([0.05767,1.58,0.0184]),SFVec3f([0.04643,1.625,0.03705]),SFVec3f([0.0264,1.628,0.04807]),SFVec3f([0.0556,1.609,0.02579]),SFVec3f([0.05467,1.599,0.02153]),SFVec3f([0.05316,1.589,0.0207]),SFVec3f([0.03603,1.58,0.03536]),SFVec3f([0.04597,1.586,0.02904]),SFVec3f([0.02106,1.592,0.03748]),SFVec3f([0.03428,1.595,0.03294]),SFVec3f([0.06808,1.617,-0.06112]),SFVec3f([0.06714,1.564,-0.07003]),SFVec3f([0.06993,1.594,-0.08238]),SFVec3f([0.05324,1.536,-0.05922]),SFVec3f([0.04904,1.521,-0.05132]),SFVec3f([0.04758,1.514,-0.03107]),SFVec3f([0.03539,1.503,-0.00093]),SFVec3f([0.02999,1.498,0.006194]),SFVec3f([0.02308,1.492,0.01628]),SFVec3f([0.01772,1.488,0.02135]),SFVec3f([0.01378,1.488,0.02484]),SFVec3f([0.04349,1.512,-0.03987]),SFVec3f([0.02308,1.499,-0.02088]),SFVec3f([0,1.487,-0.018]),SFVec3f([0.04795,1.531,-0.08973]),SFVec3f([0.05739,1.555,-0.0982]),SFVec3f([0.06815,1.622,-0.107]),SFVec3f([0.06872,1.655,-0.08466]),SFVec3f([0.05233,1.678,-0.09642]),SFVec3f([0.05334,1.631,-0.1239]),SFVec3f([0.05011,1.581,-0.1193]),SFVec3f([0.04359,1.551,-0.1067]),SFVec3f([0.03839,1.528,-0.09652]),SFVec3f([0.03399,1.636,-0.1304]),SFVec3f([0.03224,1.685,-0.1024]),SFVec3f([0,1.557,-0.1126]),SFVec3f([0.01864,1.566,0.04105]),SFVec3f([0.0249,1.58,0.0387]),SFVec3f([0.02735,1.596,0.03552]),SFVec3f([0.04317,1.564,0.03643]),SFVec3f([0.01246,1.577,0.04276]),SFVec3f([0.04354,1.59,0.02822]),SFVec3f([0.04557,1.601,0.03652]),SFVec3f([0.0291,1.603,0.04274]),SFVec3f([0.01856,1.6,0.04349]),SFVec3f([0,1.579,0.04893]),SFVec3f([0.01064,1.558,0.04476]),SFVec3f([0.005501,1.578,0.04574]),SFVec3f([0.01405,1.531,0.04152]),SFVec3f([0.01037,1.544,0.04266]),SFVec3f([0,1.515,0.03836]),SFVec3f([0.00797,1.515,0.03774]),SFVec3f([0.01824,1.55,0.04063]),SFVec3f([-0.0249,1.58,0.0387]),SFVec3f([-0.04354,1.59,0.02822]),SFVec3f([-0.0291,1.603,0.04274]),SFVec3f([-0.04317,1.564,0.03643]),SFVec3f([-0.04597,1.586,0.02904]),SFVec3f([-0.05316,1.589,0.0207]),SFVec3f([-0.01824,1.55,0.04063]),SFVec3f([-0.01246,1.577,0.04276]),SFVec3f([-0.006135,1.55,0.0545]),SFVec3f([-0.01037,1.544,0.04266]),SFVec3f([-0.02636,1.55,0.03808]),SFVec3f([-0.03428,1.595,0.03294]),SFVec3f([-0.02735,1.596,0.03552]),SFVec3f([-0.03603,1.58,0.03536]),SFVec3f([-0.05282,1.569,0.02821]),SFVec3f([-0.05767,1.58,0.0184]),SFVec3f([-0.01864,1.566,0.04105]),SFVec3f([-0.01489,1.583,0.04109]),SFVec3f([-0.0556,1.609,0.02579]),SFVec3f([-0.04557,1.601,0.03652]),SFVec3f([-0.02106,1.592,0.03748]),SFVec3f([-0.01856,1.6,0.04349]),SFVec3f([-0.005501,1.578,0.04574]),SFVec3f([-0.01064,1.558,0.04476]),SFVec3f([0,1.592,0.04694]),SFVec3f([-0.06182,1.614,0.008199]),SFVec3f([-0.05467,1.599,0.02153]),SFVec3f([-0.06194,1.6,0.002668]),SFVec3f([-0.05792,1.557,-0.004307]),SFVec3f([-0.04413,1.539,0.0149]),SFVec3f([-0.03746,1.539,0.02656]),SFVec3f([-0.04099,1.527,0.008832]),SFVec3f([-0.03528,1.524,0.02097]),SFVec3f([-0.02788,1.528,0.03084]),SFVec3f([0,1.53,0.04236]),SFVec3f([-0.005112,1.532,0.04358]),SFVec3f([-0.01481,1.526,0.03912]),SFVec3f([-0.01946,1.52,0.03421]),SFVec3f([0,1.495,0.0348]),SFVec3f([-0.0116,1.494,0.03382]),SFVec3f([-0.02734,1.498,0.02215]),SFVec3f([-0.0338,1.503,0.0124]),SFVec3f([-0.01772,1.488,0.02135]),SFVec3f([-0.02308,1.492,0.01628]),SFVec3f([-0.02999,1.498,0.006194]),SFVec3f([-0.01405,1.531,0.04152]),SFVec3f([-0.003407,1.524,0.04155]),SFVec3f([-0.02204,1.494,0.0272]),SFVec3f([-0.00797,1.515,0.03774]),SFVec3f([-0.02438,1.542,0.03578]),SFVec3f([0,1.543,0.04432]),SFVec3f([0,1.555,0.05692]),SFVec3f([0.02295,1.492,-0.02694]),SFVec3f([0.007322,1.489,-0.01677]),SFVec3f([-0.05254,1.541,-0.01363]),SFVec3f([-0.04008,1.509,0.002821]),SFVec3f([-0.05122,1.518,-0.02784]),SFVec3f([-0.03539,1.503,-0.00093]),SFVec3f([-0.01378,1.488,0.02484]),SFVec3f([-0.02308,1.499,-0.02088]),SFVec3f([-0.04349,1.512,-0.03987]),SFVec3f([-0.05867,1.544,-0.03316]),SFVec3f([-0.06433,1.563,-0.03678]),SFVec3f([-0.06732,1.583,-0.03683]),SFVec3f([-0.06769,1.617,-0.03436]),SFVec3f([-0.05856,1.63,0.01803]),SFVec3f([-0.04847,1.643,0.02895]),SFVec3f([-0.04643,1.625,0.03705]),SFVec3f([-0.02958,1.651,0.03965]),SFVec3f([-0.0264,1.628,0.04807]),SFVec3f([-0.02919,1.688,0.0091]),SFVec3f([-0.05272,1.674,-0.001657]),SFVec3f([-0.06641,1.637,-0.03046]),SFVec3f([-0.06061,1.66,-0.0101]),SFVec3f([-0.03136,1.7,-0.0413]),SFVec3f([-0.05305,1.685,-0.03987]),SFVec3f([-0.06308,1.666,-0.04036]),SFVec3f([-0.06818,1.637,-0.04285]),SFVec3f([-0.06808,1.617,-0.06112]),SFVec3f([-0.06993,1.594,-0.08238]),SFVec3f([-0.06714,1.564,-0.07003]),SFVec3f([-0.05324,1.536,-0.05922]),SFVec3f([-0.04904,1.521,-0.05132]),SFVec3f([-0.04795,1.531,-0.08973]),SFVec3f([-0.05739,1.555,-0.0982]),SFVec3f([-0.06815,1.622,-0.107]),SFVec3f([-0.06872,1.655,-0.08466]),SFVec3f([-0.05233,1.678,-0.09642]),SFVec3f([-0.03224,1.685,-0.1024]),SFVec3f([0,1.69,-0.1047]),SFVec3f([0,1.64,-0.1342]),SFVec3f([-0.05334,1.631,-0.1239]),SFVec3f([-0.05011,1.581,-0.1193]),SFVec3f([-0.04359,1.551,-0.1067]),SFVec3f([-0.03839,1.528,-0.09652]),SFVec3f([-0.03528,1.502,-0.05013]),SFVec3f([-0.04,1.51,-0.07278]),SFVec3f([-0.04029,1.514,-0.08254]),SFVec3f([-0.03479,1.517,-0.09269]),SFVec3f([-0.02295,1.492,-0.02694]),SFVec3f([-0.007322,1.489,-0.01677]),SFVec3f([0,1.588,-0.1329]),SFVec3f([-0.03399,1.636,-0.1304]),SFVec3f([-0.04758,1.514,-0.03107]),SFVec3f([-0.03428,1.595,0.03294]),SFVec3f([-0.02106,1.592,0.03748]),SFVec3f([-0.02735,1.596,0.03552]),SFVec3f([-0.0249,1.58,0.0387]),SFVec3f([-0.01489,1.583,0.04109]),SFVec3f([-0.04597,1.586,0.02904]),SFVec3f([-0.04354,1.59,0.02822]),SFVec3f([-0.03603,1.58,0.03536]),SFVec3f([-0.05856,1.63,0.01803]),SFVec3f([-0.06182,1.614,0.008199]),SFVec3f([-0.02788,1.528,0.03084]),SFVec3f([-0.005112,1.532,0.04358]),SFVec3f([-0.01405,1.531,0.04152]),SFVec3f([-0.00797,1.515,0.03774]),SFVec3f([-0.01946,1.52,0.03421]),SFVec3f([-0.05867,1.544,-0.03316]),SFVec3f([-0.06433,1.563,-0.03678]),SFVec3f([-0.06732,1.583,-0.03683]),SFVec3f([-0.06769,1.617,-0.03436]),SFVec3f([-0.04847,1.643,0.02895]),SFVec3f([-0.02958,1.651,0.03965]),SFVec3f([-0.05324,1.536,-0.05922]),SFVec3f([-0.04795,1.531,-0.08973]),SFVec3f([-0.03839,1.528,-0.09652]),SFVec3f([0.02106,1.592,0.03748]),SFVec3f([0.01489,1.583,0.04109]),SFVec3f([0.0249,1.58,0.0387]),SFVec3f([0.03603,1.58,0.03536]),SFVec3f([0.04354,1.59,0.02822]),SFVec3f([0.03428,1.595,0.03294]),SFVec3f([0.02735,1.596,0.03552]),SFVec3f([0.02788,1.528,0.03084]),SFVec3f([0.01405,1.531,0.04152]),SFVec3f([0,1.53,0.04236]),SFVec3f([0,1.515,0.03836]),SFVec3f([0.00797,1.515,0.03774]),SFVec3f([0.01946,1.52,0.03421]),SFVec3f([0.005112,1.532,0.04358]),SFVec3f([0,1.655,0.04322]),SFVec3f([0.02958,1.651,0.03965]),SFVec3f([0.04847,1.643,0.02895]),SFVec3f([0.05856,1.63,0.01803]),SFVec3f([0.06182,1.614,0.008199]),SFVec3f([0.06769,1.617,-0.03436]),SFVec3f([0.06732,1.583,-0.03683]),SFVec3f([0.06433,1.563,-0.03678]),SFVec3f([0.05867,1.544,-0.03316]),SFVec3f([0.05324,1.536,-0.05922]),SFVec3f([0.04795,1.531,-0.08973]),SFVec3f([0.03839,1.528,-0.09652]),SFVec3f([0,1.524,-0.102])]))))])])])])]),

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
                  USE_ : SFString('hanim_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_NancyNativeTags_view'),
                  name_ : SFString('NancyNativeTags_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('InclinedView'),
                      description_ : SFString('Inclined View'),
                      position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                      orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)])),

                    Viewpoint(
                      DEF_ : SFString('FrontView'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(2.57665)])),

                    Viewpoint(
                      DEF_ : SFString('SideView'),
                      description_ : SFString('Side View'),
                      position_ : SFVec3f([SFDouble(2.5929), SFDouble(0.854), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)])),

                    Viewpoint(
                      DEF_ : SFString('TopView'),
                      description_ : SFString('Top View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]))])]),

            WorldInfo(
              title_ : SFString('Nancy - an HAnim compliant avatar by 3Name3D'),
              info_ : MFString([SFString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")]),
              avatarSize_ : MFFloat([SFFloat(0.15), SFFloat(1.53), SFFloat(0.75)]),
              speed_ : 0.5),

            Group(
              DEF_ : SFString('Interface'),
              children_ : [
                Transform(
                  children_ : [
                    ProximitySensor(
                      DEF_ : SFString('HudProx'),
                      size_ : SFVec3f([SFDouble(500), SFDouble(100), SFDouble(500)]),
                      center_ : SFVec3f([SFDouble(0), SFDouble(20), SFDouble(0)]))]),

                Collision(
                  DEF_ : SFString('HUD'),
                  enabled_ : false,
                  proxy_ : 
                    Transform(
                      DEF_ : SFString('HudXform'),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0.01107), SFDouble(-0.025), SFDouble(-0.08)]),
                          scale_ : SFVec3f([SFDouble(0.012), SFDouble(0.012), SFDouble(0.012)]),
                          children_ : [
                            Transform(
                              DEF_ : SFString('Stand_Text'),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('Stand_Touch'),
                                  description_ : SFString('click for behavior')),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('Stand'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          DEF_ : SFString('text_color'),
                                          ambientIntensity_ : 0,
                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          emissiveColor_ : SFColor([SFDouble(0.819), SFDouble(0.521), SFDouble(0.169)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(1), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(1), SFInt32(29), SFInt32(2), SFInt32(-1), SFInt32(31), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(31), SFInt32(46), SFInt32(32), SFInt32(-1), SFInt32(78), SFInt32(77), SFInt32(80), SFInt32(-1), SFInt32(78), SFInt32(80), SFInt32(79), SFInt32(-1), SFInt32(96), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(96), SFInt32(112), SFInt32(95), SFInt32(-1), SFInt32(95), SFInt32(112), SFInt32(111), SFInt32(-1), SFInt32(95), SFInt32(111), SFInt32(94), SFInt32(-1), SFInt32(94), SFInt32(111), SFInt32(110), SFInt32(-1), SFInt32(94), SFInt32(110), SFInt32(93), SFInt32(-1), SFInt32(93), SFInt32(110), SFInt32(109), SFInt32(-1), SFInt32(93), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(93), SFInt32(108), SFInt32(100), SFInt32(-1), SFInt32(107), SFInt32(99), SFInt32(100), SFInt32(-1), SFInt32(107), SFInt32(100), SFInt32(108), SFInt32(-1), SFInt32(107), SFInt32(106), SFInt32(99), SFInt32(-1), SFInt32(106), SFInt32(105), SFInt32(98), SFInt32(-1), SFInt32(106), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(104), SFInt32(97), SFInt32(98), SFInt32(-1), SFInt32(104), SFInt32(98), SFInt32(105), SFInt32(-1), SFInt32(103), SFInt32(102), SFInt32(104), SFInt32(-1), SFInt32(104), SFInt32(102), SFInt32(101), SFInt32(-1), SFInt32(104), SFInt32(101), SFInt32(97), SFInt32(-1), SFInt32(101), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(101), SFInt32(97), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(101), SFInt32(96), SFInt32(-1), SFInt32(96), SFInt32(101), SFInt32(113), SFInt32(-1), SFInt32(113), SFInt32(101), SFInt32(114), SFInt32(-1), SFInt32(115), SFInt32(86), SFInt32(85), SFInt32(-1), SFInt32(115), SFInt32(85), SFInt32(116), SFInt32(-1), SFInt32(117), SFInt32(87), SFInt32(84), SFInt32(-1), SFInt32(117), SFInt32(84), SFInt32(118), SFInt32(-1), SFInt32(119), SFInt32(83), SFInt32(120), SFInt32(-1), SFInt32(121), SFInt32(88), SFInt32(82), SFInt32(-1), SFInt32(121), SFInt32(82), SFInt32(122), SFInt32(-1), SFInt32(123), SFInt32(89), SFInt32(81), SFInt32(-1), SFInt32(123), SFInt32(81), SFInt32(124), SFInt32(-1), SFInt32(125), SFInt32(90), SFInt32(126), SFInt32(-1), SFInt32(127), SFInt32(92), SFInt32(128), SFInt32(-1), SFInt32(129), SFInt32(91), SFInt32(130), SFInt32(-1), SFInt32(54), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(54), SFInt32(50), SFInt32(55), SFInt32(-1), SFInt32(76), SFInt32(75), SFInt32(74), SFInt32(-1), SFInt32(76), SFInt32(74), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(74), SFInt32(73), SFInt32(-1), SFInt32(54), SFInt32(73), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(73), SFInt32(48), SFInt32(-1), SFInt32(48), SFInt32(73), SFInt32(62), SFInt32(-1), SFInt32(48), SFInt32(62), SFInt32(61), SFInt32(-1), SFInt32(48), SFInt32(61), SFInt32(60), SFInt32(-1), SFInt32(48), SFInt32(60), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(60), SFInt32(59), SFInt32(-1), SFInt32(53), SFInt32(59), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(59), SFInt32(58), SFInt32(-1), SFInt32(53), SFInt32(58), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(58), SFInt32(57), SFInt32(-1), SFInt32(52), SFInt32(57), SFInt32(51), SFInt32(-1), SFInt32(56), SFInt32(51), SFInt32(57), SFInt32(-1), SFInt32(56), SFInt32(55), SFInt32(50), SFInt32(-1), SFInt32(56), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(62), SFInt32(73), SFInt32(72), SFInt32(-1), SFInt32(62), SFInt32(72), SFInt32(63), SFInt32(-1), SFInt32(63), SFInt32(72), SFInt32(71), SFInt32(-1), SFInt32(63), SFInt32(71), SFInt32(64), SFInt32(-1), SFInt32(64), SFInt32(71), SFInt32(70), SFInt32(-1), SFInt32(64), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(64), SFInt32(69), SFInt32(65), SFInt32(-1), SFInt32(65), SFInt32(69), SFInt32(68), SFInt32(-1), SFInt32(65), SFInt32(68), SFInt32(67), SFInt32(-1), SFInt32(65), SFInt32(67), SFInt32(66), SFInt32(-1), SFInt32(131), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(131), SFInt32(39), SFInt32(132), SFInt32(-1), SFInt32(133), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(133), SFInt32(42), SFInt32(134), SFInt32(-1), SFInt32(135), SFInt32(37), SFInt32(36), SFInt32(-1), SFInt32(135), SFInt32(36), SFInt32(136), SFInt32(-1), SFInt32(137), SFInt32(41), SFInt32(38), SFInt32(-1), SFInt32(137), SFInt32(38), SFInt32(138), SFInt32(-1), SFInt32(139), SFInt32(44), SFInt32(35), SFInt32(-1), SFInt32(139), SFInt32(35), SFInt32(140), SFInt32(-1), SFInt32(141), SFInt32(34), SFInt32(142), SFInt32(-1), SFInt32(143), SFInt32(45), SFInt32(33), SFInt32(-1), SFInt32(143), SFInt32(33), SFInt32(144), SFInt32(-1), SFInt32(145), SFInt32(16), SFInt32(15), SFInt32(-1), SFInt32(145), SFInt32(15), SFInt32(146), SFInt32(-1), SFInt32(147), SFInt32(14), SFInt32(148), SFInt32(-1), SFInt32(149), SFInt32(17), SFInt32(13), SFInt32(-1), SFInt32(149), SFInt32(13), SFInt32(150), SFInt32(-1), SFInt32(151), SFInt32(18), SFInt32(12), SFInt32(-1), SFInt32(151), SFInt32(12), SFInt32(152), SFInt32(-1), SFInt32(153), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(153), SFInt32(11), SFInt32(154), SFInt32(-1), SFInt32(155), SFInt32(20), SFInt32(10), SFInt32(-1), SFInt32(155), SFInt32(10), SFInt32(156), SFInt32(-1), SFInt32(157), SFInt32(9), SFInt32(158), SFInt32(-1), SFInt32(159), SFInt32(21), SFInt32(8), SFInt32(-1), SFInt32(159), SFInt32(8), SFInt32(160), SFInt32(-1), SFInt32(161), SFInt32(22), SFInt32(7), SFInt32(-1), SFInt32(161), SFInt32(7), SFInt32(162), SFInt32(-1), SFInt32(163), SFInt32(23), SFInt32(164), SFInt32(-1), SFInt32(165), SFInt32(24), SFInt32(6), SFInt32(-1), SFInt32(165), SFInt32(6), SFInt32(166), SFInt32(-1), SFInt32(167), SFInt32(25), SFInt32(5), SFInt32(-1), SFInt32(167), SFInt32(5), SFInt32(168), SFInt32(-1), SFInt32(169), SFInt32(26), SFInt32(170), SFInt32(-1), SFInt32(171), SFInt32(27), SFInt32(4), SFInt32(-1), SFInt32(171), SFInt32(4), SFInt32(172), SFInt32(-1), SFInt32(173), SFInt32(28), SFInt32(3), SFInt32(-1), SFInt32(173), SFInt32(3), SFInt32(174), SFInt32(-1), SFInt32(175), SFInt32(0), SFInt32(176), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-3.21,-0.0154,0]),SFVec3f([-3.15,-0.0154,0]),SFVec3f([-3.14,-0.0467,0]),SFVec3f([-3.1,-0.0601,0]),SFVec3f([-3.05,-0.051,0]),SFVec3f([-3.04,-0.0254,0]),SFVec3f([-3.05,-0.00248,0]),SFVec3f([-3.1,0.0122,0]),SFVec3f([-3.16,0.03,0]),SFVec3f([-3.2,0.0684,0]),SFVec3f([-3.2,0.133,0]),SFVec3f([-3.16,0.17,0]),SFVec3f([-3.1,0.182,0]),SFVec3f([-3.04,0.171,0]),SFVec3f([-3.01,0.136,0]),SFVec3f([-3,0.095,0]),SFVec3f([-3.05,0.095,0]),SFVec3f([-3.06,0.125,0]),SFVec3f([-3.1,0.136,0]),SFVec3f([-3.14,0.126,0]),SFVec3f([-3.15,0.103,0]),SFVec3f([-3.14,0.0815,0]),SFVec3f([-3.1,0.0689,0]),SFVec3f([-3.04,0.0512,0]),SFVec3f([-3,0.0249,0]),SFVec3f([-2.99,-0.0195,0]),SFVec3f([-3,-0.0708,0]),SFVec3f([-3.05,-0.104,0]),SFVec3f([-3.1,-0.108,0]),SFVec3f([-3.16,-0.0947,0]),SFVec3f([-3.2,-0.0586,0]),SFVec3f([-2.86,-0.102,0]),SFVec3f([-2.9,-0.102,0]),SFVec3f([-2.94,-0.0832,0]),SFVec3f([-2.94,-0.0457,0]),SFVec3f([-2.94,0.0645,0]),SFVec3f([-2.97,0.0645,0]),SFVec3f([-2.97,0.103,0]),SFVec3f([-2.94,0.103,0]),SFVec3f([-2.94,0.158,0]),SFVec3f([-2.89,0.158,0]),SFVec3f([-2.89,0.103,0]),SFVec3f([-2.86,0.103,0]),SFVec3f([-2.86,0.0645,0]),SFVec3f([-2.89,0.0645,0]),SFVec3f([-2.89,-0.0483,0]),SFVec3f([-2.88,-0.0608,0]),SFVec3f([-2.86,-0.0612,0]),SFVec3f([-2.71,-0.000798,0]),SFVec3f([-2.71,-0.0373,0]),SFVec3f([-2.74,-0.0637,0]),SFVec3f([-2.77,-0.0624,0]),SFVec3f([-2.78,-0.0416,0]),SFVec3f([-2.77,-0.0195,0]),SFVec3f([-2.71,-0.0754,0]),SFVec3f([-2.74,-0.103,0]),SFVec3f([-2.79,-0.106,0]),SFVec3f([-2.82,-0.0865,0]),SFVec3f([-2.84,-0.0431,0]),SFVec3f([-2.82,0.000177,0]),SFVec3f([-2.78,0.0201,0]),SFVec3f([-2.73,0.0275,0]),SFVec3f([-2.71,0.0446,0]),SFVec3f([-2.72,0.0614,0]),SFVec3f([-2.74,0.0675,0]),SFVec3f([-2.77,0.0573,0]),SFVec3f([-2.78,0.039,0]),SFVec3f([-2.83,0.039,0]),SFVec3f([-2.82,0.0765,0]),SFVec3f([-2.78,0.105,0]),SFVec3f([-2.74,0.11,0]),SFVec3f([-2.71,0.107,0]),SFVec3f([-2.67,0.0849,0]),SFVec3f([-2.66,0.0526,0]),SFVec3f([-2.66,-0.0763,0]),SFVec3f([-2.65,-0.101,0]),SFVec3f([-2.7,-0.101,0]),SFVec3f([-2.61,-0.101,0]),SFVec3f([-2.61,0.103,0]),SFVec3f([-2.56,0.103,0]),SFVec3f([-2.56,0.0787,0]),SFVec3f([-2.52,0.104,0]),SFVec3f([-2.47,0.105,0]),SFVec3f([-2.43,0.0743,0]),SFVec3f([-2.43,0.038,0]),SFVec3f([-2.43,-0.101,0]),SFVec3f([-2.48,-0.101,0]),SFVec3f([-2.48,0.0224,0]),SFVec3f([-2.49,0.0514,0]),SFVec3f([-2.52,0.0627,0]),SFVec3f([-2.54,0.0505,0]),SFVec3f([-2.55,0.02,0]),SFVec3f([-2.55,-0.101,0]),SFVec3f([-2.33,0.0279,0]),SFVec3f([-2.31,0.0587,0]),SFVec3f([-2.27,0.0589,0]),SFVec3f([-2.25,0.0281,0]),SFVec3f([-2.25,-0.0232,0]),SFVec3f([-2.27,-0.0563,0]),SFVec3f([-2.31,-0.057,0]),SFVec3f([-2.33,-0.0245,0]),SFVec3f([-2.19,0.175,0]),SFVec3f([-2.19,-0.101,0]),SFVec3f([-2.25,-0.101,0]),SFVec3f([-2.25,-0.073,0]),SFVec3f([-2.26,-0.0913,0]),SFVec3f([-2.31,-0.108,0]),SFVec3f([-2.35,-0.0915,0]),SFVec3f([-2.38,-0.0424,0]),SFVec3f([-2.39,0.0243,0]),SFVec3f([-2.37,0.0809,0]),SFVec3f([-2.32,0.108,0]),SFVec3f([-2.28,0.106,0]),SFVec3f([-2.25,0.0776,0]),SFVec3f([-2.25,0.175,0]),SFVec3f([-2.48,0.0224,0]),SFVec3f([-2.43,0.038,0]),SFVec3f([-2.49,0.0514,0]),SFVec3f([-2.43,0.0743,0]),SFVec3f([-2.49,0.0514,0]),SFVec3f([-2.47,0.105,0]),SFVec3f([-2.52,0.0627,0]),SFVec3f([-2.52,0.104,0]),SFVec3f([-2.54,0.0505,0]),SFVec3f([-2.56,0.0787,0]),SFVec3f([-2.55,0.02,0]),SFVec3f([-2.56,0.0787,0]),SFVec3f([-2.61,-0.101,0]),SFVec3f([-2.55,0.02,0]),SFVec3f([-2.61,-0.101,0]),SFVec3f([-2.56,0.0787,0]),SFVec3f([-2.89,0.103,0]),SFVec3f([-2.94,0.103,0]),SFVec3f([-2.89,0.0645,0]),SFVec3f([-2.89,0.103,0]),SFVec3f([-2.94,0.103,0]),SFVec3f([-2.94,0.0645,0]),SFVec3f([-2.89,0.0645,0]),SFVec3f([-2.94,0.0645,0]),SFVec3f([-2.89,-0.0483,0]),SFVec3f([-2.94,-0.0457,0]),SFVec3f([-2.89,-0.0483,0]),SFVec3f([-2.94,-0.0832,0]),SFVec3f([-2.88,-0.0608,0]),SFVec3f([-2.9,-0.102,0]),SFVec3f([-3.06,0.125,0]),SFVec3f([-3.01,0.136,0]),SFVec3f([-3.06,0.125,0]),SFVec3f([-3.04,0.171,0]),SFVec3f([-3.1,0.136,0]),SFVec3f([-3.1,0.182,0]),SFVec3f([-3.14,0.126,0]),SFVec3f([-3.16,0.17,0]),SFVec3f([-3.15,0.103,0]),SFVec3f([-3.2,0.133,0]),SFVec3f([-3.14,0.0815,0]),SFVec3f([-3.2,0.0684,0]),SFVec3f([-3.14,0.0815,0]),SFVec3f([-3.16,0.03,0]),SFVec3f([-3.1,0.0689,0]),SFVec3f([-3.1,0.0122,0]),SFVec3f([-3.04,0.0512,0]),SFVec3f([-3.05,-0.00248,0]),SFVec3f([-3,0.0249,0]),SFVec3f([-3.05,-0.00248,0]),SFVec3f([-2.99,-0.0195,0]),SFVec3f([-3.04,-0.0254,0]),SFVec3f([-3,-0.0708,0]),SFVec3f([-3.05,-0.051,0]),SFVec3f([-3.05,-0.104,0]),SFVec3f([-3.05,-0.051,0]),SFVec3f([-3.1,-0.108,0]),SFVec3f([-3.1,-0.0601,0]),SFVec3f([-3.16,-0.0947,0]),SFVec3f([-3.14,-0.0467,0]),SFVec3f([-3.15,-0.0154,0]),SFVec3f([-3.2,-0.0586,0])]))))],

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.04092), SFDouble(1.843), SFDouble(3.826)]),
                                  scale_ : SFVec3f([SFDouble(84.89), SFDouble(77.52), SFDouble(77.52)]),
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('Stand_Back'),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              DEF_ : SFString('Clear'),
                                              ambientIntensity_ : 0,
                                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              transparency_ : 1)),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.02572,-0.02535,-0.05]),SFVec3f([-0.02578,-0.02131,-0.05]),SFVec3f([-0.03871,-0.02131,-0.05]),SFVec3f([-0.03877,-0.02541,-0.05])])))))),

                            Transform(
                              DEF_ : SFString('Walk_Text'),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('Walk_Touch'),
                                  description_ : SFString('click for behavior')),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('WALK'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('text_color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(0), SFInt32(-1), SFInt32(12), SFInt32(3), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(12), SFInt32(-1), SFInt32(11), SFInt32(4), SFInt32(12), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(11), SFInt32(-1), SFInt32(10), SFInt32(5), SFInt32(11), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(10), SFInt32(-1), SFInt32(9), SFInt32(6), SFInt32(10), SFInt32(-1), SFInt32(7), SFInt32(6), SFInt32(9), SFInt32(-1), SFInt32(8), SFInt32(7), SFInt32(9), SFInt32(-1), SFInt32(15), SFInt32(14), SFInt32(13), SFInt32(-1), SFInt32(16), SFInt32(15), SFInt32(13), SFInt32(-1), SFInt32(19), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(20), SFInt32(19), SFInt32(17), SFInt32(-1), SFInt32(27), SFInt32(20), SFInt32(17), SFInt32(-1), SFInt32(28), SFInt32(27), SFInt32(17), SFInt32(-1), SFInt32(26), SFInt32(20), SFInt32(27), SFInt32(-1), SFInt32(23), SFInt32(20), SFInt32(26), SFInt32(-1), SFInt32(21), SFInt32(20), SFInt32(23), SFInt32(-1), SFInt32(25), SFInt32(23), SFInt32(26), SFInt32(-1), SFInt32(22), SFInt32(21), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(23), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(30), SFInt32(31), SFInt32(-1), SFInt32(29), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(-1), SFInt32(33), SFInt32(35), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(29), SFInt32(36), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(38), SFInt32(-1), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(-1), SFInt32(37), SFInt32(39), SFInt32(40), SFInt32(-1), SFInt32(37), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(-1), SFInt32(41), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(45), SFInt32(-1), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(-1), SFInt32(47), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(47), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(47), SFInt32(31), SFInt32(46), SFInt32(-1), SFInt32(38), SFInt32(36), SFInt32(48), SFInt32(-1), SFInt32(38), SFInt32(48), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(48), SFInt32(50), SFInt32(-1), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(50), SFInt32(52), SFInt32(-1), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(-1), SFInt32(51), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(53), SFInt32(55), SFInt32(-1), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(-1), SFInt32(54), SFInt32(56), SFInt32(57), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-1.88,-0.101,0]),SFVec3f([-1.96,0.175,0]),SFVec3f([-1.91,0.175,0]),SFVec3f([-1.86,-0.0195,0]),SFVec3f([-1.82,0.175,0]),SFVec3f([-1.76,0.175,0]),SFVec3f([-1.72,-0.0195,0]),SFVec3f([-1.67,0.175,0]),SFVec3f([-1.61,0.175,0]),SFVec3f([-1.69,-0.101,0]),SFVec3f([-1.75,-0.101,0]),SFVec3f([-1.79,0.111,0]),SFVec3f([-1.83,-0.101,0]),SFVec3f([-1.38,-0.101,0]),SFVec3f([-1.38,0.175,0]),SFVec3f([-1.32,0.175,0]),SFVec3f([-1.32,-0.101,0]),SFVec3f([-1.27,-0.101,0]),SFVec3f([-1.27,0.175,0]),SFVec3f([-1.22,0.175,0]),SFVec3f([-1.22,0.0304,0]),SFVec3f([-1.16,0.103,0]),SFVec3f([-1.09,0.103,0]),SFVec3f([-1.16,0.0272,0]),SFVec3f([-1.09,-0.101,0]),SFVec3f([-1.15,-0.101,0]),SFVec3f([-1.2,-0.0141,0]),SFVec3f([-1.22,-0.0363,0]),SFVec3f([-1.22,-0.101,0]),SFVec3f([-1.48,-0.0754,0]),SFVec3f([-1.48,-0.0373,0]),SFVec3f([-1.51,-0.0637,0]),SFVec3f([-1.51,-0.103,0]),SFVec3f([-1.47,-0.101,0]),SFVec3f([-1.42,-0.101,0]),SFVec3f([-1.43,-0.0763,0]),SFVec3f([-1.43,0.0526,0]),SFVec3f([-1.48,-0.000798,0]),SFVec3f([-1.48,0.0446,0]),SFVec3f([-1.5,0.0275,0]),SFVec3f([-1.55,0.0201,0]),SFVec3f([-1.54,-0.0195,0]),SFVec3f([-1.59,0.000177,0]),SFVec3f([-1.61,-0.0431,0]),SFVec3f([-1.55,-0.0416,0]),SFVec3f([-1.59,-0.0865,0]),SFVec3f([-1.54,-0.0624,0]),SFVec3f([-1.56,-0.106,0]),SFVec3f([-1.44,0.0849,0]),SFVec3f([-1.49,0.0614,0]),SFVec3f([-1.48,0.107,0]),SFVec3f([-1.51,0.0675,0]),SFVec3f([-1.52,0.11,0]),SFVec3f([-1.55,0.105,0]),SFVec3f([-1.54,0.0573,0]),SFVec3f([-1.59,0.0765,0]),SFVec3f([-1.6,0.039,0]),SFVec3f([-1.55,0.039,0])]))))],

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.0414), SFDouble(1.941), SFDouble(4.015)]),
                                  scale_ : SFVec3f([SFDouble(81.3), SFDouble(81.3), SFDouble(81.31)]),
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('Walk_Back'),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Clear'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(1), SFInt32(3), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(1), SFInt32(2), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.02381,-0.02541,-0.05]),SFVec3f([-0.0127,-0.02541,-0.05]),SFVec3f([-0.01263,-0.02139,-0.05]),SFVec3f([-0.02381,-0.02146,-0.05])])))))),

                            Transform(
                              DEF_ : SFString('Run_Text'),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('Run_Touch'),
                                  description_ : SFString('click for behavior')),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('Run'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('text_color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(24), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(53), SFInt32(39), SFInt32(54), SFInt32(-1), SFInt32(17), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(17), SFInt32(0), SFInt32(16), SFInt32(-1), SFInt32(0), SFInt32(14), SFInt32(16), SFInt32(-1), SFInt32(0), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(13), SFInt32(22), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(16), SFInt32(-1), SFInt32(13), SFInt32(12), SFInt32(21), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(22), SFInt32(-1), SFInt32(12), SFInt32(6), SFInt32(21), SFInt32(-1), SFInt32(12), SFInt32(11), SFInt32(7), SFInt32(-1), SFInt32(12), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(11), SFInt32(8), SFInt32(7), SFInt32(-1), SFInt32(10), SFInt32(8), SFInt32(11), SFInt32(-1), SFInt32(10), SFInt32(9), SFInt32(8), SFInt32(-1), SFInt32(6), SFInt32(5), SFInt32(21), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(20), SFInt32(-1), SFInt32(5), SFInt32(20), SFInt32(21), SFInt32(-1), SFInt32(4), SFInt32(3), SFInt32(19), SFInt32(-1), SFInt32(4), SFInt32(19), SFInt32(20), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(18), SFInt32(-1), SFInt32(3), SFInt32(18), SFInt32(19), SFInt32(-1), SFInt32(18), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(18), SFInt32(1), SFInt32(17), SFInt32(-1), SFInt32(55), SFInt32(32), SFInt32(31), SFInt32(-1), SFInt32(55), SFInt32(31), SFInt32(56), SFInt32(-1), SFInt32(57), SFInt32(33), SFInt32(30), SFInt32(-1), SFInt32(57), SFInt32(30), SFInt32(58), SFInt32(-1), SFInt32(59), SFInt32(29), SFInt32(60), SFInt32(-1), SFInt32(61), SFInt32(34), SFInt32(28), SFInt32(-1), SFInt32(61), SFInt32(28), SFInt32(62), SFInt32(-1), SFInt32(63), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(63), SFInt32(27), SFInt32(64), SFInt32(-1), SFInt32(65), SFInt32(36), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(38), SFInt32(68), SFInt32(-1), SFInt32(69), SFInt32(37), SFInt32(70), SFInt32(-1), SFInt32(71), SFInt32(23), SFInt32(72), SFInt32(-1), SFInt32(73), SFInt32(48), SFInt32(47), SFInt32(-1), SFInt32(73), SFInt32(47), SFInt32(74), SFInt32(-1), SFInt32(75), SFInt32(49), SFInt32(46), SFInt32(-1), SFInt32(75), SFInt32(46), SFInt32(76), SFInt32(-1), SFInt32(77), SFInt32(45), SFInt32(78), SFInt32(-1), SFInt32(79), SFInt32(50), SFInt32(44), SFInt32(-1), SFInt32(79), SFInt32(44), SFInt32(80), SFInt32(-1), SFInt32(81), SFInt32(51), SFInt32(43), SFInt32(-1), SFInt32(81), SFInt32(43), SFInt32(82), SFInt32(-1), SFInt32(83), SFInt32(41), SFInt32(84), SFInt32(-1), SFInt32(85), SFInt32(40), SFInt32(86), SFInt32(-1), SFInt32(87), SFInt32(52), SFInt32(88), SFInt32(-1), SFInt32(89), SFInt32(42), SFInt32(90), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.829,-0.101,0]),SFVec3f([-0.829,0.175,0]),SFVec3f([-0.662,0.172,0]),SFVec3f([-0.622,0.148,0]),SFVec3f([-0.607,0.103,0]),SFVec3f([-0.62,0.0501,0]),SFVec3f([-0.648,0.0316,0]),SFVec3f([-0.615,-0.0063,0]),SFVec3f([-0.611,-0.0764,0]),SFVec3f([-0.601,-0.101,0]),SFVec3f([-0.664,-0.101,0]),SFVec3f([-0.671,-0.0373,0]),SFVec3f([-0.68,-0.00372,0]),SFVec3f([-0.712,0.00648,0]),SFVec3f([-0.772,0.00648,0]),SFVec3f([-0.772,-0.101,0]),SFVec3f([-0.772,0.0546,0]),SFVec3f([-0.772,0.127,0]),SFVec3f([-0.703,0.127,0]),SFVec3f([-0.673,0.118,0]),SFVec3f([-0.663,0.091,0]),SFVec3f([-0.674,0.063,0]),SFVec3f([-0.705,0.0546,0]),SFVec3f([-0.379,0.103,0]),SFVec3f([-0.379,-0.101,0]),SFVec3f([-0.432,-0.101,0]),SFVec3f([-0.432,-0.0764,0]),SFVec3f([-0.466,-0.101,0]),SFVec3f([-0.518,-0.102,0]),SFVec3f([-0.555,-0.072,0]),SFVec3f([-0.56,-0.0357,0]),SFVec3f([-0.56,0.103,0]),SFVec3f([-0.506,0.103,0]),SFVec3f([-0.506,-0.0201,0]),SFVec3f([-0.5,-0.0491,0]),SFVec3f([-0.472,-0.0604,0]),SFVec3f([-0.443,-0.0482,0]),SFVec3f([-0.433,-0.0177,0]),SFVec3f([-0.433,0.103,0]),SFVec3f([-0.331,-0.101,0]),SFVec3f([-0.331,0.103,0]),SFVec3f([-0.278,0.103,0]),SFVec3f([-0.278,0.0787,0]),SFVec3f([-0.244,0.104,0]),SFVec3f([-0.192,0.105,0]),SFVec3f([-0.154,0.0743,0]),SFVec3f([-0.149,0.038,0]),SFVec3f([-0.149,-0.101,0]),SFVec3f([-0.203,-0.101,0]),SFVec3f([-0.203,0.0224,0]),SFVec3f([-0.209,0.0514,0]),SFVec3f([-0.238,0.0627,0]),SFVec3f([-0.266,0.0505,0]),SFVec3f([-0.277,0.02,0]),SFVec3f([-0.277,-0.101,0]),SFVec3f([-0.506,-0.0201,0]),SFVec3f([-0.56,-0.0357,0]),SFVec3f([-0.5,-0.0491,0]),SFVec3f([-0.555,-0.072,0]),SFVec3f([-0.5,-0.0491,0]),SFVec3f([-0.518,-0.102,0]),SFVec3f([-0.472,-0.0604,0]),SFVec3f([-0.466,-0.101,0]),SFVec3f([-0.443,-0.0482,0]),SFVec3f([-0.432,-0.0764,0]),SFVec3f([-0.433,-0.0177,0]),SFVec3f([-0.432,-0.0764,0]),SFVec3f([-0.379,0.103,0]),SFVec3f([-0.433,-0.0177,0]),SFVec3f([-0.379,0.103,0]),SFVec3f([-0.432,-0.0764,0]),SFVec3f([-0.379,-0.101,0]),SFVec3f([-0.432,-0.0764,0]),SFVec3f([-0.203,0.0224,0]),SFVec3f([-0.149,0.038,0]),SFVec3f([-0.209,0.0514,0]),SFVec3f([-0.154,0.0743,0]),SFVec3f([-0.209,0.0514,0]),SFVec3f([-0.192,0.105,0]),SFVec3f([-0.238,0.0627,0]),SFVec3f([-0.244,0.104,0]),SFVec3f([-0.266,0.0505,0]),SFVec3f([-0.278,0.0787,0]),SFVec3f([-0.278,0.0787,0]),SFVec3f([-0.331,0.103,0]),SFVec3f([-0.277,0.02,0]),SFVec3f([-0.331,-0.101,0]),SFVec3f([-0.277,0.02,0]),SFVec3f([-0.278,0.0787,0]),SFVec3f([-0.277,0.02,0]),SFVec3f([-0.331,0.103,0])]))))],

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.01579), SFDouble(1.968), SFDouble(4.074)]),
                                  scale_ : SFVec3f([SFDouble(82.47), SFDouble(82.47), SFDouble(82.48)]),
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('Run_Back'),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Clear'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.01009,-0.02534,-0.05]),SFVec3f([-0.001382,-0.02541,-0.05]),SFVec3f([-0.001315,-0.02146,-0.05]),SFVec3f([-0.01022,-0.02146,-0.05])])))))),

                            Transform(
                              DEF_ : SFString('Jump_Text'),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('Jump_Touch'),
                                  description_ : SFString('click for behavior')),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('Jump'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('text_color'))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(1), SFInt32(0), SFInt32(14), SFInt32(-1), SFInt32(1), SFInt32(14), SFInt32(2), SFInt32(-1), SFInt32(16), SFInt32(15), SFInt32(18), SFInt32(-1), SFInt32(16), SFInt32(18), SFInt32(17), SFInt32(-1), SFInt32(64), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(67), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(71), SFInt32(72), SFInt32(73), SFInt32(-1), SFInt32(71), SFInt32(73), SFInt32(74), SFInt32(-1), SFInt32(75), SFInt32(76), SFInt32(77), SFInt32(-1), SFInt32(78), SFInt32(79), SFInt32(80), SFInt32(-1), SFInt32(78), SFInt32(80), SFInt32(81), SFInt32(-1), SFInt32(82), SFInt32(83), SFInt32(84), SFInt32(-1), SFInt32(82), SFInt32(84), SFInt32(85), SFInt32(-1), SFInt32(86), SFInt32(87), SFInt32(88), SFInt32(-1), SFInt32(89), SFInt32(90), SFInt32(91), SFInt32(-1), SFInt32(92), SFInt32(93), SFInt32(94), SFInt32(-1), SFInt32(95), SFInt32(96), SFInt32(97), SFInt32(-1), SFInt32(98), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(98), SFInt32(6), SFInt32(99), SFInt32(-1), SFInt32(100), SFInt32(8), SFInt32(5), SFInt32(-1), SFInt32(100), SFInt32(5), SFInt32(101), SFInt32(-1), SFInt32(102), SFInt32(9), SFInt32(4), SFInt32(-1), SFInt32(102), SFInt32(4), SFInt32(103), SFInt32(-1), SFInt32(104), SFInt32(10), SFInt32(105), SFInt32(-1), SFInt32(106), SFInt32(11), SFInt32(3), SFInt32(-1), SFInt32(106), SFInt32(3), SFInt32(107), SFInt32(-1), SFInt32(108), SFInt32(12), SFInt32(109), SFInt32(-1), SFInt32(110), SFInt32(13), SFInt32(111), SFInt32(-1), SFInt32(112), SFInt32(27), SFInt32(26), SFInt32(-1), SFInt32(112), SFInt32(26), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(28), SFInt32(25), SFInt32(-1), SFInt32(114), SFInt32(25), SFInt32(115), SFInt32(-1), SFInt32(116), SFInt32(24), SFInt32(117), SFInt32(-1), SFInt32(118), SFInt32(29), SFInt32(23), SFInt32(-1), SFInt32(118), SFInt32(23), SFInt32(119), SFInt32(-1), SFInt32(120), SFInt32(30), SFInt32(22), SFInt32(-1), SFInt32(120), SFInt32(22), SFInt32(121), SFInt32(-1), SFInt32(122), SFInt32(31), SFInt32(123), SFInt32(-1), SFInt32(124), SFInt32(34), SFInt32(33), SFInt32(-1), SFInt32(124), SFInt32(33), SFInt32(125), SFInt32(-1), SFInt32(126), SFInt32(35), SFInt32(32), SFInt32(-1), SFInt32(126), SFInt32(32), SFInt32(127), SFInt32(-1), SFInt32(128), SFInt32(21), SFInt32(129), SFInt32(-1), SFInt32(130), SFInt32(36), SFInt32(20), SFInt32(-1), SFInt32(130), SFInt32(20), SFInt32(131), SFInt32(-1), SFInt32(132), SFInt32(37), SFInt32(19), SFInt32(-1), SFInt32(132), SFInt32(19), SFInt32(133), SFInt32(-1), SFInt32(134), SFInt32(38), SFInt32(135), SFInt32(-1), SFInt32(136), SFInt32(40), SFInt32(137), SFInt32(-1), SFInt32(138), SFInt32(39), SFInt32(139), SFInt32(-1), SFInt32(53), SFInt32(58), SFInt32(59), SFInt32(-1), SFInt32(53), SFInt32(59), SFInt32(54), SFInt32(-1), SFInt32(53), SFInt32(52), SFInt32(58), SFInt32(-1), SFInt32(52), SFInt32(51), SFInt32(57), SFInt32(-1), SFInt32(52), SFInt32(57), SFInt32(58), SFInt32(-1), SFInt32(51), SFInt32(50), SFInt32(56), SFInt32(-1), SFInt32(51), SFInt32(56), SFInt32(57), SFInt32(-1), SFInt32(50), SFInt32(49), SFInt32(56), SFInt32(-1), SFInt32(49), SFInt32(48), SFInt32(63), SFInt32(-1), SFInt32(49), SFInt32(63), SFInt32(56), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(63), SFInt32(-1), SFInt32(63), SFInt32(47), SFInt32(46), SFInt32(-1), SFInt32(63), SFInt32(46), SFInt32(62), SFInt32(-1), SFInt32(62), SFInt32(46), SFInt32(45), SFInt32(-1), SFInt32(62), SFInt32(45), SFInt32(44), SFInt32(-1), SFInt32(62), SFInt32(44), SFInt32(61), SFInt32(-1), SFInt32(61), SFInt32(44), SFInt32(60), SFInt32(-1), SFInt32(54), SFInt32(59), SFInt32(60), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(42), SFInt32(-1), SFInt32(60), SFInt32(44), SFInt32(42), SFInt32(-1), SFInt32(41), SFInt32(55), SFInt32(54), SFInt32(-1), SFInt32(41), SFInt32(54), SFInt32(60), SFInt32(-1), SFInt32(41), SFInt32(60), SFInt32(42), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.108,0.00195,0]),SFVec3f([0.163,0.00195,0]),SFVec3f([0.166,-0.0473,0]),SFVec3f([0.194,-0.0608,0]),SFVec3f([0.222,-0.0492,0]),SFVec3f([0.228,-0.017,0]),SFVec3f([0.228,0.175,0]),SFVec3f([0.284,0.175,0]),SFVec3f([0.284,-0.02,0]),SFVec3f([0.271,-0.0798,0]),SFVec3f([0.23,-0.104,0]),SFVec3f([0.193,-0.108,0]),SFVec3f([0.155,-0.102,0]),SFVec3f([0.117,-0.0714,0]),SFVec3f([0.108,-0.0357,0]),SFVec3f([0.563,-0.101,0]),SFVec3f([0.563,0.103,0]),SFVec3f([0.615,0.103,0]),SFVec3f([0.615,0.0803,0]),SFVec3f([0.649,0.105,0]),SFVec3f([0.696,0.105,0]),SFVec3f([0.728,0.0788,0]),SFVec3f([0.76,0.104,0]),SFVec3f([0.811,0.104,0]),SFVec3f([0.842,0.081,0]),SFVec3f([0.853,0.0416,0]),SFVec3f([0.853,-0.101,0]),SFVec3f([0.799,-0.101,0]),SFVec3f([0.799,0.0305,0]),SFVec3f([0.79,0.0544,0]),SFVec3f([0.767,0.0616,0]),SFVec3f([0.743,0.0507,0]),SFVec3f([0.734,0.0228,0]),SFVec3f([0.734,-0.101,0]),SFVec3f([0.681,-0.101,0]),SFVec3f([0.681,0.0301,0]),SFVec3f([0.673,0.0532,0]),SFVec3f([0.65,0.0611,0]),SFVec3f([0.626,0.0506,0]),SFVec3f([0.617,0.0224,0]),SFVec3f([0.617,-0.101,0]),SFVec3f([0.9,-0.182,0]),SFVec3f([0.9,0.103,0]),SFVec3f([0.952,0.103,0]),SFVec3f([0.952,0.0751,0]),SFVec3f([0.968,0.0934,0]),SFVec3f([1.01,0.11,0]),SFVec3f([1.05,0.103,0]),SFVec3f([1.07,0.0796,0]),SFVec3f([1.1,0.0251,0]),SFVec3f([1.1,-0.0222,0]),SFVec3f([1.07,-0.0788,0]),SFVec3f([1.03,-0.106,0]),SFVec3f([0.988,-0.103,0]),SFVec3f([0.953,-0.0755,0]),SFVec3f([0.953,-0.182,0]),SFVec3f([1.04,-0.000177,0]),SFVec3f([1.03,-0.0446,0]),SFVec3f([0.999,-0.0603,0]),SFVec3f([0.966,-0.0453,0]),SFVec3f([0.953,-0.000177,0]),SFVec3f([0.963,0.045,0]),SFVec3f([0.998,0.063,0]),SFVec3f([1.03,0.0462,0]),SFVec3f([0.515,-0.101,0]),SFVec3f([0.462,-0.0764,0]),SFVec3f([0.462,-0.101,0]),SFVec3f([0.388,-0.0201,0]),SFVec3f([0.388,0.103,0]),SFVec3f([0.334,0.103,0]),SFVec3f([0.334,-0.0357,0]),SFVec3f([0.394,-0.0491,0]),SFVec3f([0.388,-0.0201,0]),SFVec3f([0.334,-0.0357,0]),SFVec3f([0.339,-0.072,0]),SFVec3f([0.394,-0.0491,0]),SFVec3f([0.339,-0.072,0]),SFVec3f([0.376,-0.102,0]),SFVec3f([0.422,-0.0604,0]),SFVec3f([0.394,-0.0491,0]),SFVec3f([0.376,-0.102,0]),SFVec3f([0.428,-0.101,0]),SFVec3f([0.451,-0.0482,0]),SFVec3f([0.422,-0.0604,0]),SFVec3f([0.428,-0.101,0]),SFVec3f([0.462,-0.0764,0]),SFVec3f([0.461,-0.0177,0]),SFVec3f([0.451,-0.0482,0]),SFVec3f([0.462,-0.0764,0]),SFVec3f([0.515,0.103,0]),SFVec3f([0.461,0.103,0]),SFVec3f([0.461,-0.0177,0]),SFVec3f([0.515,0.103,0]),SFVec3f([0.461,-0.0177,0]),SFVec3f([0.462,-0.0764,0]),SFVec3f([0.515,-0.101,0]),SFVec3f([0.515,0.103,0]),SFVec3f([0.462,-0.0764,0]),SFVec3f([0.284,-0.02,0]),SFVec3f([0.228,-0.017,0]),SFVec3f([0.271,-0.0798,0]),SFVec3f([0.222,-0.0492,0]),SFVec3f([0.23,-0.104,0]),SFVec3f([0.194,-0.0608,0]),SFVec3f([0.193,-0.108,0]),SFVec3f([0.194,-0.0608,0]),SFVec3f([0.155,-0.102,0]),SFVec3f([0.166,-0.0473,0]),SFVec3f([0.117,-0.0714,0]),SFVec3f([0.166,-0.0473,0]),SFVec3f([0.108,-0.0357,0]),SFVec3f([0.166,-0.0473,0]),SFVec3f([0.799,0.0305,0]),SFVec3f([0.853,0.0416,0]),SFVec3f([0.79,0.0544,0]),SFVec3f([0.842,0.081,0]),SFVec3f([0.79,0.0544,0]),SFVec3f([0.811,0.104,0]),SFVec3f([0.767,0.0616,0]),SFVec3f([0.76,0.104,0]),SFVec3f([0.743,0.0507,0]),SFVec3f([0.728,0.0788,0]),SFVec3f([0.734,0.0228,0]),SFVec3f([0.728,0.0788,0]),SFVec3f([0.681,0.0301,0]),SFVec3f([0.734,0.0228,0]),SFVec3f([0.673,0.0532,0]),SFVec3f([0.728,0.0788,0]),SFVec3f([0.673,0.0532,0]),SFVec3f([0.696,0.105,0]),SFVec3f([0.65,0.0611,0]),SFVec3f([0.649,0.105,0]),SFVec3f([0.626,0.0506,0]),SFVec3f([0.615,0.0803,0]),SFVec3f([0.617,0.0224,0]),SFVec3f([0.615,0.0803,0]),SFVec3f([0.563,-0.101,0]),SFVec3f([0.617,0.0224,0]),SFVec3f([0.563,-0.101,0]),SFVec3f([0.615,0.0803,0])]))))],

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.008979), SFDouble(1.99), SFDouble(4.14)]),
                                  scale_ : SFVec3f([SFDouble(83.79), SFDouble(83.79), SFDouble(83.79)]),
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('Jump_Back'),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('Clear'))),
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(2), SFInt32(0), SFInt32(1), SFInt32(-1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.001296,-0.02541,-0.05]),SFVec3f([0.01335,-0.02527,-0.05]),SFVec3f([0.01328,-0.02152,-0.05]),SFVec3f([0.001229,-0.02146,-0.05])]))))))])])),

                Transform(
                  DEF_ : SFString('Floor'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-0.0125), SFDouble(0)]),
                  scale_ : SFVec3f([SFDouble(1), SFDouble(0.0125), SFDouble(1)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material()),
                      geometry_ : 
                        Box()))]),

            Group(
              DEF_ : SFString('Animations'),
              children_ : [
                Group(
                  DEF_ : SFString('Stand_Animation'),
                  children_ : [
                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('lower_body_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('head_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('neck_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('upper_body_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('whole_body_RotationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    PositionInterpolator(
                      DEF_ : SFString('whole_body_TranslationInterpolator_Stand'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

                    TimeSensor(
                      DEF_ : SFString('Stand_Time'),
                      cycleInterval_ : 0.00999999977648258)]),

                Group(
                  DEF_ : SFString('Walk_Animation'),
                  children_ : [
                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3533), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1072), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2612), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1268), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.01793), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05824), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2398), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3322), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8926), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2475), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9911), SFRotation(-0.03541), SFRotation(-0.1286), SFRotation(0.5419), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(-0.4306), SFRotation(-0.07962), SFRotation(-0.899), SFRotation(0.07038), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2152), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3184), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4717), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2912), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1222), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1556), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08678), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.131), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3942), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-0.7018), SFRotation(-0.03223), SFRotation(-0.7117), SFRotation(0.1289), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)])),

                    OrientationInterpolator(
                      DEF_ : SFString('lower_body_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.09018), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346), SFRotation(0.1533), SFRotation(-0.9878), SFRotation(0.02582), SFRotation(0.3902), SFRotation(-0.5701), SFRotation(0.7604), SFRotation(-0.311), SFRotation(0.366), SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0925011), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.572568), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.411508)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3197), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1564), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09346)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076), SFRotation(-0.330195), SFRotation(-0.927451), SFRotation(0.175516), SFRotation(0.538852), SFRotation(0.0327774), SFRotation(-0.999314), SFRotation(-0.0172185), SFRotation(0.492033), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.461076)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.488383), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0177536), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0659878)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1861), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3357), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189)])),

                    OrientationInterpolator(
                      DEF_ : SFString('head_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.4167), SFFloat(0.5), SFFloat(0.5833), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.8333), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1825), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1505), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1053), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.04391), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.03119), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.07936), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1616), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.155), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642)])),

                    OrientationInterpolator(
                      DEF_ : SFString('neck_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('upper_body_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826), SFRotation(-0.01972), SFRotation(-0.5974), SFRotation(0.8017), SFRotation(0.08231), SFRotation(0.009296), SFRotation(-0.9648), SFRotation(0.2627), SFRotation(0.1734), SFRotation(-0.01238), SFRotation(0.9549), SFRotation(-0.2968), SFRotation(0.08732), SFRotation(-0.008125), SFRotation(0.9691), SFRotation(-0.2463), SFRotation(0.158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826)])),

                    OrientationInterpolator(
                      DEF_ : SFString('whole_body_RotationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    PositionInterpolator(
                      DEF_ : SFString('whole_body_TranslationInterpolator_BasicWalk'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])])),

                    TimeSensor(
                      DEF_ : SFString('Walk_Time'),
                      cycleInterval_ : 2,
                      loop_ : true,
                      startTime_ : -1)]),

                Group(
                  DEF_ : SFString('Run_Animation'),
                  children_ : [
                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.4909), SFFloat(0.7091), SFFloat(0.8), SFFloat(0.8182), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07843), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09676), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3274), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3278), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.03636), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7004), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.011), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.188), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7004)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.9999), SFRotation(0.00293), SFRotation(-0.00989), SFRotation(0.402), SFRotation(-1), SFRotation(0.004977), SFRotation(-0.00497), SFRotation(0.5943), SFRotation(-1), SFRotation(0.003265), SFRotation(-0.001752), SFRotation(1.178), SFRotation(-0.9999), SFRotation(0.00815), SFRotation(-0.01093), SFRotation(0.3031), SFRotation(0.9999), SFRotation(0.00293), SFRotation(-0.00989), SFRotation(0.402)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.3091), SFFloat(0.4909), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03543), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1037), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4328), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1929), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03543)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.108), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.4265), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7052), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.108)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.9986), SFRotation(0.03354), SFRotation(0.04001), SFRotation(1.212), SFRotation(-0.9889), SFRotation(0.1328), SFRotation(0.06696), SFRotation(0.4025), SFRotation(0.9894), SFRotation(0.1453), SFRotation(0.009351), SFRotation(0.4114), SFRotation(-0.9963), SFRotation(0.07032), SFRotation(0.05003), SFRotation(0.7035), SFRotation(-0.9986), SFRotation(0.03354), SFRotation(0.04001), SFRotation(1.212)])),

                    OrientationInterpolator(
                      DEF_ : SFString('lower_body_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.9969), SFRotation(-0.05444), SFRotation(0.05596), SFRotation(0.07687), SFRotation(0.9969), SFRotation(-0.05444), SFRotation(0.05596), SFRotation(0.07687)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273), SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.9353), SFRotation(-0.2978), SFRotation(-0.191), SFRotation(4.222), SFRotation(-0.9362), SFRotation(0.2924), SFRotation(-0.1952), SFRotation(1.05), SFRotation(0.9941), SFRotation(-0.09719), SFRotation(-0.04725), SFRotation(4.512), SFRotation(-0.9594), SFRotation(0.2653), SFRotation(0.09579), SFRotation(1.525), SFRotation(0.9353), SFRotation(-0.2978), SFRotation(-0.191), SFRotation(4.222)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6979), SFRotation(0.9094), SFRotation(0.2062), SFRotation(-0.3613), SFRotation(0.4157), SFRotation(0.9637), SFRotation(0.1537), SFRotation(-0.2185), SFRotation(1.353), SFRotation(0.4864), SFRotation(0.08841), SFRotation(-0.8693), SFRotation(0.1716), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6979)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(-0.0240995), SFRotation(-0.999682), SFRotation(0.00741506), SFRotation(0.120409), SFRotation(-0.0240995), SFRotation(-0.999682), SFRotation(0.00741506), SFRotation(0.120409)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.9985), SFRotation(0.03887), SFRotation(0.03802), SFRotation(4.689), SFRotation(-0.965), SFRotation(-0.1889), SFRotation(-0.1821), SFRotation(1.415), SFRotation(0.9758), SFRotation(0.1563), SFRotation(0.1529), SFRotation(4.666), SFRotation(-0.9956), SFRotation(-0.0936), SFRotation(0.009826), SFRotation(1.126), SFRotation(0.9985), SFRotation(0.03887), SFRotation(0.03802), SFRotation(4.689)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.9907), SFRotation(-0.07264), SFRotation(0.115), SFRotation(1.135), SFRotation(0.9291), SFRotation(-0.1222), SFRotation(0.349), SFRotation(0.1695), SFRotation(-0.9892), SFRotation(0.1364), SFRotation(-0.05394), SFRotation(0.5112), SFRotation(0.9942), SFRotation(-0.0002052), SFRotation(0.1073), SFRotation(0.4975), SFRotation(0.9907), SFRotation(-0.07264), SFRotation(0.115), SFRotation(1.135)])),

                    OrientationInterpolator(
                      DEF_ : SFString('head_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.4909), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.6517), SFRotation(-0.7559), SFRotation(0.06211), SFRotation(0.2508), SFRotation(0.6467), SFRotation(0.7527), SFRotation(-0.1238), SFRotation(0.2344), SFRotation(0.6517), SFRotation(-0.7559), SFRotation(0.06211), SFRotation(0.2508)])),

                    OrientationInterpolator(
                      DEF_ : SFString('neck_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('upper_body_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7636), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0.7651), SFRotation(0.6382), SFRotation(0.08586), SFRotation(0.2712), SFRotation(0.9999), SFRotation(0.002845), SFRotation(-0.01547), SFRotation(0.3756), SFRotation(0.7459), SFRotation(-0.6505), SFRotation(-0.1432), SFRotation(0.2416), SFRotation(0.9984), SFRotation(0.05536), SFRotation(-0.01154), SFRotation(0.3488), SFRotation(0.7651), SFRotation(0.6382), SFRotation(0.08586), SFRotation(0.2712)])),

                    OrientationInterpolator(
                      DEF_ : SFString('whole_body_RotationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    PositionInterpolator(
                      DEF_ : SFString('whole_body_TranslationInterpolator_Run'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.2909), SFFloat(0.3091), SFFloat(0.7091), SFFloat(0.8), SFFloat(0.8182), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,-0.0351,0]),SFVec3f([0,-0.0351,0]),SFVec3f([0,-0.04087,0]),SFVec3f([0,-0.04886,0]),SFVec3f([0,-0.04051,0]),SFVec3f([0,-0.03666,0]),SFVec3f([0,-0.03666,0]),SFVec3f([0,-0.0351,0])])),

                    TimeSensor(
                      DEF_ : SFString('Run_Time'),
                      loop_ : true,
                      startTime_ : -1)]),

                Group(
                  DEF_ : SFString('Jump_Animation'),
                  children_ : [
                    OrientationInterpolator(
                      DEF_ : SFString('r_ankle_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3527), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3038), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2087), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3756), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3279), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1193), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_knee_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.005), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.005), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9507), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5845), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9054), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_hip_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.433), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.433), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.647), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.8943), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3698), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4963), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3829), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5169), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_ankle_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3364), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2742), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05078), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6667), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2108), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.375), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3146), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1174), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_knee_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.566), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5913), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9235), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_hip_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.615), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9136), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3614), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7869), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3918), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5433), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('lower_body_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_wrist_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.00222418), SFRotation(0.99801), SFRotation(-0.0630095), SFRotation(1.46072), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.497349), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_elbow_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5855), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5852), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('r_shoulder_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_wrist_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.00364942), SFRotation(0.999901), SFRotation(0.0135896), SFRotation(4.5822), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.655922), SFRotation(-0.00050618), SFRotation(-0.999999), SFRotation(0.0012782), SFRotation(1.28397), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_elbow_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5976), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3917), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('l_shoulder_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(1), SFRotation(0.0004113), SFRotation(0.003055), SFRotation(4.114), SFRotation(-0.8413), SFRotation(0.3238), SFRotation(0.4329), SFRotation(1.453), SFRotation(-0.877), SFRotation(0.4198), SFRotation(0.2337), SFRotation(0.6009), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('head_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3216), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06503), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('neck_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1942), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2284), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('upper_body_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.038), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.038), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1057), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2171), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3465), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    OrientationInterpolator(
                      DEF_ : SFString('whole_body_RotationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

                    PositionInterpolator(
                      DEF_ : SFString('whole_body_TranslationInterpolator_Jump'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.04), SFFloat(0.08), SFFloat(0.12), SFFloat(0.16), SFFloat(0.2), SFFloat(0.24), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.8), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.01264,-0.01289]),SFVec3f([0,-0.04712,-0.03738]),SFVec3f([-0.0003345,-0.1049,-0.05353]),SFVec3f([-0.0005712,-0.1892,-0.06561]),SFVec3f([-0.0008233,-0.286,-0.06276]),SFVec3f([-0.0009591,-0.3795,-0.05148]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.001122,-0.3269,-0.1499]),SFVec3f([-0.0008616,-0.13,-0.06358]),SFVec3f([-0.0005128,-0.03123,-0.05488]),SFVec3f([0.0004779,0.053,0.02732]),SFVec3f([0.0001728,0.4148,0.006873]),SFVec3f([0,0.03045,0.02148]),SFVec3f([0,-0.01299,-0.01057]),SFVec3f([0,-0.06932,-0.01064]),SFVec3f([0.0001365,-0.1037,-0.005059]),SFVec3f([0.0001279,-0.07198,-0.007596]),SFVec3f([0.000141,-0.01626,-0.004935]),SFVec3f([0,0,0])])),

                    TimeSensor(
                      DEF_ : SFString('Jump_Time'),
                      cycleInterval_ : 2,
                      startTime_ : -1)])]),

            ROUTE(
              fromNode_ : SFString('HudProx'),
              fromField_ : SFString('position_changed'),
              toNode_ : SFString('HudXform'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('HudProx'),
              fromField_ : SFString('orientation_changed'),
              toNode_ : SFString('HudXform'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Walk_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Run_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Jump_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Stand_Time'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Stand_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Run_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Jump_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Walk_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Walk_Time'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Stand_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Walk_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Jump_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Run_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Run_Time'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Stand_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Walk_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Run_Time'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('Jump_Touch'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('Jump_Time'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_ankle_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_knee_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_hip_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_ankle_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_knee_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_hip_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('lower_body_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_wrist_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_elbow_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_shoulder_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_wrist_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_elbow_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_shoulder_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('head_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('neck_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('upper_body_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_RotationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Stand_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_TranslationInterpolator_Stand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('r_ankle_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_knee_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_hip_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_ankle_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_knee_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_hip_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('lower_body_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wrist_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_elbow_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulder_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_wrist_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_elbow_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_shoulder_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('head_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('neck_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('upper_body_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_RotationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_TranslationInterpolator_Stand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_ankle_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_knee_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_hip_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_ankle_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_knee_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_hip_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('lower_body_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_wrist_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_elbow_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_shoulder_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_wrist_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_elbow_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_shoulder_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('head_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('neck_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('upper_body_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_RotationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Walk_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_TranslationInterpolator_BasicWalk'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('r_ankle_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_knee_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_hip_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_ankle_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_knee_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_hip_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('lower_body_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wrist_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_elbow_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulder_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_wrist_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_elbow_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_shoulder_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('head_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('neck_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('upper_body_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_RotationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_TranslationInterpolator_BasicWalk'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_ankle_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_knee_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_hip_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_ankle_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_knee_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_hip_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('lower_body_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_wrist_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_elbow_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_shoulder_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_wrist_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_elbow_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_shoulder_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('head_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('neck_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('upper_body_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_RotationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Run_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_TranslationInterpolator_Run'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('r_ankle_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_knee_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_hip_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_ankle_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_knee_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_hip_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('lower_body_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wrist_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_elbow_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulder_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_wrist_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_elbow_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_shoulder_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('head_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('neck_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('upper_body_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_RotationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_TranslationInterpolator_Run'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_ankle_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_knee_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_hip_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_ankle_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_knee_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_hip_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('lower_body_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_wrist_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_elbow_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('r_shoulder_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_wrist_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_elbow_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('l_shoulder_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('head_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('neck_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('upper_body_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_RotationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Jump_Time'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('whole_body_TranslationInterpolator_Jump'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('r_ankle_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_knee_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_hip_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_ankle_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_ankle'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_knee_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_knee'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_hip_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_hip'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('lower_body_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_sacroiliac'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_wrist_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_elbow_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('r_shoulder_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_r_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_wrist_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_wrist'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_elbow_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_elbow'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('l_shoulder_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_l_shoulder'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('head_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('neck_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vc4'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('upper_body_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_vl1'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_RotationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('whole_body_TranslationInterpolator_Jump'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('hanim_humanoid_root'),
              toField_ : SFString('set_translation'))]));
void main() { exit(0); }
