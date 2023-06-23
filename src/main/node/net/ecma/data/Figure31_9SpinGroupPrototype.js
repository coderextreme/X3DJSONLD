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
var WorldInfo = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var OrientationInterpolator = require('./x3d.js');
var MFFloat = require('./x3d.js');
var MFRotation = require('./x3d.js');
var ROUTE = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFRotation = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var Shape = require('./x3d.js');
var Box = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var TouchSensor = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Figure31_9SpinGroupPrototype.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 October 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Figure31_9SpinGroupPrototype.x3d")}),

            new ProtoDeclare({
              name : new SFString("SpinGroup"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*NULL node initialization*/}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SpinGroupTransform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),
                  /*following nodes will not be rendered, only the first node of a ProtoBody is drawn*/

                    new TimeSensor({
                      DEF : new SFString("SpinGroupClock"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("cycleInterval")}),

                            new connect({
                              nodeField : new SFString("loop"),
                              protoField : new SFString("loop")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")})])}))}),

                    new OrientationInterpolator({
                      DEF : new SFString("Spinner"),
                      key : new MFFloat([0,0.5,1]),
                      keyValue : new MFRotation([0,1,0,0,0,1,0,3.14,0,1,0,6.28])}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("SpinGroupClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("Spinner")}),

                    new ROUTE({
                      fromField : new SFString("value_changed"),
                      fromNode : new SFString("Spinner"),
                      toField : new SFString("set_rotation"),
                      toNode : new SFString("SpinGroupTransform")})])}))}),
          /*Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).*/

            new Viewpoint({
              description : new SFString("Click on blue crossbar to activate second SpinGroup"),
              orientation : new SFRotation([1,0,0,-0.52]),
              position : new SFVec3f([0,18,30])}),
          /*Create an instance, meaning actual nodes that render*/

            new ProtoInstance({
              name : new SFString("SpinGroup"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("8")}),

                new fieldValue({
                  name : new SFString("loop"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([25,2,2])})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("Green"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0.3])}))}))}),

                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([2,25,2])})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("Green")}))}),

                    new ProtoInstance({
                      name : new SFString("SpinGroup"),
                      DEF : new SFString("SecondSpinGroup"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("cycleInterval"),
                          value : new SFString("4")}),

                        new fieldValue({
                          name : new SFString("loop"),
                          value : new SFString("true")}),

                        new fieldValue({
                          name : new SFString("stopTime"),
                          value : new SFString("1")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("ActivateSecondSpinGroup"),
                              description : new SFString("Activate second SpinGroup by clicking blue bar")}),

                            new Shape({
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([2,2.05,25])})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.3,1])}))}))})])}),
                      /*stopTime > startTime ensures that initial state is stopped*/])})])})])}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("ActivateSecondSpinGroup"),
              toField : new SFString("startTime"),
              toNode : new SFString("SecondSpinGroup")})])}))});
console.log(X3D0.toXMLNode());
