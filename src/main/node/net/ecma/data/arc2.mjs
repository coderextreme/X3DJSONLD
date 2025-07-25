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
var Scene = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("arc2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Lost, Doug Sanden I think")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a generic proto to connect two objects")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,0,5]),
              description : new SFString("Only Viewpoint")}),

            new Background({
              skyColor : new MFColor([0.4,0.4,0.4])}),

            new Transform({
              DEF : new SFString("G1"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("DECLpoint_INSTANCE_node"),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Sphere({
                          radius : new SFFloat(0.1)})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0,0])}))}))})),
                  children : new MFNode([
                    new PositionInterpolator({
                      DEF : new SFString("DECLpoint_INSTANCE_PI1"),
                      key : new MFFloat([0,1]),
                      keyValue : new MFVec3f([0,0,0,0,5,0])}),

                    new Script({
                      DEF : new SFString("DECLpoint_INSTANCE_MB1"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("old"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_location"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValue"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0 0 5 0")}),
                      ]),
ecmascript:eval (0
               , function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
               })}),

                    new TimeSensor({
                      DEF : new SFString("DECLpoint_INSTANCE_CL1"),
                      cycleInterval : new SFTime(3),
                      loop : new SFBool(true)}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE_CL1"),
                      fromField : new SFString("cycleTime"),
                      toNode : new SFString("DECLpoint_INSTANCE_MB1"),
                      toField : new SFString("set_location")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE_CL1"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE_PI1"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE_MB1"),
                      fromField : new SFString("keyValue"),
                      toNode : new SFString("DECLpoint_INSTANCE_PI1"),
                      toField : new SFString("keyValue")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE_PI1"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE_node"),
                      toField : new SFString("set_translation")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE_MB1"),
                      fromField : new SFString("translation_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE_node"),
                      toField : new SFString("set_translation")})])})])}),

            new Transform({
              DEF : new SFString("G2"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("DECLpoint_INSTANCE1000_node"),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Sphere({
                          radius : new SFFloat(0.1)})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0,0])}))}))})),
                  children : new MFNode([
                    new PositionInterpolator({
                      DEF : new SFString("DECLpoint_INSTANCE1000_PI1"),
                      key : new MFFloat([0,1]),
                      keyValue : new MFVec3f([0,0,0,0,5,0])}),

                    new Script({
                      DEF : new SFString("DECLpoint_INSTANCE1000_MB1"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("old"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_location"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValue"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 0 0 0 5 0")}),
                      ]),
ecmascript:eval (0
               , function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
               })}),

                    new TimeSensor({
                      DEF : new SFString("DECLpoint_INSTANCE1000_CL1"),
                      cycleInterval : new SFTime(3),
                      loop : new SFBool(true)}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE1000_CL1"),
                      fromField : new SFString("cycleTime"),
                      toNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
                      toField : new SFString("set_location")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE1000_CL1"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
                      fromField : new SFString("keyValue"),
                      toNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
                      toField : new SFString("keyValue")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE1000_node"),
                      toField : new SFString("set_translation")}),

                    new ROUTE({
                      fromNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
                      fromField : new SFString("translation_changed"),
                      toNode : new SFString("DECLpoint_INSTANCE1000_node"),
                      toField : new SFString("set_translation")})])})])}),

            new Transform({
              DEF : new SFString("transC1"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscaleC1"),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.2,0.7,0.7]),
                              transparency : new SFFloat(0.5)}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          radius : new SFFloat(0.05)}))}))})])}),

            new Script({
              DEF : new SFString("DECLx3dconnector_connector1_S1"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("startnode"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G1")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("endnode"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G2")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("transC1"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("transC1")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("rotscaleC1"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscaleC1")})])}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_startpoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_endpoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),
ecmascript:eval (0
        , function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	, function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      transC1.translation = trafo.translation;
	      rotscaleC1.rotation = trafo.rotation;
	      rotscaleC1.scale = trafo.scale;
	}
        , function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        , function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        , function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        })}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("DECLx3dconnector_connector1_S1"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("DECLx3dconnector_connector1_S1"),
              toField : new SFString("set_endpoint")})])}))});
console.log(X3D0.toXMLNode());
