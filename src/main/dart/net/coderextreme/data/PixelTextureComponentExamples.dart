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
              content_ : SFString('PixelTextureComponentExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Leonard Daly and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('25 August 2008')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('7 January 2014')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://X3dGraphics.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D for Web Authors, Table 5.18')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dResources.html')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('Copyright (c) 2006, Daly Realism and Don Brutzman')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d')),

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
              skyColor_ : MFColor([SFColor(0.1), SFColor(0.1), SFColor(0.4)])),

            Viewpoint(
              description_ : SFString('Table 5.18 SFImage component examples'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(14)])),

            Transform(
              translation_ : SFVec3f([SFDouble(-6), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          DEF_ : SFString('ZeroComponents'))),
                  geometry_ : 
                    Box()),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("0")]),
                          fontStyle_ : 
                            FontStyle(
                              DEF_ : SFString('CenterJustify'),
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('TextMaterial'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))])]),

            Transform(
              translation_ : SFVec3f([SFDouble(-3), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          DEF_ : SFString('OneComponent'),
                          image_ : SFImage([SFInt32(1), SFInt32(2), SFInt32(1), SFInt32(255), SFInt32(0)]))),
                  geometry_ : 
                    Box()),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("1")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TextMaterial')))])]),

            Transform(
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          DEF_ : SFString('TwoComponents'),
                          image_ : SFImage([SFInt32(2), SFInt32(1), SFInt32(2), SFInt32(52479), SFInt32(8823)]))),
                  geometry_ : 
                    Box()),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("2")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TextMaterial')))])]),

            Transform(
              translation_ : SFVec3f([SFDouble(3), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      /*note 0x000000 = 0*/
                      texture_ : 
                        PixelTexture(
                          DEF_ : SFString('ThreeComponents'),
                          image_ : SFImage([SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(16711680), SFInt32(65280), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(16777215), SFInt32(16776960)]))),
                  geometry_ : 
                    Box()),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("3")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TextMaterial')))])]),

            Transform(
              translation_ : SFVec3f([SFDouble(6), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      /*Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127*/
                      texture_ : 
                        PixelTexture(
                          DEF_ : SFString('FourComponents'),
                          image_ : SFImage([SFInt32(3), SFInt32(2), SFInt32(4), SFInt32(4278190335), SFInt32(16711935), SFInt32(65535), SFInt32(4278190207), SFInt32(16711807), SFInt32(65407)]))),
                  geometry_ : 
                    Box()),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("4")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('TextMaterial')))])]),
          /*Background from PixelTextureBW.x3d*/

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(6), SFDouble(-2)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(8), SFInt32(8), SFInt32(1), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204), SFInt32(0), SFInt32(204)]))),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(16), SFDouble(16), SFDouble(0.1)])))])]));
void main() { exit(0); }
