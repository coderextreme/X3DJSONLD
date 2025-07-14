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
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
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
              name : new SFString("modified"),
              content : new SFString("April 18 2017")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("fors2.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d")}),

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
                      child : new SFNode(
                        new Shape({
                          /*comment before Sphere*/
                          /*comment after Sphere*/
                          /*comment after Appearance*/
                          geometry : new SFNode(
                            new Sphere({})),
                          appearance : new SFNode(
                            new Appearance({
                              /*comment before Material*/
                              /*comment after Material*/
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))}))}))}),

                    new PositionInterpolator({
                      DEF : new SFString("NodePosition"),
                      key : new MFFloat([0,1]),
                      keyValue : new MFVec3f([0,0,0,0,5,0])}),

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
                      ]),
ecmascript:eval (0
					, function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f(...[old, translation]);
						// Browser.println(translation);
					})}),

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
              name : new SFString("cyl"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("positionA"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("positionB"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Extrusion({
                          DEF : new SFString("extrusion"),
                          creaseAngle : new SFFloat(0.785),
                          crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                          spine : new MFVec3f([0,-50,0,0,0,0,0,50,0])})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0])}))}))}),

                    new Script({
                      DEF : new SFString("MoveCylinder"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("spine"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0 -50 0 0 0 0 0 50 0")}),

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
                              protoField : new SFString("positionA")}),

                            new connect({
                              nodeField : new SFString("set_endB"),
                              protoField : new SFString("positionB")})])})]),
                      
ecmascript:eval (0

                , function set_endA(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[value, spine[1]]);
		    }
                }

                , function set_endB(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[spine[0], value]);
		    }
                }

                , function set_spine(value) {
		    Browser.print('\n'+'"');
                    spine = value;
                })}),

                    new ROUTE({
                      fromNode : new SFString("MoveCylinder"),
                      fromField : new SFString("spine"),
                      toNode : new SFString("extrusion"),
                      toField : new SFString("set_spine")})])}))}),

            new Transform({
              scale : new SFVec3f([0.1,0.1,0.1]),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("node"),
                  DEF : new SFString("nodeA"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("position"),
                      value : new SFString("-50 -50 -50")})])}),

                new ProtoInstance({
                  name : new SFString("node"),
                  DEF : new SFString("nodeB"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("position"),
                      value : new SFString("50 50 50")})])}),

                new ProtoInstance({
                  name : new SFString("cyl"),
                  DEF : new SFString("linkA"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("positionA"),
                      value : new SFString("0 0 0")}),

                    new fieldValue({
                      name : new SFString("positionB"),
                      value : new SFString("50 50 50")})])})])}),

            new ROUTE({
              fromNode : new SFString("nodeA"),
              fromField : new SFString("position"),
              toNode : new SFString("linkA"),
              toField : new SFString("positionA")}),

            new ROUTE({
              fromNode : new SFString("nodeB"),
              fromField : new SFString("position"),
              toNode : new SFString("linkA"),
              toField : new SFString("positionB")})])}))});
console.log(X3D0.toXMLNode());
