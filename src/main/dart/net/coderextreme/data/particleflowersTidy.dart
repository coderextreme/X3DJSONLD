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
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('ParticleSystems'),
              level_ : 3),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('particleflowers.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A flower particle system')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vim'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('particleflowers.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Tour Views'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Background(
              frontUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              backUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              leftUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]),
              bottomUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),

            Group(
              children_ : [
                ParticleSystem(
                  geometryType_ : SFString('GEOMETRY'),
                  maxParticles_ : 20,
                  emitter_ : 
                    ExplosionEmitter(
                      speed_ : 2,
                      variation_ : 0.75),
                  physics_ : 
                    BoundedPhysicsModel(
                      geometry_ : 
                        Sphere(
                          radius_ : 100)),
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
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('x_ite'),
                          language_ : SFString('GLSL'),
                          parts_ : 
                            ShaderPart(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), SFString("../shaders/x_ite_flower_particles.vs")])),
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), SFString("../shaders/commonnew.fs")])),
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('chromaticDispertion'),
                              value_ : SFString('0.98 1 1.033')),

                            field(
                              type_ : SFString("SFNode"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('cube'),
                              children_ : [
                                ComposedCubeMapTexture(
                                  USE_ : SFString('texture'))]),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('bias'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('scale'),
                              value_ : SFString('0.5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("initializeOnly"),
                              name_ : SFString('power'),
                              value_ : SFString('2')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('a'),
                              value_ : SFString('2')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('b'),
                              value_ : SFString('1')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('c'),
                              value_ : SFString('5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('d'),
                              value_ : SFString('5')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('tdelta')),

                            field(
                              type_ : SFString("SFFloat"),
                              accessType_ : SFString("inputOutput"),
                              name_ : SFString('pdelta'))])),
                  geometry_ : 
                    Sphere()),

                Script(
                  DEF_ : SFString('Animate'),
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('translation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('velocity')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('set_fraction')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('a'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('b'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('c'),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('d'),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('tdelta'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('pdelta'),
                      value_ : SFString('0.5')),
                  ],
ecmascript:eval (0

			, function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			, function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(translation.x) > 10) {
					initialize();
				    } else if (Math.abs(translation.y) > 10) {
					initialize();
				    } else if (Math.abs(translation.z) > 10) {
					initialize();
				    } else {
					velocity.x += Math.random() * 0.2 - 0.1;
					velocity.y += Math.random() * 0.2 - 0.1;
					velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    animate_flowers();
			}

			, function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta = tdelta + 0.05;
				pdelta = pdelta + 0.05;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			})),

                TimeSensor(
                  DEF_ : SFString('TourTime'),
                  cycleInterval_ : 5,
                  loop_ : true)]),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Animate'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('a_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_a')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('b_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_b')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('c_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_c')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('d_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_d')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('pdelta_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_pdelta')),

            ROUTE(
              fromNode_ : SFString('Animate'),
              fromField_ : SFString('tdelta_changed'),
              toNode_ : SFString('x_ite'),
              toField_ : SFString('set_tdelta'))]));
void main() { exit(0); }
