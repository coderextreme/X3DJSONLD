'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedCubeMapTexture } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
                                  top : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])})),
                                  top : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])})),
                                  top : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])})),
                                  top : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])})),
                                  top : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])})),
                                  top : new SFNode(
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
                                  { "#comment" : new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>") },
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX",
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("url"),
                                              protoField : new SFString("vertex")})])}))})),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT",
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("url"),
                                              protoField : new SFString("fragment")})])}))}))])}))})),
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
                          .setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}")])}),

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
