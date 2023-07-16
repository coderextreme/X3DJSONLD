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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("TourGuide"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("viewpointPosition"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("viewpointOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_bind"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isBound"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bind_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("proximitySensor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Viewpoint({
                          DEF : new SFString("_1"),
                          position : new SFVec3f([0,0,0]),
                          jump : new SFBool(false)}),

                        new Transform({
                          children : new MFNode([
                            new Script({
                              DEF : new SFString("_guide_1"),
                              directOutput : new SFBool(true),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFBOOL,
                                  name : new SFString("bind_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFBOOL,
                                  name : new SFString("set_bind"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFBOOL,
                                  name : new SFString("isActive"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC3F,
                                  name : new SFString("viewpointPosition"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                new field({
                                  type : field.TYPE_SFROTATION,
                                  name : new SFString("viewpointOrientation"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("proximitySensor"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

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
                                  name : new SFString("positionInterpolator"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("_3"),
                                      key : new MFFloat([0,1]),
                                      keyValue : new MFVec3f([0,0,0,0,0,0])})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("orientationInterpolator"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new OrientationInterpolator({
                                      DEF : new SFString("_4"),
                                      key : new MFFloat([0,1]),
                                      keyValue : new MFRotation([0,0,1,0,0,0,1,0])})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("viewPoint"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new Viewpoint({
                                      USE : new SFString("_1")})])}),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("bind_changed"),
                                      protoField : new SFString("bind_changed")}),

                                    new connect({
                                      nodeField : new SFString("set_bind"),
                                      protoField : new SFString("set_bind")}),

                                    new connect({
                                      nodeField : new SFString("viewpointPosition"),
                                      protoField : new SFString("viewpointPosition")}),

                                    new connect({
                                      nodeField : new SFString("viewpointOrientation"),
                                      protoField : new SFString("viewpointOrientation")}),

                                    new connect({
                                      nodeField : new SFString("proximitySensor"),
                                      protoField : new SFString("proximitySensor")})])})]),
                              vrmlscript:
, function initialize()
{
	positionInterpolator.keyValue[1]    = viewpointPosition;
	orientationInterpolator.keyValue[1] = viewpointOrientation;
}

, function isActive(value, time)
{
	if (!value){
		timeSensor.enabled = FALSE;
		viewPoint.set_bind = FALSE;
		bind_changed = TRUE;
	}
}

, function set_bind(value, time)
{
	if (value){
		timeSensor.enabled    = TRUE;

		viewPoint.position    = proximitySensor.position_changed;
		viewPoint.orientation = proximitySensor.orientation_changed;
	
		positionInterpolator.keyValue[0]    = viewPoint.position;
		orientationInterpolator.keyValue[0] = viewPoint.orientation;

		viewPoint.set_bind = TRUE;
	}else {
		bind_changed = FALSE;
	}
})})])})])}),

                    new ROUTE({
                      fromNode : new SFString("_3"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("_1"),
                      toField : new SFString("set_position")}),

                    new ROUTE({
                      fromNode : new SFString("_4"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("_1"),
                      toField : new SFString("set_orientation")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("isBound"),
                      toNode : new SFString("_2"),
                      toField : new SFString("set_enabled")}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("bindTime"),
                      toNode : new SFString("_2"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("_3"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("_4"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("_2"),
                      fromField : new SFString("isActive"),
                      toNode : new SFString("_guide_1"),
                      toField : new SFString("isActive")})])}))}),

            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new ProtoInstance({
                  name : new SFString("TourGuide")})])})])}))});
console.log(X3D0.toXMLNode());
