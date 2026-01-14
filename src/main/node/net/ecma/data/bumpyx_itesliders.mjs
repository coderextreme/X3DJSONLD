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
var IndexedFaceSet = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var ComposedCubeMapTexture = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var LayoutLayer = require('./x3d.mjs');
var Layout = require('./x3d.mjs');
var Viewport = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          /*<component name='Shape' level='4'></component>*/
          /*<component name='DIS' level='2'></component>*/
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
              content : new SFString("bumpyx_itesliders.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("*Bumpy flower with prototype sliders*")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Doug Sanden, Christoph Valentin, John Carlson")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d")}),

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
              order : new MFInt32([1,2,3]),
              /*the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"*/
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
                              /*<Sphere radius='40'></Sphere>*/
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  convex : new SFBool(false),
                                  DEF : new SFString("Orbit"),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("OrbitCoordinates")}))})),
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
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])})),
                                      topTexture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])})),
                                      topTexture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])})),
                                      topTexture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])})),
                                      topTexture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])})),
                                      topTexture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])}))})),
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
                                      /*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/}))}))}))})])}),

                    new Script({
                      DEF : new SFString("OrbitScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coordinates"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("coordIndexes"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("a"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("10")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("b"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("10")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("c"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("2")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("d"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("2")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pdelta"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("tdelta"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0")}),
                      ]),
ecmascript:eval (0
, function initialize() {
     var resolution = 300;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds.push(new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		));
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;


     var cis = new MFInt32();
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis.push(i*resolution+j);
	     cis.push(i*resolution+j+1);
	     cis.push((i+1)*resolution+j+1);
	     cis.push((i+1)*resolution+j);
	     cis.push(-1);
	}
    }
    coordIndexes = cis;
})}),

                    new ROUTE({
                      fromField : new SFString("coordIndexes"),
                      fromNode : new SFString("OrbitScript"),
                      toField : new SFString("set_coordIndex"),
                      toNode : new SFString("Orbit")}),

                    new ROUTE({
                      fromField : new SFString("coordinates"),
                      fromNode : new SFString("OrbitScript"),
                      toField : new SFString("set_point"),
                      toNode : new SFString("OrbitCoordinates")})])})),
              layers : new SFNode(
                new LayoutLayer({
                  pickable : new SFBool(true),
                  objectType : new MFString(["ALL"]),
                  layout : new SFNode(
                    new Layout({
                      align : new MFString(["LEFT","BOTTOM"]),
                      offset : new MFFloat([-0.2,0.19]),
                      size : new MFFloat([0.4,0.6])})),
                  viewport : new SFNode(
                    new Viewport({
                      clipBoundary : new MFFloat([0,1,0,1])})),
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

                    new Transform({
                      DEF : new SFString("equationTransform"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0,-20]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  DEF : new SFString("equation"),
                                  string : new MFString(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      size : new SFFloat(0.09)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,0])}))}))}))})])}),

                    new ProtoDeclare({
                      name : new SFString("SliderProto"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("sliderTranslation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0.7 0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("transformTranslation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0.1")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("sensorTranslation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_MFSTRING,
                              name : new SFString("textString"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("\"a=\"")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("parameterScale"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("30")}),

                            new field({
                              type : field.TYPE_SFSTRING,
                              name : new SFString("parameterName"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("a")}),

                            new field({
                              type : field.TYPE_MFSTRING,
                              name : new SFString("petNames"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("shaderNode"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("protoSlider"),
                                  translation : new SFVec3f([0,0.7,0]),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("translation"),
                                          protoField : new SFString("sliderTranslation")})])})),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("protoTransform"),
                                      translation : new SFVec3f([0,0,0.1]),
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("translation"),
                                              protoField : new SFString("sensorTranslation")})])})),
                                      children : new MFNode([
                                        new PlaneSensor({
                                          DEF : new SFString("protoSensor"),
                                          description : new SFString("Grab with mouse to adjust slider"),
                                          maxPosition : new SFVec2f([1,0])}),

                                        new Transform({
                                          translation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              DEF : new SFString("protoTS")})])}),

                                        new Transform({
                                          child : new SFNode(
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  DEF : new SFString("protoText"),
                                                  string : new MFString(["a="]),
                                                  IS : new SFNode(
                                                    new IS({
                                                      connect : new MFNode([
                                                        new connect({
                                                          nodeField : new SFString("string"),
                                                          protoField : new SFString("textString")})])})),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.23)}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))}))}))})])})])}),

                                new Script({
                                  url : new MFString(["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"]),
                                  DEF : new SFString("protoValueTransformerScript"),
                                  directOutput : new SFBool(true),
                                  mustEvaluate : new SFBool(true),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("protoScale"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                                    new field({
                                      type : field.TYPE_MFSTRING,
                                      name : new SFString("petNames"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                                    new field({
                                      type : field.TYPE_SFSTRING,
                                      name : new SFString("protoParameterName"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                                    new field({
                                      type : field.TYPE_SFNODE,
                                      name : new SFString("shader"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("newTranslation"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                                      value : new SFString("1 1 1")}),

                                    new field({
                                      type : field.TYPE_SFFLOAT,
                                      name : new SFString("protoValue_changed"),
                                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                                      value : new SFString("1")}),

                                    new field({
                                      type : field.TYPE_MFSTRING,
                                      name : new SFString("protoText_changed"),
                                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                                      value : new SFString("\"1.0\"")}),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("protoScale"),
                                          protoField : new SFString("parameterScale")}),

                                        new connect({
                                          nodeField : new SFString("petNames"),
                                          protoField : new SFString("petNames")}),

                                        new connect({
                                          nodeField : new SFString("protoParameterName"),
                                          protoField : new SFString("parameterName")}),

                                        new connect({
                                          nodeField : new SFString("shader"),
                                          protoField : new SFString("shaderNode")})])})])}),

                                new ROUTE({
                                  fromField : new SFString("translation_changed"),
                                  fromNode : new SFString("protoSensor"),
                                  toField : new SFString("set_translation"),
                                  toNode : new SFString("protoTransform")}),

                                new ROUTE({
                                  fromField : new SFString("translation_changed"),
                                  fromNode : new SFString("protoSensor"),
                                  toField : new SFString("newTranslation"),
                                  toNode : new SFString("protoValueTransformerScript")}),

                                new ROUTE({
                                  fromField : new SFString("protoText_changed"),
                                  fromNode : new SFString("protoValueTransformerScript"),
                                  toField : new SFString("string"),
                                  toNode : new SFString("protoText")})])})])}))}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("aPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 0.7 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"a=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("30")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("a")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("bPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 0.4 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"b=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("30")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("b")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("cPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 0.1 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"c=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("20")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("c")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm\" \"yottzumm2\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("dPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 -0.2 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"d=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("20")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("d")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm\" \"yottzumm2\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("tdeltaPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 -0.5 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"tdelta=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("6.28")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("tdelta")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm2\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])}),

                    new ProtoInstance({
                      name : new SFString("SliderProto"),
                      DEF : new SFString("pdeltaPI"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("sliderTranslation"),
                          value : new SFString("0 -0.8 0")}),

                        new fieldValue({
                          name : new SFString("transformTranslation"),
                          value : new SFString("0 0 0.1")}),

                        new fieldValue({
                          name : new SFString("sensorTranslation"),
                          value : new SFString("0 0 0")}),

                        new fieldValue({
                          name : new SFString("textString"),
                          value : new SFString("\"pdelta=\"")}),

                        new fieldValue({
                          name : new SFString("parameterScale"),
                          value : new SFString("6.28")}),

                        new fieldValue({
                          name : new SFString("parameterName"),
                          value : new SFString("pdelta")}),

                        new fieldValue({
                          name : new SFString("petNames"),
                          value : new SFString("\"yottzumm2\" \"group1-petname\"")}),

                        new fieldValue({
                          name : new SFString("shaderNode"),
                          children : new MFNode([
                            new ComposedShader({
                              USE : new SFString("x_iteShader")})])})])})])})),
              layers : new SFNode(
                new Layer({
                  pickable : new SFBool(true),
                  objectType : new MFString(["ALL"]),
                  children : new MFNode([
                    new Viewpoint({
                      description : new SFString("My Humanoids"),
                      fieldOfView : new SFFloat(1.570796),
                      position : new SFVec3f([0,1.75,80])}),

                    new Script({
                      url : new MFString(["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"]),
                      DEF : new SFString("HumanoidScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true)}),

                    new Group({
                      DEF : new SFString("humanoidGroup"),
                      children : new MFNode([
                        new Group({})])})])}))}))}))});
console.log(X3D0.toXMLNode());
