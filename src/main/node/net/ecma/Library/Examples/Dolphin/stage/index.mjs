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
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
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
              content : new SFString("Wed, 22 Apr 2015 09:04:29 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 22 Apr 2015 09:04:29 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Dolphin")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Dolphin"),
              url : new MFString(["DolphinPROTO.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("collide"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("collideTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new NavigationInfo({}),

            new Background({
              skyAngle : new MFFloat([1.5708]),
              skyColor : new MFColor([1,1,1,0.35,0.65,0.65]),
              groundAngle : new MFFloat([1.5708]),
              groundColor : new MFColor([0.15,0.3,0.35,0.35,0.65,0.65])}),

            new DirectionalLight({
              color : new SFColor([0.55,0.75,0.75]),
              ambientIntensity : new SFFloat(0.7),
              direction : new SFVec3f([0,-1,0])}),

            new DirectionalLight({
              color : new SFColor([0.55,0.75,0.75]),
              ambientIntensity : new SFFloat(0.7),
              direction : new SFVec3f([0,-1,0])}),

            new ProtoInstance({
              name : new SFString("Dolphin"),
              DEF : new SFString("DOLPHIN")}),

            new TimeSensor({
              DEF : new SFString("TS"),
              loop : new SFBool(true)}),

            new ROUTE({
              fromNode : new SFString("TS"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("DOLPHIN"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());
