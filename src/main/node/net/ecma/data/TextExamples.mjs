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
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("TextExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Show different escape-character text examples for embedded quotation marks.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("7 April 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("26 April 2016")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              translation : new SFVec3f([0,2,0]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Compare special character escaping"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          DEF : new SFString("testFontStyle"),
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.8)}))})),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("LightBlueAppearance"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.1,0.7,0.7])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-3,0,0]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["I don't think so","","he said \"Hi\""]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          USE : new SFString("testFontStyle")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("LightBlueAppearance")}))})])}),

            new Transform({
              translation : new SFVec3f([3,0,0]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["I don't think so","","he said \"Hi\""]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          USE : new SFString("testFontStyle")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("LightBlueAppearance")}))})])})])}))});
console.log(X3D0.toXMLNode());
