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
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flowers2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("transcriber"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("23 January 2005")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("21 March 2018")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manually written")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Viewpoint({
              description : new SFString("Two mathematical orbitals"),
              position : new SFVec3f([0,0,50])}),

            new Group({
              children : new MFNode([
                new DirectionalLight({
                  direction : new SFVec3f([1,1,1])}),

                new ProtoDeclare({
                  name : new SFString("orbit"),
                  ProtoInterface : new SFNode(
                    new ProtoInterface({
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("-8 0 0")}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("1 0.5 0")}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("specularColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("1 0.5 0")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("transparency"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.75")})])})),
                  ProtoBody : new SFNode(
                    new ProtoBody({
                      children : new MFNode([
                        new Group({
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Clock"),
                              cycleInterval : new SFTime(16),
                              loop : new SFBool(true)}),

                            new OrientationInterpolator({
                              DEF : new SFString("OrbitPath"),
                              key : new MFFloat([0,0.5,1]),
                              keyValue : new MFRotation([1,0,0,0,1,0,0,3.14,1,0,0,6.28])}),

                            new Transform({
                              DEF : new SFString("OrbitTransform"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("translation"),
                                      protoField : new SFString("translation")})])})),
                              child : new SFNode(
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("diffuseColor"),
                                                  protoField : new SFString("diffuseColor")}),

                                                new connect({
                                                  nodeField : new SFString("specularColor"),
                                                  protoField : new SFString("specularColor")}),

                                                new connect({
                                                  nodeField : new SFString("transparency"),
                                                  protoField : new SFString("transparency")})])}))}))})),
                                  /*<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>*/
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      ccw : new SFBool(false),
                                      convex : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,-1]),
                                      DEF : new SFString("Orbit"),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("OrbitCoordinates"),
                                          point : new MFVec3f([0,0,1,0,1,0,1,0,0])}))}))}))}),

                            new Script({
                              DEF : new SFString("OrbitScript"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("set_fraction"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_MFVEC3F,
                                  name : new SFString("coordinates"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_MFINT32,
                                  name : new SFString("coordIndexes"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("e"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("f"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("g"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("h"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("resolution"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("50")}),
                              ]),
ecmascript:eval (0

			var e = 5;
			var f = 5;
			var g = 5;
			var h = 5;
			var resolution = 100;

			, function initialize() {
			     generateCoordinates();
			     var localci = [];
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     localci.push(i*resolution+j);
				     localci.push(i*resolution+j+1);
				     localci.push((i+1)*resolution+j+1);
				     localci.push((i+1)*resolution+j);
				     localci.push(-1);
				}
			    }
			    coordIndexes = new MFInt32(localci);
			}

			, function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var localc = [];
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					localc.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
			     }
			     
			     coordinates = new MFVec3f(localc);
			}

			, function set_fraction(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					e += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 1:
					f += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 2:
					g += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 3:
					h += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				}
				if (e < 1) {
					f = 10;
				}
				if (f < 1) {
					f = 10;
				}
				if (g < 1) {
					g = 4;
				}
				if (h < 1) {
					h = 4;
				}
				generateCoordinates();
			})}),

                            new ROUTE({
                              fromNode : new SFString("OrbitScript"),
                              fromField : new SFString("coordIndexes"),
                              toNode : new SFString("Orbit"),
                              toField : new SFString("set_coordIndex")}),

                            new ROUTE({
                              fromNode : new SFString("OrbitScript"),
                              fromField : new SFString("coordinates"),
                              toNode : new SFString("OrbitCoordinates"),
                              toField : new SFString("point")}),

                            new ROUTE({
                              fromNode : new SFString("Clock"),
                              fromField : new SFString("fraction_changed"),
                              toNode : new SFString("OrbitScript"),
                              toField : new SFString("set_fraction")}),

                            new ROUTE({
                              fromNode : new SFString("OrbitPath"),
                              fromField : new SFString("value_changed"),
                              toNode : new SFString("OrbitTransform"),
                              toField : new SFString("rotation")}),

                            new ROUTE({
                              fromNode : new SFString("Clock"),
                              fromField : new SFString("fraction_changed"),
                              toNode : new SFString("OrbitPath"),
                              toField : new SFString("set_fraction")})])})])}))}),

                new ProtoInstance({
                  name : new SFString("orbit"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("translation"),
                      value : new SFString("-8 0 0")}),

                    new fieldValue({
                      name : new SFString("diffuseColor"),
                      value : new SFString("1 0.5 0")}),

                    new fieldValue({
                      name : new SFString("specularColor"),
                      value : new SFString("1 0.5 0")}),

                    new fieldValue({
                      name : new SFString("transparency"),
                      value : new SFString("0.75")})])}),

                new ProtoInstance({
                  name : new SFString("orbit"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("translation"),
                      value : new SFString("8 0 0")}),

                    new fieldValue({
                      name : new SFString("diffuseColor"),
                      value : new SFString("0 0.5 1")}),

                    new fieldValue({
                      name : new SFString("specularColor"),
                      value : new SFString("0 0.5 1")}),

                    new fieldValue({
                      name : new SFString("transparency"),
                      value : new SFString("0.5")})])})])})])}))});
console.log(X3D0.toXMLNode());
