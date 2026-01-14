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
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('flowers7.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/personal/flowers7.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a flower'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),
          /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/

            Background(
              DEF_ : SFString('background'),
              backUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")])),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(40)]),
              description_ : SFString('Transparent rose')),

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
                          DEF_ : SFString('texture'),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('backShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('bottomShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('frontShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('leftShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('rightShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('topShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x3dom'),
                          language_ : SFString('GLSL'),
                          /*TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>*/
                          field_ : [
                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.98 1 1.033')),

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
                              value_ : SFString('20')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('d'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('20')),

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
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x_ite'),
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('0.98 1 1.033')),

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
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('10')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('b'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('1')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('c'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('20')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('d'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('20')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('tdelta'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('pdelta'),
                              accessType_ : SFString("inputOnly"),
                              value_ : SFString('0')),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")])))),
                  geometry_ : 
                    Sphere())),

            Script(
              DEF_ : SFString('UrlSelector'),
              directOutput_ : true,
              field_ : [
                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('frontUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('backUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('leftUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('rightUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('topUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('bottomUrls'),
                  accessType_ : SFString("initializeOnly"),
                  value_ : SFString('\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('front'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('back'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('left'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('right'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('top'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('bottom'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_fraction'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFInt32"),
                  name_ : SFString('old'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('-1')),
              ],
ecmascript:eval (0
        , function set_fraction( f, tm ) {
            var side = Math.floor(f*frontUrls.length);
            if (side > frontUrls.length-1) {
                side = 0;
            }
            if (side != old) {
                    old = side;
                    front[0] = frontUrls[side];
                    back[0] = backUrls[side];
                    left[0] = leftUrls[side];
                    right[0] = rightUrls[side];
                    top[0] = topUrls[side];
                    bottom[0] = bottomUrls[side];
            }
        })),
          /*<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>*/

            Script(
              DEF_ : SFString('Animate'),
              directOutput_ : true,
              field_ : [
                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_fraction'),
                  accessType_ : SFString("inputOnly")),

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
                  value_ : SFString('20')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('d'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('20')),

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
              ],
ecmascript:eval (0

, function set_fraction() {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		a = a + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		b = b + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		c = c + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		d = d + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	tdelta = tdelta + 0.5;
	pdelta = pdelta + 0.5;
	if (a < 1) {
		a = 10;
	}
	if (b < 1) {
		b = 10;
	}
	if (c < 1) {
		c = 4;
	}
	if (c > 20) {
		c = 4;
	}
	if (d < 1) {
		d = 4;
	}
	if (d > 20) {
		d = 4;
	}
})),

            TimeSensor(
              DEF_ : SFString('TourTime'),
              cycleInterval_ : 5,
              loop_ : true),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Animate'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('a'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('a')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('b'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('b')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('c'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('c')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('d'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('d')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('pdelta'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('pdelta')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('tdelta'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('tdelta')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('a'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('a')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('b'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('b')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('c'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('c')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('d'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('d')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('pdelta'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('pdelta')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('tdelta'),
              toNode_ : SFString('x3dom'),
              toField_ : SFString('tdelta'))]));
void main() { exit(0); }
