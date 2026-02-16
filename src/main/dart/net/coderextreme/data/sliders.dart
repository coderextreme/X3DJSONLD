// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.1'),
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
              content_ : SFString('sliders.x3d')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('8 August 2025')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('*Bumpy flower with prototype sliders*')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Doug Sanden, Christoph Valentin, John Carlson')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('license.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vim, VI Improved'))]),
      Scene_ : 
        Scene(
          layerSet_ : 
            LayerSet(
              activeLayer_ : 1,
              order_ : MFInt32([SFInt32(1), SFInt32(2), SFInt32(3)]),
              layers_ : 
                Layer(
                  pickable_ : true,
                  objectType_ : MFString([SFString("ALL")]),
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
                      children_ : [
                        Transform(
                          child_ : 
                            Shape(
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
                                      specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)])))))]),

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
                          accessType_ : SFString("inputOutput")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('a'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('5')),

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
                          name_ : SFString('pdelta'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('tdelta'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('resolution'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('50')),
                      ],
ecmascript:eval (0
			, function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}
			, function set_a(value) {
				a = value;
				generateCoordinates();
			}

			, function set_b(value) {
				b = value;
				generateCoordinates();
			}

			, function set_c(value) {
				c = value;
				generateCoordinates();
			}

			, function set_d(value) {
				d = value;
				generateCoordinates();
			}

			, function set_pdelta(value) {
				pdelta = value;
				generateCoordinates();
			}

			, function set_tdelta(value) {
				tdelta = value;
				generateCoordinates();
			}

			, function resolution(value) {
				resolution = value;
				initialize();
			}

			, function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
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
                      toNode_ : SFString('OrbitCoordinates'))]),
              layers_ : 
                LayoutLayer(
                  pickable_ : true,
                  objectType_ : MFString([SFString("ALL")]),
                  layout_ : 
                    Layout(
                      align_ : MFString([SFString("LEFT"), SFString("BOTTOM")]),
                      offset_ : MFFloat([SFFloat(-0.2), SFFloat(0.19)]),
                      size_ : MFFloat([SFFloat(0.4), SFFloat(0.6)])),
                  viewport_ : 
                    Viewport(
                      clipBoundary_ : MFFloat([SFFloat(0), SFFloat(1), SFFloat(0), SFFloat(1)])),
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
                  /*The slider parameters*/

                    ProtoDeclare(
                      name_ : SFString('SliderProto'),
                      ProtoInterface_ : 
                        ProtoInterface(
                          field_ : [
                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('sliderTranslation'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('0 0 0')),

                            field(
                              type_ : SFString("MFString"),
                              name_ : SFString('textString'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('\"x=\"')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('parameterScale'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('15')),

                            field(
                              type_ : SFString("SFString"),
                              name_ : SFString('parameterName'),
                              accessType_ : SFString("inputOutput"),
                              value_ : SFString('x')),

                            field(
                              type_ : SFString("SFNode"),
                              name_ : SFString('orbScript'),
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
                                      children_ : [
                                        PlaneSensor(
                                          DEF_ : SFString('protoSensor'),
                                          description_ : SFString('Grab with mouse to adjust slider'),
                                          maxPosition_ : SFVec2f([SFDouble(1), SFDouble(0)])),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('Maybe start dragging this?'),
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
                                                      style_ : SFString('BOLD'),
                                                      size_ : 0.23)),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material())))])]),

                                Script(
                                  DEF_ : SFString('protoValueTransformerScript'),
                                  field_ : [
                                    field(
                                      type_ : SFString("SFFloat"),
                                      name_ : SFString('protoScale'),
                                      accessType_ : SFString("inputOutput")),

                                    field(
                                      type_ : SFString("SFString"),
                                      name_ : SFString('protoParameterName'),
                                      accessType_ : SFString("inputOutput")),

                                    field(
                                      type_ : SFString("SFVec3f"),
                                      name_ : SFString('newTranslation'),
                                      accessType_ : SFString("inputOnly"),
                                      value_ : SFString('1 1 1')),

                                    field(
                                      type_ : SFString("SFNode"),
                                      name_ : SFString('protoScript'),
                                      accessType_ : SFString("inputOutput")),

                                    field(
                                      type_ : SFString("SFFloat"),
                                      name_ : SFString('protoValue'),
                                      accessType_ : SFString("inputOutput"),
                                      value_ : SFString('1')),

                                    field(
                                      type_ : SFString("MFString"),
                                      name_ : SFString('protoText'),
                                      accessType_ : SFString("inputOutput"),
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
                                          nodeField_ : SFString('protoScript'),
                                          protoField_ : SFString('orbScript'))]),
                                  ,
ecmascript:eval (0
, function set_protoScale(value) {
	protoScale = value;
}

, function set_protoParameterName(value) {
	protoParameterName = value;
}

, function set_protoScript(value) {
	protoScript = value;
}

, function set_protoValue(value) {
	protoValue = value;
}

, function set_protoText(value) {
	protoText = value;
}

, function newTranslation(value) {
       	set_protoValue(value.x * protoScale);
       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));
	protoScript[protoParameterName] = protoValue;
};)),

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
                                  fromField_ : SFString('protoText'),
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
                          name_ : SFString('textString'),
                          value_ : SFString('\"a=\"')),

                        fieldValue(
                          name_ : SFString('parameterScale'),
                          value_ : SFString('30')),

                        fieldValue(
                          name_ : SFString('parameterName'),
                          value_ : SFString('a')),

                        fieldValue(
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('bPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 0.4 0')),

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
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('cPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 0.1 0')),

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
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('dPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.2 0')),

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
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('tdeltaPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.5 0')),

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
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])]),

                    ProtoInstance(
                      name_ : SFString('SliderProto'),
                      DEF_ : SFString('pdeltaPI'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('sliderTranslation'),
                          value_ : SFString('0 -0.8 0')),

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
                          name_ : SFString('orbScript'),
                          children_ : [
                            Script(
                              USE_ : SFString('OrbitScript'))])])]),
              layers_ : 
                Layer(
                  pickable_ : true,
                  objectType_ : MFString([SFString("ALL")]),
                  children_ : [
                    Viewpoint(
                      description_ : SFString('My Humanoids'),
                      fieldOfView_ : 1.570796,
                      position_ : SFVec3f([SFDouble(0), SFDouble(1.75), SFDouble(80)]))]))));
void main() { exit(0); }
