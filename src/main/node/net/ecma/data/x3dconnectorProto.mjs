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
var WorldInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("x3dconnectorProto.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Lost, Doug Sanden I think")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Unknown")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("July 30 2023")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a generic proto to connect two objects")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Connector Proto")}),

            new Viewpoint({
              position : new SFVec3f([0,0,5]),
              description : new SFString("Only Viewpoint")}),

            new Background({
              skyColor : new MFColor([0.4,0.4,0.4])}),

            new Transform({
              DEF : new SFString("G1"),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.7,0.2,0.2])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.1)}))})),
              children : new MFNode([
                new PlaneSensor({
                  description : new SFString("Grab to move"),
                  DEF : new SFString("PS1")}),

                new ROUTE({
                  fromNode : new SFString("PS1"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("G1"),
                  toField : new SFString("set_translation")})])}),

            new Transform({
              DEF : new SFString("G2"),
              translation : new SFVec3f([1,-1,0.01]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.2,0.7,0.2])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.1)}))})),
              children : new MFNode([
                new PlaneSensor({
                  description : new SFString("Grab to move"),
                  offset : new SFVec3f([1,-1,0.01]),
                  DEF : new SFString("PS2")}),

                new ROUTE({
                  fromNode : new SFString("PS2"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("G2"),
                  toField : new SFString("set_translation")})])}),

            new Transform({
              DEF : new SFString("G3"),
              translation : new SFVec3f([1,1,0.01]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.2,0.7,0.2])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.1)}))})),
              children : new MFNode([
                new PlaneSensor({
                  description : new SFString("Grab to move"),
                  offset : new SFVec3f([1,1,0.01]),
                  DEF : new SFString("PS3")}),

                new ROUTE({
                  fromNode : new SFString("PS3"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("G3"),
                  toField : new SFString("set_translation")})])}),

            new Transform({
              DEF : new SFString("G4"),
              translation : new SFVec3f([-1,1,0.01]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.2,0.7,0.2])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.1)}))})),
              children : new MFNode([
                new PlaneSensor({
                  description : new SFString("Grab to move"),
                  offset : new SFVec3f([-1,1,0.01]),
                  DEF : new SFString("PS4")}),

                new ROUTE({
                  fromNode : new SFString("PS4"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("G4"),
                  toField : new SFString("set_translation")})])}),

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

            new Transform({
              DEF : new SFString("transC2"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscaleC2"),
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

            new Transform({
              DEF : new SFString("transC3"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscaleC3"),
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
                      type : field.TYPE_SFNODE,
                      name : new SFString("transnode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("rotscalenode"),
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
                    new Script({
                      DEF : new SFString("S1"),
                      directOutput : new SFBool(true),
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
                          name : new SFString("transnode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("rotscalenode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

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
                              nodeField : new SFString("transnode"),
                              protoField : new SFString("transnode")}),

                            new connect({
                              nodeField : new SFString("rotscalenode"),
                              protoField : new SFString("rotscalenode")}),

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
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
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
        })})])}))}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector1"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G2")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("transC1")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscaleC1")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint"),
                  value : new SFString("0 0 0")}),

                new fieldValue({
                  name : new SFString("set_endpoint"),
                  value : new SFString("0 0 0")})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector2"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G3")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("transC2")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscaleC2")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint"),
                  value : new SFString("0 0 0")}),

                new fieldValue({
                  name : new SFString("set_endpoint"),
                  value : new SFString("0 0 0")})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector3"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("G4")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("transC3")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscaleC3")})])}),

                new fieldValue({
                  name : new SFString("set_startpoint"),
                  value : new SFString("0 0 0")}),

                new fieldValue({
                  name : new SFString("set_endpoint"),
                  value : new SFString("0 0 0")})])}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G4"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_endpoint")})])}))});
console.log(X3D0.toXMLNode());
