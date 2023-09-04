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
              content_ : SFString('geo.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d')),
          component_ : 
            component(
              name_ : SFString('Scripting'),
              level_ : 1)],
          component_ : 
            component(
              name_ : SFString('EnvironmentalEffects'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Shaders'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('CubeMapTexturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Texturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Rendering'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Shape'),
              level_ : 4),
          component_ : 
            component(
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1)),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              DEF_ : SFString('Tour'),
              description_ : SFString('Tour Views')),

            Background(
              frontUrl_ : MFString([SFString("../resources/images/bFR.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")]),
              backUrl_ : MFString([SFString("../resources/images/bBK.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")]),
              leftUrl_ : MFString([SFString("../resources/images/bLF.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")]),
              rightUrl_ : MFString([SFString("../resources/images/bRT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")]),
              topUrl_ : MFString([SFString("../resources/images/bTP.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/bBT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")])),

            Transform(
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])),
                      texture_ : 
                        ComposedCubeMapTexture(
                          DEF_ : SFString('texture')),
                      shaders_ : 
                        ComposedShader(
                          language_ : SFString('GLSL'),
                          parts_ : 
                            ShaderPart(
                              url_ : MFString([SFString("../shaders/x3dom.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")])),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              DEF_ : SFString('common'),
                              url_ : MFString([SFString("../shaders/common.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")])),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('chromaticDispertion'),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFNode"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('cube'),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('bias'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('scale'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('power'),
                              value_ : SFString('2'))]),
                      shaders_ : 
                        ComposedShader(
                          language_ : SFString('GLSL'),
                          parts_ : 
                            ShaderPart(
                              url_ : MFString([SFString("../shaders/x_ite.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")])),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/x_ite.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")])),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('chromaticDispertion'),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFNode"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('cube'),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('bias'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('scale'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('power'),
                              value_ : SFString('2'))])),
                  geometry_ : 
                    Sphere()))]));
void main() { exit(0); }
