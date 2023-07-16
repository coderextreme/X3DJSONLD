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
var Script = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:32 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:32 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Treasure Island Entry")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Script({
              DEF : new SFString("Setup"),
              vrmlscript:
, function initialize ()
{
	try
	{
		Browser .setBrowserOption ('AnimateStairWalks', true);

		print ('AnimateStairWalks: ', Browser .getBrowserOption ('AnimateStairWalks'));
	}
	catch (error)
	{ }
})}),

            new NavigationInfo({
              type : ["NONE"],
              avatarSize : new MFFloat([0.1,1.6,0.75]),
              visibilityLimit : new SFFloat(300),
              transitionType : new MFString(["TELEPORT"])}),

            new Inline({
              url : new MFString(["stage/index.x3d"])})])}))});
console.log(X3D0.toXMLNode());
