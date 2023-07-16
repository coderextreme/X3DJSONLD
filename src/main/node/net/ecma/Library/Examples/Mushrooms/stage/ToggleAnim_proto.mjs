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
var SFBool = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
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
              name : new SFString("ToggleAnim"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_animating"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("offset"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("toggled"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("forwardTimer"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("unamedForwardTimer"),
                          enabled : new SFBool(false)})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("backTimer"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("unamedBackTimer"),
                          enabled : new SFBool(false)})])})])})),
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
                              name : new SFString("offset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Group({})])}))}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("_toggleAnim_1"),
                          directOutput : new SFBool(true),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("toggled"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("startTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_animating"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("set_offset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("animating"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("click"),
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
                                          nodeField : new SFString("offset"),
                                          protoField : new SFString("offset")})])}))})])}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("toggled"),
                                  protoField : new SFString("toggled")}),

                                new connect({
                                  nodeField : new SFString("startTime"),
                                  protoField : new SFString("startTime")}),

                                new connect({
                                  nodeField : new SFString("set_animating"),
                                  protoField : new SFString("set_animating")}),

                                new connect({
                                  nodeField : new SFString("forwardTimer"),
                                  protoField : new SFString("forwardTimer")}),

                                new connect({
                                  nodeField : new SFString("backTimer"),
                                  protoField : new SFString("backTimer")})])})]),
                          vrmlscript:

, function initialize()
{
	forwardTimer.enabled = FALSE;
	backTimer.enabled = FALSE;

	if (data.offset){
		backTimer.fraction_changed = 0;
	}else {
		forwardTimer.fraction_changed = 0;
	}
	toggled = data.offset;
}

, function startTime(value, time)
{
	if (!toggled){
		if(animating) click = TRUE;
		else{
			forwardTimer.enabled   = TRUE;
			forwardTimer.startTime = time;
		}
	}else {
		if(animating) click = TRUE;
		else{
			backTimer.enabled   = TRUE;
			backTimer.startTime = time;
		}
	}	
}

, function set_animating(value, time)
{
	animating = value;
	if (value){
		click = FALSE;
	} else {
		toggled = !toggled;
		if (click){
			if (toggled){
				backTimer.enabled   = TRUE;
				backTimer.startTime = time;
			}else {
				forwardTimer.enabled   = TRUE;
				forwardTimer.startTime = time;
			}	
		}
	}
}

, function set_offset(value, time)
{
	click = FALSE;
	forwardTimer.enabled = FALSE;
	backTimer.enabled = FALSE;

	if (value){
		backTimer.fraction_changed = 0;
	}else {
		forwardTimer.fraction_changed = 0;
	}
	toggled = value;
})})])}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("offset_changed"),
                      toNode : new SFString("_toggleAnim_1"),
                      toField : new SFString("set_offset")})])}))}),

            new WorldInfo({
              info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])})])}))});
console.log(X3D0.toXMLNode());
