'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var Text = require('./x3d.js');
var MFString = require('./x3d.js');
var FontStyle = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var Script = require('./x3d.js');
var field = require('./x3d.js');
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
              content : new SFString("https://coderextreme.net/X3DJSONLD/text.x3d")}),

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
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node2","\\\\","\\\\\\\\","Node2"]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

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
