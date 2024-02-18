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
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
              name : new SFString("title"),
              content : new SFString("text.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/text.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("test \\n text")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))})),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node2","\\\\","\\\\\\\\","Node2"]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))})),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))})),
              children : new MFNode([
                new Script({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("frontUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"rnl_front.png\" \"uffizi_front.png\"")}),
                  ]),
ecmascript:eval (0
			    var me = '"1" ""2" "\n3"';)})])})])}))});
console.log(X3D0.toXMLNode());
