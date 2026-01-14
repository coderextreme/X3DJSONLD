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
var WorldInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("WinterAndSpringThanksAllTitleBox.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Credits for scene.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carol McDonald")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joe Williams and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 June 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:21:02 GMT")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringThanksAllTitleBox.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("WinterAndSpringThanksAllTitleBox.x3d")}),

            new Viewpoint({
              DEF : new SFString("WSThanksAllView"),
              description : new SFString("Look at Thanks title"),
              position : new SFVec3f([10,11,-10]),
              orientation : new SFRotation([-0.15,0,0,0.2])}),

            new Transform({
              DEF : new SFString("WSThanksAllTitle"),
              translation : new SFVec3f([10,10,-15]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["images/WSThanksR2trimmed.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSThanksR2trimmed.png"])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([4,3,0.25])}))}))})])}))});
console.log(X3D0.toXMLNode());
