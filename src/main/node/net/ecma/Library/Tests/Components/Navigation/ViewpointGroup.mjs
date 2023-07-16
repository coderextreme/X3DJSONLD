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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ViewpointGroup = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ViewpointGroup")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sun, 07 May 2023 09:08:53 GMT")}),

            new meta({
              name : new SFString("comment"),
              content : new SFString("Rise and Shine")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrize X3D Editor V1.0.24, https://create3000.github.io/sunrize/")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Volumes/Home/Projekte/Library/Tests/Components/Navigation/ViewpointGroup.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 07 May 2023 09:37:40 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Outside"),
              position : new SFVec3f([0,0,25])}),

            new Viewpoint({
              description : new SFString("Inside"),
              position : new SFVec3f([0,0,15])}),

            new ViewpointGroup({
              description : new SFString("Group"),
              size : new SFVec3f([35,35,35]),
              children : new MFNode([
                new Viewpoint({
                  description : new SFString("First in Group"),
                  position : new SFVec3f([0,0,20])}),

                new ViewpointGroup({
                  description : new SFString("SubGroup"),
                  children : new MFNode([
                    new Viewpoint({
                      description : new SFString("Second in SubGroup"),
                      position : new SFVec3f([0,0,25])}),

                    new Viewpoint({
                      description : new SFString("Third in SubGroup"),
                      position : new SFVec3f([0,0,30])})])})])}),

            new Transform({
              DEF : new SFString("ViewpointGroupBox"),
              scale : new SFVec3f([35,35,35]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.5,0,1]),
                          transparency : new SFFloat(0.5)}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Transform({
              DEF : new SFString("Box"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Box({}))})])})])}))});
console.log(X3D0.toXMLNode());
