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
var Transform = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
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
              name : new SFString("OptionButton"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("touchTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("selected"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_1")})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("Option_1"),
                          whichChoice : new SFInt32(-1),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("whichChoice"),
                                  protoField : new SFString("whichChoice")}),

                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("choice")})])}))}),

                        new Transform({
                          children : new MFNode([
                            new Script({
                              DEF : new SFString("_optionButton"),
                              directOutput : new SFBool(true),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("selected"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFTIME,
                                  name : new SFString("touchTime"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("option"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new Switch({
                                      USE : new SFString("Option_1")})])}),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("selected"),
                                      protoField : new SFString("selected")}),

                                    new connect({
                                      nodeField : new SFString("touchTime"),
                                      protoField : new SFString("touchTime")})])})]),
                              vrmlscript:
, function touchTime(value, time)
{
	i = 0;
	while(i < option.choice.length){
		if (option.choice[i++].touchTime == value){
			if (i == option.choice.length) option.whichChoice = 0;
			else option.whichChoice = i;
			selected = option.whichChoice;
			break;
		}
	}
})})])})])})])}))}),

            new WorldInfo({
              info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])})])}))});
console.log(X3D0.toXMLNode());
