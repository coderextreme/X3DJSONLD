'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedCubeMapTexture } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
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
              content : new SFString("geo.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/geo.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a sphere")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["ANY","EXAMINE","FLY","LOOKAT"]}),

            new Viewpoint({
              DEF : new SFString("Tour"),
              description : new SFString("Tour Views")}),
          /*Viewpoint position='0 0 4' description='sphere in road'/*/

            new Background({
              backUrl : new MFString(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]),
              bottomUrl : new MFString(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]),
              frontUrl : new MFString(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]),
              leftUrl : new MFString(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]),
              rightUrl : new MFString(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]),
              topUrl : new MFString(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])}),

            new Transform({
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Sphere({})),
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
                              url : new MFString(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          language : new SFString("GLSL"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              children : new MFNode([
                                new ComposedCubeMapTexture({
                                  USE : new SFString("texture")})])}),

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
                              url : new MFString(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              DEF : new SFString("common"),
                              url : new MFString(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          language : new SFString("GLSL"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              children : new MFNode([
                                new ComposedCubeMapTexture({
                                  USE : new SFString("texture")})])}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("bias"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("scale"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("power"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("2")}),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])}))}))}))})])})])}))});
console.log(X3D0.toXMLNode());
