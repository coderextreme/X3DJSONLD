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
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("bubs2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Tour around a prismatic sphere")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")}),
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Bubble"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("body_trans"),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0]),
                                  transparency : new SFFloat(0.2)}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.25)}))})),
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("bounce"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("scale"),
                              value : new SFString("1 1 1")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("translation")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("velocity")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              name : new SFString("scalvel")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                              name : new SFString("set_fraction")}),
                          ]),
ecmascript:eval (0
, function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

, function set_fraction(value) {
    if (typeof translation === 'undefined') {
		translation = new SFVec3f(0, 0, 0);
    }
    if (typeof velocity === 'undefined') {
		velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof scalvel === 'undefined') {
		scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof scale === 'undefined') {
		scale = new SFVec3f(1, 1, 1);
    }
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
})}),

                        new TimeSensor({
                          DEF : new SFString("bubbleClock"),
                          cycleInterval : new SFTime(10),
                          loop : new SFBool(true)})])}),

                    new ROUTE({
                      fromNode : new SFString("bounce"),
                      fromField : new SFString("translation"),
                      toNode : new SFString("body_trans"),
                      toField : new SFString("translation")}),

                    new ROUTE({
                      fromNode : new SFString("bounce"),
                      fromField : new SFString("scale"),
                      toNode : new SFString("body_trans"),
                      toField : new SFString("scale")}),

                    new ROUTE({
                      fromNode : new SFString("bubbleClock"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("bounce"),
                      toField : new SFString("set_fraction")})])}))}),

            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Bubbles in action"),
              position : new SFVec3f([0,0,4])}),

            new Background({
              frontUrl : new MFString(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]),
              backUrl : new MFString(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]),
              leftUrl : new MFString(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]),
              rightUrl : new MFString(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]),
              topUrl : new MFString(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]),
              bottomUrl : new MFString(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"])}),

            new ProtoInstance({
              DEF : new SFString("bubbleA"),
              name : new SFString("Bubble")}),

            new ProtoInstance({
              DEF : new SFString("bubbleB"),
              name : new SFString("Bubble")}),

            new ProtoInstance({
              DEF : new SFString("bubbleC"),
              name : new SFString("Bubble")}),

            new ProtoInstance({
              DEF : new SFString("bubbleD"),
              name : new SFString("Bubble")})])}))});
console.log(X3D0.toXMLNode());
