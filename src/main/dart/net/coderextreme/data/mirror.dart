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
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Grouping'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('mirror.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/mirror.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('sphere with alternating backgrounds'))]),
      Scene_ : 
        Scene(
          children_ : [
            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(100)]),
              description_ : SFString('Switch background and images texture')),

            TextureBackground(
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('leftBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_left.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")])),
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('rightBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_right.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")])),
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('frontBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_front.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")])),
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('backBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_back.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")])),
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('topBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_top.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")])),
              topTexture_ : 
                ImageTexture(
                  DEF_ : SFString('bottomBackgroundTexture'),
                  url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")]))),

            Transform(
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])),
                      texture_ : 
                        ComposedCubeMapTexture(
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('backShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_back.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('bottomShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_bottom.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('frontShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_front.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('leftShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_left.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('rightShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_right.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              DEF_ : SFString('topShader'),
                              url_ : MFString([SFString("../resources/images/all_probes/beach_cross/beach_top.png"), SFString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x3dom'),
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),

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
                              url_ : MFString([SFString("../shaders/mix.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x_ite'),
                          language_ : SFString('GLSL'),
                          /*http://hypertextbook.com/facts/2005/JustinChe.shtml*/
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),

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
                              url_ : MFString([SFString("../shaders/x_ite.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/x_itemix.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")])))),
                  geometry_ : 
                    Sphere(
                      radius_ : 30)),

                Script(
                  DEF_ : SFString('UrlSelector'),
                  directOutput_ : true,
                  field_ : [
                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('frontUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('backUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('leftUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('rightUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('topUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('bottomUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('front_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('back_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('left_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('right_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('top_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('bottom_changed'),
                      accessType_ : SFString("outputOnly")),

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
	    	    Browser.print(f+" "+side);
	    	    old = side;
		    front_changed[0] = frontUrls[side];
		    back_changed[0] = backUrls[side];
		    left_changed[0] = leftUrls[side];
		    right_changed[0] = rightUrls[side];
		    top_changed[0] = topUrls[side];
		    bottom_changed[0] = bottomUrls[side];
            }
        })),

                TimeSensor(
                  DEF_ : SFString('Clock'),
                  cycleInterval_ : 45,
                  loop_ : true),

                ROUTE(
                  fromNode_ : SFString('Clock'),
                  fromField_ : SFString('fraction_changed'),
                  toNode_ : SFString('UrlSelector'),
                  toField_ : SFString('set_fraction')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('front_changed'),
                  toNode_ : SFString('frontBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('back_changed'),
                  toNode_ : SFString('backBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('left_changed'),
                  toNode_ : SFString('leftBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('right_changed'),
                  toNode_ : SFString('rightBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('top_changed'),
                  toNode_ : SFString('topBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('bottom_changed'),
                  toNode_ : SFString('bottomBackgroundTexture'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('front_changed'),
                  toNode_ : SFString('frontShader'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('back_changed'),
                  toNode_ : SFString('backShader'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('left_changed'),
                  toNode_ : SFString('leftShader'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('right_changed'),
                  toNode_ : SFString('rightShader'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('top_changed'),
                  toNode_ : SFString('topShader'),
                  toField_ : SFString('url')),

                ROUTE(
                  fromNode_ : SFString('UrlSelector'),
                  fromField_ : SFString('bottom_changed'),
                  toNode_ : SFString('bottomShader'),
                  toField_ : SFString('url'))])]));
void main() { exit(0); }
