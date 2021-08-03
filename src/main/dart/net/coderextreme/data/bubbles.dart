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
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('bubbles.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/bubbles.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('not sure what this is'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              DEF_ : SFString('Tour'),
              description_ : SFString('Tour Views')),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(4)]),
              description_ : SFString('sphere in road')),

            Background(
              backUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png")])),

            Transform(
              DEF_ : SFString('Rose01'),
              children_ : [
                Shape(
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('_01_-_Default'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])),
                      texture_ : 
                        ComposedCubeMapTexture(
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/uffizi_cross/uffizi_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x_ite'),
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOutput"),
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
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/x_ite.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/x_itebubbles.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x3dom'),
                          language_ : SFString('GLSL'),
                          field_ : [
                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('cube'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0')),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('chromaticDispertion'),
                              accessType_ : SFString("inputOutput"),
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
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/x3dom.vs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/pc_bubbles.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")])))))]),

            TimeSensor(
              DEF_ : SFString('TourTime'),
              cycleInterval_ : 5,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('TourPosition'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,10]),SFVec3f([0,0,-10])])),

            OrientationInterpolator(
              DEF_ : SFString('TourOrientation'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(3.1416)])),

            Script(
              DEF_ : SFString('RandomTourTime'),
              field_ : [
                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('set_cycle'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('lastKey'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0')),

                field(
                  type_ : SFString("MFRotation"),
                  name_ : SFString('orientations'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0')),

                field(
                  type_ : SFString("MFVec3f"),
                  name_ : SFString('positions'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('fraction_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("MFVec3f"),
                  name_ : SFString('position_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("MFRotation"),
                  name_ : SFString('set_orientation'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("MFRotation"),
                  name_ : SFString('orientation_changed'),
                  accessType_ : SFString("outputOnly")),
              ],
ecmascript:eval (0
               , function set_cycle(value) {
	       	   try {
                        var ov = lastKey;
                        do {
                            lastKey = Math.round(Math.random()*(positions.length-1));
                        } while (lastKey === ov);
                        var vc = lastKey;

                        position_changed[0] = positions[ov];
                        position_changed[1] = positions[vc];

                        orientation_changed[0] = orientations[ov];
                        orientation_changed[1] = orientations[vc];

                        fraction_changed = 0;
		   } catch (e) {
		   	if (typeof console.log === ', function') {
				console.log(e);
			}
		   }
               })),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('cycleTime'),
              toNode_ : SFString('RandomTourTime'),
              toField_ : SFString('set_cycle')),

            ROUTE(
              fromNode_ : SFString('RandomTourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('TourOrientation'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RandomTourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('TourPosition'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RandomTourTime'),
              fromField_ : SFString('orientation_changed'),
              toNode_ : SFString('TourOrientation'),
              toField_ : SFString('set_keyValue')),

            ROUTE(
              fromNode_ : SFString('RandomTourTime'),
              fromField_ : SFString('position_changed'),
              toNode_ : SFString('TourPosition'),
              toField_ : SFString('set_keyValue')),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('TourOrientation'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('TourOrientation'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Tour'),
              toField_ : SFString('set_orientation')),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('TourPosition'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('TourPosition'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Tour'),
              toField_ : SFString('set_position'))]));
void main() { exit(0); }
