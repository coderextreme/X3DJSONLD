// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('TextSpecialCharacters.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('12 July 2008')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('2 April 2017')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Character entity references in HTML 4')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.w3.org/TR/REC-html40/sgml/entities.html')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('Copyright (c) Don Brutzman and Leonard Daly, 2008')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d')),

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
              skyColor_ : MFColor([SFColor(1), SFColor(1), SFColor(1)])),

            Viewpoint(
              description_ : SFString('Default View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(15)])),

            Shape(
              /*Empty string \"\" means to skip a line*/
              /*The ampersand escape characters are based on XML rules*/
              /*apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute*/
              /*ampersand & is &amp; and needs to be escaped*/
              /*quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute*/
              /*quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\"*/
              /*backslash \\ is used as escape character for \" (and itself) in X3D*/
              /*character entities are listed in HTML specification and are good for any XML*/
              geometry_ : 
                Text(
                  DEF_ : SFString('DefaultText'),
                  string_ : MFString([SFString("Character entity substitutions:"), SFString("empty string \"\" skips a line:"), SFString(""), SFString("apostrophe ' is &apos;"), SFString("ampersand & is &amp;"), SFString("quote mark \" is &quot;"), SFString("backslash \\\\ is X3D escape character"), SFString("double backslash \\\\\\\\ is X3D backslash \\\\ character"), SFString("Pi is pi is pi XML character entity")]),
                  fontStyle_ : 
                    FontStyle(
                      DEF_ : SFString('CenteredFontStyle'),
                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      DEF_ : SFString('DefaultMaterial'),
                      diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]))))]));
void main() { exit(0); }
