'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("EnvironmentalEffects"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Shaders"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("CubeMapTexturing"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Texturing"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Rendering"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Shape"),
              level : new SFInt32(4)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flowers.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("5 or more prismatic flowers")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),
          /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/

            new Background({
              backUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])}),

            new ProtoDeclare({
              name : new SFString("flower"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("animate_transform"),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.7,0.7,0.7]),
                                  specularColor : new SFColor([0.5,0.5,0.5])})),
                              texture : new SFNode(
                                new ComposedCubeMapTexture({
                                  DEF : new SFString("texture"),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])}))})),
                              /*<ComposedShader DEF='x3dom' language=\"GLSL\">*/
                              /*<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>*/
                              /*<field name='cube' type='SFNode' accessType=\"inputOutput\">*/
                              /*<ComposedCubeMapTexture USE=\"texture\"/>*/
                              /*</field>*/
                              /*<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>*/
                              /*<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>*/
                              /*<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>*/
                              /*<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>*/
                              /*<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>*/
                              /*<field name='b' type='SFFloat' accessType='inputOutput' value='1'></field>*/
                              /*<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>*/
                              /*<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>*/
                              /*<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>*/
                              /*<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>*/
                              /*<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"'></ShaderPart>*/
                              /*<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart>*/
                              /*</ComposedShader>*/
                              shaders : new SFNode(
                                new ComposedShader({
                                  DEF : new SFString("x_ite"),
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFNODE,
                                      name : new SFString("cube"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      children : new MFNode([
                                        new ComposedCubeMapTexture({
                                          USE : new SFString("texture")})])}),

                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("chromaticDispertion"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                      value : new SFString("0.98 1 1.033")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("bias"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("0.5")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("scale"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("0.5")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("power"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("2")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("a"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("10")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("b"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("1")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("c"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("20")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("d"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("20")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("tdelta"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("0")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("pdelta"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("0")}),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX",
                                      url : new MFString(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])})]),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT",
                                      url : new MFString(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])}))}))})),
                          geometry : new SFNode(
                            new Sphere({}))}))}),

                    new Script({
                      DEF : new SFString("Animate"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("velocity"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("a"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.5")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("b"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.5")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("c"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("3")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("d"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("3")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("tdelta"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.5")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pdelta"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.5")}),
                      ]),
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
				tdelta = tdelta + 0.5;
				pdelta = pdelta + 0.5;
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
			})}),

                    new TimeSensor({
                      DEF : new SFString("TourTime"),
                      cycleInterval : new SFTime(5),
                      loop : new SFBool(true)}),

                    new ROUTE({
                      fromNode : new SFString("TourTime"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("Animate"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("translation_changed"),
                      toNode : new SFString("animate_transform"),
                      toField : new SFString("set_translation")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("a"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("a")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("b"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("b")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("c"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("c")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("d"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("d")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("pdelta"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("pdelta")}),

                    new ROUTE({
                      fromNode : new SFString("Animate"),
                      fromField : new SFString("tdelta"),
                      toNode : new SFString("x_ite"),
                      toField : new SFString("tdelta")}),
                  /*<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/>*/
                  /*<ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/>*/
                  /*<ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/>*/
                  /*<ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/>*/
                  /*<ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/>*/
                  /*<ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>*/])}))}),

            new ProtoInstance({
              name : new SFString("flower")}),

            new ProtoInstance({
              name : new SFString("flower")}),

            new ProtoInstance({
              name : new SFString("flower")})])}))});
console.log(X3D0.toXMLNode());
