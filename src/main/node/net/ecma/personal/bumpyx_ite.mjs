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
var WorldInfo = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
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
              name : new SFString("Grouping"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(1)})),
          /*<component name='Shape' level='4'></component>*/
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("bumpyx_ite.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("A flower")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/personal/bumpyx_ite.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("bumpyx_ite.x3d")}),

            new NavigationInfo({
              type : ["ANY","EXAMINE","FLY","LOOKAT"]}),

            new Viewpoint({
              position : new SFVec3f([0,0,40]),
              description : new SFString("Transparent rose")}),
          /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/

            new Background({
              backUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])}),

            new Transform({
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(40)})),
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
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x_iteShader"),
                          language : new SFString("GLSL"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                              children : new MFNode([
                                new ComposedCubeMapTexture({
                                  USE : new SFString("texture")})])}),

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
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("15")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("b"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("c"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("d"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("5")}),

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
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])})),
                          /*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/}))}))}))})])}))});
console.log(X3D0.toXMLNode());
