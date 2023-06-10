'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("arc3.x3d")}),

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

            new Transform({
              DEF : new SFString("DECLpoint_G1_node"),
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
                  DEF : new SFString("DECLpoint_G1_PI1"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFVec3f([0,0,0,0,5,0])}),

                new Script({
                  DEF : new SFString("DECLpoint_G1_MB1"),
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
		    // Browser.println(keyValue);
		})}),

                new TimeSensor({
                  DEF : new SFString("DECLpoint_G1_CL1"),
                  cycleInterval : new SFTime(3),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G1_CL1"),
                  fromField : new SFString("cycleTime"),
                  toNode : new SFString("DECLpoint_G1_MB1"),
                  toField : new SFString("set_location")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G1_CL1"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLpoint_G1_PI1"),
                  toField : new SFString("set_fraction")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G1_MB1"),
                  fromField : new SFString("keyValue"),
                  toNode : new SFString("DECLpoint_G1_PI1"),
                  toField : new SFString("keyValue")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G1_PI1"),
                  fromField : new SFString("value_changed"),
                  toNode : new SFString("DECLpoint_G1_node"),
                  toField : new SFString("set_translation")})])}),

            new Transform({
              DEF : new SFString("DECLpoint_G2_node"),
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
                  DEF : new SFString("DECLpoint_G2_PI1"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFVec3f([0,0,0,0,5,0])}),

                new Script({
                  DEF : new SFString("DECLpoint_G2_MB1"),
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
		    // Browser.println(keyValue);
		})}),

                new TimeSensor({
                  DEF : new SFString("DECLpoint_G2_CL1"),
                  cycleInterval : new SFTime(3),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G2_CL1"),
                  fromField : new SFString("cycleTime"),
                  toNode : new SFString("DECLpoint_G2_MB1"),
                  toField : new SFString("set_location")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G2_CL1"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLpoint_G2_PI1"),
                  toField : new SFString("set_fraction")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G2_MB1"),
                  fromField : new SFString("keyValue"),
                  toNode : new SFString("DECLpoint_G2_PI1"),
                  toField : new SFString("keyValue")}),

                new ROUTE({
                  fromNode : new SFString("DECLpoint_G2_PI1"),
                  fromField : new SFString("value_changed"),
                  toNode : new SFString("DECLpoint_G2_node"),
                  toField : new SFString("set_translation")})])}),

            new Group({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("DECLx3dconnector_connector1_trans"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("DECLx3dconnector_connector1_rotscale"),
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
                  DEF : new SFString("DECLx3dconnector_connector1_S1"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("startnode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Group({
                          USE : new SFString("DECLpoint_G1_node")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("endnode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Group({
                          USE : new SFString("DECLpoint_G2_node")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("position"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("DECLx3dconnector_connector1_trans")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("rotscale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("DECLx3dconnector_connector1_rotscale")})])}),

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
        })})])}),

            new ROUTE({
              fromNode : new SFString("DECLpoint_G1_node"),
              fromField : new SFString("translation"),
              toNode : new SFString("DECLx3dconnector_connector1_S1"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("DECLpoint_G2_node"),
              fromField : new SFString("translation"),
              toNode : new SFString("DECLx3dconnector_connector1_S1"),
              toField : new SFString("set_endpoint")})])}))});
console.log(X3D0.toXMLNode());
