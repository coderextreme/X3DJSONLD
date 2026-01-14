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
              content_ : SFString('WinterAndSpringThanksAllTitleBox.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Credits for scene.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carol McDonald')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe Williams and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('26 June 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:21:02 GMT')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringThanksAllTitleBox.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('WinterAndSpringThanksAllTitleBox.x3d')),

            Viewpoint(
              DEF_ : SFString('WSThanksAllView'),
              description_ : SFString('Look at Thanks title'),
              position_ : SFVec3f([SFDouble(10), SFDouble(11), SFDouble(-10)]),
              orientation_ : SFRotation([SFDouble(-0.15), SFDouble(0), SFDouble(0), SFDouble(0.2)])),

            Transform(
              DEF_ : SFString('WSThanksAllTitle'),
              translation_ : SFVec3f([SFDouble(10), SFDouble(10), SFDouble(-15)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(),
                      texture_ : 
                        ImageTexture(
                          url_ : MFString([SFString("images/WSThanksR2trimmed.png"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSThanksR2trimmed.png")]))),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(4), SFDouble(3), SFDouble(0.25)]))))]));
void main() { exit(0); }
