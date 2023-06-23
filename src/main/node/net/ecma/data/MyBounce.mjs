'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var Sphere = require('./x3d.js');
var Script = require('./x3d.js');
var field = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var SFTime = require('./x3d.js');
var SFBool = require('./x3d.js');
var ROUTE = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("MyBounce.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("3 prismatic spheres")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Transform({
              DEF : new SFString("transform"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.7,0.7,0.7]),
                          specularColor : new SFColor([0.5,0.5,0.5])}))})),
                  geometry : new SFNode(
                    new Sphere({}))})])}),

            new Script({
              DEF : new SFString("Bounce2"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  value : new SFString("0 0 0")}),

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
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),
ecmascript:eval (0
			, function newBubble() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			, function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
				if (Math.abs(translation.x) > 10) {
					newBubble();
				} else if (Math.abs(translation.y) > 10) {
					newBubble();
				} else if (Math.abs(translation.z) > 10) {
					newBubble();
				} else {
					velocity = new SFVec3f(
						velocity.x + Math.random() * 0.2 - 0.1,
						velocity.y + Math.random() * 0.2 - 0.1,
						velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

			, function initialize() {
			     newBubble();
			})}),

            new TimeSensor({
              DEF : new SFString("TourTime"),
              cycleInterval : new SFTime(0.15),
              loop : new SFBool(true)}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("Bounce2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Bounce2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("transform"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
