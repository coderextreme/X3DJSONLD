'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var ComposedCubeMapTexture = require('./x3d.js');
var ImageTexture = require('./x3d.js');
var MFString = require('./x3d.js');
var ComposedShader = require('./x3d.js');
var ShaderPart = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Sphere = require('./x3d.js');
var Script = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var SFTime = require('./x3d.js');
var SFBool = require('./x3d.js');
var ROUTE = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
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
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flowerproto.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("A flower proto with configurable shaders")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("FlowerProto"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("vertex"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("\"../shaders/gl_flowers_chromatic.vs\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("fragment"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("\"../shaders/pc_flowers.fs\"")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("transform"),
                      children : new MFNode([
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
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])})),
                                  topTexture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])}))})),
                              shaders : new SFNode(
                                new ComposedShader({
                                  DEF : new SFString("shader"),
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFINT32,
                                      name : new SFString("cube"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("0")}),

                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("chromaticDispertion"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                      value : new SFString("0.98 1 1.033")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("bias"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("0.5")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("scale"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("0.5")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("power"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("2")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("a"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("10")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("b"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("1")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("c"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("20")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("d"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("20")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("tdelta"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("0")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("pdelta"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                      value : new SFString("0")}),
                                  /*<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>*/
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX",
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("url"),
                                              protoField : new SFString("vertex")})])}))})]),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT",
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("url"),
                                              protoField : new SFString("fragment")})])}))}))}))})),
                          geometry : new SFNode(
                            new Sphere({}))}),

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
				tdelta += 0.5;
				pdelta += 0.5;
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
                          toNode : new SFString("transform"),
                          toField : new SFString("set_translation")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("a"),
                          toNode : new SFString("shader"),
                          toField : new SFString("a")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("b"),
                          toNode : new SFString("shader"),
                          toField : new SFString("b")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("c"),
                          toNode : new SFString("shader"),
                          toField : new SFString("c")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("d"),
                          toNode : new SFString("shader"),
                          toField : new SFString("d")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("tdelta"),
                          toNode : new SFString("shader"),
                          toField : new SFString("tdelta")}),

                        new ROUTE({
                          fromNode : new SFString("Animate"),
                          fromField : new SFString("pdelta"),
                          toNode : new SFString("shader"),
                          toField : new SFString("pdelta")})])})])}))})])}))});
console.log(X3D0.toXMLNode());
