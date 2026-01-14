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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TextureBackground = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          /*<component name='Shape' level='4'></component>*/
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
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("mirror.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("sphere with alternating backgrounds")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,5,100]),
              description : new SFString("Switch background and images texture")}),

            new TextureBackground({
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("leftBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])})),
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("rightBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])})),
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("frontBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])})),
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("backBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])})),
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("topBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])})),
              topTexture : new SFNode(
                new ImageTexture({
                  DEF : new SFString("bottomBackgroundTexture"),
                  url : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])}))}),

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
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("backShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("bottomShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("frontShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("leftShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("rightShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("topShader"),
                              url : new MFString(["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x3dom"),
                          language : new SFString("GLSL"),
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
                              url : new MFString(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x_ite"),
                          language : new SFString("GLSL"),
                          /*http://hypertextbook.com/facts/2005/JustinChe.shtml*/
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
                              url : new MFString(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"])}))}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(30)}))})),
              children : new MFNode([
                new Script({
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
                      value : new SFString("-1")}),
                  ]),
ecmascript:eval (0
        , function set_fraction( f, tm ) {
	    var side = Math.floor(f*frontUrls.length);
	    if (side > frontUrls.length-1) {
	    	side = 0;
	    }
	    if (side != old) {
	    	    Browser.print(f+" "+side);
	    	    old = side;
		    front_changed[0] = frontUrls[side];
		    back_changed[0] = backUrls[side];
		    left_changed[0] = leftUrls[side];
		    right_changed[0] = rightUrls[side];
		    top_changed[0] = topUrls[side];
		    bottom_changed[0] = bottomUrls[side];
            }
        })}),

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
                  toNode : new SFString("frontBackgroundTexture"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("back_changed"),
                  toNode : new SFString("backBackgroundTexture"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("left_changed"),
                  toNode : new SFString("leftBackgroundTexture"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("right_changed"),
                  toNode : new SFString("rightBackgroundTexture"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("top_changed"),
                  toNode : new SFString("topBackgroundTexture"),
                  toField : new SFString("url")}),

                new ROUTE({
                  fromNode : new SFString("UrlSelector"),
                  fromField : new SFString("bottom_changed"),
                  toNode : new SFString("bottomBackgroundTexture"),
                  toField : new SFString("url")}),

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
                  toField : new SFString("url")})])})])}))});
console.log(X3D0.toXMLNode());
