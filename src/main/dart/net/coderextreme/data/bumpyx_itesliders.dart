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
          component_ : 
            component(
              name_ : SFString('DIS'),
              level_ : 2),
          /*<component name='Shape' level='4'></component>*/
          /*Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L*/
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('bumpyx_itesliders.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('*enter description here, short-sentence summaries preferred*')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Doug Sanden, Christoph Valentin, John Carlson')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('*if manually translating VRML-to-X3D, enter name of person translating here*')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('*enter date of initial version here*')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('*enter date of translation here*')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('*enter date of latest revision here*')),

            meta(
              name_ : SFString('version'),
              content_ : SFString('*enter version here, if any*')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('*enter reference citation or relative/online url here*')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('*enter additional url/bibliographic reference information here*')),

            meta(
              name_ : SFString('requires'),
              content_ : SFString('*enter reference resource here if required to support function, delivery, or coherence of content*')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024')),

            meta(
              name_ : SFString('drawing'),
              content_ : SFString('*enter drawing filename/url here*')),

            meta(
              name_ : SFString('MovingImage'),
              content_ : SFString('*enter movie filename/url here*')),

            meta(
              name_ : SFString('photo'),
              content_ : SFString('*enter photo filename/url here*')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('*enter subject keywords here*')),

            meta(
              name_ : SFString('accessRights'),
              content_ : SFString('*enter permission statements or url here*')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('PSPad, http://www.pspad.com/')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('license.html'))]),
      /*\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"*/
      Scene_ : 
        Scene(
          /*LayerSet with two layers, navigation happens in layer 1*/
          layerSet_ : 
            LayerSet(
              activeLayer_ : 1,
              order_ : MFInt32([SFInt32(1), SFInt32(2)]),
              /*the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"*/
              /*the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)*/
              layers_ : 
                Layer(
                  pickable_ : true,
                  objectType_ : MFString([SFString("ALL")]),
                  /*basic nodes, which might be present in any scene*/
                  children_ : [
                    NavigationInfo(
                      type_ : MFString([SFString("EXAMINE")]),
                      avatarSize_ : MFFloat([SFFloat(0.25), SFFloat(1.75), SFFloat(0.75)])),

                    DirectionalLight(
                      ambientIntensity_ : 0.2,
                      direction_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)])),

                    DirectionalLight(
                      ambientIntensity_ : 0.2,
                      direction_ : SFVec3f([SFDouble(-1), SFDouble(-0.1), SFDouble(-1)])),

                    Viewpoint(
                      description_ : SFString('My Overview'),
                      fieldOfView_ : 1.570796,
                      position_ : SFVec3f([SFDouble(0), SFDouble(1.75), SFDouble(60)])),
                  /*this group contains the red/green/blue 3D crosshair*/

                    Group(
                      /*Arrow X*/
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(25), SFDouble(0), SFDouble(0)]),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  DEF_ : SFString('Shaft'),
                                  radius_ : 0.35,
                                  height_ : 50),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('RED'),
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(50), SFDouble(0), SFDouble(0)]),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(-1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cone(
                                  DEF_ : SFString('Tip'),
                                  bottomRadius_ : 0.8,
                                  height_ : 3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('RED'))))),
                      /*Arrow Y*/

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(25), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('Shaft')),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('GREEN'),
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(50), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cone(
                                  USE_ : SFString('Tip')),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('GREEN'))))),
                      /*Arrow Z*/

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(25)]),
                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  USE_ : SFString('Shaft')),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('BLUE'),
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]),
                                      emissiveColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(50)]),
                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cone(
                                  USE_ : SFString('Tip')),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('BLUE')))))]),
                  /*the model that is being reviewed by the users of this scene*/

                    Transform(
                      DEF_ : SFString('FlowerTransform'),
                      /*<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />*/
                      /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/
                      children_ : [
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
                                  radius_ : 40),
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
                                      DEF_ : SFString('x_iteShader'),
                                      language_ : SFString('GLSL'),
                                      field_ : [
                                        field(
                                          type_ : SFString("SFVec3f"),
                                          name_ : SFString('chromaticDispertion'),
                                          accessType_ : SFString("inputOnly"),
                                          value_ : SFString('0.98 1 1.033')),

                                        field(
                                          type_ : SFString("SFNode"),
                                          name_ : SFString('cube'),
                                          accessType_ : SFString("inputOnly"),
                                          children_ : [
                                            ComposedCubeMapTexture(
                                              USE_ : SFString('texture'))]),

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
                                          value_ : SFString('15')),

                                        field(
                                          type_ : SFString("SFFloat"),
                                          name_ : SFString('b'),
                                          accessType_ : SFString("inputOutput"),
                                          value_ : SFString('5')),

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
                                          url_ : MFString([SFString("../shaders/x_ite_flowers_chromatic.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]))],
                                      parts_ : 
                                        ShaderPart(
                                          type_ : SFString("FRAGMENT",
                                          url_ : MFString([SFString("../shaders/x_ite.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")])),
                                      /*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' type='FRAGMENT'></ShaderPart>*/))))]),
                  /*DIS multiuser facilities*/

                    DISEntityManager(
                      DEF_ : SFString('EntityManager'),
                      networkMode_ : "networkReader",
                      children_ : [
                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 1,
                          url_ : MFString([SFString("Leif8Final.x3d")])),

                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 2,
                          url_ : MFString([SFString("Lily8Final.x3d")]))]),

                    Collision(
                      enabled_ : false,
                      proxy_ : 
                        Group(
                          DEF_ : SFString('AvatarHolder'))),

                    ROUTE(
                      fromField_ : SFString('addedEntities'),
                      fromNode_ : SFString('EntityManager'),
                      toField_ : SFString('addChildren'),
                      toNode_ : SFString('AvatarHolder')),

                    ROUTE(
                      fromField_ : SFString('removedEntities'),
                      fromNode_ : SFString('EntityManager'),
                      toField_ : SFString('removeChildren'),
                      toNode_ : SFString('AvatarHolder'))]),
              layers_ : 
                LayoutLayer(
                  pickable_ : true,
                  objectType_ : MFString([SFString("ALL")]),
                  /*positioning the LayoutLayer*/
                  /*clipping the LayoutLayer*/
                  /*the content (children) of the LayoutLayer*/
                  /*first, the slider for scaling the model*/
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-3)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  transparency_ : 0.7)),
                          geometry_ : 
                            Box(
                              size_ : SFVec3f([SFDouble(100), SFDouble(100), SFDouble(0.02)])))),
                  /*the plane sensors*/

                    Transform(
                      DEF_ : SFString('aSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('aTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('aSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('aTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5)))]),

                    Transform(
                      DEF_ : SFString('bSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('bTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('bSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('bTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))])]),

                    Transform(
                      DEF_ : SFString('cSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.1), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('cTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('cSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('cTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))])]),

                    Transform(
                      DEF_ : SFString('dSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.2), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('dTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('dSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('dTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))])]),

                    Transform(
                      DEF_ : SFString('pdeltaSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.5), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('pdeltaTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('pdeltaSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('pdeltaTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))])]),

                    Transform(
                      DEF_ : SFString('tdeltaSlider'),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.8), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()),
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 2.5))),

                        Transform(
                          DEF_ : SFString('tdeltaTransform'),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                          children_ : [
                            PlaneSensor(
                              DEF_ : SFString('tdeltaSensor'),
                              minPosition_ : SFVec2f([SFDouble(-20), SFDouble(0)]),
                              maxPosition_ : SFVec2f([SFDouble(20), SFDouble(0)])),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  DEF_ : SFString('tdeltaTS')),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  radius_ : 0.05,
                                  height_ : 0.3),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material()))])]),

                    Script(
                      DEF_ : SFString('aValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('aValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { aValue_changed = Value.x * 30; })),

                    Script(
                      DEF_ : SFString('bValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('bValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { bValue_changed = Value.x * 30; })),

                    Script(
                      DEF_ : SFString('cValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('cValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { cValue_changed = Value.x * 5; })),

                    Script(
                      DEF_ : SFString('dValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('dValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { dValue_changed = Value.x * 5; })),

                    Script(
                      DEF_ : SFString('pdeltaValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('pdeltaValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { pdeltaValue_changed = Value.x; })),

                    Script(
                      DEF_ : SFString('tdeltaValueTransformerScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('newTranslation'),
                          accessType_ : SFString("inputOnly"),
                          value_ : SFString('1 1 1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('tdeltaValue_changed'),
                          accessType_ : SFString("outputOnly"),
                          value_ : SFString('1')),
                      ],
ecmascript:eval (0 , function newTranslation(Value) { tdeltaValue_changed = Value.x; })),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('aSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('aTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('bSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('bTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('cSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('cTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('dSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('dTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('pdeltaSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('pdeltaTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('tdeltaSensor'),
                      toField_ : SFString('set_translation'),
                      toNode_ : SFString('tdeltaTransform')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('aSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('aValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('bSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('bValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('cSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('cValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('dSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('dValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('pdeltaSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('pdeltaValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('translation_changed'),
                      fromNode_ : SFString('tdeltaSensor'),
                      toField_ : SFString('newTranslation'),
                      toNode_ : SFString('tdeltaValueTransformerScript')),

                    ROUTE(
                      fromField_ : SFString('aValue_changed'),
                      fromNode_ : SFString('aValueTransformerScript'),
                      toField_ : SFString('a'),
                      toNode_ : SFString('x_iteShader')),

                    ROUTE(
                      fromField_ : SFString('bValue_changed'),
                      fromNode_ : SFString('bValueTransformerScript'),
                      toField_ : SFString('b'),
                      toNode_ : SFString('x_iteShader')),

                    ROUTE(
                      fromField_ : SFString('cValue_changed'),
                      fromNode_ : SFString('cValueTransformerScript'),
                      toField_ : SFString('c'),
                      toNode_ : SFString('x_iteShader')),

                    ROUTE(
                      fromField_ : SFString('dValue_changed'),
                      fromNode_ : SFString('dValueTransformerScript'),
                      toField_ : SFString('d'),
                      toNode_ : SFString('x_iteShader')),

                    ROUTE(
                      fromField_ : SFString('pdeltaValue_changed'),
                      fromNode_ : SFString('pdeltaValueTransformerScript'),
                      toField_ : SFString('pdelta'),
                      toNode_ : SFString('x_iteShader')),

                    ROUTE(
                      fromField_ : SFString('tdeltaValue_changed'),
                      fromNode_ : SFString('tdeltaValueTransformerScript'),
                      toField_ : SFString('tdelta'),
                      toNode_ : SFString('x_iteShader')),
                  layout_ : 
                    Layout(
                      align_ : MFString([SFString("RIGHT"), SFString("BOTTOM")]),
                      offset_ : MFFloat([SFFloat(0), SFFloat(0.2)]),
                      offsetUnits_ : MFString([SFString("WORLD"), SFString("WORLD")]),
                      scaleMode_ : MFString([SFString("NONE"), SFString("NONE")]),
                      size_ : MFFloat([SFFloat(0.4), SFFloat(0.6)]),
                      sizeUnits_ : MFString([SFString("WORLD"), SFString("WORLD")]))],
                  viewport_ : 
                    Viewport(
                      clipBoundary_ : MFFloat([SFFloat(0), SFFloat(1), SFFloat(0), SFFloat(1)]))))));
void main() { exit(0); }
