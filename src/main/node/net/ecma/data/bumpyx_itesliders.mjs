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
var LayerSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var DISEntityManager = require('./x3d.mjs');
var undefined = require('./x3d.mjs');
var DISEntityTypeMapping = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var LayoutLayer = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var Layout = require('./x3d.mjs');
var Viewport = require('./x3d.mjs');
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
          component : new SFNode(
            new component({
              name : new SFString("DIS"),
              level : new SFInt32(2)})),
          /*<component name='Shape' level='4'></component>*/
          /*Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L*/
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("bumpyx_itesliders.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("*enter description here, short-sentence summaries preferred*")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Doug Sanden, Christoph Valentin, John Carlson")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("*if manually translating VRML-to-X3D, enter name of person translating here*")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("*enter date of initial version here*")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("*enter date of translation here*")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("*enter date of latest revision here*")}),

            new meta({
              name : new SFString("version"),
              content : new SFString("*enter version here, if any*")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("*enter reference citation or relative/online url here*")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("*enter additional url/bibliographic reference information here*")}),

            new meta({
              name : new SFString("requires"),
              content : new SFString("*enter reference resource here if required to support function, delivery, or coherence of content*")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024")}),

            new meta({
              name : new SFString("drawing"),
              content : new SFString("*enter drawing filename/url here*")}),

            new meta({
              name : new SFString("MovingImage"),
              content : new SFString("*enter movie filename/url here*")}),

            new meta({
              name : new SFString("photo"),
              content : new SFString("*enter photo filename/url here*")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("*enter subject keywords here*")}),

            new meta({
              name : new SFString("accessRights"),
              content : new SFString("*enter permission statements or url here*")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("PSPad, http://www.pspad.com/")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("license.html")})])})),
      /*\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"*/
      Scene : new SFNode(
        new Scene({
          /*LayerSet with two layers, navigation happens in layer 1*/
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(1),
              order : new MFInt32([1,2]),
              /*the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"*/
              /*the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)*/
              layers : new SFNode(
                new Layer({
                  pickable : new SFBool(true),
                  objectType : new MFString(["ALL"]),
                  /*basic nodes, which might be present in any scene*/
                  children : new MFNode([
                    new NavigationInfo({
                      type : ["EXAMINE"],
                      avatarSize : new MFFloat([0.25,1.75,0.75])}),

                    new DirectionalLight({
                      ambientIntensity : new SFFloat(0.2),
                      direction : new SFVec3f([0,-1,0])}),

                    new DirectionalLight({
                      ambientIntensity : new SFFloat(0.2),
                      direction : new SFVec3f([-1,-0.1,-1])}),

                    new Viewpoint({
                      description : new SFString("My Overview"),
                      fieldOfView : new SFFloat(1.570796),
                      position : new SFVec3f([0,1.75,60])}),
                  /*this group contains the red/green/blue 3D crosshair*/

                    new Group({
                      /*Arrow X*/
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([25,0,0]),
                          rotation : new SFRotation([0,0,-1,1.57]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  DEF : new SFString("Shaft"),
                                  radius : new SFFloat(0.35),
                                  height : new SFFloat(50)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("RED"),
                                      diffuseColor : new SFColor([1,0,0]),
                                      emissiveColor : new SFColor([1,0,0])}))}))}))}),

                        new Transform({
                          translation : new SFVec3f([50,0,0]),
                          rotation : new SFRotation([0,0,-1,1.57]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cone({
                                  DEF : new SFString("Tip"),
                                  bottomRadius : new SFFloat(0.8),
                                  height : new SFFloat(3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("RED")}))}))}))}),
                      /*Arrow Y*/

                        new Transform({
                          translation : new SFVec3f([0,25,0]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  USE : new SFString("Shaft")})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("GREEN"),
                                      diffuseColor : new SFColor([0,1,0]),
                                      emissiveColor : new SFColor([0,1,0])}))}))}))}),

                        new Transform({
                          translation : new SFVec3f([0,50,0]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cone({
                                  USE : new SFString("Tip")})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("GREEN")}))}))}))}),
                      /*Arrow Z*/

                        new Transform({
                          translation : new SFVec3f([0,0,25]),
                          rotation : new SFRotation([1,0,0,1.57]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  USE : new SFString("Shaft")})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("BLUE"),
                                      diffuseColor : new SFColor([0,0,1]),
                                      emissiveColor : new SFColor([0,0,1])}))}))}))}),

                        new Transform({
                          translation : new SFVec3f([0,0,50]),
                          rotation : new SFRotation([1,0,0,1.57]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cone({
                                  USE : new SFString("Tip")})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("BLUE")}))}))}))})])}),
                  /*the model that is being reviewed by the users of this scene*/

                    new Transform({
                      DEF : new SFString("FlowerTransform"),
                      /*<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />*/
                      /*Images courtesy of Paul Debevec's Light Probe Image Gallery*/
                      children : new MFNode([
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
                                      /*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/}))}))}))})])}),
                  /*DIS multiuser facilities*/

                    new DISEntityManager({
                      DEF : new SFString("EntityManager"),
                      networkMode : new undefined("networkReader"),
                      children : new MFNode([
                        new DISEntityTypeMapping({
                          category : new SFInt32(77),
                          specific : new SFInt32(1),
                          url : new MFString(["Leif8Final.x3d"])}),

                        new DISEntityTypeMapping({
                          category : new SFInt32(77),
                          specific : new SFInt32(2),
                          url : new MFString(["Lily8Final.x3d"])})])}),

                    new Collision({
                      enabled : new SFBool(false),
                      proxy : new SFNode(
                        new Group({
                          DEF : new SFString("AvatarHolder")}))}),

                    new ROUTE({
                      fromField : new SFString("addedEntities"),
                      fromNode : new SFString("EntityManager"),
                      toField : new SFString("addChildren"),
                      toNode : new SFString("AvatarHolder")}),

                    new ROUTE({
                      fromField : new SFString("removedEntities"),
                      fromNode : new SFString("EntityManager"),
                      toField : new SFString("removeChildren"),
                      toNode : new SFString("AvatarHolder")})])})),
              layers : new SFNode(
                new LayoutLayer({
                  pickable : new SFBool(true),
                  objectType : new MFString(["ALL"]),
                  /*positioning the LayoutLayer*/
                  /*clipping the LayoutLayer*/
                  /*the content (children) of the LayoutLayer*/
                  /*first, the slider for scaling the model*/
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,0,-3]),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0]),
                                  transparency : new SFFloat(0.7)}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([100,100,0.02])}))}))}),
                  /*the plane sensors*/

                    new Transform({
                      DEF : new SFString("aSlider"),
                      translation : new SFVec3f([0,0.7,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("aTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("aSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("aTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))})])}),

                    new Transform({
                      DEF : new SFString("bSlider"),
                      translation : new SFVec3f([0,0.4,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("bTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("bSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("bTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("cSlider"),
                      translation : new SFVec3f([0,0.1,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("cTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("cSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("cTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("dSlider"),
                      translation : new SFVec3f([0,-0.2,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("dTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("dSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("dTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("pdeltaSlider"),
                      translation : new SFVec3f([0,-0.5,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("pdeltaTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("pdeltaSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("pdeltaTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("tdeltaSlider"),
                      translation : new SFVec3f([0,-0.8,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(2.5)}))}))}),

                        new Transform({
                          DEF : new SFString("tdeltaTransform"),
                          translation : new SFVec3f([0,0,0.1]),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("tdeltaSensor"),
                              minPosition : new SFVec2f([-20,0]),
                              maxPosition : new SFVec2f([20,0])}),

                            new Transform({
                              translation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  DEF : new SFString("tdeltaTS")}),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  radius : new SFFloat(0.05),
                                  height : new SFFloat(0.3)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Script({
                      DEF : new SFString("aValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("aValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { aValue_changed = Value.x * 30; })}),

                    new Script({
                      DEF : new SFString("bValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("bValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { bValue_changed = Value.x * 30; })}),

                    new Script({
                      DEF : new SFString("cValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("cValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { cValue_changed = Value.x * 5; })}),

                    new Script({
                      DEF : new SFString("dValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("dValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { dValue_changed = Value.x * 5; })}),

                    new Script({
                      DEF : new SFString("pdeltaValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pdeltaValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { pdeltaValue_changed = Value.x; })}),

                    new Script({
                      DEF : new SFString("tdeltaValueTransformerScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("newTranslation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          value : new SFString("1 1 1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("tdeltaValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          value : new SFString("1")}),
                      ]),
ecmascript:eval (0 , function newTranslation(Value) { tdeltaValue_changed = Value.x; })}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("aSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("aTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("bSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("bTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("cSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("cTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("dSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("dTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("pdeltaSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("pdeltaTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("tdeltaSensor"),
                      toField : new SFString("set_translation"),
                      toNode : new SFString("tdeltaTransform")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("aSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("aValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("bSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("bValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("cSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("cValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("dSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("dValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("pdeltaSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("pdeltaValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("translation_changed"),
                      fromNode : new SFString("tdeltaSensor"),
                      toField : new SFString("newTranslation"),
                      toNode : new SFString("tdeltaValueTransformerScript")}),

                    new ROUTE({
                      fromField : new SFString("aValue_changed"),
                      fromNode : new SFString("aValueTransformerScript"),
                      toField : new SFString("a"),
                      toNode : new SFString("x_iteShader")}),

                    new ROUTE({
                      fromField : new SFString("bValue_changed"),
                      fromNode : new SFString("bValueTransformerScript"),
                      toField : new SFString("b"),
                      toNode : new SFString("x_iteShader")}),

                    new ROUTE({
                      fromField : new SFString("cValue_changed"),
                      fromNode : new SFString("cValueTransformerScript"),
                      toField : new SFString("c"),
                      toNode : new SFString("x_iteShader")}),

                    new ROUTE({
                      fromField : new SFString("dValue_changed"),
                      fromNode : new SFString("dValueTransformerScript"),
                      toField : new SFString("d"),
                      toNode : new SFString("x_iteShader")}),

                    new ROUTE({
                      fromField : new SFString("pdeltaValue_changed"),
                      fromNode : new SFString("pdeltaValueTransformerScript"),
                      toField : new SFString("pdelta"),
                      toNode : new SFString("x_iteShader")}),

                    new ROUTE({
                      fromField : new SFString("tdeltaValue_changed"),
                      fromNode : new SFString("tdeltaValueTransformerScript"),
                      toField : new SFString("tdelta"),
                      toNode : new SFString("x_iteShader")}),
                  layout : new SFNode(
                    new Layout({
                      align : new MFString(["RIGHT","BOTTOM"]),
                      offset : new MFFloat([0,0.2]),
                      offsetUnits : new MFString(["WORLD","WORLD"]),
                      scaleMode : new MFString(["NONE","NONE"]),
                      size : new MFFloat([0.4,0.6]),
                      sizeUnits : new MFString(["WORLD","WORLD"])})]),
                  viewport : new SFNode(
                    new Viewport({
                      clipBoundary : new MFFloat([0,1,0,1])}))}))}))}))});
console.log(X3D0.toXMLNode());
