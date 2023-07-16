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
var Inline = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:13 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:13 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("else"),
              children : new MFNode([
                new Inline({
                  url : new MFString(["helpScout.x3d"]),
                  bboxSize : new SFVec3f([5,3.8,5])})])}),

            new Transform({
              DEF : new SFString("hudLOD"),
              children : new MFNode([
                new LOD({
                  DEF : new SFString("HUD"),
                  range : new MFFloat([6]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("HUD_obj"),
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Collision({
                                  enabled : new SFBool(false),
                                  proxy : new SFNode(
                                    new LOD({
                                      range : new MFFloat([3]),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("on"),
                                          children : new MFNode([
                                            new Inline({
                                              url : new MFString(["cs_help-txt.x3d"]),
                                              bboxSize : new SFVec3f([0.537486,0.144576,0.0317884]),
                                              bboxCenter : new SFVec3f([0.00359547,-0.0934332,-0.276017])})])}),

                                        new Transform({
                                          DEF : new SFString("off_1")})])}))})])})])}),

                        new Transform({
                          DEF : new SFString("prx"),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("_1"),
                              size : new SFVec3f([7,2,7]),
                              center : new SFVec3f([0,1,0])})])})])}),

                    new Transform({
                      DEF : new SFString("off")})])})])}),

            new Viewpoint({
              DEF : new SFString("VP1"),
              position : new SFVec3f([3.71258,0.795521,3.41767]),
              orientation : new SFRotation([-0.0239249,0.998759,0.0436796,0.859438]),
              fieldOfView : new SFFloat(1.2)}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("on"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("on"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
