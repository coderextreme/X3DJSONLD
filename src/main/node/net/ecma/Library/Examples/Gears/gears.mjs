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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Mon, 14 Sep 2015 21:00:05 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("icon"),
              content : new SFString("../../ui/icons/icon-bw.svg")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 14 Sep 2015 21:00:05 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("about:gears")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Rotor"),
              url : new MFString(["Rotor.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("axis"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("angle"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("loop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("pauseTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("resumeTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ProtoDeclare({
              name : new SFString("Gear"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("teeth"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("10")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("toothDepth"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("innerRadius"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("outerRadius"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("4")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("width"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("creaseAngle"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new IndexedFaceSet({
                      DEF : new SFString("Gear"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("creaseAngle"),
                              protoField : new SFString("creaseAngle")})])})),
                      coord : new SFNode(
                        new Coordinate({}))}),

                    new Script({
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("teeth"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("toothDepth"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("innerRadius"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("outerRadius"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("width"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("gear"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new IndexedFaceSet({
                              USE : new SFString("Gear")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("teeth"),
                              protoField : new SFString("teeth")}),

                            new connect({
                              nodeField : new SFString("toothDepth"),
                              protoField : new SFString("toothDepth")}),

                            new connect({
                              nodeField : new SFString("innerRadius"),
                              protoField : new SFString("innerRadius")}),

                            new connect({
                              nodeField : new SFString("outerRadius"),
                              protoField : new SFString("outerRadius")}),

                            new connect({
                              nodeField : new SFString("width"),
                              protoField : new SFString("width")})])})]),
                      vrmlscript:

, function initialize ()
{
	eventsProcessed ();
}

, function eventsProcessed ()
{
	print ('### Generating gear ...');

	var indices = new MFInt32 ();
	var points  = new MFVec3f ();

	var cos = Math .cos;
	var sin = Math .sin;

	// Radien and tooth angle

	var radius0 = innerRadius;
	var radius1 = outerRadius - toothDepth / 2;
	var radius2 = outerRadius + toothDepth / 2;
	var da = 2 * Math .PI / teeth / 4;

	// Front vectors

	var vectorf0 = new SFVec3f (radius0, 0, width * 0.5);
	var vectorf1 = new SFVec3f (radius1, 0, width * 0.5);
	var vectorf2 = new SFVec3f (radius2, 0, width * 0.5);

	// Back vectors

	var vectorb0 = new SFVec3f (radius0, 0, -width * 0.5);
	var vectorb1 = new SFVec3f (radius1, 0, -width * 0.5);
	var vectorb2 = new SFVec3f (radius2, 0, -width * 0.5);

	// Generate front face indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 3;

		indices [indices .length] = index;
		indices [indices .length] = index + 1;
		indices [indices .length] = index + 2;
		indices [indices .length] = index + 4;
		indices [indices .length] = index + 3;
		indices [indices .length] = -1;
	}

	// Generate front face points

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf0);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
	}

	points .length = points .length - 1;

	points [points .length] = new SFVec3f ();
	points [points .length] = new SFVec3f ();
	points [points .length] = new SFVec3f ();


	// Generate front sides of teeth indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 4;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = -1;
	}

	// Generate front sides of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
	}


	// Generate back face indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 3;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 4;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = -1;
	}

	// Generate back face points

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb0);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
	}

	points .length = points .length - 1;


	// Generate back sides of teeth indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 4;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = -1;
	}

	// Generate front sides of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);
		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorb2);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);
	}


	// Generate outward faces of teeth indices

	for (var i = 0; i < teeth * 4; ++ i)
	{
		var index = i * 2;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = -1;
	}

	indices [indices .length - 3] = points .length + 1;
	indices [indices .length - 2] = points .length;

	// Generate outward faces of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
	   var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb1);

		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorb2);

		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);

		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
	}


	// Generate inside radius cylinder points

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 2;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = -1;
	}

	indices [indices .length - 3] = points .length + 1;
	indices [indices .length - 2] = points .length;

	// Generate inside radius cylinder indices

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb0);
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf0);
	}

	print ('### Generating gear done.');

	gear .coord .point   = points;
	gear .set_coordIndex = indices;
})})])}))}),

            new Viewpoint({
              description : new SFString("Home"),
              position : new SFVec3f([0,0,20])}),

            new ProtoInstance({
              name : new SFString("Rotor"),
              DEF : new SFString("RedRotor"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("10")}),

                new fieldValue({
                  name : new SFString("loop"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("Rotor"),
              DEF : new SFString("GreenRotor"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("5")}),

                new fieldValue({
                  name : new SFString("loop"),
                  value : new SFString("true")})])}),

            new ProtoInstance({
              name : new SFString("Rotor"),
              DEF : new SFString("BlueRotor"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("5")}),

                new fieldValue({
                  name : new SFString("loop"),
                  value : new SFString("true")})])}),

            new Transform({
              DEF : new SFString("RedGear_1"),
              translation : new SFVec3f([-2.59808,-2.39242,0.725499]),
              rotation : new SFRotation([0.543846,0.826436,0.145723,0.627057]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Gear_1"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.8,0.1,0])}))})),
                      geometry : new SFNode(
                        new ProtoInstance({
                          name : new SFString("Gear"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("teeth"),
                              value : new SFString("20")}),

                            new fieldValue({
                              name : new SFString("toothDepth"),
                              value : new SFString("0.7")}),

                            new fieldValue({
                              name : new SFString("creaseAngle"),
                              value : new SFString("0.6")})])}))})])})])}),

            new Transform({
              DEF : new SFString("GreenGear_1"),
              translation : new SFVec3f([2.68468,-1.34925,-2.14056]),
              rotation : new SFRotation([0.111593,0.985198,0.130124,3.70575]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Gear_2"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0.8,0.2])}))})),
                      geometry : new SFNode(
                        new ProtoInstance({
                          name : new SFString("Gear"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("toothDepth"),
                              value : new SFString("0.7")}),

                            new fieldValue({
                              name : new SFString("innerRadius"),
                              value : new SFString("0.5")}),

                            new fieldValue({
                              name : new SFString("outerRadius"),
                              value : new SFString("2")}),

                            new fieldValue({
                              name : new SFString("width"),
                              value : new SFString("2")}),

                            new fieldValue({
                              name : new SFString("creaseAngle"),
                              value : new SFString("0.7")})])}))})])})])}),

            new Transform({
              DEF : new SFString("BlueGear_1"),
              translation : new SFVec3f([-2.68468,3.41658,2.89301]),
              rotation : new SFRotation([-0.0562884,0.982778,0.176007,3.65356]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Gear_3"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.2,0.2,1])}))})),
                      geometry : new SFNode(
                        new ProtoInstance({
                          name : new SFString("Gear"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("toothDepth"),
                              value : new SFString("0.7")}),

                            new fieldValue({
                              name : new SFString("innerRadius"),
                              value : new SFString("1.3")}),

                            new fieldValue({
                              name : new SFString("outerRadius"),
                              value : new SFString("2")}),

                            new fieldValue({
                              name : new SFString("width"),
                              value : new SFString("0.5")})])}))})])})])}),

            new ROUTE({
              fromNode : new SFString("RedRotor"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Gear_1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("GreenRotor"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Gear_2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BlueRotor"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Gear_3"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
