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
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
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
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 25 Sep 2015 17:43:15 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Mushrooms")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new Transform({
                  translation : new SFVec3f([52.4723,0,11.8231]),
                  rotation : new SFRotation([0,1,0,1.49907]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([35.6884,0,14.5356]),
                  rotation : new SFRotation([0,1,0,1.22763]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([6.59897,0,10.7292]),
                  rotation : new SFRotation([0,1,0,0.61945]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([-12.4465,0,-2.34085]),
                  rotation : new SFRotation([0,1,0,0.200959]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([-24.2654,0,-22.5612]),
                  rotation : new SFRotation([0,-1,0,0.203997]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([-26.8513,0,-39.5722]),
                  rotation : new SFRotation([0,-1,0,0.455394]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Transform({
                  translation : new SFVec3f([-13.6717,0,-73.6618]),
                  rotation : new SFRotation([0,-1,0,1.20026]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["hupfpilz.x3d"]),
                          bboxSize : new SFVec3f([5.41069,6.87135,5.41068]),
                          bboxCenter : new SFVec3f([31.5365,106.54,-26.9564])})])})])}),

                new Inline({
                  url : new MFString(["pilzhaus.x3d"]),
                  bboxSize : new SFVec3f([1161.95,580.974,1161.95]),
                  bboxCenter : new SFVec3f([4.58313,143.655,1.2912])}),

                new PointLight({
                  DEF : new SFString("Light2"),
                  color : new SFColor([0.341451,1,0.269661]),
                  intensity : new SFFloat(0.592233),
                  location : new SFVec3f([36.7051,113.084,-43.2249])})])})])}))});
console.log(X3D0.toXMLNode());
