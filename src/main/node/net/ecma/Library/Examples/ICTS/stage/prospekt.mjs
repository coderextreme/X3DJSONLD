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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("isOver"),
              url : new MFString(["isOver_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_isOver"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_hitPoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isOver_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("True"),
              url : new MFString(["True_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_SFBool"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("keyValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("BoolSwitch"),
              url : new MFString(["BoolSwitch_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("wichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("bbox"),
              bboxSize : new SFVec3f([3.5,3.5,3.5])}),

            new Transform({
              DEF : new SFString("bil"),
              children : new MFNode([
                new Billboard({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("ps"),
                      center : new SFVec3f([0,0.747102,5.96046e-7]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("actionsLOD"),
                          children : new MFNode([
                            new LOD({
                              range : new MFFloat([2.5]),
                              children : new MFNode([
                                new Transform({
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("actions_1"),
                                      children : new MFNode([
                                        new Switch({
                                          DEF : new SFString("_1"),
                                          whichChoice : new SFInt32(0),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("actions"),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("pfeil"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("arrow"),
                                                      translation : new SFVec3f([-0.0060057,1.29494,0.000878274]),
                                                      rotation : new SFRotation([-0.478323,0.873766,-0.0879755,0.414935]),
                                                      scale : new SFVec3f([1,0.330698,1]),
                                                      scaleOrientation : new SFRotation([-5.60701e-8,-1,-4.77046e-8,0.160876]),
                                                      center : new SFVec3f([-0.00409863,0.00184226,0.0630002]),
                                                      children : new MFNode([
                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              DEF : new SFString("silberpfeil"),
                                                              children : new MFNode([
                                                                new TimeSensor({
                                                                  DEF : new SFString("Time_1"),
                                                                  cycleInterval : new SFTime(5),
                                                                  loop : new SFBool(true),
                                                                  startTime : new SFTime(974241991.931775),
                                                                  stopTime : new SFTime(1)})])}),

                                                            new Group({
                                                              children : new MFNode([
                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_2"),
                                                                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                                                                  keyValue : new MFFloat([-1,-0.6,-0.2,0.2,0.6,1])}),

                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_3"),
                                                                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                                                                  keyValue : new MFFloat([0,0,0,0,0,0])}),

                                                                new Script({
                                                                  DEF : new SFString("_4"),
                                                                  field : new MFNode([
                                                                    new field({
                                                                      type : field.TYPE_SFVEC2F,
                                                                      name : new SFString("vec"),
                                                                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("xIn"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("yIn"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("xBuf"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("yBuf"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                                                  ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])})])}),

                                                        new TouchSensor({
                                                          DEF : new SFString("DefaultTouchSensor"),
                                                          enabled : new SFBool(false)}),

                                                        new Group({
                                                          children : new MFNode([
                                                            new Group({
                                                              USE : new SFString("silberpfeil")}),

                                                            new Group({
                                                              children : new MFNode([
                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_5"),
                                                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                                                  keyValue : new MFFloat([-1,-0.8,-0.6,-0.4,-0.2,0,0.2,0.4,0.6,0.8,1])}),

                                                                new ScalarInterpolator({
                                                                  DEF : new SFString("_6"),
                                                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                                                  keyValue : new MFFloat([0,0,0,0,0,0,0,0,0,0,0])}),

                                                                new Script({
                                                                  DEF : new SFString("_7"),
                                                                  field : new MFNode([
                                                                    new field({
                                                                      type : field.TYPE_SFVEC2F,
                                                                      name : new SFString("vec"),
                                                                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("xIn"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("yIn"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("xBuf"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                                                    new field({
                                                                      type : field.TYPE_SFFLOAT,
                                                                      name : new SFString("yBuf"),
                                                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                                                  ]),vrmlscript: , function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } , function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; })})])})])}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              texture : new SFNode(
                                                                new ImageTexture({
                                                                  url : new MFString(["reflect2.png"])})),
                                                              textureTransform : new SFNode(
                                                                new TextureTransform({
                                                                  DEF : new SFString("_8"),
                                                                  translation : new SFVec2f([-1,0])}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              solid : new SFBool(false),
                                                              creaseAngle : new SFFloat(0.5),
                                                              texCoordIndex : new MFInt32([38,34,9,10,8,-1,49,1,3,50,-1,0,64,65,2,-1,46,47,5,48,-1,61,62,63,4,-1,42,43,44,45,-1,51,7,52,53,-1,58,59,60,6,-1,54,55,56,57,-1,33,35,39,37,-1,29,32,36,31,-1,25,28,30,27,-1,13,22,24,26,23,-1,11,66,67,-1,40,9,10,-1,12,68,69,-1,41,8,10,-1]),
                                                              coordIndex : new MFInt32([23,21,9,12,8,-1,14,1,3,16,-1,0,15,17,2,-1,16,3,5,18,-1,2,17,19,4,-1,18,5,7,20,-1,20,7,9,21,-1,4,19,22,6,-1,6,22,23,8,-1,20,21,23,22,-1,18,20,22,19,-1,16,18,19,17,-1,13,14,16,17,15,-1,10,24,12,-1,24,9,12,-1,11,25,12,-1,25,8,12,-1]),
                                                              texCoord : new SFNode(
                                                                new TextureCoordinate({
                                                                  point : new MFVec2f([0.521061,31.8085,0.480951,49.5791,0.474634,31.8078,0.434524,49.5784,0.41987,31.807,0.379759,49.5776,0.365105,31.8062,0.324995,49.5768,0.176536,11.485,0.126262,25.3339,0.113178,17.1606,0.144382,40.0254,0.248154,2.26738,0.353782,18.4125,0.307355,18.4118,0.307355,18.4118,0.25259,18.4109,0.25259,18.4109,0.197826,18.4102,0.197826,18.4102,0.151399,18.4095,0.151399,18.4095,0.341213,21.8747,0.366351,14.9502,0.294787,21.874,0.294787,21.874,0.319923,14.9495,0.319923,14.9495,0.240022,21.8732,0.240022,21.8732,0.265159,14.9487,0.265159,14.9487,0.185257,21.8724,0.185257,21.8724,0.13883,21.8717,0.13883,21.8717,0.210395,14.9479,0.210395,14.9479,0.163967,14.9472,0.163967,14.9472,0.104728,31.2658,0.201722,4.54713,0.392328,46.1154,0.379759,49.5776,0.324995,49.5768,0.337564,46.1146,0.447093,46.1162,0.434524,49.5784,0.392328,46.1154,0.49352,46.1169,0.447093,46.1162,0.337564,46.1146,0.278568,49.5761,0.291137,46.1139,0.365105,31.8062,0.352536,35.2684,0.306109,35.2677,0.318678,31.8055,0.41987,31.807,0.407301,35.2692,0.352536,35.2684,0.474634,31.8078,0.462065,35.27,0.407301,35.2692,0.508492,35.2707,0.462065,35.27,0.165916,34.0936,0.174366,19.9884,0.222968,9.20525,0.134424,21.8187])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0707107,-0.0431802,0.0707107,0.0707107,0.0621705,0.0707107,0.0382683,-0.0431802,0.092388,0.0382683,0.0621705,0.092388,1.50996e-8,-0.0431802,0.1,1.50996e-8,0.0621705,0.1,-0.0382683,-0.0431802,0.092388,-0.0382683,0.0621705,0.092388,-0.0707107,-0.0431802,0.0707107,-0.0707107,0.0621705,0.0707107,-0.0707107,0.129565,0.0707107,-0.0707107,-0.124945,0.0707107,-0.100585,0,0.0260003,0.0707107,0.00949515,0.0707107,0.0707107,0.0488152,0.0707107,0.0707107,-0.0263115,0.0707107,0.0382683,0.0488152,0.092388,0.0382683,-0.0263115,0.092388,1.50996e-8,0.0488152,0.1,1.50996e-8,-0.0263115,0.1,-0.0382683,0.0488152,0.092388,-0.0707107,0.0488152,0.0707107,-0.0382683,-0.0263115,0.092388,-0.0707107,-0.0263115,0.0707107,-0.0707107,0.106162,0.0707107,-0.0707107,-0.0959576,0.0707107])}))}))})])})])}),

                                                new Transform({
                                                  DEF : new SFString("vs"),
                                                  children : new MFNode([
                                                    new VisibilitySensor({
                                                      DEF : new SFString("_9"),
                                                      size : new SFVec3f([0.5,1,0.5]),
                                                      center : new SFVec3f([0,1,0])})])}),

                                                new Transform({
                                                  DEF : new SFString("actionsOFF"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      DEF : new SFString("_10")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0903407,1.17448,-0.0168648]),
                                                      rotation : new SFRotation([-0.0996761,0.990015,-0.0996771,1.58084]),
                                                      scale : new SFVec3f([0.187675,1.55976,1.09611]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  ambientIntensity : new SFFloat(0),
                                                                  diffuseColor : new SFColor([0,0,0]),
                                                                  emissiveColor : new SFColor([0.840426,0,0.0345712]),
                                                                  transparency : new SFFloat(1)}))})),
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              creaseAngle : new SFFloat(0.5),
                                                              coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.0999994,-0.118889,-0.0337734,-0.0999994,-0.318889,-0.0337734,0.100001,-0.318889,-0.0337734,0.100001,-0.118889,-0.0337734,0.100001,-0.318889,-0.233773,0.100001,-0.118889,-0.233773,-0.0999994,-0.118889,-0.233773,-0.0999994,-0.318889,-0.233773])}))}))})])}),

                                                    new Transform({
                                                      DEF : new SFString("isOver_off"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("isOver"),
                                                          DEF : new SFString("_11")})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("off"),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("actionsOn"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      DEF : new SFString("_12")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.00357496,0.999758,0.0116803]),
                                                      rotation : new SFRotation([1,0.00000226147,-0.00000184775,1.37011]),
                                                      scale : new SFVec3f([3.61696,0.117977,5.02173]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  ambientIntensity : new SFFloat(0),
                                                                  diffuseColor : new SFColor([0,0,0]),
                                                                  emissiveColor : new SFColor([0,0.199468,0.797872]),
                                                                  transparency : new SFFloat(1)}))})),
                                                          geometry : new SFNode(
                                                            new Box({
                                                              size : new SFVec3f([0.2,0.2,0.2])}))})])}),

                                                    new Transform({
                                                      DEF : new SFString("True"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("True"),
                                                          DEF : new SFString("_13")})])}),

                                                    new Transform({
                                                      DEF : new SFString("Int"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("Int"),
                                                          DEF : new SFString("_14")})])}),

                                                    new Transform({
                                                      DEF : new SFString("isOver"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("isOver"),
                                                          DEF : new SFString("_15")})])})])})])})])})])}),

                                    new Transform({
                                      DEF : new SFString("c"),
                                      translation : new SFVec3f([0,1.78814e-7,-0.0180891]),
                                      scale : new SFVec3f([1,1,0.775046]),
                                      children : new MFNode([
                                        new Collision({
                                          proxy : new SFNode(
                                            new Transform({
                                              translation : new SFVec3f([-0.012183,0.76732,0.19756]),
                                              scale : new SFVec3f([0.423045,0.516801,0.277972]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Box({}))})])}))})])})])}),

                                new Transform({})])})])}),

                        new Transform({
                          DEF : new SFString("pp_1"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("BoolSwitch"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("BoolSwitch"),
                                  DEF : new SFString("_16")})])}),

                            new Transform({
                              DEF : new SFString("pp"),
                              children : new MFNode([
                                new Transform({
                                  rotation : new SFRotation([0,1,0,1.5708]),
                                  scale : new SFVec3f([1,0.999999,1]),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("book"),
                                      translation : new SFVec3f([0.00933547,1.17832,-0.0147909]),
                                      rotation : new SFRotation([-0.534678,0.6544,-0.534678,4.30052]),
                                      scale : new SFVec3f([0.999999,0.999999,1]),
                                      scaleOrientation : new SFRotation([0.0595532,-0.26646,-0.962004,0.0519707]),
                                      children : new MFNode([
                                        new Inline({
                                          url : new MFString(["book.x3d"]),
                                          bboxSize : new SFVec3f([0.6,0.1,0.4])})])}),

                                    new Transform({
                                      DEF : new SFString("link"),
                                      children : new MFNode([
                                        new Anchor({
                                          description : new SFString("Klicken Sie hier fr mehr Informationen."),
                                          url : new MFString(["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]),
                                          parameter : new MFString([""]),
                                          children : new MFNode([
                                            new Transform({
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0595387,0.83215,-0.0466649]),
                                                  rotation : new SFRotation([0.0996764,0.990015,0.0996764,4.70235]),
                                                  scale : new SFVec3f([0.20466,0.302438,0.312995]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              ambientIntensity : new SFFloat(0),
                                                              diffuseColor : new SFColor([0,0,0]),
                                                              shininess : new SFFloat(0),
                                                              transparency : new SFFloat(0.606383)}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.0607254,0.839906,-0.0558341]),
                                                  rotation : new SFRotation([0.0996761,0.990015,0.099676,4.70235]),
                                                  scale : new SFVec3f([0.209212,0.312995,0.312995]),
                                                  scaleOrientation : new SFRotation([1,-9.81192e-8,-1.25691e-7,4.71239]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          texture : new SFNode(
                                                            new ImageTexture({
                                                              url : new MFString(["poster1.jpg"])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,3,-1]),
                                                          texCoord : new SFNode(
                                                            new TextureCoordinate({
                                                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])})])}),

                                    new Transform({
                                      DEF : new SFString("sta"),
                                      translation : new SFVec3f([0,0.683922,0]),
                                      scale : new SFVec3f([0.25,0.675,0.25]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              texture : new SFNode(
                                                new ImageTexture({
                                                  url : new MFString(["reflect1.png"])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              solid : new SFBool(false),
                                              creaseAngle : new SFFloat(0.5),
                                              texCoordIndex : new MFInt32([4,5,19,-1,5,18,19,-1,36,38,39,-1,36,37,38,-1,2,16,0,-1,16,17,0,-1,19,3,1,-1,19,18,3,-1,2,7,16,-1,7,6,16,-1,7,5,6,-1,5,4,6,-1,40,41,10,-1,41,11,10,-1,42,43,13,-1,43,12,13,-1,34,35,14,-1,35,15,14,-1,20,24,26,-1,24,25,26,-1,27,29,33,-1,27,28,29,-1]),
                                              coordIndex : new MFInt32([8,9,1,-1,9,7,1,-1,2,5,4,-1,2,3,5,-1,6,0,4,-1,0,2,4,-1,1,5,3,-1,1,7,5,-1,6,11,0,-1,11,10,0,-1,11,9,10,-1,9,8,10,-1,10,11,12,-1,11,13,12,-1,8,9,15,-1,9,14,15,-1,3,5,16,-1,5,17,16,-1,18,19,21,-1,19,20,21,-1,22,24,25,-1,22,23,24,-1]),
                                              texCoord : new SFNode(
                                                new TextureCoordinate({
                                                  point : new MFVec2f([0.145045,1.54965,0.135144,0.077854,0.145045,1.54965,0.252708,0.0454222,0.0813117,0.829969,0.198877,0.797538,0.0543957,1.20603,0.171961,1.1736,0.108228,0.453912,0.225792,0.42148,0.119832,2.42227,0.119832,3.01705,0.14019,2.95191,0.14019,2.35712,-0.217535,0.0384901,-0.217535,0.623365,0.0274798,1.58208,0.0274798,1.58208,0.252708,0.0454222,0.135144,0.077854,0.923948,6.7288,0.692961,5.0466,0.461974,3.3644,0.230987,1.6822,0,0,0.076052,0,1,6.7288,1,6.7288,0.076052,0,0,0,0.230987,1.6822,0.461974,3.3644,0.692961,5.0466,0.923948,6.7288,-0.357631,0.0384901,-0.357631,0.623365,-0.178828,0.0647557,-0.0329226,-0.00442973,-0.0312036,0.280277,-0.177109,0.349462,0.298983,1.86853,0.298983,2.46332,0.319341,1.80338,0.319341,2.39817])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.201083,1,1,-0.897416,-1,1,0.291503,1,1,-0.806997,-1,1,0.291503,1,-1,-0.806997,-1,-1,0.201083,1,-1,-0.897416,-1,-1,-0.348167,0,1,-0.348167,0,-1,-0.0735419,0.5,1,-0.0735419,0.5,-1,-0.308407,0.5,1,-0.308407,0.5,-1,-0.583032,0,-1,-0.583032,0,1,0.76518,-1,1,0.76518,-1,-1,0.201083,1,1,-0.897416,-1,1,-0.806997,-1,1,0.291503,1,1,0.291503,1,-1,-0.806997,-1,-1,-0.897416,-1,-1,0.201083,1,-1])}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("shadow"),
                                  translation : new SFVec3f([0,-1.86265e-8,-4.61459e-8]),
                                  rotation : new SFRotation([1,0,0,4.71239]),
                                  scale : new SFVec3f([1.34486,1.34486,1.34486]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["shadow70-128.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,3,-1,1,2,3,-1]),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("xIn")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("yIn")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("vec"),
              toNode : new SFString("_8"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("vec"),
              toNode : new SFString("_8"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_11"),
              toField : new SFString("set_isOver")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("_11"),
              toField : new SFString("set_hitPoint")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("isOver_changed"),
              toNode : new SFString("_13"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("startTime"),
              toNode : new SFString("_14"),
              toField : new SFString("startTime")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_15"),
              toField : new SFString("set_isOver")}),

            new ROUTE({
              fromNode : new SFString("_12"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("_15"),
              toField : new SFString("set_hitPoint")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("isOver_changed"),
              toNode : new SFString("_16"),
              toField : new SFString("isActive")})])}))});
console.log(X3D0.toXMLNode());
