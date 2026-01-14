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
              content_ : SFString('HAnimModelsHandsFeet.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Kwan Hee YOO and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('8 February 2015')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:09 GMT')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('not yet to scale')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('TODO will X3D HAnim component add a new level to support LOA-4 functionality?')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnimModelsHandsFeet.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnimModelsHandsFeetWithFour1mGrids.png')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/working-groups/humanoid-animation-HAnim')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D HAnim humanoid animation')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HAnimModelsHandsFeet.x3d')),

            Viewpoint(
              description_ : SFString('Hands and feet 10m')),

            Viewpoint(
              description_ : SFString('Hands and feet 1.7m'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1.7)])),

            Transform(
              translation_ : SFVec3f([SFDouble(-1), SFDouble(1), SFDouble(0)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("HAnimModelHandLeft.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"), SFString("HAnimModelHandLeft.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl")])),

                Transform(
                  DEF_ : SFString('GridXY_20x20Fixed_AdjustScale'),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  children_ : [
                    Inline(
                      DEF_ : SFString('GridXY_20x20Fixed'),
                      url_ : MFString([SFString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), SFString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl")]))])]),

            Transform(
              translation_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(0)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("HAnimModelHandRight.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"), SFString("HAnimModelHandRight.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl")])),

                Transform(
                  USE_ : SFString('GridXY_20x20Fixed_AdjustScale'))]),

            Transform(
              translation_ : SFVec3f([SFDouble(-1), SFDouble(-1), SFDouble(0)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("HAnimModelFootLeft.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"), SFString("HAnimModelFootLeft.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl")])),

                Transform(
                  USE_ : SFString('GridXY_20x20Fixed_AdjustScale'))]),

            Transform(
              translation_ : SFVec3f([SFDouble(1), SFDouble(-1), SFDouble(0)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("HAnimModelFootRight.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"), SFString("HAnimModelFootRight.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl")])),

                Transform(
                  USE_ : SFString('GridXY_20x20Fixed_AdjustScale'))])]));
void main() { exit(0); }
