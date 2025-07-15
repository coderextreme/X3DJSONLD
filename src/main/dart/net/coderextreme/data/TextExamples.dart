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
              content_ : SFString('TextExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Show different escape-character text examples for embedded quotation marks.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('7 April 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('26 April 2016')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Compare special character escaping")]),
                      fontStyle_ : 
                        FontStyle(
                          DEF_ : SFString('testFontStyle'),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.8)),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('LightBlueAppearance'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.7), SFDouble(0.7)]))))),

            Transform(
              translation_ : SFVec3f([SFDouble(-3), SFDouble(0), SFDouble(0)]),
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("I don't think so"), SFString(""), SFString("he said \"Hi\"")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('testFontStyle'))),
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('LightBlueAppearance')))),

            Transform(
              translation_ : SFVec3f([SFDouble(3), SFDouble(0), SFDouble(0)]),
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("I don't think so"), SFString(""), SFString("he said \"Hi\"")]),
                      fontStyle_ : 
                        FontStyle(
                          USE_ : SFString('testFontStyle'))),
                  appearance_ : 
                    Appearance(
                      USE_ : SFString('LightBlueAppearance'))))]));
void main() { exit(0); }
