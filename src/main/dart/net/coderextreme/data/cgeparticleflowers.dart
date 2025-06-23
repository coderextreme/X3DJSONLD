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
              content_ : SFString('particleflowers.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('A flower proto with configurable shaders')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d'))]),
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
              backUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

            Transform(
              children_ : [
                ParticleSystem(
                  maxParticles_ : 20,
                  geometryType_ : SFString('GEOMETRY'),
                  physics_ : 
                    BoundedPhysicsModel(
                      geometry_ : 
                        Sphere(
                          radius_ : 100)),
                  emitter_ : 
                    ExplosionEmitter(
                      speed_ : 2,
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
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")])),
                          topTexture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]))),
                      shaders_ : 
                        ComposedShader(
                          DEF_ : SFString('shader'),
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
                              value_ : SFString('2')),

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
                          /*<field name='cube' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field>*/
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("VERTEX",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs")]))],
                          parts_ : 
                            ShaderPart(
                              type_ : SFString("FRAGMENT",
                              url_ : MFString([SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs")]))))),

                Script(
                  DEF_ : SFString('Animate'),
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('translation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('velocity'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('set_fraction'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('a'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('b'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('c'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('d'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('tdelta'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('pdelta'),
                      accessType_ : SFString("inputOutput"),
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
                  toField_ : SFString('tdelta'))])]));
void main() { exit(0); }
