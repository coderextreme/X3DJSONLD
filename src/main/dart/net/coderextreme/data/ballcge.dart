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
              name_ : SFString('Shaders'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('EnvironmentalEffects'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Rendering'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Texturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('CubeMapTexturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d')),

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
              name_ : SFString('description'),
              content_ : SFString('a prismatic sphere'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ball.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")]),
              avatarSize_ : MFFloat([SFFloat(0.25), SFFloat(1.60000002384186), SFFloat(0.75)])),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)]),
              description_ : SFString('Tour Views')),

            Background(
              topUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]),
              backUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              leftUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              frontUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              rightUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              bottomUrl_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),

            Transform(
              child_ : 
                Shape(
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.699999988079071), SFDouble(0.699999988079071), SFDouble(0.699999988079071)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])),
                      shaders_ : 
                        ComposedShader(
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.980000019073486 1 1.03299999237061')),

                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("initializeOnly"),
                              children_ : [
                                ComposedCubeMapTexture(
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                                  topTexture_ : 
                                    ImageTexture(
                                      url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])))]),

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
                              url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              DEF_ : SFString('commonfs'),
                              url_ : MFString([SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs")]))))))]));
void main() { exit(0); }
