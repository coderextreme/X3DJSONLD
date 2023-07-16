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
var ProximitySensor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:56 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:56 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("AutoViewpoint"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_isActive"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("proximitySensor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("_1")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("timeSensor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("_2")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("positionInterpolator"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new PositionInterpolator({
                          DEF : new SFString("_3")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("orientationInterpolator"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("_4")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("scalarInterpolator"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new ScalarInterpolator({
                          DEF : new SFString("_5")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("autoViewpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Viewpoint({
                          DEF : new SFString("_6")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("viewpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Viewpoint({
                          DEF : new SFString("_7")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Data"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("avp"),
                          directOutput : new SFBool(true),
                          mustEvaluate : new SFBool(true),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_isActive"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("proximitySensor"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("timeSensor"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("positionInterpolator"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("orientationInterpolator"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("scalarInterpolator"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("autoViewpoint"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("viewpoint"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFNODE,
                              name : new SFString("data"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Data"),
                                  DEF : new SFString("Data"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("startTime"),
                                          protoField : new SFString("startTime")})])}))})])}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("set_isActive"),
                                  protoField : new SFString("set_isActive")}),

                                new connect({
                                  nodeField : new SFString("proximitySensor"),
                                  protoField : new SFString("proximitySensor")}),

                                new connect({
                                  nodeField : new SFString("timeSensor"),
                                  protoField : new SFString("timeSensor")}),

                                new connect({
                                  nodeField : new SFString("positionInterpolator"),
                                  protoField : new SFString("positionInterpolator")}),

                                new connect({
                                  nodeField : new SFString("orientationInterpolator"),
                                  protoField : new SFString("orientationInterpolator")}),

                                new connect({
                                  nodeField : new SFString("scalarInterpolator"),
                                  protoField : new SFString("scalarInterpolator")}),

                                new connect({
                                  nodeField : new SFString("autoViewpoint"),
                                  protoField : new SFString("autoViewpoint")}),

                                new connect({
                                  nodeField : new SFString("viewpoint"),
                                  protoField : new SFString("viewpoint")})])})]),
                          vrmlscript:
, function initialize()
{
	timeSensor.enabled  = FALSE;
	timeSensor.stopTime = 0;

	if (positionInterpolator) {
		positionInterpolator.key      = new MFFloat(0, 1);
		positionInterpolator.keyValue = new MFVec3f(
			new SFVec3f(0, 0, 0),
			viewpoint.position
		);
	}

	if (orientationInterpolator) {
		orientationInterpolator.key      = new MFFloat(0, 1);
		orientationInterpolator.keyValue = new MFRotation(
			new SFRotation(0, 0, 1, 0),
			viewpoint.orientation
		);
	}

	if (scalarInterpolator) {
		scalarInterpolator.key		= new MFFloat(0, 1);
		scalarInterpolator.keyValue = new MFFloat(
			autoViewpoint.fieldOfView,
			viewpoint.fieldOfView
		);
	}
	autoViewpoint.jump = FALSE;
}

, function set_startTime(value, time)
{
	if (timeSensor.isActive) return;

	timeSensor.enabled = TRUE;

	autoViewpoint.position    = proximitySensor.position_changed;
	autoViewpoint.orientation = proximitySensor.orientation_changed;

	if (positionInterpolator)    positionInterpolator.keyValue[0]    = autoViewpoint.position;
	if (orientationInterpolator) orientationInterpolator.keyValue[0] = autoViewpoint.orientation;

	autoViewpoint.set_bind = TRUE;
	timeSensor.startTime   = time;
}

, function set_isActive(value, time)
{
	if (!value) {
		timeSensor.enabled = FALSE;
		if (autoViewpoint.isBound) {
			//autoViewpoint.set_bind = FALSE;
			viewpoint.set_bind = TRUE;
		}
	}
})})])}),

                    new ROUTE({
                      fromNode : new SFString("Data"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("avp"),
                      toField : new SFString("set_startTime")})])}))})])}))});
console.log(X3D0.toXMLNode());
