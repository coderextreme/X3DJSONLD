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
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:06 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:06 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("ProximitySensor"),
              translation : new SFVec3f([0,0.5,0]),
              children : new MFNode([
                new ProximitySensor({
                  DEF : new SFString("_1"),
                  size : new SFVec3f([100,10,100])})])}),

            new Transform({
              DEF : new SFString("HUD"),
              translation : new SFVec3f([0,0.5,0]),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Transform({
                      DEF : new SFString("HUDObj"),
                      children : new MFNode([
                        new Viewpoint({
                          DEF : new SFString("HUDVP1"),
                          position : new SFVec3f([0,0,0]),
                          fieldOfView : new SFFloat(1.2)}),

                        new Transform({
                          DEF : new SFString("DemoLogo"),
                          translation : new SFVec3f([0.217382,0.163237,-0.3]),
                          scale : new SFVec3f([0.0448933,0.0448934,0.00191928]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("demo"),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["icts-demo.png"])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0])}))}))})])})])})])}))})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HUDObj"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("HUDObj"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
