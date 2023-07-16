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
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ScreenGroup = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Box = require('./x3d.mjs');
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
              content : new SFString("Fri, 01 Jan 2016 09:17:51 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.2, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 08 Jan 2016 19:26:29 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("ScreenGroup")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("ScreenGroup"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,10])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,1,0])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Background({
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new OrthoViewpoint({
              description : new SFString("OthoViewpoint")}),

            new Viewpoint({
              description : new SFString("Viewpoint")}),

            new Transform({
              DEF : new SFString("Text"),
              scale : new SFVec3f([2,1,1]),
              scaleOrientation : new SFRotation([0,0,1,0.785398]),
              children : new MFNode([
                new ScreenGroup({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([", ","ABCDEFGHIJKLMNOPQRSTUVWXYZ, ","abcdefghijklmnopqrstuvwxyz, ","0123456789äöüß.?!,;:"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["Ubuntu Mono"]),
                                  style : new SFString("-NORMAL"),
                                  size : new SFFloat(12),
                                  justify : new MFString([", ","BEGINBEGIN"])}))}))})])}),

                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["../images/image.png"])}))})),
                          geometry : new SFNode(
                            new Rectangle2D({
                              size : new SFVec2f([1,1])}))})])})])})])}),

            new Transform({
              DEF : new SFString("Box"),
              translation : new SFVec3f([-0.767947,0.507512,0]),
              children : new MFNode([
                new ScreenGroup({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Box_1"),
                      scale : new SFVec3f([20,20,20]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new Box({}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
