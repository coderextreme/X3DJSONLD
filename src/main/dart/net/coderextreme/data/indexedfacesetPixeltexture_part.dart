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
              content_ : SFString('indexedfaceset_pixeltexture_part.x3d')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-front.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-rear.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-top.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-bottom.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-left.jpg')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('indexedfaceset_pixeltexture_part-right.jpg')),

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
              content_ : SFString('13 January 2014')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d')),

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
            Viewpoint(
              description_ : SFString('Front View')),

            Viewpoint(
              description_ : SFString('Rear View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-10)])),

            Viewpoint(
              description_ : SFString('Top View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(0)])),

            Viewpoint(
              description_ : SFString('Bottom View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(-10), SFDouble(0)])),

            Viewpoint(
              description_ : SFString('Right View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              position_ : SFVec3f([SFDouble(10), SFDouble(0), SFDouble(0)])),

            Viewpoint(
              description_ : SFString('Left View'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
              position_ : SFVec3f([SFDouble(-10), SFDouble(0), SFDouble(0)])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("WALK"), SFString("FLY"), SFString("ANY")])),
          /*<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>*/

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(),
                  texture_ : 
                    PixelTexture(
                      image_ : SFImage([SFInt32(2), SFInt32(2), SFInt32(4), SFInt32(4278190335), SFInt32(16711935), SFInt32(4294967295), SFInt32(4294902015)]),
                      textureProperties_ : 
                        TextureProperties(
                          magnificationFilter_ : SFString('NEAREST_PIXEL')))),
              geometry_ : 
                IndexedFaceSet(
                  colorPerVertex_ : false,
                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(2), SFInt32(3), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(6), SFInt32(0), SFInt32(2), SFInt32(4), SFInt32(-1), SFInt32(1), SFInt32(7), SFInt32(5), SFInt32(3), SFInt32(-1)]),
                  creaseAngle_ : 0.5,
                  texCoordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(1), SFInt32(3), SFInt32(2), SFInt32(-1)]),
                  color_ : 
                    Color(
                      color_ : MFColor([SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0), SFColor(0), SFColor(1), SFColor(0)])),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([-2,1,1]),SFVec3f([-2,-1,1]),SFVec3f([2,1,1]),SFVec3f([2,-1,1]),SFVec3f([2,1,-1]),SFVec3f([2,-1,-1]),SFVec3f([-2,1,-1]),SFVec3f([-2,-1,-1])])),
                  texCoord_ : 
                    TextureCoordinate(
                      point_ : MFVec2f([SFVec2f([0.5,1]),SFVec2f([0.5,0.5]),SFVec2f([1,1]),SFVec2f([1,0.5])]))))]));
void main() { exit(0); }
