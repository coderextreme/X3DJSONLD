// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          /*<component name='Shape' level='4'></component>*/
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
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('bub.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('3 prismatic spheres')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            Background(
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(20)]),
              description_ : SFString('Look at the bubbles flying')),

            ProtoDeclare(
              name_ : SFString('Bubble'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('transform'),
                      child_ : 
                        Shape(
                          DEF_ : SFString('myShape'),
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
                              /*<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>*/
                              /*<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>*/
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
                                      url_ : MFString([SFString("../shaders/pc_bubbles.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")]))),
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
                                      url_ : MFString([SFString("../shaders/x_itebubbles.fs"), SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")])))),
                          geometry_ : 
                            Sphere())),

                    Script(
                      DEF_ : SFString('Bounce'),
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
                          type_ : SFString("SFTime"),
                          name_ : SFString('set_fraction'),
                          accessType_ : SFString("inputOnly")),
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
			})),

                    TimeSensor(
                      DEF_ : SFString('TourTime'),
                      cycleInterval_ : 0.15,
                      loop_ : true),

                    ROUTE(
                      fromNode_ : SFString('TourTime'),
                      fromField_ : SFString('cycleTime'),
                      toNode_ : SFString('Bounce'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('Bounce'),
                      fromField_ : SFString('translation_changed'),
                      toNode_ : SFString('transform'),
                      toField_ : SFString('set_translation'))])),

            ProtoInstance(
              name_ : SFString('Bubble')),

            ProtoInstance(
              name_ : SFString('Bubble')),

            ProtoInstance(
              name_ : SFString('Bubble'))]));
void main() { exit(0); }
