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
var Script = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("browser.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/browser.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a script test with embedded \\n between single quotes, a double backslash \\\\\\\\ a backslash \\\\ and a closing quote \"")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Script({
              DEF : new SFString("Browser"),
              
ecmascript:eval (0
                , function initialize() {
		    Browser.print('DUDES\n'+'"DUDETTES');
                })}),

            new Script({
              DEF : new SFString("Clouds"),
              
ecmascript:eval (0


, function cumulustranslation() // These values designate the boundary location of the cloud
{
var xxx = ' '+' '+
'	Transform		\n'+
'    ' + '               	\n';

})})])}))});
console.log(X3D0.toXMLNode());
