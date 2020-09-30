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
import { NavigationInfo } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedCubeMapTexture } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
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
              content : new SFString("flowers7.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/flowers7.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a flower")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),
          { "#comment" : new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery") },

            new Background({
              DEF : new SFString("background"),
              backUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]),
              skyColor : new MFColor([0,0,0]),
              transparency : new SFFloat(0)}),

            new Viewpoint({
              position : new SFVec3f([0,0,40]),
              description : new SFString("Transparent rose")}),

            new Transform({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
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
                              DEF : new SFString("backShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("bottomShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("frontShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("leftShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("rightShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("topShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x3dom"),
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
                              url : new MFString(["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])}))])})),
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
                              url : new MFString(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])}))])}))})),
                  geometry : new SFNode(
                    new Sphere({}))})])}),
          { "#comment" : new CommentsBlock("<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>") },

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

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("a"),
              toNode : new SFString("x3dom"),
              toField : new SFString("a")}),

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("b"),
              toNode : new SFString("x3dom"),
              toField : new SFString("b")}),

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("c"),
              toNode : new SFString("x3dom"),
              toField : new SFString("c")}),

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("d"),
              toNode : new SFString("x3dom"),
              toField : new SFString("d")}),

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("pdelta"),
              toNode : new SFString("x3dom"),
              toField : new SFString("pdelta")}),

            new ROUTE({
              fromNode : new SFString("Animate"),
              fromField : new SFString("tdelta"),
              toNode : new SFString("x3dom"),
              toField : new SFString("tdelta")})])}))});
console.log(X3D0.toXMLNode());
