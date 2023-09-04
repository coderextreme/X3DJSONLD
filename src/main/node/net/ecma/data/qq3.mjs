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
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("qq3.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("11 Jan 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("05 May 2017")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("12 extrusions to test prototype expander")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/x3d/qq3.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Process"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("ShapeLeftDown"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.7,1,0])}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([-2.5,0,0,-1.5,0,0])}))}))}),

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("ShapeUpRight"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.7,1])}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([1.5,0,0,2.5,0,0])}))}))}),

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("ShapeUpRight")}))}),

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("ShapeLeftDown")}))})])})])}))}),

            new Viewpoint({
              description : new SFString("Process pipes"),
              position : new SFVec3f([0,5,12]),
              orientation : new SFRotation([1,0,0,-0.4])}),

            new Transform({
              translation : new SFVec3f([0,-2.5,0]),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])}),

            new Transform({
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])}),

            new Transform({
              translation : new SFVec3f([0,2.5,0]),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])})])}))});
console.log(X3D0.toXMLNode());
