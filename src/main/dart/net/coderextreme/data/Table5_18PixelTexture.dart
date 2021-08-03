// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Table5_18PixelTexture')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('PixelTexture example for Table 5.18')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Leonard Daly and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('18 December 2006')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('2 April 2017')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://X3dGraphics.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dResources.html')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('Copyright 2006, Daly Realism and Don Brutzman')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D, PixelTexture')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture')),

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
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(1)])),

            Transform(
              DEF_ : SFString('Checkerboard'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-10)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      textureTransform_ : 
                        TextureTransform(
                          scale_ : SFVec2f([SFDouble(500), SFDouble(500)])),
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(2), SFInt32(2), SFInt32(3), SFInt32(15119869), SFInt32(16767927), SFInt32(16767927), SFInt32(15119869)]))),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(1000), SFDouble(1000), SFDouble(0.01)])))]),

            Viewpoint(
              description_ : SFString('View All'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(20)])),

            Viewpoint(
              description_ : SFString('Empty Image'),
              position_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(5)])),

            Transform(
              DEF_ : SFString('EmptyImage'),
              rotation_ : SFRotation([SFDouble(1), SFDouble(1), SFDouble(0), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture()),
                  geometry_ : 
                    Box(
                      DEF_ : SFString('StandardBox')))]),

            Viewpoint(
              description_ : SFString('Black and white PixelTexture'),
              position_ : SFVec3f([SFDouble(-5), SFDouble(0), SFDouble(5)])),

            Transform(
              DEF_ : SFString('BW'),
              rotation_ : SFRotation([SFDouble(1), SFDouble(1), SFDouble(0), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(-5), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(1), SFInt32(2), SFInt32(1), SFInt32(255), SFInt32(0)]))),
                  geometry_ : 
                    Box(
                      USE_ : SFString('StandardBox')))]),

            Viewpoint(
              description_ : SFString('Black and white with Alpha PixelTexture'),
              position_ : SFVec3f([SFDouble(5), SFDouble(0), SFDouble(5)])),

            Transform(
              DEF_ : SFString('AlphaBW'),
              rotation_ : SFRotation([SFDouble(1), SFDouble(1), SFDouble(0), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(5), SFDouble(0), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(2), SFInt32(1), SFInt32(2), SFInt32(52479), SFInt32(8823)]))),
                  geometry_ : 
                    Box(
                      USE_ : SFString('StandardBox')))]),

            Viewpoint(
              description_ : SFString('RGB PixelTexture'),
              position_ : SFVec3f([SFDouble(-5), SFDouble(-5), SFDouble(5)])),

            Transform(
              DEF_ : SFString('RGB'),
              rotation_ : SFRotation([SFDouble(1), SFDouble(1), SFDouble(0), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(-5), SFDouble(-5), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(2), SFInt32(4), SFInt32(3), SFInt32(16711680), SFInt32(65280), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(0), SFInt32(16777215), SFInt32(16776960)]))),
                  geometry_ : 
                    Box(
                      USE_ : SFString('StandardBox')))]),

            Viewpoint(
              description_ : SFString('RGB with Alpha PixelTexture'),
              position_ : SFVec3f([SFDouble(5), SFDouble(-5), SFDouble(5)])),

            Transform(
              DEF_ : SFString('AlphaRGB'),
              rotation_ : SFRotation([SFDouble(1), SFDouble(1), SFDouble(0), SFDouble(1)]),
              translation_ : SFVec3f([SFDouble(5), SFDouble(-5), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      texture_ : 
                        PixelTexture(
                          image_ : SFImage([SFInt32(3), SFInt32(2), SFInt32(4), SFInt32(4278190335), SFInt32(16711935), SFInt32(65535), SFInt32(4278190207), SFInt32(16711807), SFInt32(65407)]))),
                  geometry_ : 
                    Box(
                      USE_ : SFString('StandardBox')))])]));
void main() { exit(0); }
