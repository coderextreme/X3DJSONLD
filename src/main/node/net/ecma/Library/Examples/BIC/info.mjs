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
              content : new SFString("Mon, 30 Mar 2015 08:41:49 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.7, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 30 Mar 2015 08:41:49 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("BIC Info Entry")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Script({
              vrmlscript:
, function initialize ()
{
	Browser .loadURL (new MFString ('stage/worlds/bic-wegweiser.x3d'), new MFString ());
})})])}))});
console.log(X3D0.toXMLNode());