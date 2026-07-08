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
              content_ : SFString('MultiTextureDesignPattern.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('5 March 2011')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('29 October 2023')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('X3D schematron rules for quality assurance')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('MultiTextureDesignPatternSceneGraph.png')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('MultiTexture, MultiTextureCoordinate, MultiTextureTransform')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dResources.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          /*================================*/
          children_ : [
            WorldInfo(
              title_ : SFString('MultiTextureDesignPattern.x3d')),

            Background(
              skyColor_ : MFColor([SFColor(0.72549), SFColor(1), SFColor(0.721569)])),

            Viewpoint(
              description_ : SFString('MultiTexture design pattern')),

            Shape(
              geometry_ : 
                Text(
                  string_ : MFString([SFString("Source shows design pattern for"), SFString("MultiTexture, MultiTextureCoordinate,"), SFString(" and MultiTextureTransform nodes")]),
                  fontStyle_ : 
                    FontStyle(
                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                      size_ : 0.6)),
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.4), SFDouble(0.8)])))),
          /*================================*/

            Shape(
              /*add a single geometry node here*/
              geometry_ : 
                IndexedFaceSet(
                  texCoord_ : 
                    MultiTextureCoordinate(
                      /*add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes*/
                      texCoord_ : 
                        TextureCoordinate(
                          point_ : MFVec2f([SFVec2f([0,0]),SFVec2f([1,0]),SFVec2f([1,1]),SFVec2f([0,1])])),
                      texCoord_ : 
                        TextureCoordinate(
                          point_ : MFVec2f([SFVec2f([0,0]),SFVec2f([1,0]),SFVec2f([1,1]),SFVec2f([0,1])])),
                      texCoord_ : 
                        TextureCoordinate(
                          point_ : MFVec2f([SFVec2f([0,0]),SFVec2f([1,0]),SFVec2f([1,1]),SFVec2f([0,1])])))),
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(),
                  texture_ : 
                    MultiTexture(
                      alpha_ : 0.8,
                      color_ : SFColor([SFDouble(0.9), SFDouble(1), SFDouble(0.2)]),
                      function_ : MFString([SFString("COMPLEMENT"), SFString("ALPHAREPLICATE")]),
                      mode_ : MFString([SFString("MODULATE"), SFString("REPLACE"), SFString("BLENDDIFFUSEALPHA")]),
                      source_ : MFString([SFString("DIFFUSE"), SFString("SPECULAR"), SFString("FACTOR")]),
                      /*add multiple texture nodes here*/
                      texture_ : 
                        ImageTexture(),
                      texture_ : 
                        MovieTexture(),
                      texture_ : 
                        PixelTexture()),
                  textureTransform_ : 
                    MultiTextureTransform(
                      /*add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes*/
                      textureTransform_ : 
                        TextureTransform(),
                      textureTransform_ : 
                        TextureTransform(),
                      textureTransform_ : 
                        TextureTransform())))]));
void main() { exit(0); }
