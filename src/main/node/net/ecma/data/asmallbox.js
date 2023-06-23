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
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var Shape = require('./x3d.js');
var Sphere = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Cylinder = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var Box = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("asmallbox.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/abox.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a box")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("anyShape"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("myShape")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("one"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("anyShape"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("myShape"),
                                  protoField : new SFString("myShape")})])}))})])})])}))}),

            new ProtoInstance({
              name : new SFString("one"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("myShape"),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Box({}))})])})])})])}))});
console.log(X3D0.toXMLNode());
