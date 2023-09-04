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
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ThreeDTexture.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("sphereproto"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("xtranslation")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])}))})),
                          geometry : new SFNode(
                            new Sphere({}))})),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("xtranslation")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("three"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("ytranslation")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("sphereproto")}),

                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("2 0 0")})])}),

                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("-2 0 0")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ytranslation")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("nine"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("ztranslation")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("three")}),

                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 2 0")})])}),

                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 -2 0")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ztranslation")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("twentyseven"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("ttranslation")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("nine")}),

                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 2")})])}),

                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 -2")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ttranslation")})])})])})])}))}),

            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Rubiks Cube"),
              position : new SFVec3f([0,0,12])}),

            new ProtoInstance({
              name : new SFString("twentyseven")})])}))});
console.log(X3D0.toXMLNode());
