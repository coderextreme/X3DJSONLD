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
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Thu, 23 Apr 2015 06:07:04 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:04 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Ghost"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("startPosition"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("step"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("visibilityLimit"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("40")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1.5")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("freeze"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
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
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("matrix"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("proximitySensor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Data"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC2F,
                              name : new SFString("startPosition"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFVEC2F,
                              name : new SFString("step"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("visibilityLimit"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("freeze"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("stopTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("matrix"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("proximitySensor"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Script({
                      DEF : new SFString("_ghost_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_freeze"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("go"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("position"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("lastPosition"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("lastDirection"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("rd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("v"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("data"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Data"),
                              DEF : new SFString("_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("startPosition"),
                                      protoField : new SFString("startPosition")}),

                                    new connect({
                                      nodeField : new SFString("step"),
                                      protoField : new SFString("step")}),

                                    new connect({
                                      nodeField : new SFString("visibilityLimit"),
                                      protoField : new SFString("visibilityLimit")}),

                                    new connect({
                                      nodeField : new SFString("freeze"),
                                      protoField : new SFString("freeze")}),

                                    new connect({
                                      nodeField : new SFString("startTime"),
                                      protoField : new SFString("startTime")}),

                                    new connect({
                                      nodeField : new SFString("stopTime"),
                                      protoField : new SFString("stopTime")}),

                                    new connect({
                                      nodeField : new SFString("matrix"),
                                      protoField : new SFString("matrix")}),

                                    new connect({
                                      nodeField : new SFString("proximitySensor"),
                                      protoField : new SFString("proximitySensor")})])}))})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("timeSensor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("_2"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("cycleInterval"),
                                      protoField : new SFString("cycleInterval")})])}))})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("translationInterpolator"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new PositionInterpolator({
                              DEF : new SFString("_3"),
                              key : new MFFloat([0,1]),
                              keyValue : new MFVec3f([0,0,0,0,0,0]),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("value_changed"),
                                      protoField : new SFString("translation_changed")})])}))})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation_changed"),
                              protoField : new SFString("translation_changed")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")})])})]),
                      vrmlscript:
, function random(value)
{
	return Math.round(Math.random() * value);
}

, function getTranslation(value)
{
	y = Math.floor(value / data.matrix.size.x);
	x = value - (y * data.matrix.size.x);
	return new SFVec3f(x * data.step.x, 0, y * data.step.y);
}

, function randomPosition()
{
	i = random(data.matrix.size.x * data.matrix.size.y - 1);
	while (!data.matrix.matrix[i]) {
		i = random(data.matrix.size.x * data.matrix.size.y - 1);
	}
	return i;
}

, function randomDirection()
{
	d = new SFVec2f(0, 0);

	if (Math.random() > 0.5) d.x = Math.random() > 0.5 ? 1 : -1;
	else d.y = Math.random() > 0.5 ? 1 : -1;

	return d;
}

, function aimDirection(value)
{
	direction = new SFVec2f(0, 0);
	v = translationInterpolator.keyValue[1].add(data.proximitySensor.position_changed.negate());
	if (data.proximitySensor.isActive && v.length() < data.visibilityLimit) {
		x = Math.abs(v.x);
		y = Math.abs(v.z);
		if (value) {
			if (x < y) direction.x = -(v.x / x);
			else direction.y = v.z / y;
		} else {
			if (x > y) direction.x = -(v.x / x);
			else direction.y = v.z / y;
		}
	} else {
			if (value) direction = new SFVec2f(-rd.y, -rd.x);
			else {
				rd = randomDirection();
				direction = rd;
			}
	}
	return direction;
}

, function newPosition()
{
	ways = data.matrix.matrix[position];
	if (ways > 2) {
		direction = aimDirection(0);
		p = (position + direction.x) + direction.y * data.matrix.size.x;
		if (!data.matrix.matrix[p] || p == lastPosition) {
			d = direction;
			direction = aimDirection(1);
			p = (position + direction.x) + direction.y * data.matrix.size.x;
			if (!data.matrix.matrix[p] || p == lastPosition) {
				direction = direction.negate();
				p = (position + direction.x) + direction.y * data.matrix.size.x;
				if (!data.matrix.matrix[p]) {
					direction = d.negate();
					p = (position + direction.x) + direction.y * data.matrix.size.x;
				}
			}
		} else if (Math.random() < 0.5) {
			d = aimDirection(1);
			pr = (position + d.x) + d.y * data.matrix.size.x;
			if (data.matrix.matrix[pr] && pr != lastPosition) {
				direction = d;
				p = pr;
			}
		}
	} else if (ways > 1) {
		direction = lastDirection;
		p = (position + direction.x) + direction.y * data.matrix.size.x;
		if (!data.matrix.matrix[p]) {
			direction = aimDirection(0);
			p = (position + direction.x) + direction.y * data.matrix.size.x;
			if (!data.matrix.matrix[p]) {
				d = direction;
				direction = aimDirection(1);
				p = (position + direction.x) + direction.y * data.matrix.size.x;
				if (!data.matrix.matrix[p]) {
					direction = direction.negate();
					p = (position + direction.x) + direction.y * data.matrix.size.x;
					if (!data.matrix.matrix[p]) {
						direction = d.negate();
						p = (position + direction.x) + direction.y * data.matrix.size.x;
					}
				}
			}
		}
	} else {
		direction = lastDirection.negate();
		p = lastPosition;
	}
	lastDirection = direction;
	lastPosition = position;
	position = p;
	return p;
}

, function go(value, time)
{
	if (!value) {
//		if (v.length() < data.step.length()) collideTime = time;
		if (!data.freeze) {
			translationInterpolator.keyValue[0] = translationInterpolator.keyValue[1];
			p = newPosition();
			translationInterpolator.keyValue[1] = getTranslation(p);
			timeSensor.startTime = time;
		}
	}
}

, function set_freeze(value, time)
{
	if (!value && !timeSensor.isActive && isActive) go(FALSE, time);
}

, function set_startTime(value, time)
{
	isActive = TRUE;
	timeSensor.enabled = TRUE;
	if(data.startPosition.length()) {
		position = data.startPosition.x + data.startPosition.y * data.matrix.size.x;
	} else {
		position = randomPosition();
	}
	translation_changed = getTranslation(position);

	v = new SFVec3f(data.step.x, 0, data.step.y);
	translationInterpolator.keyValue[1] = translation_changed;
	go(FALSE, value + 0.1);
}

, function set_stopTime(value, time)
{
	timeSensor.enabled = FALSE;
	isActive = FALSE;
})}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("_3"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("_ghost_1"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("_ghost_1"),
                      toField : new SFString("set_stopTime")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("freeze_changed"),
                      toNode : new SFString("_ghost_1"),
                      toField : new SFString("set_freeze")}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("isActive"),
                      toNode : new SFString("_ghost_1"),
                      toField : new SFString("go")})])}))})])}))});
console.log(X3D0.toXMLNode());
