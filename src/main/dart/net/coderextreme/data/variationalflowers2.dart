// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.1'),
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
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('ParticleSystems'),
              level_ : 3),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('variationalflowers.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A flower particle system')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('variationalflowers.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Tour Views'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Background(
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

            Transform(
              children_ : [
                ParticleSystem(
                  maxParticles_ : 20,
                  geometryType_ : SFString('GEOMETRY'),
                  /** values - array of MFFloats to pass to ComposedShader*/
                  /** variations in values - array of MFFloats to pass to ComposedShader that varies values*/
                  variationPhysicsModel_ : 
                    VariationPhysicsModel(
                      values_ : SFString('2 2 5 5 0 0'),
                      variations_ : SFString('0.2 0.1 0.3 0.3 0.01 0.01')),
                  emitter_ : 
                    ExplosionEmitter(
                      speed_ : 1,
                      variation_ : 0.75),
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
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x_ite'),
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

                            field(
                              type_ : SFString("MFFloat"),
                              name_ : SFString('x3d_ParticleValues'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('2 1 4 4 0 0')),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("../shaders/x_ite_variations.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("../shaders/commonnew.fs")]))))),

                Script(
                  DEF_ : SFString('Animate'),
                  field_ : [
                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('set_fraction'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('values'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('2 2 5 5 0 0')),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('variations'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.2 0.1 0.3 0.3 0.01 0.01')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('lastframe'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('updaterate'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.1')),
                  ],
ecmascript:eval (0
			, function set_fraction(f, tm) {
			    if (lastframe + updaterate < tm) {
			  	lastframe = tm;
				for (let v in values) {
					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];
				}
			    }
			})),

                TimeSensor(
                  DEF_ : SFString('TourTime'),
                  cycleInterval_ : 45,
                  loop_ : true),

                ROUTE(
                  fromNode_ : SFString('TourTime'),
                  fromField_ : SFString('fraction_changed'),
                  toNode_ : SFString('Animate'),
                  toField_ : SFString('set_fraction')),

                ROUTE(
                  fromNode_ : SFString('Animate'),
                  fromField_ : SFString('values'),
                  toNode_ : SFString('x_ite'),
                  toField_ : SFString('x3d_ParticleValues'))])]));
void main() { exit(0); }
