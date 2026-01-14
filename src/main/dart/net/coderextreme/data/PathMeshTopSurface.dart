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
              content_ : SFString('PathMeshTopSurface.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Pathway for HAnim scene Winter and Spring.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carol McDonald')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe Williams and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('27 May 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:53 GMT')),

            meta(
              name_ : SFString('source'),
              content_ : SFString('originals/PathMeshTopSurface.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              DEF_ : SFString('pathTop'),
              headlight_ : false),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([26.39594,0.075,25.67472]),SFVec3f([26.00195,0.075,25.75502]),SFVec3f([26.25982,0.075,25.00694]),SFVec3f([25.86584,0.075,25.08724]),SFVec3f([26.1237,0.075,24.33916]),SFVec3f([25.72972,0.075,24.41947])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([26.39918,0.075,23.57728]),SFVec3f([26.53329,0.075,24.23526]),SFVec3f([25.5916,0.075,23.74189]),SFVec3f([25.72572,0.075,24.39987])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.58761,0.075,23.72229]),SFVec3f([25.45349,0.075,23.06431]),SFVec3f([26.39518,0.075,23.55768]),SFVec3f([26.26106,0.075,22.8997])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.84348,0.075,22.96441]),SFVec3f([25.4495,0.075,23.04472]),SFVec3f([25.57125,0.075,21.62885]),SFVec3f([25.17726,0.075,21.70916])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.72724,0.075,28.63393]),SFVec3f([25.59312,0.075,27.97596]),SFVec3f([26.53481,0.075,28.46932]),SFVec3f([26.40069,0.075,27.81134])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([26.26258,0.075,27.13377]),SFVec3f([26.3967,0.075,27.79175]),SFVec3f([25.85879,0.075,27.21607]),SFVec3f([25.99291,0.075,27.87405]),SFVec3f([25.45501,0.075,27.29838]),SFVec3f([25.58913,0.075,27.95636])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.59236,0.075,25.85892]),SFVec3f([25.78936,0.075,25.81877]),SFVec3f([25.98635,0.075,25.77861]),SFVec3f([25.72848,0.075,26.5267]),SFVec3f([25.92547,0.075,26.48655]),SFVec3f([26.12247,0.075,26.44639]),SFVec3f([25.8646,0.075,27.19448]),SFVec3f([26.06159,0.075,27.15432]),SFVec3f([26.25858,0.075,27.11417])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.17878,0.075,25.94323]),SFVec3f([25.57277,0.075,25.86292]),SFVec3f([25.3149,0.075,26.611]),SFVec3f([25.70888,0.075,26.53069]),SFVec3f([25.45101,0.075,27.27878]),SFVec3f([25.845,0.075,27.19847])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.17478,0.075,25.92363]),SFVec3f([25.04066,0.075,25.26565]),SFVec3f([25.98236,0.075,25.75902]),SFVec3f([25.84824,0.075,25.10104])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.03667,0.075,25.24605]),SFVec3f([24.90255,0.075,24.58807]),SFVec3f([25.44046,0.075,25.16375]),SFVec3f([25.30634,0.075,24.50577]),SFVec3f([25.84424,0.075,25.08144]),SFVec3f([25.71012,0.075,24.42346])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.03991,0.075,23.14862]),SFVec3f([25.43389,0.075,23.06831]),SFVec3f([25.17602,0.075,23.81639]),SFVec3f([25.57001,0.075,23.73609]),SFVec3f([25.31214,0.075,24.48417]),SFVec3f([25.70613,0.075,24.40386])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.62632,0.075,23.23292]),SFVec3f([25.02031,0.075,23.15261]),SFVec3f([24.89856,0.075,24.56848]),SFVec3f([25.29254,0.075,24.48817])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.62233,0.075,23.21332]),SFVec3f([24.48821,0.075,22.55534]),SFVec3f([25.4299,0.075,23.04871]),SFVec3f([25.29578,0.075,22.39073])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.48421,0.075,22.53575]),SFVec3f([24.3501,0.075,21.87777]),SFVec3f([25.29178,0.075,22.37114]),SFVec3f([25.15767,0.075,21.71316])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.48745,0.075,20.43831]),SFVec3f([24.88144,0.075,20.358]),SFVec3f([24.75968,0.075,21.77387]),SFVec3f([25.15367,0.075,21.69356])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.74009,0.075,21.77786]),SFVec3f([24.3461,0.075,21.85817]),SFVec3f([24.46785,0.075,20.44231]),SFVec3f([24.07387,0.075,20.52261])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.1763,0.075,30.15769]),SFVec3f([25.04218,0.075,29.49971]),SFVec3f([25.58009,0.075,30.07539]),SFVec3f([25.44597,0.075,29.41741]),SFVec3f([25.98387,0.075,29.99308]),SFVec3f([25.84975,0.075,29.3351])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.03819,0.075,29.48012]),SFVec3f([24.90407,0.075,28.82214]),SFVec3f([25.44197,0.075,29.39781]),SFVec3f([25.30785,0.075,28.73983]),SFVec3f([25.84576,0.075,29.31551]),SFVec3f([25.71164,0.075,28.65753])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.04142,0.075,27.38268]),SFVec3f([25.43541,0.075,27.30237]),SFVec3f([25.17754,0.075,28.05046]),SFVec3f([25.57153,0.075,27.97015]),SFVec3f([25.31366,0.075,28.71824]),SFVec3f([25.70764,0.075,28.63793])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.62784,0.075,27.46698]),SFVec3f([24.82483,0.075,27.42683]),SFVec3f([25.02183,0.075,27.38668]),SFVec3f([24.76396,0.075,28.13476]),SFVec3f([24.96095,0.075,28.09461]),SFVec3f([25.15794,0.075,28.05445]),SFVec3f([24.90007,0.075,28.80254]),SFVec3f([25.09706,0.075,28.76239]),SFVec3f([25.29406,0.075,28.72223])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.62384,0.075,27.44739]),SFVec3f([24.55679,0.075,27.1184]),SFVec3f([24.48973,0.075,26.78941]),SFVec3f([25.43142,0.075,27.28278]),SFVec3f([25.36436,0.075,26.95379]),SFVec3f([25.2973,0.075,26.6248])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.48573,0.075,26.76981]),SFVec3f([24.35161,0.075,26.11183]),SFVec3f([25.2933,0.075,26.6052]),SFVec3f([25.15918,0.075,25.94722])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([25.15519,0.075,25.92762]),SFVec3f([24.7612,0.075,26.00793]),SFVec3f([24.88295,0.075,24.59207]),SFVec3f([24.48897,0.075,24.67238])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.07538,0.075,24.75668]),SFVec3f([24.46937,0.075,24.67637]),SFVec3f([24.34762,0.075,26.09224]),SFVec3f([24.7416,0.075,26.01193])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.07139,0.075,24.73708]),SFVec3f([23.93727,0.075,24.0791]),SFVec3f([24.87896,0.075,24.57247]),SFVec3f([24.74484,0.075,23.91449])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.60673,0.075,23.23692]),SFVec3f([24.74084,0.075,23.89489]),SFVec3f([24.20294,0.075,23.31922]),SFVec3f([24.33706,0.075,23.9772]),SFVec3f([23.79915,0.075,23.40153]),SFVec3f([23.93328,0.075,24.05951])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.60273,0.075,23.21732]),SFVec3f([24.40574,0.075,23.25747]),SFVec3f([24.20874,0.075,23.29763]),SFVec3f([24.46661,0.075,22.54954]),SFVec3f([24.26962,0.075,22.58969]),SFVec3f([24.07263,0.075,22.62985]),SFVec3f([24.3305,0.075,21.88176]),SFVec3f([24.1335,0.075,21.92192]),SFVec3f([23.93651,0.075,21.96207])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.52293,0.075,22.04637]),SFVec3f([23.91691,0.075,21.96606]),SFVec3f([23.65904,0.075,22.71415]),SFVec3f([24.05303,0.075,22.63384]),SFVec3f([23.79516,0.075,23.38193]),SFVec3f([24.18915,0.075,23.30162])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.51893,0.075,22.02678]),SFVec3f([23.38481,0.075,21.3688]),SFVec3f([24.3265,0.075,21.86217]),SFVec3f([24.19238,0.075,21.20419])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.05427,0.075,20.52661]),SFVec3f([24.18839,0.075,21.18459]),SFVec3f([23.2467,0.075,20.69122]),SFVec3f([23.38082,0.075,21.3492])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.05028,0.075,20.50701]),SFVec3f([23.65629,0.075,20.58732]),SFVec3f([23.91416,0.075,19.83923]),SFVec3f([23.52017,0.075,19.91954]),SFVec3f([23.77804,0.075,19.17146]),SFVec3f([23.38405,0.075,19.25176])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.97047,0.075,19.33607]),SFVec3f([23.36446,0.075,19.25576]),SFVec3f([23.2427,0.075,20.67162]),SFVec3f([23.63669,0.075,20.59131])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.49048,0.075,28.90644]),SFVec3f([24.88447,0.075,28.82613]),SFVec3f([24.76272,0.075,30.242]),SFVec3f([25.1567,0.075,30.16169])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.0769,0.075,28.99074]),SFVec3f([24.47089,0.075,28.91043]),SFVec3f([24.34913,0.075,30.3263]),SFVec3f([24.74312,0.075,30.24599])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.0729,0.075,28.97115]),SFVec3f([24.00584,0.075,28.64216]),SFVec3f([23.93879,0.075,28.31317]),SFVec3f([24.47669,0.075,28.88884]),SFVec3f([24.40963,0.075,28.55985]),SFVec3f([24.34257,0.075,28.23086]),SFVec3f([24.88048,0.075,28.80654]),SFVec3f([24.81342,0.075,28.47754]),SFVec3f([24.74636,0.075,28.14856])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.93479,0.075,28.29357]),SFVec3f([23.80067,0.075,27.63559]),SFVec3f([24.33858,0.075,28.21126]),SFVec3f([24.20446,0.075,27.55329]),SFVec3f([24.74236,0.075,28.12896]),SFVec3f([24.60824,0.075,27.47098])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.93803,0.075,26.19613]),SFVec3f([24.13502,0.075,26.15598]),SFVec3f([24.33201,0.075,26.11583]),SFVec3f([24.07414,0.075,26.86391]),SFVec3f([24.27114,0.075,26.82376]),SFVec3f([24.46813,0.075,26.7836]),SFVec3f([24.21026,0.075,27.53169]),SFVec3f([24.40725,0.075,27.49154]),SFVec3f([24.60425,0.075,27.45138])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.52444,0.075,26.28044]),SFVec3f([23.72144,0.075,26.24028]),SFVec3f([23.91843,0.075,26.20013]),SFVec3f([23.66056,0.075,26.94822]),SFVec3f([23.85755,0.075,26.90806]),SFVec3f([24.05455,0.075,26.86791]),SFVec3f([23.79668,0.075,27.61599]),SFVec3f([23.99367,0.075,27.57584]),SFVec3f([24.19066,0.075,27.53568])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.52045,0.075,26.26084]),SFVec3f([23.38633,0.075,25.60286]),SFVec3f([24.32802,0.075,26.09623]),SFVec3f([24.1939,0.075,25.43825])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.38233,0.075,25.58327]),SFVec3f([23.24821,0.075,24.92529]),SFVec3f([24.18991,0.075,25.41865]),SFVec3f([24.05579,0.075,24.76067])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.38557,0.075,23.48583]),SFVec3f([23.77956,0.075,23.40552]),SFVec3f([23.52169,0.075,24.15361]),SFVec3f([23.91567,0.075,24.0733]),SFVec3f([23.6578,0.075,24.82138]),SFVec3f([24.05179,0.075,24.74108])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.97199,0.075,23.57013]),SFVec3f([23.36597,0.075,23.48982]),SFVec3f([23.1081,0.075,24.23791]),SFVec3f([23.50209,0.075,24.1576]),SFVec3f([23.24422,0.075,24.90569]),SFVec3f([23.63821,0.075,24.82538])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.96799,0.075,23.55054]),SFVec3f([22.83387,0.075,22.89256]),SFVec3f([23.77556,0.075,23.38592]),SFVec3f([23.64144,0.075,22.72794])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.82988,0.075,22.87296]),SFVec3f([22.69576,0.075,22.21498]),SFVec3f([23.63745,0.075,22.70835]),SFVec3f([23.50333,0.075,22.05037])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.83311,0.075,20.77552]),SFVec3f([23.2271,0.075,20.69522]),SFVec3f([23.10535,0.075,22.11108]),SFVec3f([23.49934,0.075,22.03077])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.41953,0.075,20.85983]),SFVec3f([22.81352,0.075,20.77952]),SFVec3f([22.69176,0.075,22.19538]),SFVec3f([23.08575,0.075,22.11507])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.41554,0.075,20.84023]),SFVec3f([22.28142,0.075,20.18225]),SFVec3f([23.22311,0.075,20.67562]),SFVec3f([23.08899,0.075,20.01764])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.27742,0.075,20.16265]),SFVec3f([22.1433,0.075,19.50467]),SFVec3f([23.08499,0.075,19.99804]),SFVec3f([22.95087,0.075,19.34006])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.28066,0.075,18.06522]),SFVec3f([22.67465,0.075,17.98491]),SFVec3f([22.41678,0.075,18.733]),SFVec3f([22.81076,0.075,18.65269]),SFVec3f([22.55289,0.075,19.40077]),SFVec3f([22.94688,0.075,19.32047])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.86707,0.075,18.14952]),SFVec3f([22.26106,0.075,18.06921]),SFVec3f([22.13931,0.075,19.48508]),SFVec3f([22.53329,0.075,19.40477])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.0573,0.075,28.99474]),SFVec3f([24.19142,0.075,29.65272]),SFVec3f([23.24973,0.075,29.15935]),SFVec3f([23.38385,0.075,29.81733])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([24.05331,0.075,28.97514]),SFVec3f([23.85631,0.075,29.0153]),SFVec3f([23.65932,0.075,29.05545]),SFVec3f([23.91719,0.075,28.30736]),SFVec3f([23.7202,0.075,28.34752]),SFVec3f([23.5232,0.075,28.38767]),SFVec3f([23.78107,0.075,27.63959]),SFVec3f([23.58408,0.075,27.67974]),SFVec3f([23.38709,0.075,27.71989])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.63972,0.075,29.05944]),SFVec3f([23.24574,0.075,29.13975]),SFVec3f([23.50361,0.075,28.39167]),SFVec3f([23.10962,0.075,28.47198]),SFVec3f([23.36749,0.075,27.72389]),SFVec3f([22.9735,0.075,27.8042])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.64296,0.075,26.96201]),SFVec3f([23.77708,0.075,27.61999]),SFVec3f([22.83539,0.075,27.12662]),SFVec3f([22.96951,0.075,27.7846])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.83139,0.075,27.10702]),SFVec3f([22.69728,0.075,26.44904]),SFVec3f([23.23518,0.075,27.02472]),SFVec3f([23.10106,0.075,26.36674]),SFVec3f([23.63897,0.075,26.94241]),SFVec3f([23.50485,0.075,26.28443])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.83463,0.075,25.00959]),SFVec3f([23.22862,0.075,24.92928]),SFVec3f([22.97075,0.075,25.67737]),SFVec3f([23.36473,0.075,25.59706]),SFVec3f([23.10686,0.075,26.34514]),SFVec3f([23.50085,0.075,26.26484])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.08727,0.075,26.34914]),SFVec3f([22.69328,0.075,26.42945]),SFVec3f([22.95115,0.075,25.68136]),SFVec3f([22.55716,0.075,25.76167]),SFVec3f([22.81503,0.075,25.01358]),SFVec3f([22.42105,0.075,25.09389])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.0905,0.075,24.2517]),SFVec3f([23.22462,0.075,24.90968]),SFVec3f([22.28293,0.075,24.41632]),SFVec3f([22.41705,0.075,25.07429])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.27894,0.075,24.39672]),SFVec3f([22.14482,0.075,23.73874]),SFVec3f([23.08651,0.075,24.23211]),SFVec3f([22.95239,0.075,23.57413])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.28218,0.075,22.29928]),SFVec3f([22.67616,0.075,22.21897]),SFVec3f([22.55441,0.075,23.63484]),SFVec3f([22.94839,0.075,23.55453])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.53481,0.075,23.63883]),SFVec3f([22.33782,0.075,23.67899]),SFVec3f([22.14083,0.075,23.71914]),SFVec3f([22.39869,0.075,22.97105]),SFVec3f([22.2017,0.075,23.01121]),SFVec3f([22.00471,0.075,23.05136]),SFVec3f([22.26258,0.075,22.30328]),SFVec3f([22.06558,0.075,22.34343]),SFVec3f([21.86859,0.075,22.38358])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.53805,0.075,21.5414]),SFVec3f([22.67217,0.075,22.19938]),SFVec3f([21.73048,0.075,21.70601]),SFVec3f([21.8646,0.075,22.36399])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.72648,0.075,21.68641]),SFVec3f([21.59236,0.075,21.02843]),SFVec3f([22.53405,0.075,21.5218]),SFVec3f([22.39993,0.075,20.86382])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.72972,0.075,19.58898]),SFVec3f([22.12371,0.075,19.50867]),SFVec3f([22.00195,0.075,20.92453]),SFVec3f([22.39594,0.075,20.84422])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.98236,0.075,20.92853]),SFVec3f([21.58837,0.075,21.00883]),SFVec3f([21.71012,0.075,19.59297]),SFVec3f([21.31614,0.075,19.67328])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.31214,0.075,19.65368]),SFVec3f([21.17802,0.075,18.9957]),SFVec3f([22.11971,0.075,19.48907]),SFVec3f([21.98559,0.075,18.83109])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.17403,0.075,18.97611]),SFVec3f([21.03991,0.075,18.31813]),SFVec3f([21.9816,0.075,18.81149]),SFVec3f([21.84748,0.075,18.15351])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.17726,0.075,16.87867]),SFVec3f([21.57125,0.075,16.79836]),SFVec3f([21.4495,0.075,18.21423]),SFVec3f([21.84348,0.075,18.13392])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.76368,0.075,16.96297]),SFVec3f([20.96067,0.075,16.92282]),SFVec3f([21.15767,0.075,16.88267]),SFVec3f([20.8998,0.075,17.63075]),SFVec3f([21.09679,0.075,17.5906]),SFVec3f([21.29378,0.075,17.55044]),SFVec3f([21.03591,0.075,18.29853]),SFVec3f([21.23291,0.075,18.25838]),SFVec3f([21.4299,0.075,18.21822])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.65877,0.075,11.54236]),SFVec3f([20.05275,0.075,11.46205]),SFVec3f([19.79488,0.075,12.21014]),SFVec3f([20.18887,0.075,12.12983]),SFVec3f([19.931,0.075,12.87792]),SFVec3f([20.32499,0.075,12.79761])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.65477,0.075,11.52277]),SFVec3f([19.52065,0.075,10.86479]),SFVec3f([20.05856,0.075,11.44046]),SFVec3f([19.92444,0.075,10.78248]),SFVec3f([20.46234,0.075,11.35815]),SFVec3f([20.32822,0.075,10.70017])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.19011,0.075,10.0226]),SFVec3f([20.32423,0.075,10.68058]),SFVec3f([19.38254,0.075,10.18721]),SFVec3f([19.51666,0.075,10.84519])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.5199,0.075,8.747754]),SFVec3f([19.91388,0.075,8.667445]),SFVec3f([19.65601,0.075,9.415531]),SFVec3f([20.05,0.075,9.335223]),SFVec3f([19.79213,0.075,10.08331]),SFVec3f([20.18612,0.075,10.003])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.77253,0.075,10.0873]),SFVec3f([19.57554,0.075,10.12746]),SFVec3f([19.37854,0.075,10.16761]),SFVec3f([19.63642,0.075,9.419526]),SFVec3f([19.43942,0.075,9.459681]),SFVec3f([19.24243,0.075,9.499835]),SFVec3f([19.5003,0.075,8.751748]),SFVec3f([19.3033,0.075,8.791903]),SFVec3f([19.10631,0.075,8.832057])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.77577,0.075,7.989869]),SFVec3f([19.84283,0.075,8.318858]),SFVec3f([19.90989,0.075,8.647848]),SFVec3f([18.9682,0.075,8.15448]),SFVec3f([19.03526,0.075,8.48347]),SFVec3f([19.10232,0.075,8.81246])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.9642,0.075,8.134883]),SFVec3f([18.83008,0.075,7.476904]),SFVec3f([19.36799,0.075,8.052578]),SFVec3f([19.23387,0.075,7.394598]),SFVec3f([19.77177,0.075,7.970272]),SFVec3f([19.63765,0.075,7.312293])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.96744,0.075,6.037448]),SFVec3f([19.16443,0.075,5.997294]),SFVec3f([19.36143,0.075,5.957139]),SFVec3f([19.10356,0.075,6.705226]),SFVec3f([19.30055,0.075,6.665071]),SFVec3f([19.49754,0.075,6.624918]),SFVec3f([19.23967,0.075,7.373004]),SFVec3f([19.43667,0.075,7.33285]),SFVec3f([19.63366,0.075,7.292696])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55386,0.075,6.121751]),SFVec3f([18.94784,0.075,6.041442]),SFVec3f([18.68997,0.075,6.789529]),SFVec3f([19.08396,0.075,6.70922]),SFVec3f([18.82609,0.075,7.457307]),SFVec3f([19.22008,0.075,7.376998])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.54986,0.075,6.102154]),SFVec3f([18.41574,0.075,5.444175]),SFVec3f([18.95365,0.075,6.019848]),SFVec3f([18.81953,0.075,5.361869]),SFVec3f([19.35743,0.075,5.937542]),SFVec3f([19.22331,0.075,5.279563])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.83615,0.075,29.24365]),SFVec3f([23.23013,0.075,29.16334]),SFVec3f([23.10838,0.075,30.57921]),SFVec3f([23.50237,0.075,30.4989])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.08878,0.075,30.5832]),SFVec3f([22.89179,0.075,30.62336]),SFVec3f([22.6948,0.075,30.66351]),SFVec3f([22.95267,0.075,29.91542]),SFVec3f([22.75567,0.075,29.95558]),SFVec3f([22.55868,0.075,29.99573]),SFVec3f([22.81655,0.075,29.24765]),SFVec3f([22.61956,0.075,29.2878]),SFVec3f([22.42256,0.075,29.32796])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([23.09202,0.075,28.48577]),SFVec3f([23.22614,0.075,29.14375]),SFVec3f([22.28445,0.075,28.65038]),SFVec3f([22.41857,0.075,29.30836])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.28045,0.075,28.63078]),SFVec3f([22.14634,0.075,27.9728]),SFVec3f([23.08803,0.075,28.46617]),SFVec3f([22.95391,0.075,27.80819])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.94991,0.075,27.7886]),SFVec3f([22.55593,0.075,27.8689]),SFVec3f([22.67768,0.075,26.45304]),SFVec3f([22.28369,0.075,26.53335])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.87011,0.075,26.61765]),SFVec3f([22.0671,0.075,26.5775]),SFVec3f([22.26409,0.075,26.53734]),SFVec3f([22.00622,0.075,27.28543]),SFVec3f([22.20322,0.075,27.24527]),SFVec3f([22.40021,0.075,27.20512]),SFVec3f([22.14234,0.075,27.95321]),SFVec3f([22.33933,0.075,27.91305]),SFVec3f([22.53633,0.075,27.8729])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.53956,0.075,25.77546]),SFVec3f([22.67368,0.075,26.43344]),SFVec3f([21.73199,0.075,25.94007]),SFVec3f([21.86611,0.075,26.59805])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.728,0.075,25.92048]),SFVec3f([21.66094,0.075,25.59149]),SFVec3f([21.59388,0.075,25.2625]),SFVec3f([22.53557,0.075,25.75587]),SFVec3f([22.46851,0.075,25.42688]),SFVec3f([22.40145,0.075,25.09789])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.39746,0.075,25.07829]),SFVec3f([22.20046,0.075,25.11844]),SFVec3f([22.00347,0.075,25.1586]),SFVec3f([22.26134,0.075,24.41051]),SFVec3f([22.06435,0.075,24.45066]),SFVec3f([21.86735,0.075,24.49082]),SFVec3f([22.12522,0.075,23.74273]),SFVec3f([21.92823,0.075,23.78289]),SFVec3f([21.73124,0.075,23.82304])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.31765,0.075,23.90734]),SFVec3f([21.71164,0.075,23.82704]),SFVec3f([21.58988,0.075,25.2429]),SFVec3f([21.98387,0.075,25.16259])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.31366,0.075,23.88775]),SFVec3f([21.17954,0.075,23.22977]),SFVec3f([22.12123,0.075,23.72313]),SFVec3f([21.98711,0.075,23.06516])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.17554,0.075,23.21017]),SFVec3f([21.04142,0.075,22.55219]),SFVec3f([21.98311,0.075,23.04556]),SFVec3f([21.84899,0.075,22.38758])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.845,0.075,22.36798]),SFVec3f([21.45101,0.075,22.44829]),SFVec3f([21.57277,0.075,21.03243]),SFVec3f([21.17878,0.075,21.11274])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.7652,0.075,21.19704]),SFVec3f([21.15918,0.075,21.11673]),SFVec3f([21.03743,0.075,22.53259]),SFVec3f([21.43142,0.075,22.45229])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.7612,0.075,21.17744]),SFVec3f([20.62708,0.075,20.51946]),SFVec3f([21.16499,0.075,21.09514]),SFVec3f([21.03087,0.075,20.43716]),SFVec3f([21.56877,0.075,21.01283]),SFVec3f([21.43465,0.075,20.35485])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.62309,0.075,20.49986]),SFVec3f([20.48897,0.075,19.84189]),SFVec3f([21.02687,0.075,20.41756]),SFVec3f([20.89275,0.075,19.75958]),SFVec3f([21.43066,0.075,20.33525]),SFVec3f([21.29654,0.075,19.67727])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.62632,0.075,18.40243]),SFVec3f([20.82332,0.075,18.36228]),SFVec3f([21.02031,0.075,18.32212]),SFVec3f([20.76244,0.075,19.07021]),SFVec3f([20.95943,0.075,19.03005]),SFVec3f([21.15643,0.075,18.9899]),SFVec3f([20.89856,0.075,19.73799]),SFVec3f([21.09555,0.075,19.69783]),SFVec3f([21.29254,0.075,19.65768])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.21274,0.075,18.48673]),SFVec3f([20.40973,0.075,18.44658]),SFVec3f([20.60673,0.075,18.40642]),SFVec3f([20.34886,0.075,19.15451]),SFVec3f([20.54585,0.075,19.11436]),SFVec3f([20.74284,0.075,19.0742]),SFVec3f([20.48497,0.075,19.82229]),SFVec3f([20.68197,0.075,19.78214]),SFVec3f([20.87896,0.075,19.74198])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.20874,0.075,18.46714]),SFVec3f([20.07463,0.075,17.80916]),SFVec3f([20.61253,0.075,18.38483]),SFVec3f([20.47841,0.075,17.72685]),SFVec3f([21.01632,0.075,18.30252]),SFVec3f([20.8822,0.075,17.64454])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.74408,0.075,16.96697]),SFVec3f([20.8782,0.075,17.62495]),SFVec3f([20.3403,0.075,17.04927]),SFVec3f([20.47442,0.075,17.70725]),SFVec3f([19.93651,0.075,17.13158]),SFVec3f([20.07063,0.075,17.78956])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.74009,0.075,16.94737]),SFVec3f([20.3461,0.075,17.02768]),SFVec3f([20.60397,0.075,16.27959]),SFVec3f([20.20998,0.075,16.3599]),SFVec3f([20.46785,0.075,15.61182]),SFVec3f([20.07387,0.075,15.69212])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.66028,0.075,15.77643]),SFVec3f([19.85728,0.075,15.73627]),SFVec3f([20.05427,0.075,15.69612]),SFVec3f([19.7964,0.075,16.4442]),SFVec3f([19.99339,0.075,16.40405]),SFVec3f([20.19039,0.075,16.3639]),SFVec3f([19.93252,0.075,17.11198]),SFVec3f([20.12951,0.075,17.07183]),SFVec3f([20.3265,0.075,17.03168])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.65629,0.075,15.75683]),SFVec3f([19.58923,0.075,15.42784]),SFVec3f([19.52217,0.075,15.09885]),SFVec3f([20.06007,0.075,15.67452]),SFVec3f([19.99302,0.075,15.34553]),SFVec3f([19.92595,0.075,15.01655]),SFVec3f([20.46386,0.075,15.59222]),SFVec3f([20.3968,0.075,15.26323]),SFVec3f([20.32974,0.075,14.93424])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.19163,0.075,14.25666]),SFVec3f([20.32575,0.075,14.91464]),SFVec3f([19.38406,0.075,14.42127]),SFVec3f([19.51818,0.075,15.07925])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.52141,0.075,12.98182]),SFVec3f([19.9154,0.075,12.90151]),SFVec3f([19.65753,0.075,13.6496]),SFVec3f([20.05152,0.075,13.56929]),SFVec3f([19.79364,0.075,14.31737]),SFVec3f([20.18763,0.075,14.23707])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.10783,0.075,13.06612]),SFVec3f([19.50181,0.075,12.98581]),SFVec3f([19.38006,0.075,14.40168]),SFVec3f([19.77405,0.075,14.32137])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.10383,0.075,13.04652]),SFVec3f([18.96971,0.075,12.38855]),SFVec3f([19.50762,0.075,12.96422]),SFVec3f([19.3735,0.075,12.30624]),SFVec3f([19.9114,0.075,12.88191]),SFVec3f([19.77728,0.075,12.22393])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.96572,0.075,12.36895]),SFVec3f([18.8316,0.075,11.71097]),SFVec3f([19.3695,0.075,12.28664]),SFVec3f([19.23538,0.075,11.62866]),SFVec3f([19.77329,0.075,12.20434]),SFVec3f([19.63917,0.075,11.54636])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.96896,0.075,10.27151]),SFVec3f([19.36294,0.075,10.1912]),SFVec3f([19.10507,0.075,10.93929]),SFVec3f([19.49906,0.075,10.85898]),SFVec3f([19.24119,0.075,11.60707]),SFVec3f([19.63518,0.075,11.52676])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55537,0.075,10.35582]),SFVec3f([18.75237,0.075,10.31566]),SFVec3f([18.94936,0.075,10.27551]),SFVec3f([18.69149,0.075,11.02359]),SFVec3f([18.88848,0.075,10.98344]),SFVec3f([19.08548,0.075,10.94328]),SFVec3f([18.8276,0.075,11.69137]),SFVec3f([19.0246,0.075,11.65122]),SFVec3f([19.22159,0.075,11.61106])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.22483,0.075,9.513628]),SFVec3f([19.29189,0.075,9.842617]),SFVec3f([19.35895,0.075,10.17161]),SFVec3f([18.82104,0.075,9.595933]),SFVec3f([18.8881,0.075,9.924923]),SFVec3f([18.95516,0.075,10.25391]),SFVec3f([18.41726,0.075,9.678239]),SFVec3f([18.48432,0.075,10.00723]),SFVec3f([18.55138,0.075,10.33622])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.41326,0.075,9.658642]),SFVec3f([18.27914,0.075,9.000663]),SFVec3f([19.22083,0.075,9.494031]),SFVec3f([19.08671,0.075,8.836051])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.08272,0.075,8.816454]),SFVec3f([18.68873,0.075,8.896763]),SFVec3f([18.9466,0.075,8.148676]),SFVec3f([18.55262,0.075,8.228985]),SFVec3f([18.81049,0.075,7.480898]),SFVec3f([18.4165,0.075,7.561207])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00292,0.075,7.64551]),SFVec3f([18.19991,0.075,7.605356]),SFVec3f([18.3969,0.075,7.565201]),SFVec3f([18.13903,0.075,8.313288]),SFVec3f([18.33603,0.075,8.273133]),SFVec3f([18.53302,0.075,8.23298]),SFVec3f([18.27515,0.075,8.981066]),SFVec3f([18.47214,0.075,8.940911]),SFVec3f([18.66914,0.075,8.900757])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.99892,0.075,7.625913]),SFVec3f([17.8648,0.075,6.967933]),SFVec3f([18.40271,0.075,7.543607]),SFVec3f([18.26859,0.075,6.885628]),SFVec3f([18.80649,0.075,7.461301]),SFVec3f([18.67237,0.075,6.803322])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86081,0.075,6.948337]),SFVec3f([17.72669,0.075,6.290357]),SFVec3f([18.26459,0.075,6.866031]),SFVec3f([18.13047,0.075,6.208051]),SFVec3f([18.66838,0.075,6.783725]),SFVec3f([18.53426,0.075,6.125745])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86404,0.075,4.850901]),SFVec3f([18.25803,0.075,4.770593]),SFVec3f([18.13628,0.075,6.186457]),SFVec3f([18.53026,0.075,6.106149])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.45046,0.075,4.935204]),SFVec3f([17.84445,0.075,4.854896]),SFVec3f([17.72269,0.075,6.27076]),SFVec3f([18.11668,0.075,6.190452])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.44646,0.075,4.915607]),SFVec3f([17.31235,0.075,4.257627]),SFVec3f([17.85025,0.075,4.833302]),SFVec3f([17.71613,0.075,4.175322]),SFVec3f([18.25404,0.075,4.750996]),SFVec3f([18.11992,0.075,4.093016])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.9818,0.075,3.41544]),SFVec3f([18.11592,0.075,4.073419]),SFVec3f([17.57802,0.075,3.497746]),SFVec3f([17.71214,0.075,4.155725]),SFVec3f([17.17423,0.075,3.580051]),SFVec3f([17.30835,0.075,4.23803])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([22.40297,0.075,29.33195]),SFVec3f([22.53709,0.075,29.98993]),SFVec3f([21.5954,0.075,29.49656]),SFVec3f([21.72952,0.075,30.15454])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.73275,0.075,28.05711]),SFVec3f([22.12674,0.075,27.9768]),SFVec3f([21.86887,0.075,28.72488]),SFVec3f([22.26286,0.075,28.64458]),SFVec3f([22.00498,0.075,29.39266]),SFVec3f([22.39897,0.075,29.31235])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.98539,0.075,29.39666]),SFVec3f([21.5914,0.075,29.47696]),SFVec3f([21.84927,0.075,28.72888]),SFVec3f([21.45528,0.075,28.80919]),SFVec3f([21.71315,0.075,28.0611]),SFVec3f([21.31917,0.075,28.14141])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.98862,0.075,27.29922]),SFVec3f([22.12274,0.075,27.9572]),SFVec3f([21.18105,0.075,27.46383]),SFVec3f([21.31517,0.075,28.12181])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.17706,0.075,27.44423]),SFVec3f([21.04294,0.075,26.78626]),SFVec3f([21.58084,0.075,27.36193]),SFVec3f([21.44672,0.075,26.70395]),SFVec3f([21.98463,0.075,27.27962]),SFVec3f([21.85051,0.075,26.62164])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.1803,0.075,25.3468]),SFVec3f([21.57428,0.075,25.26649]),SFVec3f([21.45253,0.075,26.68236]),SFVec3f([21.84652,0.075,26.60205])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.43293,0.075,26.68635]),SFVec3f([21.23594,0.075,26.72651]),SFVec3f([21.03894,0.075,26.76666]),SFVec3f([21.29682,0.075,26.01857]),SFVec3f([21.09982,0.075,26.05873]),SFVec3f([20.90283,0.075,26.09888]),SFVec3f([21.1607,0.075,25.35079]),SFVec3f([20.96371,0.075,25.39095]),SFVec3f([20.76671,0.075,25.4311])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.43617,0.075,24.58891]),SFVec3f([21.57029,0.075,25.24689]),SFVec3f([20.6286,0.075,24.75353]),SFVec3f([20.76272,0.075,25.41151])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.6246,0.075,24.73393]),SFVec3f([20.49048,0.075,24.07595]),SFVec3f([21.43217,0.075,24.56932]),SFVec3f([21.29805,0.075,23.91134])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.62784,0.075,22.63649]),SFVec3f([21.02183,0.075,22.55619]),SFVec3f([20.76396,0.075,23.30427]),SFVec3f([21.15794,0.075,23.22396]),SFVec3f([20.90007,0.075,23.97205]),SFVec3f([21.29406,0.075,23.89174])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.21426,0.075,22.7208]),SFVec3f([20.41125,0.075,22.68064]),SFVec3f([20.60824,0.075,22.64049]),SFVec3f([20.35037,0.075,23.38857]),SFVec3f([20.54737,0.075,23.34842]),SFVec3f([20.74436,0.075,23.30827]),SFVec3f([20.48649,0.075,24.05635]),SFVec3f([20.68348,0.075,24.0162]),SFVec3f([20.88048,0.075,23.97605])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.21026,0.075,22.7012]),SFVec3f([20.07614,0.075,22.04322]),SFVec3f([21.01783,0.075,22.53659]),SFVec3f([20.88371,0.075,21.87861])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.07215,0.075,22.02362]),SFVec3f([19.93803,0.075,21.36564]),SFVec3f([20.87972,0.075,21.85901]),SFVec3f([20.7456,0.075,21.20103])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.07538,0.075,19.92619]),SFVec3f([20.27238,0.075,19.88603]),SFVec3f([20.46937,0.075,19.84588]),SFVec3f([20.2115,0.075,20.59397]),SFVec3f([20.40849,0.075,20.55381]),SFVec3f([20.60549,0.075,20.51366]),SFVec3f([20.34762,0.075,21.26174]),SFVec3f([20.54461,0.075,21.22159]),SFVec3f([20.7416,0.075,21.18144])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.6618,0.075,20.01049]),SFVec3f([19.85879,0.075,19.97034]),SFVec3f([20.05579,0.075,19.93018]),SFVec3f([19.79792,0.075,20.67827]),SFVec3f([19.99491,0.075,20.63811]),SFVec3f([20.1919,0.075,20.59796]),SFVec3f([19.93403,0.075,21.34605]),SFVec3f([20.13103,0.075,21.30589]),SFVec3f([20.32802,0.075,21.26574])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.6578,0.075,19.99089]),SFVec3f([19.52369,0.075,19.33291]),SFVec3f([20.46538,0.075,19.82628]),SFVec3f([20.33126,0.075,19.1683])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.51969,0.075,19.31332]),SFVec3f([19.38557,0.075,18.65534]),SFVec3f([19.92348,0.075,19.23101]),SFVec3f([19.78936,0.075,18.57303]),SFVec3f([20.32726,0.075,19.14871]),SFVec3f([20.19314,0.075,18.49073])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.52293,0.075,17.21588]),SFVec3f([19.91691,0.075,17.13557]),SFVec3f([19.79516,0.075,18.55144]),SFVec3f([20.18915,0.075,18.47113])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.10934,0.075,17.30019]),SFVec3f([19.30634,0.075,17.26003]),SFVec3f([19.50333,0.075,17.21988]),SFVec3f([19.24546,0.075,17.96796]),SFVec3f([19.44245,0.075,17.92781]),SFVec3f([19.63945,0.075,17.88766]),SFVec3f([19.38158,0.075,18.63574]),SFVec3f([19.57857,0.075,18.59559]),SFVec3f([19.77556,0.075,18.55543])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.10535,0.075,17.28059]),SFVec3f([18.97123,0.075,16.62261]),SFVec3f([19.91292,0.075,17.11598]),SFVec3f([19.7788,0.075,16.458])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.64069,0.075,15.78042]),SFVec3f([19.77481,0.075,16.4384]),SFVec3f([19.2369,0.075,15.86273]),SFVec3f([19.37102,0.075,16.52071]),SFVec3f([18.83311,0.075,15.94503]),SFVec3f([18.96724,0.075,16.60301])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.63669,0.075,15.76082]),SFVec3f([19.2427,0.075,15.84113]),SFVec3f([19.36446,0.075,14.42527]),SFVec3f([18.97047,0.075,14.50558])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55689,0.075,14.58988]),SFVec3f([18.75388,0.075,14.54973]),SFVec3f([18.95087,0.075,14.50957]),SFVec3f([18.693,0.075,15.25766]),SFVec3f([18.89,0.075,15.2175]),SFVec3f([19.08699,0.075,15.17735]),SFVec3f([18.82912,0.075,15.92544]),SFVec3f([19.02611,0.075,15.88528]),SFVec3f([19.22311,0.075,15.84513])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55289,0.075,14.57028]),SFVec3f([18.41877,0.075,13.9123]),SFVec3f([18.95668,0.075,14.48798]),SFVec3f([18.82256,0.075,13.83]),SFVec3f([19.36046,0.075,14.40567]),SFVec3f([19.22635,0.075,13.74769])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.08823,0.075,13.07012]),SFVec3f([19.22235,0.075,13.7281]),SFVec3f([18.68444,0.075,13.15242]),SFVec3f([18.81856,0.075,13.8104]),SFVec3f([18.28066,0.075,13.23473]),SFVec3f([18.41478,0.075,13.89271])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.08424,0.075,13.05052]),SFVec3f([18.69025,0.075,13.13083]),SFVec3f([18.812,0.075,11.71496]),SFVec3f([18.41801,0.075,11.79527])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00443,0.075,11.87957]),SFVec3f([18.20143,0.075,11.83942]),SFVec3f([18.39842,0.075,11.79927]),SFVec3f([18.14055,0.075,12.54735]),SFVec3f([18.33754,0.075,12.5072]),SFVec3f([18.53453,0.075,12.46704]),SFVec3f([18.27666,0.075,13.21513]),SFVec3f([18.47366,0.075,13.17498]),SFVec3f([18.67065,0.075,13.13482])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00044,0.075,11.85998]),SFVec3f([17.86632,0.075,11.202]),SFVec3f([18.80801,0.075,11.69537]),SFVec3f([18.67389,0.075,11.03739])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86232,0.075,11.1824]),SFVec3f([17.79526,0.075,10.85341]),SFVec3f([17.7282,0.075,10.52442]),SFVec3f([18.66989,0.075,11.01779]),SFVec3f([18.60283,0.075,10.6888]),SFVec3f([18.53577,0.075,10.35981])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86556,0.075,9.084966]),SFVec3f([18.25955,0.075,9.004658]),SFVec3f([18.13779,0.075,10.42052]),SFVec3f([18.53178,0.075,10.34021])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.1182,0.075,10.42452]),SFVec3f([17.9212,0.075,10.46467]),SFVec3f([17.72421,0.075,10.50482]),SFVec3f([17.98208,0.075,9.756739]),SFVec3f([17.78509,0.075,9.796892]),SFVec3f([17.58809,0.075,9.837047]),SFVec3f([17.84596,0.075,9.088961]),SFVec3f([17.64897,0.075,9.129114]),SFVec3f([17.45197,0.075,9.169269])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.12143,0.075,8.327081]),SFVec3f([18.25555,0.075,8.985061]),SFVec3f([17.31386,0.075,8.491693]),SFVec3f([17.44798,0.075,9.149672])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.30987,0.075,8.472095]),SFVec3f([17.24281,0.075,8.143106]),SFVec3f([17.17575,0.075,7.814116]),SFVec3f([17.71365,0.075,8.38979]),SFVec3f([17.64659,0.075,8.0608]),SFVec3f([17.57953,0.075,7.73181]),SFVec3f([18.11744,0.075,8.307484]),SFVec3f([18.05038,0.075,7.978494]),SFVec3f([17.98332,0.075,7.649504])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.3131,0.075,6.37466]),SFVec3f([17.5101,0.075,6.334506]),SFVec3f([17.70709,0.075,6.294352]),SFVec3f([17.44922,0.075,7.042438]),SFVec3f([17.64621,0.075,7.002284]),SFVec3f([17.84321,0.075,6.96213]),SFVec3f([17.58534,0.075,7.710216]),SFVec3f([17.78233,0.075,7.670062]),SFVec3f([17.97932,0.075,7.629908])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.89952,0.075,6.458963]),SFVec3f([17.29351,0.075,6.378654]),SFVec3f([17.17175,0.075,7.794519]),SFVec3f([17.56574,0.075,7.714211])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.89552,0.075,6.439366]),SFVec3f([16.76141,0.075,5.781386]),SFVec3f([17.29931,0.075,6.35706]),SFVec3f([17.16519,0.075,5.699081]),SFVec3f([17.7031,0.075,6.274755]),SFVec3f([17.56898,0.075,5.616775])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.75741,0.075,5.761789]),SFVec3f([16.62329,0.075,5.10381]),SFVec3f([17.1612,0.075,5.679484]),SFVec3f([17.02708,0.075,5.021504]),SFVec3f([17.56498,0.075,5.597178]),SFVec3f([17.43086,0.075,4.939198])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.42687,0.075,4.919601]),SFVec3f([17.03288,0.075,4.99991]),SFVec3f([17.29075,0.075,4.251824]),SFVec3f([16.89676,0.075,4.332132]),SFVec3f([17.15463,0.075,3.584046]),SFVec3f([16.76065,0.075,3.664354])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.34706,0.075,3.748657]),SFVec3f([16.74105,0.075,3.668349]),SFVec3f([16.6193,0.075,5.084213]),SFVec3f([17.01328,0.075,5.003905])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.34307,0.075,3.72906]),SFVec3f([16.20895,0.075,3.071081]),SFVec3f([16.74685,0.075,3.646755]),SFVec3f([16.61274,0.075,2.988775]),SFVec3f([17.15064,0.075,3.564449]),SFVec3f([17.01652,0.075,2.906469])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.76423,0.075,29.64557]),SFVec3f([20.63011,0.075,28.98759]),SFVec3f([21.5718,0.075,29.48096]),SFVec3f([21.43769,0.075,28.82298])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([21.29957,0.075,28.1454]),SFVec3f([21.43369,0.075,28.80338]),SFVec3f([20.492,0.075,28.31001]),SFVec3f([20.62612,0.075,28.96799])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.62935,0.075,26.87056]),SFVec3f([21.02334,0.075,26.79025]),SFVec3f([20.76547,0.075,27.53834]),SFVec3f([21.15946,0.075,27.45803]),SFVec3f([20.90159,0.075,28.20612]),SFVec3f([21.29558,0.075,28.12581])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.21577,0.075,26.95486]),SFVec3f([20.41277,0.075,26.91471]),SFVec3f([20.60976,0.075,26.87455]),SFVec3f([20.35189,0.075,27.62264]),SFVec3f([20.54888,0.075,27.58249]),SFVec3f([20.74587,0.075,27.54233]),SFVec3f([20.488,0.075,28.29042]),SFVec3f([20.685,0.075,28.25026]),SFVec3f([20.88199,0.075,28.21011])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.21178,0.075,26.93526]),SFVec3f([20.07766,0.075,26.27728]),SFVec3f([21.01935,0.075,26.77065]),SFVec3f([20.88523,0.075,26.11267])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.07366,0.075,26.25769]),SFVec3f([19.93954,0.075,25.59971]),SFVec3f([20.88123,0.075,26.09308]),SFVec3f([20.74711,0.075,25.4351])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.0769,0.075,24.16025]),SFVec3f([20.47089,0.075,24.07994]),SFVec3f([20.21302,0.075,24.82803]),SFVec3f([20.607,0.075,24.74772]),SFVec3f([20.34913,0.075,25.49581]),SFVec3f([20.74312,0.075,25.4155])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.32954,0.075,25.4998]),SFVec3f([20.13254,0.075,25.53996]),SFVec3f([19.93555,0.075,25.58011]),SFVec3f([20.19342,0.075,24.83203]),SFVec3f([19.99643,0.075,24.87218]),SFVec3f([19.79943,0.075,24.91233]),SFVec3f([20.0573,0.075,24.16425]),SFVec3f([19.86031,0.075,24.2044]),SFVec3f([19.66331,0.075,24.24456])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.33277,0.075,23.40237]),SFVec3f([20.46689,0.075,24.06035]),SFVec3f([19.5252,0.075,23.56698]),SFVec3f([19.65932,0.075,24.22496])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.52121,0.075,23.54738]),SFVec3f([19.38709,0.075,22.8894]),SFVec3f([20.32878,0.075,23.38277]),SFVec3f([20.19466,0.075,22.72479])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.52444,0.075,21.44995]),SFVec3f([19.72144,0.075,21.40979]),SFVec3f([19.91843,0.075,21.36964]),SFVec3f([19.66056,0.075,22.11773]),SFVec3f([19.85755,0.075,22.07757]),SFVec3f([20.05455,0.075,22.03742]),SFVec3f([19.79668,0.075,22.7855]),SFVec3f([19.99367,0.075,22.74535]),SFVec3f([20.19066,0.075,22.70519])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.77708,0.075,22.7895]),SFVec3f([19.38309,0.075,22.86981]),SFVec3f([19.50485,0.075,21.45394]),SFVec3f([19.11086,0.075,21.53425])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.78032,0.075,20.69206]),SFVec3f([19.91444,0.075,21.35004]),SFVec3f([18.97275,0.075,20.85667]),SFVec3f([19.10686,0.075,21.51465])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.96875,0.075,20.83708]),SFVec3f([18.83463,0.075,20.1791]),SFVec3f([19.77632,0.075,20.67247]),SFVec3f([19.6422,0.075,20.01449])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.97199,0.075,18.73964]),SFVec3f([19.16898,0.075,18.69949]),SFVec3f([19.36597,0.075,18.65933]),SFVec3f([19.1081,0.075,19.40742]),SFVec3f([19.3051,0.075,19.36727]),SFVec3f([19.50209,0.075,19.32711]),SFVec3f([19.24422,0.075,20.0752]),SFVec3f([19.44121,0.075,20.03504]),SFVec3f([19.63821,0.075,19.99489])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.5584,0.075,18.82394]),SFVec3f([18.7554,0.075,18.78379]),SFVec3f([18.95239,0.075,18.74364]),SFVec3f([18.69452,0.075,19.49172]),SFVec3f([18.89151,0.075,19.45157]),SFVec3f([19.08851,0.075,19.41142]),SFVec3f([18.83064,0.075,20.1595]),SFVec3f([19.02763,0.075,20.11935]),SFVec3f([19.22462,0.075,20.07919])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55441,0.075,18.80435]),SFVec3f([18.42029,0.075,18.14637]),SFVec3f([19.36198,0.075,18.63974]),SFVec3f([19.22786,0.075,17.98176])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.41629,0.075,18.12677]),SFVec3f([18.28218,0.075,17.46879]),SFVec3f([19.22387,0.075,17.96216]),SFVec3f([19.08975,0.075,17.30418])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.08575,0.075,17.28458]),SFVec3f([18.69176,0.075,17.36489]),SFVec3f([18.81352,0.075,15.94903]),SFVec3f([18.41953,0.075,16.02934])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00595,0.075,16.11364]),SFVec3f([18.39993,0.075,16.03333]),SFVec3f([18.27818,0.075,17.44919]),SFVec3f([18.67217,0.075,17.36889])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00195,0.075,16.09404]),SFVec3f([17.86783,0.075,15.43606]),SFVec3f([18.80952,0.075,15.92943]),SFVec3f([18.6754,0.075,15.27145])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86384,0.075,15.41647]),SFVec3f([17.72972,0.075,14.75849]),SFVec3f([18.67141,0.075,15.25185]),SFVec3f([18.53729,0.075,14.59387])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.5333,0.075,14.57428]),SFVec3f([18.13931,0.075,14.65459]),SFVec3f([18.39718,0.075,13.9065]),SFVec3f([18.00319,0.075,13.98681]),SFVec3f([18.26106,0.075,13.23872]),SFVec3f([17.86707,0.075,13.31903])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.45349,0.075,13.40333]),SFVec3f([17.84748,0.075,13.32302]),SFVec3f([17.72573,0.075,14.73889]),SFVec3f([18.11971,0.075,14.65858])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.4495,0.075,13.38374]),SFVec3f([17.31538,0.075,12.72576]),SFVec3f([17.85328,0.075,13.30143]),SFVec3f([17.71916,0.075,12.64345]),SFVec3f([18.25707,0.075,13.21912]),SFVec3f([18.12295,0.075,12.56115])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.98483,0.075,11.88357]),SFVec3f([18.11895,0.075,12.54155]),SFVec3f([17.17726,0.075,12.04818]),SFVec3f([17.31138,0.075,12.70616])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.98084,0.075,11.86397]),SFVec3f([17.58685,0.075,11.94428]),SFVec3f([17.70861,0.075,10.52842]),SFVec3f([17.31462,0.075,10.60872])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.90104,0.075,10.69303]),SFVec3f([17.09803,0.075,10.65287]),SFVec3f([17.29502,0.075,10.61272]),SFVec3f([17.03715,0.075,11.36081]),SFVec3f([17.23415,0.075,11.32065]),SFVec3f([17.43114,0.075,11.2805]),SFVec3f([17.17327,0.075,12.02858]),SFVec3f([17.37026,0.075,11.98843]),SFVec3f([17.56726,0.075,11.94827])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.89704,0.075,10.67343]),SFVec3f([16.76292,0.075,10.01545]),SFVec3f([17.30083,0.075,10.59112]),SFVec3f([17.16671,0.075,9.933146]),SFVec3f([17.70461,0.075,10.50882]),SFVec3f([17.57049,0.075,9.85084])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.43238,0.075,9.173264]),SFVec3f([17.5665,0.075,9.831243]),SFVec3f([16.62481,0.075,9.337874]),SFVec3f([16.75893,0.075,9.995854])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.76216,0.075,7.898419]),SFVec3f([17.15615,0.075,7.81811]),SFVec3f([16.89828,0.075,8.566196]),SFVec3f([17.29227,0.075,8.485888]),SFVec3f([17.0344,0.075,9.233974]),SFVec3f([17.42838,0.075,9.153666])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.34858,0.075,7.982722]),SFVec3f([16.74257,0.075,7.902413]),SFVec3f([16.62081,0.075,9.318277]),SFVec3f([17.0148,0.075,9.237969])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.01804,0.075,7.140534]),SFVec3f([17.15216,0.075,7.798513]),SFVec3f([16.21047,0.075,7.305145]),SFVec3f([16.34459,0.075,7.963125])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.20647,0.075,7.285548]),SFVec3f([16.07235,0.075,6.627569]),SFVec3f([17.01404,0.075,7.120937]),SFVec3f([16.87992,0.075,6.462957])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.20971,0.075,5.188113]),SFVec3f([16.4067,0.075,5.147959]),SFVec3f([16.60369,0.075,5.107805]),SFVec3f([16.34583,0.075,5.855891]),SFVec3f([16.54282,0.075,5.815737]),SFVec3f([16.73981,0.075,5.775583]),SFVec3f([16.48194,0.075,6.523669]),SFVec3f([16.67893,0.075,6.483515]),SFVec3f([16.87593,0.075,6.44336])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.79612,0.075,5.272416]),SFVec3f([15.99312,0.075,5.232262]),SFVec3f([16.19011,0.075,5.192108]),SFVec3f([15.93224,0.075,5.940194]),SFVec3f([16.12923,0.075,5.90004]),SFVec3f([16.32623,0.075,5.859886]),SFVec3f([16.06836,0.075,6.607972]),SFVec3f([16.26535,0.075,6.567818]),SFVec3f([16.46234,0.075,6.527664])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.79213,0.075,5.252819]),SFVec3f([15.65801,0.075,4.59484]),SFVec3f([16.5997,0.075,5.088208]),SFVec3f([16.46558,0.075,4.430228])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.32747,0.075,3.752652]),SFVec3f([16.46159,0.075,4.410631]),SFVec3f([15.5199,0.075,3.917263]),SFVec3f([15.65402,0.075,4.575243])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.65725,0.075,2.477808]),SFVec3f([16.05124,0.075,2.397499]),SFVec3f([15.92949,0.075,3.813363]),SFVec3f([16.32347,0.075,3.733055])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.24367,0.075,2.56211]),SFVec3f([15.63765,0.075,2.481802]),SFVec3f([15.5159,0.075,3.897666]),SFVec3f([15.90989,0.075,3.817358])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.07841,0.075,28.39432]),SFVec3f([20.27541,0.075,28.35416]),SFVec3f([20.4724,0.075,28.31401]),SFVec3f([20.21453,0.075,29.0621]),SFVec3f([20.41153,0.075,29.02194]),SFVec3f([20.60852,0.075,28.98179]),SFVec3f([20.35065,0.075,29.72987]),SFVec3f([20.54764,0.075,29.68972]),SFVec3f([20.74464,0.075,29.64956])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([20.19218,0.075,26.93926]),SFVec3f([19.79819,0.075,27.01957]),SFVec3f([19.91995,0.075,25.6037]),SFVec3f([19.52596,0.075,25.68401])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.10838,0.075,25.74872]),SFVec3f([18.97426,0.075,25.09074]),SFVec3f([19.91595,0.075,25.58411]),SFVec3f([19.78183,0.075,24.92613])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.64372,0.075,24.24855]),SFVec3f([19.77784,0.075,24.90653]),SFVec3f([18.83615,0.075,24.41316]),SFVec3f([18.97027,0.075,25.07114])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.63972,0.075,24.22895]),SFVec3f([19.24574,0.075,24.30926]),SFVec3f([19.36749,0.075,22.8934]),SFVec3f([18.9735,0.075,22.97371])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55992,0.075,23.05801]),SFVec3f([18.75691,0.075,23.01785]),SFVec3f([18.95391,0.075,22.9777]),SFVec3f([18.69604,0.075,23.72579]),SFVec3f([18.89303,0.075,23.68563]),SFVec3f([19.09002,0.075,23.64548]),SFVec3f([18.83215,0.075,24.39357]),SFVec3f([19.02915,0.075,24.35341]),SFVec3f([19.22614,0.075,24.31326])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.55593,0.075,23.03841]),SFVec3f([18.42181,0.075,22.38043]),SFVec3f([19.3635,0.075,22.8738]),SFVec3f([19.22938,0.075,22.21582])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([19.09126,0.075,21.53824]),SFVec3f([19.22538,0.075,22.19622]),SFVec3f([18.28369,0.075,21.70286]),SFVec3f([18.41781,0.075,22.36084])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.42105,0.075,20.2634]),SFVec3f([18.81503,0.075,20.18309]),SFVec3f([18.69328,0.075,21.59896]),SFVec3f([19.08727,0.075,21.51865])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00746,0.075,20.3477]),SFVec3f([18.40145,0.075,20.2674]),SFVec3f([18.14358,0.075,21.01548]),SFVec3f([18.53757,0.075,20.93517]),SFVec3f([18.2797,0.075,21.68326]),SFVec3f([18.67368,0.075,21.60295])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.00347,0.075,20.32811]),SFVec3f([17.86935,0.075,19.67013]),SFVec3f([18.81104,0.075,20.1635]),SFVec3f([18.67692,0.075,19.50552])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86535,0.075,19.65053]),SFVec3f([17.73124,0.075,18.99255]),SFVec3f([18.67293,0.075,19.48592]),SFVec3f([18.53881,0.075,18.82794])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86859,0.075,17.55309]),SFVec3f([18.06558,0.075,17.51294]),SFVec3f([18.26258,0.075,17.47279]),SFVec3f([18.00471,0.075,18.22087]),SFVec3f([18.2017,0.075,18.18072]),SFVec3f([18.39869,0.075,18.14056]),SFVec3f([18.14083,0.075,18.88865]),SFVec3f([18.33782,0.075,18.8485]),SFVec3f([18.53481,0.075,18.80834])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.12123,0.075,18.89264]),SFVec3f([17.72724,0.075,18.97295]),SFVec3f([17.849,0.075,17.55709]),SFVec3f([17.45501,0.075,17.6374])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.12446,0.075,16.79521]),SFVec3f([18.25858,0.075,17.45319]),SFVec3f([17.31689,0.075,16.95982]),SFVec3f([17.45101,0.075,17.6178])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.3129,0.075,16.94022]),SFVec3f([17.17878,0.075,16.28225]),SFVec3f([18.12047,0.075,16.77561]),SFVec3f([17.98635,0.075,16.11763])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.98236,0.075,16.09804]),SFVec3f([17.58837,0.075,16.17834]),SFVec3f([17.84624,0.075,15.43026]),SFVec3f([17.45225,0.075,15.51057]),SFVec3f([17.71012,0.075,14.76248]),SFVec3f([17.31614,0.075,14.84279])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.56877,0.075,16.18234]),SFVec3f([17.37178,0.075,16.22249]),SFVec3f([17.17479,0.075,16.26265]),SFVec3f([17.43266,0.075,15.51456]),SFVec3f([17.23566,0.075,15.55472]),SFVec3f([17.03867,0.075,15.59487]),SFVec3f([17.29654,0.075,14.84678]),SFVec3f([17.09954,0.075,14.88694]),SFVec3f([16.90255,0.075,14.92709])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.57201,0.075,14.0849]),SFVec3f([17.70613,0.075,14.74288]),SFVec3f([16.76444,0.075,14.24952]),SFVec3f([16.89856,0.075,14.9075])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.76044,0.075,14.22992]),SFVec3f([16.62632,0.075,13.57194]),SFVec3f([17.16423,0.075,14.14761]),SFVec3f([17.03011,0.075,13.48963]),SFVec3f([17.56801,0.075,14.06531]),SFVec3f([17.4339,0.075,13.40733])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.76368,0.075,12.13248]),SFVec3f([17.15767,0.075,12.05217]),SFVec3f([17.03591,0.075,13.46804]),SFVec3f([17.4299,0.075,13.38773])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.3501,0.075,12.21679]),SFVec3f([16.54709,0.075,12.17663]),SFVec3f([16.74408,0.075,12.13648]),SFVec3f([16.48621,0.075,12.88456]),SFVec3f([16.68321,0.075,12.84441]),SFVec3f([16.8802,0.075,12.80426]),SFVec3f([16.62233,0.075,13.55234]),SFVec3f([16.81932,0.075,13.51219]),SFVec3f([17.01632,0.075,13.47203])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.3461,0.075,12.19719]),SFVec3f([16.21198,0.075,11.53921]),SFVec3f([16.74989,0.075,12.11488]),SFVec3f([16.61577,0.075,11.4569]),SFVec3f([17.15367,0.075,12.03258]),SFVec3f([17.01955,0.075,11.3746])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.20799,0.075,11.51961]),SFVec3f([16.07387,0.075,10.86163]),SFVec3f([16.61177,0.075,11.43731]),SFVec3f([16.47765,0.075,10.77933]),SFVec3f([17.01556,0.075,11.355]),SFVec3f([16.88144,0.075,10.69702])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.87744,0.075,10.67743]),SFVec3f([16.48346,0.075,10.75773]),SFVec3f([16.74133,0.075,10.00965]),SFVec3f([16.34734,0.075,10.08996]),SFVec3f([16.60521,0.075,9.341869]),SFVec3f([16.21122,0.075,9.422177])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.79764,0.075,9.506481]),SFVec3f([16.19163,0.075,9.426172]),SFVec3f([15.93376,0.075,10.17426]),SFVec3f([16.32774,0.075,10.09395]),SFVec3f([16.06987,0.075,10.84204]),SFVec3f([16.46386,0.075,10.76173])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.4671,0.075,8.664293]),SFVec3f([16.60122,0.075,9.322272]),SFVec3f([16.06331,0.075,8.746598]),SFVec3f([16.19743,0.075,9.404578]),SFVec3f([15.65953,0.075,8.828904]),SFVec3f([15.79364,0.075,9.486884])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.32898,0.075,7.986716]),SFVec3f([16.4631,0.075,8.644696]),SFVec3f([15.52141,0.075,8.151328]),SFVec3f([15.65553,0.075,8.809307])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.65877,0.075,6.711872]),SFVec3f([16.05276,0.075,6.631564]),SFVec3f([15.79488,0.075,7.37965]),SFVec3f([16.18887,0.075,7.299342]),SFVec3f([15.931,0.075,8.047428]),SFVec3f([16.32499,0.075,7.967119])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.24518,0.075,6.796175]),SFVec3f([15.44218,0.075,6.756021]),SFVec3f([15.63917,0.075,6.715867]),SFVec3f([15.3813,0.075,7.463953]),SFVec3f([15.57829,0.075,7.423799]),SFVec3f([15.77529,0.075,7.383645]),SFVec3f([15.51742,0.075,8.131731]),SFVec3f([15.71441,0.075,8.091577]),SFVec3f([15.9114,0.075,8.051422])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.91464,0.075,5.953987]),SFVec3f([16.04876,0.075,6.611967]),SFVec3f([15.10707,0.075,6.118598]),SFVec3f([15.24119,0.075,6.776578])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.10308,0.075,6.099001]),SFVec3f([15.03602,0.075,5.770012]),SFVec3f([14.96896,0.075,5.441022]),SFVec3f([15.91065,0.075,5.93439]),SFVec3f([15.84359,0.075,5.605401]),SFVec3f([15.77653,0.075,5.276411])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.77253,0.075,5.256814]),SFVec3f([15.37854,0.075,5.337122]),SFVec3f([15.63642,0.075,4.589036]),SFVec3f([15.24243,0.075,4.669344]),SFVec3f([15.5003,0.075,3.921258]),SFVec3f([15.10631,0.075,4.001566])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.69273,0.075,4.085869]),SFVec3f([14.88972,0.075,4.045715]),SFVec3f([15.08671,0.075,4.005561]),SFVec3f([14.82884,0.075,4.753647]),SFVec3f([15.02584,0.075,4.713493]),SFVec3f([15.22283,0.075,4.673339]),SFVec3f([14.96496,0.075,5.421425]),SFVec3f([15.16195,0.075,5.381271]),SFVec3f([15.35895,0.075,5.341117])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.36218,0.075,3.243681]),SFVec3f([15.4963,0.075,3.901661]),SFVec3f([14.9584,0.075,3.325987]),SFVec3f([15.09252,0.075,3.983967]),SFVec3f([14.55461,0.075,3.408293]),SFVec3f([14.68873,0.075,4.066272])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55062,0.075,3.388696]),SFVec3f([14.4165,0.075,2.730716]),SFVec3f([15.35819,0.075,3.224084]),SFVec3f([15.22407,0.075,2.566105])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.86687,0.075,23.88459]),SFVec3f([17.73275,0.075,23.22662]),SFVec3f([18.27066,0.075,23.80229]),SFVec3f([18.13654,0.075,23.14431]),SFVec3f([18.67444,0.075,23.71998]),SFVec3f([18.54032,0.075,23.062])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.87011,0.075,21.78716]),SFVec3f([18.0671,0.075,21.74701]),SFVec3f([18.2641,0.075,21.70685]),SFVec3f([18.00622,0.075,22.45494]),SFVec3f([18.20322,0.075,22.41478]),SFVec3f([18.40021,0.075,22.37463]),SFVec3f([18.14234,0.075,23.12271]),SFVec3f([18.33933,0.075,23.08256]),SFVec3f([18.53633,0.075,23.04241])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([18.12274,0.075,23.12671]),SFVec3f([17.92575,0.075,23.16686]),SFVec3f([17.72876,0.075,23.20702]),SFVec3f([17.98663,0.075,22.45893]),SFVec3f([17.78963,0.075,22.49909]),SFVec3f([17.59264,0.075,22.53924]),SFVec3f([17.85051,0.075,21.79115]),SFVec3f([17.65352,0.075,21.83131]),SFVec3f([17.45652,0.075,21.87146])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.45253,0.075,21.85187]),SFVec3f([17.31841,0.075,21.19389]),SFVec3f([17.85631,0.075,21.76956]),SFVec3f([17.72219,0.075,21.11158]),SFVec3f([18.2601,0.075,21.68725]),SFVec3f([18.12598,0.075,21.02927])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.98787,0.075,20.3517]),SFVec3f([18.12199,0.075,21.00968]),SFVec3f([17.1803,0.075,20.51631]),SFVec3f([17.31441,0.075,21.17429])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.98387,0.075,20.3321]),SFVec3f([17.78688,0.075,20.37226]),SFVec3f([17.58989,0.075,20.41241]),SFVec3f([17.84776,0.075,19.66432]),SFVec3f([17.65076,0.075,19.70448]),SFVec3f([17.45377,0.075,19.74463]),SFVec3f([17.71164,0.075,18.99655]),SFVec3f([17.51464,0.075,19.0367]),SFVec3f([17.31765,0.075,19.07685])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.90407,0.075,19.16116]),SFVec3f([17.10106,0.075,19.121]),SFVec3f([17.29805,0.075,19.08085]),SFVec3f([17.04018,0.075,19.82894]),SFVec3f([17.23718,0.075,19.78878]),SFVec3f([17.43417,0.075,19.74863]),SFVec3f([17.1763,0.075,20.49671]),SFVec3f([17.37329,0.075,20.45656]),SFVec3f([17.57029,0.075,20.4164])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.57352,0.075,18.31897]),SFVec3f([17.70764,0.075,18.97695]),SFVec3f([17.16974,0.075,18.40127]),SFVec3f([17.30386,0.075,19.05925]),SFVec3f([16.76595,0.075,18.48358]),SFVec3f([16.90007,0.075,19.14156])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.43541,0.075,17.64139]),SFVec3f([17.56953,0.075,18.29937]),SFVec3f([17.03163,0.075,17.7237]),SFVec3f([17.16574,0.075,18.38168]),SFVec3f([16.62784,0.075,17.806]),SFVec3f([16.76196,0.075,18.46398])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.7652,0.075,16.36655]),SFVec3f([16.96219,0.075,16.32639]),SFVec3f([17.15918,0.075,16.28624]),SFVec3f([16.90131,0.075,17.03433]),SFVec3f([17.09831,0.075,16.99417]),SFVec3f([17.2953,0.075,16.95402]),SFVec3f([17.03743,0.075,17.7021]),SFVec3f([17.23442,0.075,17.66195]),SFVec3f([17.43142,0.075,17.6218])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.35161,0.075,16.45085]),SFVec3f([16.7456,0.075,16.37054]),SFVec3f([16.48773,0.075,17.11863]),SFVec3f([16.88172,0.075,17.03832]),SFVec3f([16.62385,0.075,17.78641]),SFVec3f([17.01783,0.075,17.7061])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([17.02107,0.075,15.60866]),SFVec3f([17.15519,0.075,16.26664]),SFVec3f([16.2135,0.075,15.77327]),SFVec3f([16.34762,0.075,16.43125])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.2095,0.075,15.75368]),SFVec3f([16.07538,0.075,15.0957]),SFVec3f([16.61329,0.075,15.67137]),SFVec3f([16.47917,0.075,15.01339]),SFVec3f([17.01707,0.075,15.58907]),SFVec3f([16.88296,0.075,14.93109])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.87896,0.075,14.91149]),SFVec3f([16.48497,0.075,14.9918]),SFVec3f([16.60673,0.075,13.57593]),SFVec3f([16.21274,0.075,13.65624])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.46538,0.075,14.99579]),SFVec3f([16.07139,0.075,15.0761]),SFVec3f([16.19314,0.075,13.66024]),SFVec3f([15.79916,0.075,13.74055])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.46861,0.075,12.89836]),SFVec3f([16.60273,0.075,13.55634]),SFVec3f([15.66104,0.075,13.06297]),SFVec3f([15.79516,0.075,13.72095])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.65705,0.075,13.04337]),SFVec3f([15.52293,0.075,12.38539]),SFVec3f([16.06083,0.075,12.96107]),SFVec3f([15.92671,0.075,12.30309]),SFVec3f([16.46462,0.075,12.87876]),SFVec3f([16.3305,0.075,12.22078])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.3265,0.075,12.20118]),SFVec3f([15.93252,0.075,12.28149]),SFVec3f([16.05427,0.075,10.86563]),SFVec3f([15.66028,0.075,10.94594])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.91292,0.075,12.28549]),SFVec3f([15.51893,0.075,12.3658]),SFVec3f([15.64069,0.075,10.94993]),SFVec3f([15.2467,0.075,11.03024])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.24271,0.075,11.01064]),SFVec3f([15.10859,0.075,10.35266]),SFVec3f([16.05028,0.075,10.84603]),SFVec3f([15.91616,0.075,10.18805])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.10459,0.075,10.33307]),SFVec3f([14.97047,0.075,9.675087]),SFVec3f([15.91216,0.075,10.16846]),SFVec3f([15.77804,0.075,9.510475])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.77405,0.075,9.490878]),SFVec3f([15.38006,0.075,9.571187]),SFVec3f([15.50181,0.075,8.155322]),SFVec3f([15.10783,0.075,8.235631])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.36046,0.075,9.575181]),SFVec3f([15.16347,0.075,9.615335]),SFVec3f([14.96648,0.075,9.65549]),SFVec3f([15.22435,0.075,8.907403]),SFVec3f([15.02735,0.075,8.947557]),SFVec3f([14.83036,0.075,8.987712]),SFVec3f([15.08823,0.075,8.239626]),SFVec3f([14.89124,0.075,8.279779]),SFVec3f([14.69424,0.075,8.319934])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.69025,0.075,8.300337]),SFVec3f([14.55613,0.075,7.642357]),SFVec3f([15.49782,0.075,8.135725]),SFVec3f([15.3637,0.075,7.477746])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55214,0.075,7.62276]),SFVec3f([14.41802,0.075,6.964781]),SFVec3f([15.35971,0.075,7.458149]),SFVec3f([15.22559,0.075,6.800169])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55537,0.075,5.525325]),SFVec3f([14.94936,0.075,5.445017]),SFVec3f([14.82761,0.075,6.860881]),SFVec3f([15.22159,0.075,6.780572])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.14179,0.075,5.609628]),SFVec3f([14.53578,0.075,5.52932]),SFVec3f([14.41402,0.075,6.945184]),SFVec3f([14.80801,0.075,6.864876])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.13779,0.075,5.590031]),SFVec3f([14.00367,0.075,4.932052]),SFVec3f([14.94536,0.075,5.42542]),SFVec3f([14.81124,0.075,4.76744])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.99968,0.075,4.912455]),SFVec3f([13.86556,0.075,4.254475]),SFVec3f([14.80725,0.075,4.747843]),SFVec3f([14.67313,0.075,4.089864])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.00292,0.075,2.815019]),SFVec3f([14.3969,0.075,2.734711]),SFVec3f([14.13903,0.075,3.482797]),SFVec3f([14.53302,0.075,3.402489]),SFVec3f([14.27515,0.075,4.150575]),SFVec3f([14.66914,0.075,4.070267])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.58933,0.075,2.899323]),SFVec3f([13.98332,0.075,2.819014]),SFVec3f([13.86157,0.075,4.234878]),SFVec3f([14.25555,0.075,4.15457])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.90159,0.075,23.37562]),SFVec3f([16.76747,0.075,22.71765]),SFVec3f([17.70916,0.075,23.21101]),SFVec3f([17.57504,0.075,22.55303])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.76348,0.075,22.69805]),SFVec3f([16.69641,0.075,22.36906]),SFVec3f([16.62936,0.075,22.04007]),SFVec3f([17.16726,0.075,22.61574]),SFVec3f([17.1002,0.075,22.28675]),SFVec3f([17.03314,0.075,21.95776]),SFVec3f([17.57105,0.075,22.53344]),SFVec3f([17.50399,0.075,22.20445]),SFVec3f([17.43693,0.075,21.87546])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.76671,0.075,20.60061]),SFVec3f([16.96371,0.075,20.56046]),SFVec3f([17.1607,0.075,20.5203]),SFVec3f([16.90283,0.075,21.26839]),SFVec3f([17.09982,0.075,21.22824]),SFVec3f([17.29682,0.075,21.18808]),SFVec3f([17.03895,0.075,21.93617]),SFVec3f([17.23594,0.075,21.89602]),SFVec3f([17.43293,0.075,21.85586])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.35313,0.075,20.68492]),SFVec3f([16.74711,0.075,20.60461]),SFVec3f([16.48924,0.075,21.35269]),SFVec3f([16.88323,0.075,21.27238]),SFVec3f([16.62536,0.075,22.02047]),SFVec3f([17.01935,0.075,21.94016])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.34913,0.075,20.66532]),SFVec3f([16.21501,0.075,20.00734]),SFVec3f([17.1567,0.075,20.50071]),SFVec3f([17.02258,0.075,19.84273])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.21102,0.075,19.98774]),SFVec3f([16.0769,0.075,19.32976]),SFVec3f([17.01859,0.075,19.82313]),SFVec3f([16.88447,0.075,19.16515])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.21426,0.075,17.89031]),SFVec3f([16.60824,0.075,17.81]),SFVec3f([16.48649,0.075,19.22586]),SFVec3f([16.88048,0.075,19.14555])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.80067,0.075,17.97461]),SFVec3f([16.19466,0.075,17.8943]),SFVec3f([16.0729,0.075,19.31017]),SFVec3f([16.46689,0.075,19.22986])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.79668,0.075,17.95501]),SFVec3f([15.66256,0.075,17.29703]),SFVec3f([16.60425,0.075,17.7904]),SFVec3f([16.47013,0.075,17.13242])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.33201,0.075,16.45485]),SFVec3f([16.46614,0.075,17.11283]),SFVec3f([15.52444,0.075,16.61946]),SFVec3f([15.65856,0.075,17.27744])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.32802,0.075,16.43525]),SFVec3f([16.13103,0.075,16.4754]),SFVec3f([15.93403,0.075,16.51556]),SFVec3f([16.1919,0.075,15.76747]),SFVec3f([15.99491,0.075,15.80762]),SFVec3f([15.79792,0.075,15.84778]),SFVec3f([16.05579,0.075,15.09969]),SFVec3f([15.85879,0.075,15.13985]),SFVec3f([15.6618,0.075,15.18])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.91444,0.075,16.51955]),SFVec3f([15.52045,0.075,16.59986]),SFVec3f([15.6422,0.075,15.184]),SFVec3f([15.24822,0.075,15.2643])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.91767,0.075,14.42212]),SFVec3f([16.05179,0.075,15.0801]),SFVec3f([15.1101,0.075,14.58673]),SFVec3f([15.24422,0.075,15.24471])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.77956,0.075,13.74454]),SFVec3f([15.91368,0.075,14.40252]),SFVec3f([14.97199,0.075,13.90915]),SFVec3f([15.10611,0.075,14.56713])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.77556,0.075,13.72494]),SFVec3f([15.38158,0.075,13.80525]),SFVec3f([15.63945,0.075,13.05717]),SFVec3f([15.24546,0.075,13.13747]),SFVec3f([15.50333,0.075,12.38939]),SFVec3f([15.10934,0.075,12.4697])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.69576,0.075,12.554]),SFVec3f([15.08975,0.075,12.47369]),SFVec3f([14.96799,0.075,13.88955]),SFVec3f([15.36198,0.075,13.80925])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.36522,0.075,11.71181]),SFVec3f([15.43228,0.075,12.0408]),SFVec3f([15.49934,0.075,12.36979]),SFVec3f([14.55765,0.075,11.87642]),SFVec3f([14.62471,0.075,12.20541]),SFVec3f([14.69177,0.075,12.5344])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55365,0.075,11.85682]),SFVec3f([14.41953,0.075,11.19885]),SFVec3f([14.95744,0.075,11.77452]),SFVec3f([14.82332,0.075,11.11654]),SFVec3f([15.36122,0.075,11.69221]),SFVec3f([15.2271,0.075,11.03423])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.22311,0.075,11.01464]),SFVec3f([14.82912,0.075,11.09495]),SFVec3f([14.95088,0.075,9.679081]),SFVec3f([14.55689,0.075,9.75939])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.1433,0.075,9.843693]),SFVec3f([14.53729,0.075,9.763384]),SFVec3f([14.41554,0.075,11.17925]),SFVec3f([14.80952,0.075,11.09894])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.13931,0.075,9.824096]),SFVec3f([14.07225,0.075,9.495106]),SFVec3f([14.00519,0.075,9.166117]),SFVec3f([14.94688,0.075,9.659484]),SFVec3f([14.87982,0.075,9.330495]),SFVec3f([14.81276,0.075,9.001505])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.67465,0.075,8.323929]),SFVec3f([14.74171,0.075,8.652918]),SFVec3f([14.80877,0.075,8.981908]),SFVec3f([14.27086,0.075,8.406234]),SFVec3f([14.33792,0.075,8.735224]),SFVec3f([14.40498,0.075,9.064214]),SFVec3f([13.86708,0.075,8.48854]),SFVec3f([13.93414,0.075,8.81753]),SFVec3f([14.00119,0.075,9.14652])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.67065,0.075,8.304332]),SFVec3f([14.27667,0.075,8.38464]),SFVec3f([14.39842,0.075,6.968776]),SFVec3f([14.00443,0.075,7.049084])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.59085,0.075,7.133387]),SFVec3f([13.98483,0.075,7.053079]),SFVec3f([13.72696,0.075,7.801165]),SFVec3f([14.12095,0.075,7.720857]),SFVec3f([13.86308,0.075,8.468943]),SFVec3f([14.25707,0.075,8.388635])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.2603,0.075,6.291199]),SFVec3f([14.39442,0.075,6.949179]),SFVec3f([13.85652,0.075,6.373505]),SFVec3f([13.99064,0.075,7.031484]),SFVec3f([13.45273,0.075,6.455811]),SFVec3f([13.58685,0.075,7.11379])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.44874,0.075,6.436213]),SFVec3f([13.31462,0.075,5.778234]),SFVec3f([13.85252,0.075,6.353908]),SFVec3f([13.71841,0.075,5.695929]),SFVec3f([14.25631,0.075,6.271602]),SFVec3f([14.12219,0.075,5.613623])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.1182,0.075,5.594026]),SFVec3f([13.72421,0.075,5.674334]),SFVec3f([13.98208,0.075,4.926248]),SFVec3f([13.58809,0.075,5.006556]),SFVec3f([13.84596,0.075,4.25847]),SFVec3f([13.45198,0.075,4.338778])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.03839,0.075,4.423081]),SFVec3f([13.43238,0.075,4.342773]),SFVec3f([13.17451,0.075,5.090859]),SFVec3f([13.5685,0.075,5.010551]),SFVec3f([13.31063,0.075,5.758637]),SFVec3f([13.70461,0.075,5.678329])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.0344,0.075,4.403484]),SFVec3f([12.90028,0.075,3.745505]),SFVec3f([13.84197,0.075,4.238873]),SFVec3f([13.70785,0.075,3.580894])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.56973,0.075,2.903317]),SFVec3f([13.70385,0.075,3.561296]),SFVec3f([12.76216,0.075,3.067929]),SFVec3f([12.89628,0.075,3.725908])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([16.47165,0.075,21.36649]),SFVec3f([16.60576,0.075,22.02447]),SFVec3f([15.66407,0.075,21.5311]),SFVec3f([15.79819,0.075,22.18908])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.66008,0.075,21.5115]),SFVec3f([15.52596,0.075,20.85352]),SFVec3f([16.46765,0.075,21.34689]),SFVec3f([16.33353,0.075,20.68891])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.66332,0.075,19.41407]),SFVec3f([15.86031,0.075,19.37391]),SFVec3f([16.0573,0.075,19.33376]),SFVec3f([15.79943,0.075,20.08184]),SFVec3f([15.99643,0.075,20.04169]),SFVec3f([16.19342,0.075,20.00154]),SFVec3f([15.93555,0.075,20.74962]),SFVec3f([16.13254,0.075,20.70947]),SFVec3f([16.32954,0.075,20.66931])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.24973,0.075,19.49837]),SFVec3f([15.64372,0.075,19.41806]),SFVec3f([15.38585,0.075,20.16615]),SFVec3f([15.77984,0.075,20.08584]),SFVec3f([15.52197,0.075,20.83393]),SFVec3f([15.91595,0.075,20.75362])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.91919,0.075,18.65618]),SFVec3f([16.05331,0.075,19.31416]),SFVec3f([15.11162,0.075,18.82079]),SFVec3f([15.24574,0.075,19.47877])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.10762,0.075,18.8012]),SFVec3f([14.9735,0.075,18.14322]),SFVec3f([15.91519,0.075,18.63658]),SFVec3f([15.78107,0.075,17.97861])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.11086,0.075,16.70376]),SFVec3f([15.50485,0.075,16.62345]),SFVec3f([15.38309,0.075,18.03932]),SFVec3f([15.77708,0.075,17.95901])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.69728,0.075,16.78806]),SFVec3f([15.09126,0.075,16.70775]),SFVec3f([14.96951,0.075,18.12362]),SFVec3f([15.3635,0.075,18.04331])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.36673,0.075,15.94588]),SFVec3f([15.43379,0.075,16.27486]),SFVec3f([15.50085,0.075,16.60386]),SFVec3f([14.96295,0.075,16.02818]),SFVec3f([15.03001,0.075,16.35717]),SFVec3f([15.09707,0.075,16.68616]),SFVec3f([14.55916,0.075,16.11049]),SFVec3f([14.62622,0.075,16.43948]),SFVec3f([14.69328,0.075,16.76847])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55517,0.075,16.09089]),SFVec3f([14.42105,0.075,15.43291]),SFVec3f([15.36274,0.075,15.92628]),SFVec3f([15.22862,0.075,15.2683])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.5584,0.075,13.99345]),SFVec3f([14.95239,0.075,13.91315]),SFVec3f([14.83064,0.075,15.32901]),SFVec3f([15.22462,0.075,15.2487])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.14482,0.075,14.07776]),SFVec3f([14.53881,0.075,13.99745]),SFVec3f([14.41705,0.075,15.41331]),SFVec3f([14.81104,0.075,15.333])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.14083,0.075,14.05816]),SFVec3f([14.07377,0.075,13.72917]),SFVec3f([14.00671,0.075,13.40018]),SFVec3f([14.54461,0.075,13.97585]),SFVec3f([14.47755,0.075,13.64686]),SFVec3f([14.41049,0.075,13.31787]),SFVec3f([14.9484,0.075,13.89355]),SFVec3f([14.88134,0.075,13.56456]),SFVec3f([14.81428,0.075,13.23557])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.67616,0.075,12.55799]),SFVec3f([14.81028,0.075,13.21597]),SFVec3f([13.86859,0.075,12.7226]),SFVec3f([14.00271,0.075,13.38058])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.00595,0.075,11.28315]),SFVec3f([14.20294,0.075,11.24299]),SFVec3f([14.39993,0.075,11.20284]),SFVec3f([14.14207,0.075,11.95093]),SFVec3f([14.33906,0.075,11.91077]),SFVec3f([14.53605,0.075,11.87062]),SFVec3f([14.27818,0.075,12.6187]),SFVec3f([14.47517,0.075,12.57855]),SFVec3f([14.67217,0.075,12.5384])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.59236,0.075,11.36745]),SFVec3f([13.98635,0.075,11.28714]),SFVec3f([13.8646,0.075,12.70301]),SFVec3f([14.25858,0.075,12.6227])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.58837,0.075,11.34785]),SFVec3f([13.45425,0.075,10.68988]),SFVec3f([13.99216,0.075,11.26555]),SFVec3f([13.85804,0.075,10.60757]),SFVec3f([14.39594,0.075,11.18324]),SFVec3f([14.26182,0.075,10.52526])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.45026,0.075,10.67028]),SFVec3f([13.3832,0.075,10.34129]),SFVec3f([13.31614,0.075,10.0123]),SFVec3f([14.25783,0.075,10.50567]),SFVec3f([14.19077,0.075,10.17668]),SFVec3f([14.12371,0.075,9.847688])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.11971,0.075,9.828091]),SFVec3f([13.72573,0.075,9.908399]),SFVec3f([13.9836,0.075,9.160313]),SFVec3f([13.58961,0.075,9.240621]),SFVec3f([13.84748,0.075,8.492535]),SFVec3f([13.45349,0.075,8.572843])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.03991,0.075,8.657146]),SFVec3f([13.2369,0.075,8.616992]),SFVec3f([13.4339,0.075,8.576838]),SFVec3f([13.17602,0.075,9.324924]),SFVec3f([13.37302,0.075,9.28477]),SFVec3f([13.57001,0.075,9.244616]),SFVec3f([13.31214,0.075,9.992702]),SFVec3f([13.50914,0.075,9.952547]),SFVec3f([13.70613,0.075,9.912394])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.70936,0.075,7.814958]),SFVec3f([13.84348,0.075,8.472938]),SFVec3f([12.90179,0.075,7.979569]),SFVec3f([13.03591,0.075,8.637548])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.57125,0.075,7.137382]),SFVec3f([13.70537,0.075,7.795361]),SFVec3f([12.76368,0.075,7.301993]),SFVec3f([12.8978,0.075,7.959972])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.90104,0.075,5.862537]),SFVec3f([13.29502,0.075,5.782229]),SFVec3f([13.17327,0.075,7.198093]),SFVec3f([13.56726,0.075,7.117785])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.48745,0.075,5.94684]),SFVec3f([12.88144,0.075,5.866532]),SFVec3f([12.75969,0.075,7.282396]),SFVec3f([13.15367,0.075,7.202087])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.48346,0.075,5.927243]),SFVec3f([12.34934,0.075,5.269264]),SFVec3f([13.29103,0.075,5.762632]),SFVec3f([13.15691,0.075,5.104652])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.34534,0.075,5.249667]),SFVec3f([12.21122,0.075,4.591687]),SFVec3f([13.15291,0.075,5.085055]),SFVec3f([13.0188,0.075,4.427076])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.34858,0.075,3.152231]),SFVec3f([12.74257,0.075,3.071923]),SFVec3f([12.62081,0.075,4.487787]),SFVec3f([13.0148,0.075,4.407479])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.935,0.075,3.236535]),SFVec3f([12.32898,0.075,3.156226]),SFVec3f([12.07111,0.075,3.904312]),SFVec3f([12.4651,0.075,3.824004]),SFVec3f([12.20723,0.075,4.57209]),SFVec3f([12.60122,0.075,4.491782])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.931,0.075,3.216938]),SFVec3f([11.79688,0.075,2.558958]),SFVec3f([12.73857,0.075,3.052326]),SFVec3f([12.60445,0.075,2.394347])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([15.36825,0.075,20.17994]),SFVec3f([15.50237,0.075,20.83792]),SFVec3f([14.56068,0.075,20.34455]),SFVec3f([14.6948,0.075,21.00253])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55668,0.075,20.32495]),SFVec3f([14.48962,0.075,19.99596]),SFVec3f([14.42256,0.075,19.66698]),SFVec3f([15.36425,0.075,20.16034]),SFVec3f([15.29719,0.075,19.83135]),SFVec3f([15.23013,0.075,19.50236])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.55992,0.075,18.22752]),SFVec3f([14.95391,0.075,18.14721]),SFVec3f([14.83215,0.075,19.56307]),SFVec3f([15.22614,0.075,19.48277])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.14634,0.075,18.31182]),SFVec3f([14.54032,0.075,18.23151]),SFVec3f([14.28245,0.075,18.9796]),SFVec3f([14.67644,0.075,18.89929]),SFVec3f([14.41857,0.075,19.64738]),SFVec3f([14.81256,0.075,19.56707])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.14234,0.075,18.29222]),SFVec3f([14.00822,0.075,17.63424]),SFVec3f([14.94991,0.075,18.12761]),SFVec3f([14.81579,0.075,17.46964])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.00423,0.075,17.61465]),SFVec3f([13.93717,0.075,17.28566]),SFVec3f([13.87011,0.075,16.95667]),SFVec3f([14.8118,0.075,17.45004]),SFVec3f([14.74474,0.075,17.12105]),SFVec3f([14.67768,0.075,16.79206])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.67368,0.075,16.77246]),SFVec3f([14.2797,0.075,16.85277]),SFVec3f([14.53757,0.075,16.10468]),SFVec3f([14.14358,0.075,16.18499]),SFVec3f([14.40145,0.075,15.4369]),SFVec3f([14.00746,0.075,15.51721])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([14.2601,0.075,16.85676]),SFVec3f([13.86611,0.075,16.93707]),SFVec3f([14.12398,0.075,16.18899]),SFVec3f([13.73,0.075,16.26929]),SFVec3f([13.98787,0.075,15.52121]),SFVec3f([13.59388,0.075,15.60152])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.58989,0.075,15.58192]),SFVec3f([13.45577,0.075,14.92394]),SFVec3f([14.39746,0.075,15.41731]),SFVec3f([14.26334,0.075,14.75933])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.3501,0.075,7.386296]),SFVec3f([12.54709,0.075,7.346142]),SFVec3f([12.74408,0.075,7.305988]),SFVec3f([12.48621,0.075,8.054074]),SFVec3f([12.68321,0.075,8.01392]),SFVec3f([12.8802,0.075,7.973765]),SFVec3f([12.62233,0.075,8.721852]),SFVec3f([12.81932,0.075,8.681698]),SFVec3f([13.01632,0.075,8.641543])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.93651,0.075,7.470599]),SFVec3f([12.3305,0.075,7.390291]),SFVec3f([12.20875,0.075,8.806155]),SFVec3f([12.60273,0.075,8.725846])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.60597,0.075,6.628411]),SFVec3f([12.74009,0.075,7.286391]),SFVec3f([12.20218,0.075,6.710717]),SFVec3f([12.3363,0.075,7.368696]),SFVec3f([11.7984,0.075,6.793023]),SFVec3f([11.93252,0.075,7.451002])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([12.46786,0.075,5.950835]),SFVec3f([12.60197,0.075,6.608814]),SFVec3f([11.66028,0.075,6.115446]),SFVec3f([11.7944,0.075,6.773426])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.79764,0.075,4.675991]),SFVec3f([11.99463,0.075,4.635836]),SFVec3f([12.19163,0.075,4.595682]),SFVec3f([11.93376,0.075,5.343768]),SFVec3f([12.13075,0.075,5.303614]),SFVec3f([12.32774,0.075,5.26346]),SFVec3f([12.06987,0.075,6.011546]),SFVec3f([12.26687,0.075,5.971392]),SFVec3f([12.46386,0.075,5.931238])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.38406,0.075,4.760293]),SFVec3f([11.58105,0.075,4.720139]),SFVec3f([11.77804,0.075,4.679985]),SFVec3f([11.52017,0.075,5.428071]),SFVec3f([11.71717,0.075,5.387917]),SFVec3f([11.91416,0.075,5.347763]),SFVec3f([11.65629,0.075,6.095849]),SFVec3f([11.85328,0.075,6.055695]),SFVec3f([12.05028,0.075,6.015541])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.38006,0.075,4.740696]),SFVec3f([11.24594,0.075,4.082717]),SFVec3f([12.18763,0.075,4.576085]),SFVec3f([12.05351,0.075,3.918105])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.9154,0.075,3.240529]),SFVec3f([12.04952,0.075,3.898509]),SFVec3f([11.10783,0.075,3.40514]),SFVec3f([11.24195,0.075,4.06312])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.24518,0.075,1.965685]),SFVec3f([11.63917,0.075,1.885376]),SFVec3f([11.51742,0.075,3.30124]),SFVec3f([11.9114,0.075,3.220932])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.8316,0.075,2.049988]),SFVec3f([11.02859,0.075,2.009833]),SFVec3f([11.22559,0.075,1.969679]),SFVec3f([10.96772,0.075,2.717766]),SFVec3f([11.16471,0.075,2.677611]),SFVec3f([11.3617,0.075,2.637457]),SFVec3f([11.10383,0.075,3.385544]),SFVec3f([11.30083,0.075,3.345389]),SFVec3f([11.49782,0.075,3.305235])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([13.45652,0.075,17.04097]),SFVec3f([13.85051,0.075,16.96066]),SFVec3f([13.59264,0.075,17.70875]),SFVec3f([13.98663,0.075,17.62844]),SFVec3f([13.72876,0.075,18.37653]),SFVec3f([14.12274,0.075,18.29622])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([11.2467,0.075,6.199749]),SFVec3f([11.44369,0.075,6.159595]),SFVec3f([11.64069,0.075,6.119441]),SFVec3f([11.38282,0.075,6.867527]),SFVec3f([11.57981,0.075,6.827373]),SFVec3f([11.7768,0.075,6.787219]),SFVec3f([11.51893,0.075,7.535305]),SFVec3f([11.71593,0.075,7.495151]),SFVec3f([11.91292,0.075,7.454997])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.83312,0.075,6.284052]),SFVec3f([11.03011,0.075,6.243898]),SFVec3f([11.2271,0.075,6.203744]),SFVec3f([10.96923,0.075,6.95183]),SFVec3f([11.16623,0.075,6.911676]),SFVec3f([11.36322,0.075,6.871522]),SFVec3f([11.10535,0.075,7.619608]),SFVec3f([11.30234,0.075,7.579454]),SFVec3f([11.49934,0.075,7.539299])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.82912,0.075,6.264455]),SFVec3f([10.695,0.075,5.606476]),SFVec3f([11.63669,0.075,6.099844]),SFVec3f([11.50257,0.075,5.441864])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.69101,0.075,5.586879]),SFVec3f([10.55689,0.075,4.928899]),SFVec3f([11.49858,0.075,5.422267]),SFVec3f([11.36446,0.075,4.764288])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.69424,0.075,3.489444]),SFVec3f([11.08823,0.075,3.409135]),SFVec3f([10.96648,0.075,4.824999]),SFVec3f([11.36047,0.075,4.744691])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.28066,0.075,3.573746]),SFVec3f([10.47765,0.075,3.533592]),SFVec3f([10.67465,0.075,3.493438]),SFVec3f([10.41678,0.075,4.241524]),SFVec3f([10.61377,0.075,4.20137]),SFVec3f([10.81076,0.075,4.161216]),SFVec3f([10.55289,0.075,4.909302]),SFVec3f([10.74989,0.075,4.869148]),SFVec3f([10.94688,0.075,4.828994])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.27667,0.075,3.554149]),SFVec3f([10.14255,0.075,2.89617]),SFVec3f([11.08424,0.075,3.389538]),SFVec3f([10.95012,0.075,2.731559])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.13855,0.075,2.876573]),SFVec3f([10.00443,0.075,2.218594]),SFVec3f([10.94612,0.075,2.711962]),SFVec3f([10.812,0.075,2.053982])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.14007,0.075,7.110638]),SFVec3f([10.00595,0.075,6.452658]),SFVec3f([10.94764,0.075,6.946026]),SFVec3f([10.81352,0.075,6.288047])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.1433,0.075,5.013202]),SFVec3f([10.53729,0.075,4.932894]),SFVec3f([10.27942,0.075,5.68098]),SFVec3f([10.67341,0.075,5.600672]),SFVec3f([10.41554,0.075,6.348758]),SFVec3f([10.80952,0.075,6.26845])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.72972,0.075,5.097506]),SFVec3f([10.12371,0.075,5.017197]),SFVec3f([9.865837,0.075,5.765283]),SFVec3f([10.25982,0.075,5.684975]),SFVec3f([10.00195,0.075,6.433061]),SFVec3f([10.39594,0.075,6.352753])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([10.39918,0.075,4.255318]),SFVec3f([10.5333,0.075,4.913297]),SFVec3f([9.591606,0.075,4.419929]),SFVec3f([9.725726,0.075,5.077909])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.587612,0.075,4.400332]),SFVec3f([9.453492,0.075,3.742352]),SFVec3f([10.39518,0.075,4.235721]),SFVec3f([10.26106,0.075,3.577741])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.590848,0.075,2.302897]),SFVec3f([9.984836,0.075,2.222588]),SFVec3f([9.863082,0.075,3.638453]),SFVec3f([10.25707,0.075,3.558144])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.177264,0.075,2.3872]),SFVec3f([9.571251,0.075,2.306891]),SFVec3f([9.449498,0.075,3.722755]),SFVec3f([9.843485,0.075,3.642447])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.17327,0.075,2.367603]),SFVec3f([9.03915,0.075,1.709623]),SFVec3f([9.577055,0.075,2.285297]),SFVec3f([9.442936,0.075,1.627318]),SFVec3f([9.980841,0.075,2.202991]),SFVec3f([9.846722,0.075,1.545012])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.174786,0.075,6.601667]),SFVec3f([9.040667,0.075,5.943688]),SFVec3f([9.982357,0.075,6.437056]),SFVec3f([9.848237,0.075,5.779077])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.036672,0.075,5.924091]),SFVec3f([8.902553,0.075,5.266111]),SFVec3f([9.844243,0.075,5.75948]),SFVec3f([9.710123,0.075,5.1015])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.039908,0.075,3.826656]),SFVec3f([9.236902,0.075,3.786501]),SFVec3f([9.433895,0.075,3.746347]),SFVec3f([9.176025,0.075,4.494433]),SFVec3f([9.373018,0.075,4.454279]),SFVec3f([9.570012,0.075,4.414125]),SFVec3f([9.312142,0.075,5.162211]),SFVec3f([9.509135,0.075,5.122057]),SFVec3f([9.706129,0.075,5.081903])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([9.292545,0.075,5.166206]),SFVec3f([8.898558,0.075,5.246514]),SFVec3f([9.156428,0.075,4.498428]),SFVec3f([8.762442,0.075,4.578736]),SFVec3f([9.020311,0.075,3.83065]),SFVec3f([8.626325,0.075,3.910959])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.62233,0.075,3.891361]),SFVec3f([8.488211,0.075,3.233382]),SFVec3f([9.429901,0.075,3.72675]),SFVec3f([9.295781,0.075,3.068771])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.484216,0.075,3.213785]),SFVec3f([8.350097,0.075,2.555806]),SFVec3f([9.291787,0.075,3.049174]),SFVec3f([9.157667,0.075,2.391194])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.487453,0.075,1.11635]),SFVec3f([8.684446,0.075,1.076196]),SFVec3f([8.881439,0.075,1.036041]),SFVec3f([8.623569,0.075,1.784128]),SFVec3f([8.820562,0.075,1.743973]),SFVec3f([9.017556,0.075,1.703819]),SFVec3f([8.759686,0.075,2.451906]),SFVec3f([8.956679,0.075,2.411752]),SFVec3f([9.153673,0.075,2.371597])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.073869,0.075,1.200653]),SFVec3f([8.270862,0.075,1.160499]),SFVec3f([8.467855,0.075,1.120344]),SFVec3f([8.209986,0.075,1.868431]),SFVec3f([8.406979,0.075,1.828277]),SFVec3f([8.603972,0.075,1.788122]),SFVec3f([8.346102,0.075,2.536209]),SFVec3f([8.543096,0.075,2.496054]),SFVec3f([8.740088,0.075,2.4559])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.743325,0.075,0.3584649]),SFVec3f([8.810385,0.075,0.6874546]),SFVec3f([8.877445,0.075,1.016444]),SFVec3f([7.935755,0.075,0.5230764]),SFVec3f([8.002814,0.075,0.8520661]),SFVec3f([8.069874,0.075,1.181056])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.488969,0.075,5.350414]),SFVec3f([8.882956,0.075,5.270106]),SFVec3f([8.761202,0.075,6.68597]),SFVec3f([9.155189,0.075,6.605662])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.741605,0.075,6.689965]),SFVec3f([8.544612,0.075,6.730119]),SFVec3f([8.347618,0.075,6.770273]),SFVec3f([8.605488,0.075,6.022187]),SFVec3f([8.408495,0.075,6.062341]),SFVec3f([8.211501,0.075,6.102495]),SFVec3f([8.469372,0.075,5.354409]),SFVec3f([8.272378,0.075,5.394563]),SFVec3f([8.075385,0.075,5.434718])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.07139,0.075,5.415121]),SFVec3f([7.937271,0.075,4.757141]),SFVec3f([8.878961,0.075,5.250509]),SFVec3f([8.744842,0.075,4.59253])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.933276,0.075,4.737544]),SFVec3f([7.799157,0.075,4.079565]),SFVec3f([8.337062,0.075,4.655238]),SFVec3f([8.202942,0.075,3.997259]),SFVec3f([8.740847,0.075,4.572933]),SFVec3f([8.606728,0.075,3.914953])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.936512,0.075,2.640109]),SFVec3f([8.3305,0.075,2.5598]),SFVec3f([8.208746,0.075,3.975665]),SFVec3f([8.602733,0.075,3.895356])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([8.189149,0.075,3.979659]),SFVec3f([7.992156,0.075,4.019814]),SFVec3f([7.795162,0.075,4.059968]),SFVec3f([8.053032,0.075,3.311881]),SFVec3f([7.856039,0.075,3.352035]),SFVec3f([7.659045,0.075,3.39219]),SFVec3f([7.916915,0.075,2.644103]),SFVec3f([7.719922,0.075,2.684258]),SFVec3f([7.522929,0.075,2.724412])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.518934,0.075,2.704815]),SFVec3f([7.384815,0.075,2.046835]),SFVec3f([8.326505,0.075,2.540203]),SFVec3f([8.192386,0.075,1.882224])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.38082,0.075,2.027238]),SFVec3f([7.246701,0.075,1.369259]),SFVec3f([8.188391,0.075,1.862627]),SFVec3f([8.054272,0.075,1.204647])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.384057,0.075,-0.07019704]),SFVec3f([7.58105,0.075,-0.1103513]),SFVec3f([7.778044,0.075,-0.1505055]),SFVec3f([7.520174,0.075,0.5975809]),SFVec3f([7.717167,0.075,0.5574267]),SFVec3f([7.91416,0.075,0.5172724]),SFVec3f([7.65629,0.075,1.265359]),SFVec3f([7.853283,0.075,1.225205]),SFVec3f([8.050277,0.075,1.18505])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.970473,0.075,0.01410597]),SFVec3f([7.36446,0.075,-0.06620247]),SFVec3f([7.242706,0.075,1.349662]),SFVec3f([7.636693,0.075,1.269353])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.382336,0.075,6.261303]),SFVec3f([7.315277,0.075,5.932313]),SFVec3f([7.248217,0.075,5.603323]),SFVec3f([7.786121,0.075,6.178997]),SFVec3f([7.719062,0.075,5.850008]),SFVec3f([7.652002,0.075,5.521018]),SFVec3f([8.189907,0.075,6.096692]),SFVec3f([8.122848,0.075,5.767702]),SFVec3f([8.055788,0.075,5.438712])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.385573,0.075,4.163867]),SFVec3f([7.77956,0.075,4.083559]),SFVec3f([7.657806,0.075,5.499424]),SFVec3f([8.051793,0.075,5.419115])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.971989,0.075,4.24817]),SFVec3f([7.365976,0.075,4.167862]),SFVec3f([7.244222,0.075,5.583726]),SFVec3f([7.638209,0.075,5.503418])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.967994,0.075,4.228573]),SFVec3f([6.833875,0.075,3.570594]),SFVec3f([7.775565,0.075,4.063962]),SFVec3f([7.641446,0.075,3.405983])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.82988,0.075,3.550997]),SFVec3f([6.695761,0.075,2.893018]),SFVec3f([7.637451,0.075,3.386386]),SFVec3f([7.503332,0.075,2.728406])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.499337,0.075,2.708809]),SFVec3f([7.302343,0.075,2.748963]),SFVec3f([7.10535,0.075,2.789118]),SFVec3f([7.36322,0.075,2.041031]),SFVec3f([7.166227,0.075,2.081186]),SFVec3f([6.969234,0.075,2.12134]),SFVec3f([7.227104,0.075,1.373253]),SFVec3f([7.03011,0.075,1.413408]),SFVec3f([6.833117,0.075,1.453562])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.419533,0.075,1.537865]),SFVec3f([6.813519,0.075,1.457556]),SFVec3f([6.691766,0.075,2.873421]),SFVec3f([7.085753,0.075,2.793112])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([7.08899,0.075,0.695677]),SFVec3f([7.223109,0.075,1.353656]),SFVec3f([6.281419,0.075,0.8602884]),SFVec3f([6.415538,0.075,1.518268])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.277424,0.075,0.8406914]),SFVec3f([6.143305,0.075,0.182712]),SFVec3f([7.084995,0.075,0.6760799]),SFVec3f([6.950876,0.075,0.01810054])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.417054,0.075,5.752332]),SFVec3f([6.282935,0.075,5.094353]),SFVec3f([7.224625,0.075,5.587721]),SFVec3f([7.090506,0.075,4.929741])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.27894,0.075,5.074756]),SFVec3f([6.144821,0.075,4.416777]),SFVec3f([6.682726,0.075,4.99245]),SFVec3f([6.548606,0.075,4.334471]),SFVec3f([7.086511,0.075,4.910144]),SFVec3f([6.952392,0.075,4.252165])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.282177,0.075,2.977321]),SFVec3f([6.676164,0.075,2.897012]),SFVec3f([6.55441,0.075,4.312877]),SFVec3f([6.948397,0.075,4.232568])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.868593,0.075,3.061624]),SFVec3f([6.26258,0.075,2.981315]),SFVec3f([6.140826,0.075,4.39718]),SFVec3f([6.534813,0.075,4.316871])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.53805,0.075,2.219436]),SFVec3f([6.672169,0.075,2.877415]),SFVec3f([5.730479,0.075,2.384047]),SFVec3f([5.864598,0.075,3.042027])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.726484,0.075,2.36445]),SFVec3f([5.592365,0.075,1.706471]),SFVec3f([6.534055,0.075,2.199839]),SFVec3f([6.399936,0.075,1.541859])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([6.395941,0.075,1.522262]),SFVec3f([6.001954,0.075,1.602571]),SFVec3f([6.123708,0.075,0.1867066]),SFVec3f([5.729721,0.075,0.267015])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.316137,0.075,0.351318]),SFVec3f([5.710124,0.075,0.2710096]),SFVec3f([5.58837,0.075,1.686874]),SFVec3f([5.982357,0.075,1.606565])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.731237,0.075,4.50108]),SFVec3f([6.125224,0.075,4.420771]),SFVec3f([6.00347,0.075,5.836636]),SFVec3f([6.397457,0.075,5.756327])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.983873,0.075,5.84063]),SFVec3f([5.589886,0.075,5.920938]),SFVec3f([5.71164,0.075,4.505074]),SFVec3f([5.317653,0.075,4.585382])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.313658,0.075,4.565785]),SFVec3f([5.179539,0.075,3.907806]),SFVec3f([6.121229,0.075,4.401174]),SFVec3f([5.98711,0.075,3.743195])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.175544,0.075,3.888209]),SFVec3f([5.041425,0.075,3.23023]),SFVec3f([5.983115,0.075,3.723598]),SFVec3f([5.848996,0.075,3.065618])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.178781,0.075,1.790774]),SFVec3f([5.375774,0.075,1.75062]),SFVec3f([5.572768,0.075,1.710465]),SFVec3f([5.314898,0.075,2.458552]),SFVec3f([5.511891,0.075,2.418398]),SFVec3f([5.708885,0.075,2.378243]),SFVec3f([5.451015,0.075,3.12633]),SFVec3f([5.648008,0.075,3.086175]),SFVec3f([5.845001,0.075,3.046021])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.765197,0.075,1.875077]),SFVec3f([5.159184,0.075,1.794768]),SFVec3f([5.03743,0.075,3.210633]),SFVec3f([5.431417,0.075,3.130324])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([5.434654,0.075,1.032889]),SFVec3f([5.568773,0.075,1.690868]),SFVec3f([4.627083,0.075,1.1975]),SFVec3f([4.761202,0.075,1.85548])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.623088,0.075,1.177903]),SFVec3f([4.488969,0.075,0.519924]),SFVec3f([5.430659,0.075,1.013292]),SFVec3f([5.29654,0.075,0.3553126])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.762719,0.075,6.089544]),SFVec3f([4.628599,0.075,5.431565]),SFVec3f([5.570289,0.075,5.924933]),SFVec3f([5.43617,0.075,5.266953])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.624605,0.075,5.411968]),SFVec3f([4.557545,0.075,5.082978]),SFVec3f([4.490485,0.075,4.753989]),SFVec3f([5.432175,0.075,5.247356]),SFVec3f([5.365116,0.075,4.918367]),SFVec3f([5.298056,0.075,4.589377])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.627841,0.075,3.314533]),SFVec3f([5.021828,0.075,3.234224]),SFVec3f([4.900074,0.075,4.650089]),SFVec3f([5.294061,0.075,4.56978])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.214257,0.075,3.398836]),SFVec3f([4.608244,0.075,3.318527]),SFVec3f([4.350374,0.075,4.066614]),SFVec3f([4.744361,0.075,3.986305]),SFVec3f([4.486491,0.075,4.734392]),SFVec3f([4.880477,0.075,4.654083])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.210262,0.075,3.379239]),SFVec3f([4.076143,0.075,2.721259]),SFVec3f([5.017833,0.075,3.214627]),SFVec3f([4.883714,0.075,2.556648])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.7456,0.075,1.879071]),SFVec3f([4.879719,0.075,2.537051]),SFVec3f([4.341815,0.075,1.961377]),SFVec3f([4.475934,0.075,2.619357]),SFVec3f([3.938029,0.075,2.043683]),SFVec3f([4.072148,0.075,2.701662])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.741605,0.075,1.859474]),SFVec3f([4.347619,0.075,1.939783]),SFVec3f([4.469372,0.075,0.5239186]),SFVec3f([4.075385,0.075,0.604227])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.328022,0.075,1.943777]),SFVec3f([3.934035,0.075,2.024086]),SFVec3f([4.055788,0.075,0.6082216]),SFVec3f([3.661801,0.075,0.68853])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.331258,0.075,-0.1536579]),SFVec3f([4.465377,0.075,0.5043216]),SFVec3f([3.523687,0.075,0.0109536]),SFVec3f([3.657807,0.075,0.668933])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.076901,0.075,4.838292]),SFVec3f([4.470888,0.075,4.757983]),SFVec3f([4.349134,0.075,6.173848]),SFVec3f([4.743122,0.075,6.093539])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.663317,0.075,4.922595]),SFVec3f([4.057304,0.075,4.842286]),SFVec3f([3.935551,0.075,6.258151]),SFVec3f([4.329537,0.075,6.177842])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.659323,0.075,4.902997]),SFVec3f([3.525203,0.075,4.245018]),SFVec3f([4.063108,0.075,4.820692]),SFVec3f([3.928989,0.075,4.162713]),SFVec3f([4.466894,0.075,4.738386]),SFVec3f([4.332774,0.075,4.080407])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([4.19466,0.075,3.40283]),SFVec3f([4.32878,0.075,4.06081]),SFVec3f([3.387089,0.075,3.567442]),SFVec3f([3.521209,0.075,4.225421])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.524445,0.075,2.127986]),SFVec3f([3.918432,0.075,2.047678]),SFVec3f([3.796679,0.075,3.463542]),SFVec3f([4.190666,0.075,3.383233])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.777081,0.075,3.467536]),SFVec3f([3.383095,0.075,3.547845]),SFVec3f([3.504848,0.075,2.13198]),SFVec3f([3.110861,0.075,2.212289])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.106867,0.075,2.192692]),SFVec3f([2.972747,0.075,1.534712]),SFVec3f([3.914438,0.075,2.02808]),SFVec3f([3.780318,0.075,1.370101])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.968753,0.075,1.515115]),SFVec3f([2.834633,0.075,0.8571361]),SFVec3f([3.372538,0.075,1.43281]),SFVec3f([3.238419,0.075,0.7748303]),SFVec3f([3.776324,0.075,1.350504]),SFVec3f([3.642204,0.075,0.6925246])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.63821,0.075,0.6729276]),SFVec3f([3.441216,0.075,0.7130818]),SFVec3f([3.244223,0.075,0.753236]),SFVec3f([3.502093,0.075,0.005149654]),SFVec3f([3.305099,0.075,0.04530387]),SFVec3f([3.108106,0.075,0.08545809]),SFVec3f([3.365976,0.075,-0.6626283]),SFVec3f([3.168983,0.075,-0.622474]),SFVec3f([2.971989,0.075,-0.5823198])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.558405,0.075,-0.4980168]),SFVec3f([2.952392,0.075,-0.5783253]),SFVec3f([2.830639,0.075,0.837539]),SFVec3f([3.224626,0.075,0.7572306])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.970269,0.075,5.74918]),SFVec3f([2.903209,0.075,5.42019]),SFVec3f([2.836149,0.075,5.091201]),SFVec3f([3.374054,0.075,5.666874]),SFVec3f([3.306994,0.075,5.337884]),SFVec3f([3.239935,0.075,5.008895]),SFVec3f([3.77784,0.075,5.584569]),SFVec3f([3.71078,0.075,5.255579]),SFVec3f([3.64372,0.075,4.926589])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.973505,0.075,3.651745]),SFVec3f([3.367492,0.075,3.571436]),SFVec3f([3.245739,0.075,4.9873]),SFVec3f([3.639726,0.075,4.906992])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.559921,0.075,3.736048]),SFVec3f([2.953908,0.075,3.655739]),SFVec3f([2.832155,0.075,5.071604]),SFVec3f([3.226142,0.075,4.991295])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.229378,0.075,2.89386]),SFVec3f([3.363497,0.075,3.551839]),SFVec3f([2.421807,0.075,3.058471]),SFVec3f([2.555927,0.075,3.716451])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.417813,0.075,3.038874]),SFVec3f([2.283693,0.075,2.380895]),SFVec3f([3.225384,0.075,2.874263]),SFVec3f([3.091264,0.075,2.216284])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([3.08727,0.075,2.196687]),SFVec3f([2.693283,0.075,2.276995]),SFVec3f([2.815036,0.075,0.8611306]),SFVec3f([2.421049,0.075,0.941439])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.673686,0.075,2.280989]),SFVec3f([2.279699,0.075,2.361298]),SFVec3f([2.401452,0.075,0.9454336]),SFVec3f([2.007465,0.075,1.025742])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([2.003471,0.075,1.006145]),SFVec3f([1.869351,0.075,0.3481656]),SFVec3f([2.811042,0.075,0.8415336]),SFVec3f([2.676922,0.075,0.1835542])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.866873,0.075,4.562633]),SFVec3f([1.732753,0.075,3.904654]),SFVec3f([2.270658,0.075,4.480328]),SFVec3f([2.136539,0.075,3.822348]),SFVec3f([2.674444,0.075,4.398022]),SFVec3f([2.540324,0.075,3.740042])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.870109,0.075,2.465198]),SFVec3f([2.067103,0.075,2.425044]),SFVec3f([2.264096,0.075,2.38489]),SFVec3f([2.006226,0.075,3.132976]),SFVec3f([2.203219,0.075,3.092822]),SFVec3f([2.400213,0.075,3.052667]),SFVec3f([2.142343,0.075,3.800754]),SFVec3f([2.339336,0.075,3.7606]),SFVec3f([2.53633,0.075,3.720445])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.456525,0.075,2.549501]),SFVec3f([1.850512,0.075,2.469193]),SFVec3f([1.728759,0.075,3.885057]),SFVec3f([2.122746,0.075,3.804748])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.452531,0.075,2.529904]),SFVec3f([1.385471,0.075,2.200914]),SFVec3f([1.318411,0.075,1.871925]),SFVec3f([1.856316,0.075,2.447598]),SFVec3f([1.789257,0.075,2.118608]),SFVec3f([1.722197,0.075,1.789619]),SFVec3f([2.260102,0.075,2.365293]),SFVec3f([2.193042,0.075,2.036303]),SFVec3f([2.125982,0.075,1.707313])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(4), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.314417,0.075,1.852327]),SFVec3f([1.180297,0.075,1.194348]),SFVec3f([1.718202,0.075,1.770022]),SFVec3f([1.584083,0.075,1.112042]),SFVec3f([2.121988,0.075,1.687716]),SFVec3f([1.987868,0.075,1.029737])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([1.983874,0.075,1.01014]),SFVec3f([1.78688,0.075,1.050294]),SFVec3f([1.589887,0.075,1.090448]),SFVec3f([1.847757,0.075,0.3423617]),SFVec3f([1.650764,0.075,0.3825159]),SFVec3f([1.45377,0.075,0.4226701]),SFVec3f([1.71164,0.075,-0.3254162]),SFVec3f([1.514647,0.075,-0.285262]),SFVec3f([1.317653,0.075,-0.2451078])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([0.9040694,0.075,-0.1608048]),SFVec3f([1.101063,0.075,-0.200959]),SFVec3f([1.298056,0.075,-0.2411132]),SFVec3f([1.040186,0.075,0.5069731]),SFVec3f([1.23718,0.075,0.4668189]),SFVec3f([1.434173,0.075,0.4266647]),SFVec3f([1.176303,0.075,1.174751]),SFVec3f([1.373296,0.075,1.134597]),SFVec3f([1.57029,0.075,1.094443])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(4), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1), SFInt32(7), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(7), SFInt32(3), SFInt32(6), SFInt32(-1), SFInt32(8), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(8), SFInt32(4), SFInt32(7), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([0.7667135,0.075,1.278651]),SFVec3f([0.9637069,0.075,1.238497]),SFVec3f([1.1607,0.075,1.198343]),SFVec3f([0.9028302,0.075,1.946429]),SFVec3f([1.099824,0.075,1.906275]),SFVec3f([1.296817,0.075,1.866121]),SFVec3f([1.038947,0.075,2.614207]),SFVec3f([1.23594,0.075,2.574053]),SFVec3f([1.432934,0.075,2.533899])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([0.349135,0.075,1.343357]),SFVec3f([0.2150155,0.075,0.6853777]),SFVec3f([1.156706,0.075,1.178746]),SFVec3f([1.022586,0.075,0.5207662])])))),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                      shininess_ : 0)),
              geometry_ : 
                IndexedFaceSet(
                  solid_ : false,
                  texCoordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coordIndex_ : MFInt32([SFInt32(3), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(3), SFInt32(0), SFInt32(2), SFInt32(-1)]),
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([0.211021,0.075,0.6657807]),SFVec3f([0.07690154,0.075,0.007801231]),SFVec3f([1.018592,0.075,0.5011692]),SFVec3f([0.8844724,0.075,-0.1568102])]))))]));
void main() { exit(0); }
