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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Wed, 05 Jul 2017 08:02:41 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.4, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Navigation/ViewpointJump.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 05 Jul 2017 08:10:01 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,0,3.1])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor1"),
              cycleInterval : new SFTime(3),
              loop : new SFBool(true)}),

            new Transform({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Sphere({}))})])}),

            new Viewpoint({
              DEF : new SFString("Viewpoint1"),
              position : new SFVec3f([0,0,10.2])}),

            new Script({
              DEF : new SFString("Script1"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("float1_in"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("bool1_out"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("mstring1_out"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:

 , function float1_in(value)
    {
    // value  SFFloat
    if (value > 0.90)
        bool1_out = true;
    mstring1_out = new MFString(value);
    })}),

            new Transform({
              translation : new SFVec3f([-2.57105,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Text({
                      DEF : new SFString("Text1"),
                      string : new MFString(["0.6444690227508545"])}))})])}),

            new NavigationInfo({}),

            new ROUTE({
              fromNode : new SFString("TimeSensor1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Script1"),
              toField : new SFString("float1_in")}),

            new ROUTE({
              fromNode : new SFString("Script1"),
              fromField : new SFString("bool1_out"),
              toNode : new SFString("Viewpoint1"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("Script1"),
              fromField : new SFString("mstring1_out"),
              toNode : new SFString("Text1"),
              toField : new SFString("set_string")})])}))});
console.log(X3D0.toXMLNode());
