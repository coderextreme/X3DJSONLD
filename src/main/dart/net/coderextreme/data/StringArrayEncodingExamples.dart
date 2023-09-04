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
              content_ : SFString('StringArrayEncodingExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Demonstrate simple X3D MFString (string array) encoding.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('27 May 2017')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 May 2017')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3dHeaderPrototypeSyntaxExamples.x3d')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            Viewpoint(
              DEF_ : SFString('EntryView'),
              description_ : SFString('Hello MFString syntax')),

            Background(
              skyColor_ : MFColor([SFColor(0.6), SFColor(1), SFColor(0.8)])),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      diffuseColor_ : SFColor([SFDouble(0.6), SFDouble(0.4), SFDouble(0.2)]))),
              geometry_ : 
                Text(
                  string_ : MFString([SFString("One, Two, Three"), SFString(""), SFString("He said, \"Immel did it!\"")]),
                  fontStyle_ : 
                    FontStyle(
                      style_ : SFString('BOLD'),
                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))]));
void main() { exit(0); }
