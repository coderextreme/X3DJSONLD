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
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Background = require('./x3d.js');
var MFColor = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Shape = require('./x3d.js');
var Sphere = require('./x3d.js');
var SFFloat = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var PositionInterpolator = require('./x3d.js');
var MFFloat = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Script = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var SFTime = require('./x3d.js');
var SFBool = require('./x3d.js');
var ROUTE = require('./x3d.js');
var Group = require('./x3d.js');
var Cylinder = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("arc")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Lost, Doug Sanden I think")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")}),

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

            new ProtoDeclare({
              name : new SFString("point"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("node"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")})])})),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.1)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))}))}),

                        new PositionInterpolator({
                          DEF : new SFString("PI1"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFVec3f([0,0,0,0,5,0])}),

                        new Script({
                          DEF : new SFString("MB1"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("translation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("50 50 0")}),

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
		    // Browser.println(keyValue);
		})}),

                        new TimeSensor({
                          DEF : new SFString("CL1"),
                          cycleInterval : new SFTime(3),
                          loop : new SFBool(true)}),

                        new ROUTE({
                          fromNode : new SFString("CL1"),
                          fromField : new SFString("cycleTime"),
                          toNode : new SFString("MB1"),
                          toField : new SFString("set_location")}),

                        new ROUTE({
                          fromNode : new SFString("CL1"),
                          fromField : new SFString("fraction_changed"),
                          toNode : new SFString("PI1"),
                          toField : new SFString("set_fraction")}),

                        new ROUTE({
                          fromNode : new SFString("MB1"),
                          fromField : new SFString("keyValue"),
                          toNode : new SFString("PI1"),
                          toField : new SFString("keyValue")}),

                        new ROUTE({
                          fromNode : new SFString("PI1"),
                          fromField : new SFString("value_changed"),
                          toNode : new SFString("node"),
                          toField : new SFString("set_translation")})])})])}))}),

            new ProtoDeclare({
              name : new SFString("x3dconnector"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("startnode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("endnode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_startpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_endpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("trans"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("rotscale"),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.2,0.7,0.7]),
                                          transparency : new SFFloat(0.5)}))})),
                                  geometry : new SFNode(
                                    new Cylinder({
                                      radius : new SFFloat(0.05)}))})])})])}),

                        new Script({
                          DEF : new SFString("S1"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("startnode"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("endnode"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("position"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("trans")})])}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("rotscale"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              children : new MFNode([
                                new Transform({
                                  USE : new SFString("rotscale")})])}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("set_startpoint"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("set_endpoint"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("startnode"),
                                  protoField : new SFString("startnode")}),

                                new connect({
                                  nodeField : new SFString("endnode"),
                                  protoField : new SFString("endnode")}),

                                new connect({
                                  nodeField : new SFString("set_startpoint"),
                                  protoField : new SFString("set_startpoint")}),

                                new connect({
                                  nodeField : new SFString("set_endpoint"),
                                  protoField : new SFString("set_endpoint")})])})]),
                          
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
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	, function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      position.translation = trafo.translation;
		      rotscale.rotation = trafo.rotation;
		      rotscale.scale = trafo.scale;
	      }
	}
        , function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        , function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        , function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        })})])})])}))}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G1")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G2")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G3")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G4")}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector1"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G2")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint")}),

                new fieldValue({
                  name : new SFString("set_endpoint")})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector2"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G3")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint")}),

                new fieldValue({
                  name : new SFString("set_endpoint")})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector3"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G4")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint")}),

                new fieldValue({
                  name : new SFString("set_endpoint")})])}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G2"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G3"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G4"),
              fromField : new SFString("translation"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_endpoint")})])}))});
console.log(X3D0.toXMLNode());