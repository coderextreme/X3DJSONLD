// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
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
          /*<component name='Shape' level='4'></component>*/
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('bumpyfreewrl.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A flower')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/personal/bumpyfreewrl.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('bumpyfreewrl.x3d')),

            NavigationInfo(),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(40)]),
              description_ : SFString('Transparent rose')),
          /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/

            Background(
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

            Transform(
              child_ : 
                Shape(
                  geometry_ : 
                    Sphere(
                      radius_ : 5),
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
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('freewrlShader'),
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('fw_textureCoordGenType'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('bias'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('scale'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('power'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('2')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('a'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('10')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('b'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('1')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('c'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('d'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('5')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('tdelta'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('pdelta'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/freewrl_flowers_chromatic.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/freewrl_bubbles.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")]))))))]));
void main() { exit(0); }
