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
var Shape = require('./x3d.js');
var Sphere = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
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
              content : new SFString("BoxEm.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/box.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("3 boxes")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Cubes on Fire"),
              position : new SFVec3f([0,0,12])}),

            new ProtoDeclare({
              name : new SFString("anyShape"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("xtranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])}))}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("xtranslation")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("myShape")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("three"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ytranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])}))}))})])})])})),
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
                          name : new SFString("anyShape"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("0 0 0")}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("myShape"),
                                  protoField : new SFString("myShape")})])})])}),

                        new ProtoInstance({
                          name : new SFString("anyShape"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("2 0 0")}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("myShape"),
                                  protoField : new SFString("myShape")})])})])}),

                        new ProtoInstance({
                          name : new SFString("anyShape"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("-2 0 0")}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("myShape"),
                                  protoField : new SFString("myShape")})])})])})])})])}))}),

            new ProtoInstance({
              name : new SFString("three"),
              DEF : new SFString("threepi"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ytranslation"),
                  value : new SFString("0 0 0")}),

                new fieldValue({
                  name : new SFString("myShape"),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("box"),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([1,1,1])})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0])}))}))})])})])}),

            new Transform({
              translation : new SFVec3f([0,2,0]),
              children : new MFNode([
                new Shape({
                  USE : new SFString("box")})])})])}))});
console.log(X3D0.toXMLNode());
