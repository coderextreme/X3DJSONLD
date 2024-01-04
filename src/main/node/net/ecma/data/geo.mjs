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
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
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
              name : new SFString("generator"),
              content : new SFString("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")}),
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})]),
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
              level : new SFInt32(1)}))})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["ANY","EXAMINE","FLY","LOOKAT"]}),

            new Viewpoint({
              DEF : new SFString("Tour"),
              description : new SFString("Tour Views")}),

            new Background({
              frontUrl : new MFString(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]),
              backUrl : new MFString(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]),
              leftUrl : new MFString(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]),
              rightUrl : new MFString(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]),
              topUrl : new MFString(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]),
              bottomUrl : new MFString(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])}),

            new Transform({
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
                          DEF : new SFString("texture")})),
                      shaders : new SFNode(
                        new ComposedShader({
                          language : new SFString("GLSL"),
                          parts : new SFNode(
                            new ShaderPart({
                              url : new MFString(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              DEF : new SFString("common"),
                              url : new MFString(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])})),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("chromaticDispertion"),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("cube"),
                              children : new MFNode([
                                new ComposedCubeMapTexture({
                                  USE : new SFString("texture")})])}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("bias"),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("scale"),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("power"),
                              value : new SFString("2")})])})),
                      shaders : new SFNode(
                        new ComposedShader({
                          language : new SFString("GLSL"),
                          parts : new SFNode(
                            new ShaderPart({
                              url : new MFString(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])})),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])})),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              name : new SFString("chromaticDispertion"),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              name : new SFString("cube"),
                              children : new MFNode([
                                new ComposedCubeMapTexture({
                                  USE : new SFString("texture")})])}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              name : new SFString("bias"),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              name : new SFString("scale"),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              name : new SFString("power"),
                              value : new SFString("2")})])}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))})])}))});
console.log(X3D0.toXMLNode());
