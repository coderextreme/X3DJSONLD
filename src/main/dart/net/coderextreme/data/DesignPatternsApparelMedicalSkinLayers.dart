// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('DesignPatternsApparelMedicalSkinLayers.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Design patterns for skin and apparel using HAnim2 standard in X3D4')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Dick Puk')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('23 December 2022')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('2 July 2023')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('DesignPatternsApparelVariations.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Under development. This template example does not produce renderable HAnim models.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HAnimHumanoid skin design patterns for apparel, medical')),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0.6), SFColor(0.6)])),

            Group(
              DEF_ : SFString('MultipleHumanoids'),
              metadata_ : [
                MetadataString(
                  name_ : SFString('HAnimArchitecture'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile'),
                  value_ : MFString([SFString("E.4 Multiple humanoids per file")]))]),

            Viewpoint(
              DEF_ : SFString('ViewHelpText'),
              description_ : SFString('Select text to see website'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Anchor(
              description_ : SFString('DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches'),
              url_ : MFString([SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")]),
              parameter_ : MFString([SFString("target=blank")]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("DesignPatternsApparelMedicalSkinLayers.x3d"), SFString(""), SFString("explores potential apparel approaches")]),
                      fontStyle_ : 
                        FontStyle(
                          family_ : MFString([SFString("SANS")]),
                          style_ : SFString('BOLD'),
                          size_ : 0.6,
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")])))),

                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          transparency_ : 1)),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(11), SFDouble(2), SFDouble(0.001)])))])]));
void main() { exit(0); }
