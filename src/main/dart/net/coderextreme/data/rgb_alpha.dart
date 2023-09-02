// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('rgb_alpha.x3d')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('rgb_alpha-front.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('rgb_alpha-rear.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('rgb_alpha-top.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('rgb_alpha-bottom.jpg')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.nist.gov/vrml.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.itl.nist.gov/div897/ctg/vrml/vrml.html')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('http://www.itl.nist.gov/div897/ctg/vrml/members.html')),

            meta(
              name_ : SFString('disclaimer'),
              content_ : SFString('This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Michael Kass NIST, Don Brutzman NPS')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('21 January 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('16 January 2011')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("WALK"), SFString("FLY"), SFString("ANY")])),

            Group(
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(6.14221), SFDouble(0.0694613), SFDouble(-0.000999451)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            PixelTexture(
                              DEF_ : SFString('RgbOpacityCheckerboard'),
                              image_ : SFImage([SFInt32(2), SFInt32(2), SFInt32(4), SFInt32(4278190335), SFInt32(4294901760), SFInt32(4294901760), SFInt32(4278190335)]))),
                      geometry_ : 
                        Box())),

                Transform(
                  translation_ : SFVec3f([SFDouble(-4.85443), SFDouble(0.0694381), SFDouble(-0.00149918)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            PixelTexture(
                              USE_ : SFString('RgbOpacityCheckerboard'))),
                      geometry_ : 
                        Sphere())),

                Transform(
                  translation_ : SFVec3f([SFDouble(-1.47341), SFDouble(0.036672), SFDouble(-0.00175095)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            PixelTexture(
                              USE_ : SFString('RgbOpacityCheckerboard'))),
                      geometry_ : 
                        Cone())),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.31094), SFDouble(0.0694206), SFDouble(-0.00187683)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            PixelTexture(
                              USE_ : SFString('RgbOpacityCheckerboard'))),
                      geometry_ : 
                        Cylinder()))])]));
void main() { exit(0); }
