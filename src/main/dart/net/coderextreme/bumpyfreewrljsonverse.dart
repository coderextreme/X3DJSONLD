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
              content_ : SFString('bumpyfreewrljsonverse.x3d')),

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
                  /*this group contains the red/green/blue 3D crosshair*/
                  children_ : [
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
                      /*<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />*/
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
                              /*<Sphere radius='40'></Sphere>*/
                              geometry_ : 
                                IndexedFaceSet(
                                  convex_ : false,
                                  DEF_ : SFString('Orbit'),
                                  coord_ : 
                                    Coordinate(
                                      DEF_ : SFString('OrbitCoordinates'))),
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
                                          url_ : MFString([SFString("../shaders/freewrl_flowers_chromatic.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")]))],
                                      parts_ : 
                                        ShaderPart(
                                          type_ : SFString("FRAGMENT",
                                          url_ : MFString([SFString("../shaders/freewrl.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")])),
                                      /*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/))))]),

                    Script(
                      DEF_ : SFString('OrbitScript'),
                      field_ : [
                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('coordinates'),
                          accessType_ : SFString("inputOutput")),

                        field(
                          type_ : SFString("MFInt32"),
                          name_ : SFString('coordIndexes'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('a'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('10')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('b'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('10')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('c'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('2')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('d'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('2')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('pdelta'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('tdelta'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0')),
                      ],
ecmascript:eval (0
, function initialize() {
     var resolution = 100;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     var vecCount = 0;
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds[vecCount] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		vecCount++;
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;
     // coordinates = new MFVec3f(...crds);


     var cis = new MFInt32();
     var intCount = 0;
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis[intCount++] = i*resolution+j;
	     cis[intCount++] = i*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j;
	     cis[intCount++] = -1;
	}
    }
    coordIndexes = cis;
    // coordIndexes = new MFInt32(...cis);
})),

                    ROUTE(
                      fromField_ : SFString('coordIndexes'),
                      fromNode_ : SFString('OrbitScript'),
                      toField_ : SFString('set_coordIndex'),
                      toNode_ : SFString('Orbit')),

                    ROUTE(
                      fromField_ : SFString('coordinates'),
                      fromNode_ : SFString('OrbitScript'),
                      toField_ : SFString('set_point'),
                      toNode_ : SFString('OrbitCoordinates')),
                  /*DIS multiuser facilities*/

                    DISEntityManager(
                      DEF_ : SFString('EntityManager'),
                      children_ : [
                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 1,
                          url_ : MFString([SFString("../data/Gramps8Final.x3d"), SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")])),

                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 2,
                          url_ : MFString([SFString("../data/Leif8Final.x3d"), SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")])),

                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 3,
                          url_ : MFString([SFString("../data/Lily8Final.x3d"), SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")])),

                        DISEntityTypeMapping(
                          category_ : 77,
                          specific_ : 4,
                          url_ : MFString([SFString("../data/Tufani8Final.x3d"), SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")]))]),

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

                    Transform(
                      DEF_ : SFString('equationTransform'),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-20)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Text(
                                  DEF_ : SFString('equation'),
                                  string_ : MFString([SFString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      size_ : 0.09)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)])))))]),

                    ProtoDeclare(
                      name_ : SFString('SliderProto'),
                      ProtoInterface_ : 
                        ProtoInterface(
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('sliderTranslation'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0 0.7 0')),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('transformTranslation'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0 0 0.1')),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('sensorTranslation'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0 0 0')),

                            field(
                              type_ : SFString("MFString"),
                              name_ : SFString('textString'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('\"a=\"')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('parameterScale'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('30')),

                            field(
                              type_ : SFString("SFString"),
                              name_ : SFString('parameterName'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('a')),

                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('shaderNode'),
                              accessType_ : SFString("inputOutput"))]),
                      ProtoBody_ : 
                        ProtoBody(
                          children_ : [
                            Group(
                              children_ : [
                                Transform(
                                  DEF_ : SFString('protoSlider'),
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('translation'),
                                          protoField_ : SFString('sliderTranslation'))]),
                                  children_ : [
                                    Transform(
                                      DEF_ : SFString('protoTransform'),
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                      IS_ : 
                                        IS(
                                          connect_ : [
                                            connect(
                                              nodeField_ : SFString('translation'),
                                              protoField_ : SFString('sensorTranslation'))]),
                                      children_ : [
                                        PlaneSensor(
                                          DEF_ : SFString('protoSensor'),
                                          maxPosition_ : SFVec2f([SFDouble(1), SFDouble(0)])),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            TouchSensor(
                                              DEF_ : SFString('protoTS'))]),

                                        Transform(
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                Text(
                                                  DEF_ : SFString('protoText'),
                                                  string_ : MFString([SFString("a=")]),
                                                  IS_ : 
                                                    IS(
                                                      connect_ : [
                                                        connect(
                                                          nodeField_ : SFString('string'),
                                                          protoField_ : SFString('textString'))]),
                                                  fontStyle_ : 
                                                    FontStyle(
                                                      size_ : 0.23)),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material())))])]),

                                Script(
                                  DEF_ : SFString('protoValueTransformerScript'),
                                  directOutput_ : true,
                                  mustEvaluate_ : true,
                                  field_ : [
                                    field(
                                      type_ : SFString("SFFloat"),
                                      name_ : SFString('protoScale'),
                                      accessType_ : SFString("inputOutput"),
                                      value_ : SFString('30')),

                                    field(
                                      type_ : SFString("SFString"),
                                      name_ : SFString('protoParameterName'),
                                      accessType_ : SFString("inputOutput"),
                                      value_ : SFString('a')),

                                    field(
                                      type_ : SFString("SFNode"),
                                      name_ : SFString('shader'),
                                      accessType_ : SFString("inputOutput")),

                                    field(
                                      type_ : SFString("SFVec3f"),
                                      name_ : SFString('newTranslation'),
                                      accessType_ : SFString("inputOnly"),
                                      value_ : SFString('1 1 1')),

                                    field(
                                      type_ : SFString("SFFloat"),
                                      name_ : SFString('protoValue_changed'),
                                      accessType_ : SFString("outputOnly"),
                                      value_ : SFString('1')),

                                    field(
                                      type_ : SFString("MFString"),
                                      name_ : SFString('protoText_changed'),
                                      accessType_ : SFString("outputOnly"),
                                      value_ : SFString('\"1.0\"'))],

                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('protoScale'),
                                          protoField_ : SFString('parameterScale')),

                                        connect(
                                          nodeField_ : SFString('protoParameterName'),
                                          protoField_ : SFString('parameterName')),

                                        connect(
                                          nodeField_ : SFString('shader'),
                                          protoField_ : SFString('shaderNode'))]),
                                  ,
ecmascript:eval (0
const newTranslation = , function(Value) {
	'use strict';
	protoValue_changed = Value.x * protoScale;
	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));

        var orientation = Value.x;

        var ps = Browser.currentScene.getNamedNode("protoSensor");
        var t = Browser.currentScene.getNamedNode("protoTransform");
        var txt = Browser.currentScene.getNamedNode("protoText");
        if (shader) {
            shader.getField(protoParameterName).setValue(orientation * protoScale);
        }
        if (txt) {
            var stringField = txt.getField("string");
            var label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        }
})),

                                ROUTE(
                                  fromField_ : SFString('translation_changed'),
                                  fromNode_ : SFString('protoSensor'),
                                  toField_ : SFString('set_translation'),
                                  toNode_ : SFString('protoTransform')),

                                ROUTE(
                                  fromField_ : SFString('translation_changed'),
                                  fromNode_ : SFString('protoSensor'),
                                  toField_ : SFString('newTranslation'),
                                  toNode_ : SFString('protoValueTransformerScript')),

                                ROUTE(
                                  fromField_ : SFString('protoText_changed'),
                                  fromNode_ : SFString('protoValueTransformerScript'),
                                  toField_ : SFString('string'),
                                  toNode_ : SFString('protoText'))])])),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('aPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 0.7 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"a=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('30')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('a')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('bPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 0.4 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"b=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('30')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('b')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('cPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 0.1 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"c=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('20')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('c')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('dPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.2 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"d=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('20')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('d')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('tdeltaPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.5 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"tdelta=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('6.28')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('tdelta')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('pdeltaPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.8 0')),

                        fieldValue(
                          name_ : SFString('transformTranslation'),
                          value_ : SFString('0 0 0.1')),

                        fieldValue(
                          name_ : SFString('sensorTranslation'),
                          value_ : SFString('0 0 0')),

                        fieldValue(
                          name_ : SFString('textString'),
                          value_ : SFString('\"pdelta=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('6.28')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('pdelta')),

                        fieldValue(
                          name_ : SFString('shaderNode'),
                          children_ : [
                            ComposedShader(
                              USE_ : SFString('freewrlShader'))])]),
                  layout_ : 
                    Layout(
                      align_ : MFString([SFString("LEFT"), SFString("BOTTOM")]),
                      offset_ : MFFloat([SFFloat(-0.2), SFFloat(0.19)]),
                      size_ : MFFloat([SFFloat(0.4), SFFloat(0.6)]))],
                  viewport_ : 
                    Viewport(
                      clipBoundary_ : MFFloat([SFFloat(0), SFFloat(1), SFFloat(0), SFFloat(1)]))))]));
void main() { exit(0); }
