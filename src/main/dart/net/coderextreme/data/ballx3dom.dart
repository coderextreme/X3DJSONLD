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
              content_ : SFString('ballx3dom.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d')),
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
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1)),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ball.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Tour Views')),

            Background(
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),

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
                              value_ : SFString('2'))])),
                  geometry_ : 
                    Sphere()))]));
void main() { exit(0); }
