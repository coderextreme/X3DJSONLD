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
var TimeSensor = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:16 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("ToggleAnim"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("direction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("forward"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("back"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("state_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_isActive"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("forwardTimer"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("_1")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("backTimer"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("_2")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Data"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("direction"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("_toggleAnimScript"),
                          directOutput : new SFBool(true),
                          mustEvaluate : new SFBool(true),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("state_changed"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("forward"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("back"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_direction"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_isActive"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("direction"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("forwardTimer"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("backTimer"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("isActive"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("next"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("data"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Data"),
                                  DEF : new SFString("Data_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("direction"),
                                          protoField : new SFString("direction")})])}))})])}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("state_changed"),
                                  protoField : new SFString("state_changed")}),

                                new connect({
                                  nodeField : new SFString("startTime"),
                                  protoField : new SFString("startTime")}),

                                new connect({
                                  nodeField : new SFString("forward"),
                                  protoField : new SFString("forward")}),

                                new connect({
                                  nodeField : new SFString("back"),
                                  protoField : new SFString("back")}),

                                new connect({
                                  nodeField : new SFString("set_isActive"),
                                  protoField : new SFString("set_isActive")}),

                                new connect({
                                  nodeField : new SFString("forwardTimer"),
                                  protoField : new SFString("forwardTimer")}),

                                new connect({
                                  nodeField : new SFString("backTimer"),
                                  protoField : new SFString("backTimer")})])})]),
                          vrmlscript:
, function initialize()
{
	forwardTimer.stopTime = 0;
	backTimer.stopTime    = 0;
	direction = data.direction;
	state_changed = direction;
}

, function set_direction(value, time)
{
	if (value == direction) return;
	direction = value;
	if (direction == state_changed) {
		next = TRUE;
	} else {
		next = FALSE;
		if (direction) {
			forwardTimer.enabled   = TRUE;
			forwardTimer.startTime = time;			
		} else {
			backTimer.enabled	= TRUE;
			backTimer.startTime = time;
		}
	}
}

, function startTime(value, time)
{
	if (!next) set_direction(!direction, time);
}

, function forward(value, time)
{
	set_direction(TRUE, time);
}

, function back(value, time)
{
	 set_direction(FALSE, time);
}

, function set_isActive(value, time)
{
	isActive = value;
	if (!isActive) {
		if (next) {
			direction = !direction;
			state_changed = direction;
			set_direction(!direction, time);
		} else {
			state_changed = direction;
			forwardTimer.enabled = FALSE;
			backTimer.enabled	 = FALSE;			
		}
	}
})})])}),

                    new ROUTE({
                      fromNode : new SFString("Data_1"),
                      fromField : new SFString("direction_changed"),
                      toNode : new SFString("_toggleAnimScript"),
                      toField : new SFString("set_direction")})])}))})])}))});
console.log(X3D0.toXMLNode());
