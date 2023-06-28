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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("TextSpecialCharacters.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("12 July 2008")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("2 April 2017")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Character entity references in HTML 4")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.w3.org/TR/REC-html40/sgml/entities.html")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("Copyright (c) Don Brutzman and Leonard Daly, 2008")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Background({
              skyColor : new MFColor([1,1,1])}),

            new Viewpoint({
              description : new SFString("Default View"),
              position : new SFVec3f([0,0,15])}),

            new Shape({
              /*Empty string \"\" means to skip a line*/
              /*The ampersand escape characters are based on XML rules*/
              /*apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute*/
              /*ampersand & is &amp; and needs to be escaped*/
              /*quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute*/
              /*quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\"*/
              /*backslash \\ is used as escape character for \" (and itself) in X3D*/
              /*character entities are listed in HTML specification and are good for any XML*/
              geometry : new SFNode(
                new Text({
                  DEF : new SFString("DefaultText"),
                  string : new MFString(["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi is pi is pi XML character entity"]),
                  fontStyle : new SFNode(
                    new FontStyle({
                      DEF : new SFString("CenteredFontStyle"),
                      justify : new MFString(["MIDDLE","MIDDLE"])}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      DEF : new SFString("DefaultMaterial"),
                      diffuseColor : new SFColor([0.2,0.2,0.2])}))}))})])}))});
console.log(X3D0.toXMLNode());
