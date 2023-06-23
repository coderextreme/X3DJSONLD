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
var NavigationInfo = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Shape = require('./x3d.js');
var Sphere = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
              content : new SFString("https://coderextreme.net/X3DJSONLD/ThreeDTexture.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a kind of ThreeDTexture cube with spheres")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Rubiks Cube"),
              position : new SFVec3f([0,0,12])}),

            new ProtoDeclare({
              name : new SFString("sphereproto"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("xtranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("xtranslation")})])})),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])}))}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("three"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ytranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ytranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("0 0 0")})])}),

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
                              value : new SFString("-2 0 0")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("nine"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ztranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ztranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 0 0")})])}),

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
                              value : new SFString("0 -2 0")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("twentyseven"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ttranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ttranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 0")})])}),

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
                              value : new SFString("0 0 -2")})])})])})])}))}),

            new ProtoInstance({
              name : new SFString("twentyseven"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ttranslation"),
                  value : new SFString("0 0 0")})])})])}))});
console.log(X3D0.toXMLNode());
