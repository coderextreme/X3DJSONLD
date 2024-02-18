// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
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
          /*component name='Shaders' level='1'></component*/
          /*component name='CubeMapTexturing' level='1'></component*/
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ball.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a prismatic sphere'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ball.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Tour Views'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Background(
              backUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

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
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]))),
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
                              url_ : MFString([SFString("../shaders/castle.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              DEF_ : SFString('commonfs'),
                              url_ : MFString([SFString("../shaders/castle.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs")]))))))]));
void main() { exit(0); }
