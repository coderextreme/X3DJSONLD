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
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedCubeMapTexture } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
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
              content : new SFString("mirror2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a mirrored sphere")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,5,100]),
              description : new SFString("Switch background and images texture")}),

            new Background({
              DEF : new SFString("cube"),
              leftUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]),
              backUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]),
              topUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]),
              skyColor : new MFColor([0,0,0]),
              transparency : new SFFloat(0)}),

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
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("backShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("bottomShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("frontShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("leftShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("rightShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])})),
                          top : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("topShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x_ite"),
                          language : new SFString("GLSL"),
                          { "#comment" : new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml") },
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0")}),

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
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])}))])})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x3dom"),
                          language : new SFString("GLSL"),
                          { "#comment" : new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml") },
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0")}),

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
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])}))])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(30)}))}),

                new TimeSensor({
                  DEF : new SFString("Clock"),
                  cycleInterval : new SFTime(45),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("Clock"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("UrlSelector"),
                  toField : new SFString("set_fraction")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("front_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("frontUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("back_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("backUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("left_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("leftUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("right_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("rightUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("top_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("topUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("bottom_changed"),
                  toNode : new SFString("cube"),
                  toField : new SFString("bottomUrl")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("front_changed"),
                  toNode : new SFString("frontShader"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("back_changed"),
                  toNode : new SFString("backShader"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("left_changed"),
                  toNode : new SFString("leftShader"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("right_changed"),
                  toNode : new SFString("rightShader"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("top_changed"),
                  toNode : new SFString("topShader"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("bottom_changed"),
                  toNode : new SFString("bottomShader"),
                  toField : new SFString("url")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("UrlSelector"),
                  directOutput : new SFBool(true),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("frontUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("backUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("leftUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("rightUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("topUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("bottomUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("front_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("back_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("left_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("right_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("top_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("bottom_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("old"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")})])}))])})])}))});
console.log(X3D0.toXMLNode());