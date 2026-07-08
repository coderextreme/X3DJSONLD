// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          /*<component name='Shape' level='4'></component>*/
          component_ : 
            component(
              name_ : SFString('Scripting'),
              level_ : 1),
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
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1),
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

            meta(
              name_ : SFString('description'),
              content_ : SFString('a sphere'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              DEF_ : SFString('Tour'),
              description_ : SFString('Tour Views')),
          /*Viewpoint position='0 0 4' description='sphere in road'/*/

            Background(
              backUrl_ : MFString([SFString("../resources/images/bBK.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/bBT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")]),
              frontUrl_ : MFString([SFString("../resources/images/bFR.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")]),
              leftUrl_ : MFString([SFString("../resources/images/bLF.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")]),
              rightUrl_ : MFString([SFString("../resources/images/bRT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")]),
              topUrl_ : MFString([SFString("../resources/images/bTP.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")])),

            Transform(
              child_ : 
                Shape(
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])),
                      texture_ : 
                        ComposedCubeMapTexture(
                          DEF_ : SFString('texture'),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bBK.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bBT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bFR.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bLF.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bRT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/bTP.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")]))),
                      shaders_ : 
                        ComposedShader(
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('bias'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('scale'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('power'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('2')),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/x3dom.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              DEF_ : SFString('common'),
                              url_ : MFString([SFString("../shaders/common.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")]))),
                      shaders_ : 
                        ComposedShader(
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("initializeOnly"),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('bias'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('scale'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('power'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('2')),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/x_ite.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/x_ite.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]))))))]));
void main() { exit(0); }
