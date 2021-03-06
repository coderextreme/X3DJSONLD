'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
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
import { Cylinder } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
                      .setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }")])}),

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
                      .setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }")])}),

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
              .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }")])}),

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
