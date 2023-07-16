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
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Sunrise X3D Editor")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sun, 12 Dec 2021 19:43:00 +0100")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrise X3D Editor V1.0, https://create3000.github.io/Sunrise/")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/vp-layers.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 14 Dec 2021 20:27:38 +0100")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("VP"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("same"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("viewpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Box"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")})])})),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new Box({}))}),

                        new TouchSensor({
                          DEF : new SFString("_1")})])}),

                    new Script({
                      DEF : new SFString("VPScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_time"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("same"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("viewpoint"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("same"),
                              protoField : new SFString("same")}),

                            new connect({
                              nodeField : new SFString("viewpoint"),
                              protoField : new SFString("viewpoint")})])})]),
                      
ecmascript:eval (0

, function set_time (value, time)
{
   var bind = same ? viewpoint .isBound : !viewpoint .isBound;

   viewpoint .set_bind = bind;

   print (viewpoint .description, bind);
})}),

                    new ROUTE({
                      fromNode : new SFString("_1"),
                      fromField : new SFString("touchTime"),
                      toNode : new SFString("VPScript"),
                      toField : new SFString("set_time")})])}))}),

            new WorldInfo({
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Sunrise"),
                  DEF : new SFString("Sunrise"),
                  reference : new SFString("https://github.com/create3000/Swift-X3D"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Footer"),
                      DEF : new SFString("Footer"),
                      reference : new SFString("https://github.com/create3000/Swift-X3D"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("selectedTabItem"),
                          DEF : new SFString("selectedTabItem"),
                          reference : new SFString("https://github.com/create3000/Swift-X3D"),
                          value : new MFString(["ScriptEditor"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Sidebar"),
                      DEF : new SFString("Sidebar"),
                      reference : new SFString("https://github.com/create3000/Swift-X3D"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("selectedTabItem"),
                          DEF : new SFString("selectedTabItem_1"),
                          reference : new SFString("https://github.com/create3000/Swift-X3D"),
                          value : new MFString(["OutlineEditor"])}))}))})])}),
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(1),
              order : new MFInt32([0,1,2]),
              layers : new SFNode(
                new Layer({
                  DEF : new SFString("L1"),
                  children : new MFNode([
                    new NavigationInfo({
                      transitionTime : new SFTime(2)}),

                    new Viewpoint({
                      DEF : new SFString("VP1"),
                      description : new SFString("VP1")}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-3 2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP1")})])})])}),

                    new Viewpoint({
                      DEF : new SFString("VP2"),
                      description : new SFString("VP2"),
                      position : new SFVec3f([1,0,10])}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0 2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP2")})])})])}),

                    new Viewpoint({
                      DEF : new SFString("VP3"),
                      description : new SFString("VP3"),
                      position : new SFVec3f([2,0,10])}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("3 2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP3")})])})])})])})),
              layers : new SFNode(
                new Layer({
                  DEF : new SFString("L2"),
                  children : new MFNode([
                    new NavigationInfo({}),

                    new Viewpoint({
                      DEF : new SFString("VP1_1"),
                      description : new SFString("VP1")}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-3 -2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP1_1")})])})])}),

                    new Viewpoint({
                      DEF : new SFString("VP2_1"),
                      description : new SFString("VP2"),
                      position : new SFVec3f([1,0,10])}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0 -2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP2_1")})])})])}),

                    new Viewpoint({
                      USE : new SFString("VP3")}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("3 -2 0")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP3")})])})])}),

                    new ProtoInstance({
                      name : new SFString("VP"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0 -0.5 0")}),

                        new fieldValue({
                          name : new SFString("scale"),
                          value : new SFString("0.2 0.2 0.2")}),

                        new fieldValue({
                          name : new SFString("same"),
                          value : new SFString("true")}),

                        new fieldValue({
                          name : new SFString("viewpoint"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("VP2_1")})])})])})])}))})])}))});
console.log(X3D0.toXMLNode());
