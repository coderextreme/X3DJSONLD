'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Extrusion } from './x3d.mjs';
import { MFVec2f } from './x3d.mjs';
import { PlaneSensor } from './x3d.mjs';
import { SFVec2f } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("John W Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("December 13 2015")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("fors.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/force.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("beginnings of a force directed graph in 3D")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("node"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("position"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("transform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("position")})])})),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor(new SFColor([1,0,0]))}))}))}),

                        new Transform({
                          translation : new SFVec3f(new SFVec3f([1,0,0])),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(new MFString(["Node"])),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      justify : new MFString(new MFString(["MIDDLE","MIDDLE"])),
                                      size : new SFFloat(5)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor(new SFColor([0,0,1]))}))}))})])})])}),

                    new PositionInterpolator({
                      DEF : new SFString("NodePosition"),
                      key : new MFFloat(new MFFloat([0,1])),
                      keyValue : new MFVec3f(new MFVec3f([0,0,0,0,5,0]))}),

                    new Script({
                      DEF : new SFString("MoveBall"),
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
                          name : new SFString("set_cycle"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValue"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      {ecmascript:
					},
 {ecmascript: function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					}}])}),

                    new TimeSensor({
                      DEF : new SFString("nodeClock"),
                      cycleInterval : new SFTime(3),
                      loop : new SFBool(true)}),

                    new ROUTE({
                      fromNode : new SFString("nodeClock"),
                      fromField : new SFString("cycleTime"),
                      toNode : new SFString("MoveBall"),
                      toField : new SFString("set_cycle")}),

                    new ROUTE({
                      fromNode : new SFString("nodeClock"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("NodePosition"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("MoveBall"),
                      fromField : new SFString("keyValue"),
                      toNode : new SFString("NodePosition"),
                      toField : new SFString("keyValue")}),

                    new ROUTE({
                      fromNode : new SFString("NodePosition"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("transform"),
                      toField : new SFString("set_translation")})])}))}),

            new ProtoDeclare({
              name : new SFString("cylinder"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_positionA"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_positionB"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Extrusion({
                          DEF : new SFString("extrusion"),
                          creaseAngle : new SFFloat(0.785),
                          crossSection : new MFVec2f(new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])),
                          spine : new MFVec3f(new MFVec3f([0,-50,0,0,50,0]))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor(new SFColor([0,1,0]))}))}))}),

                    new Script({
                      DEF : new SFString("MoveCylinder"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("spine"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 -50 0 0 50 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_endA"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_endB"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_endA"),
                              protoField : new SFString("set_positionA")}),

                            new connect({
                              nodeField : new SFString("set_endB"),
                              protoField : new SFString("set_positionB")})])})),
                      {ecmascript:

                },
 {ecmascript: function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                },
 {ecmascript: function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                },
 {ecmascript: function set_spine(value) {
                    spine = value;
                }}])}),

                    new ROUTE({
                      fromNode : new SFString("MoveCylinder"),
                      fromField : new SFString("spine"),
                      toNode : new SFString("extrusion"),
                      toField : new SFString("set_spine")})])}))}),

            new Transform({
              DEF : new SFString("HoldsContent"),
              scale : new SFVec3f(new SFVec3f([0.1,0.1,0.1])),
              children : new MFNode([
                new PlaneSensor({
                  DEF : new SFString("clickGenerator"),
                  minPosition : new SFVec2f(new SFVec2f([-50,-50])),
                  maxPosition : new SFVec2f(new SFVec2f([50,50])),
                  description : new SFString("click on background to add nodes, click on nodes to add links")}),

                new ProtoInstance({
                  name : new SFString("node"),
                  DEF : new SFString("nodeA"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("position"),
                      value : new SFString("0 0 0")})])}),

                new ProtoInstance({
                  name : new SFString("node"),
                  DEF : new SFString("nodeB"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("position"),
                      value : new SFString("50 50 50")})])}),

                new ProtoInstance({
                  name : new SFString("cylinder"),
                  DEF : new SFString("linkA"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("set_positionA"),
                      value : new SFString("0 0 0")}),

                    new fieldValue({
                      name : new SFString("set_positionB"),
                      value : new SFString("50 50 50")})])})])}),

            new ROUTE({
              fromNode : new SFString("nodeA"),
              fromField : new SFString("position"),
              toNode : new SFString("linkA"),
              toField : new SFString("set_positionA")}),

            new ROUTE({
              fromNode : new SFString("nodeB"),
              fromField : new SFString("position"),
              toNode : new SFString("linkA"),
              toField : new SFString("set_positionB")})])}))});
console.log(X3D0.toXMLNode());
