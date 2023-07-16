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
var ProximitySensor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var ElevationGrid = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
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
              content : new SFString("Sat, 12 Sep 2015 08:48:41 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 12 Sep 2015 11:40:47 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Terrain")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("V"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("enter"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("size"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0.1 0.02")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("img"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("\"9.jpg\"")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("T")})])})),
                      children : new MFNode([
                        new ProximitySensor({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("size"),
                                  protoField : new SFString("size")}),

                                new connect({
                                  nodeField : new SFString("enterTime"),
                                  protoField : new SFString("enter")})])}))}),

                        new Group({
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-50,0,-50]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.8,0.5,0.3])})),
                                      texture : new SFNode(
                                        new ImageTexture({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("url"),
                                                  protoField : new SFString("img")})])}))})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({}))})),
                                  geometry : new SFNode(
                                    new ElevationGrid({
                                      xDimension : new SFInt32(6),
                                      zDimension : new SFInt32(6),
                                      xSpacing : new SFFloat(20),
                                      zSpacing : new SFFloat(20),
                                      height : new MFFloat([0,1,2,2,1,0,1,-1,-1,-2,1,1,-1,2,1,0,-1,-1,-2,-1,0,-1,-1,-2,-1,0,2,1,0,-1,0,1,2,2,1,0])}))})])})])})])})])}))}),

            new WorldInfo({
              info : new MFString(["CosmoWorlds VlipArt (c)1997 infinite terrain - pioneer@sgi.com"])}),

            new NavigationInfo({
              type : ["WALK"],
              DEF : new SFString("Nav1"),
              speed : new SFFloat(5),
              headlight : new SFBool(false)}),

            new NavigationInfo({
              type : ["NONE"],
              DEF : new SFString("Nav0"),
              speed : new SFFloat(0),
              headlight : new SFBool(false)}),

            new Transform({
              DEF : new SFString("BGX0"),
              children : new MFNode([
                new Background({
                  DEF : new SFString("BG0")})])}),

            new Transform({
              DEF : new SFString("BGX1"),
              children : new MFNode([
                new Background({
                  DEF : new SFString("BG1"),
                  skyAngle : new MFFloat([2]),
                  skyColor : new MFColor([1,1,0,0,0,1])})])}),

            new Transform({
              DEF : new SFString("BGX2"),
              children : new MFNode([
                new Background({
                  DEF : new SFString("BG2"),
                  skyAngle : new MFFloat([1.7]),
                  skyColor : new MFColor([1,1,0,0,0,1])})])}),

            new TimeSensor({
              DEF : new SFString("Time0"),
              cycleInterval : new SFTime(300),
              loop : new SFBool(true)}),

            new OrientationInterpolator({
              DEF : new SFString("Spin0"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,0,1,0,1,0,0,3.14,1,0,0,6.28002])}),

            new OrientationInterpolator({
              DEF : new SFString("Spin1"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,0,1,0,0,1,0,3.14,0,1,0,6.28002])}),

            new Transform({
              DEF : new SFString("K"),
              translation : new SFVec3f([0,10,0]),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("View0"),
                  position : new SFVec3f([0,3,0]),
                  fieldOfView : new SFFloat(1.3)})])}),

            new DirectionalLight({
              direction : new SFVec3f([-1,-1,0])}),

            new DirectionalLight({
              direction : new SFVec3f([-1,-1,-1])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V0"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 1 0")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V1"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 0.5 0")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V2"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 0.3 0")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V3"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 0 0.2")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V4"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 0 0")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V5"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("1 0 0.5")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V6"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("0 0 1")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V7"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("0 0 0.5")})])}),

            new ProtoInstance({
              name : new SFString("V"),
              DEF : new SFString("V8"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("C"),
                  value : new SFString("0 0 0.3")})])}),

            new Transform({
              DEF : new SFString("Ob"),
              translation : new SFVec3f([100,0,100]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("ScoreTouch")}),

                new Switch({
                  DEF : new SFString("Sw"),
                  whichChoice : new SFInt32(2),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("A"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.9,0.9,0.9]),
                              emissiveColor : new SFColor([0.2,0.2,0.2])}))})),
                      geometry : new SFNode(
                        new Extrusion({
                          scale : new MFVec2f([1,1,0.95,0.95,0.00001,0.00001]),
                          spine : new MFVec3f([0,0,0,0,10,0,0,11.5,0])}))}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("A")})),
                      geometry : new SFNode(
                        new Extrusion({
                          scale : new MFVec2f([10,10,0.00001,0.00001]),
                          spine : new MFVec3f([0,0,0,0,15,0])}))}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("A")})),
                      geometry : new SFNode(
                        new Extrusion({
                          scale : new MFVec2f([0.00001,0.00001,10,10]),
                          spine : new MFVec3f([0,0,0,0,15,0])}))})])})])}),

            new Script({
              DEF : new SFString("Script0"),
              directOutput : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("ZZZ"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P0"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P1"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P3"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P4"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P5"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P6"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P7"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("P8"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("getScore"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("score"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("count"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("xsize"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("100")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("zsize"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("100")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("sizeBuff"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 40 0")}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("ts"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("-100 0 -100 0 0 -100 100 0 -100 -100 0 0 100 0 100 100 0 0 -100 0 100 0 0 100 100 0 100")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("tBuff"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("ob"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("Ob")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("sw"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Switch({
                      USE : new SFString("Sw")})])}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("bg"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Background({
                      USE : new SFString("BG0")}),

                    new Background({
                      USE : new SFString("BG1")}),

                    new Background({
                      USE : new SFString("BG2")})])}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("nv"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new NavigationInfo({
                      USE : new SFString("Nav0")}),

                    new NavigationInfo({
                      USE : new SFString("Nav1")})])}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("xs"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("V0")}),

                    new ProtoInstance({
                      USE : new SFString("V1")}),

                    new ProtoInstance({
                      USE : new SFString("V2")}),

                    new ProtoInstance({
                      USE : new SFString("V3")}),

                    new ProtoInstance({
                      USE : new SFString("V4")}),

                    new ProtoInstance({
                      USE : new SFString("V5")}),

                    new ProtoInstance({
                      USE : new SFString("V6")}),

                    new ProtoInstance({
                      USE : new SFString("V7")}),

                    new ProtoInstance({
                      USE : new SFString("V8")})])}),
              ]),javascript:
  , function place (fl,fm,fr,cl,cm,cr,bl,bm,br){
   ts[fm][0] = ts[bm][0] = x = xs[cm].T[0];
   ts[cl][2] = ts[cr][2] = z = xs[cm].T[2];
   ts[cl][0] = ts[fl][0] = ts[bl][0] = x - xsize;
   ts[cr][0] = ts[fr][0] = ts[br][0] = x + xsize;
   ts[fl][2] = ts[fm][2] = ts[fr][2] = z - zsize; 
   ts[bl][2] = ts[bm][2] = ts[br][2] = z + zsize;
   for(i=0;i<xs.length;i++){
    tBuff = ts[i];
    xs[i].set_T = tBuff;
   }
   if(count == 2){
    tBuff = xs[cm].T;
    ob.set_translation = tBuff;
    sw.whichChoice = Math.round(3*Math.random());
   }
   count = (count+1)%3;
  }
  , function P0 (v){ place(8,6,7,2,0,1,5,3,4);}
  , function P1 (v){ place(6,7,8,0,1,2,3,4,5);}
  , function P2 (v){ place(7,8,6,1,2,0,4,5,3);}
  , function P3 (v){ place(2,0,1,5,3,4,8,6,7);}
  , function P4 (v){ place(0,1,2,3,4,5,6,7,8);}
  , function P5 (v){ place(1,2,0,4,5,3,7,8,6);}
  , function P6 (v){ place(5,3,4,8,6,7,2,0,1);}
  , function P7 (v){ place(3,4,5,6,7,8,0,1,2);}
  , function P8 (v){ place(4,5,3,7,8,6,1,2,0);}

  , function initialize(){
   bg[1].set_bind = TRUE;
   sizeBuff[0] = xsize;
   sizeBuff[2] = zsize;
   for(i=0;i<xs.length;i++){
    ts[i] = tBuff;
    xs[i].set_size = sizeBuff;
   }
   place(0,1,2,3,4,5,6,7,8);
  })}),

            new ROUTE({
              fromNode : new SFString("Time0"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Spin0"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time0"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Spin1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Spin0"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BGX1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Spin1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BGX0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("V0"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P0")}),

            new ROUTE({
              fromNode : new SFString("V1"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P1")}),

            new ROUTE({
              fromNode : new SFString("V2"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P2")}),

            new ROUTE({
              fromNode : new SFString("V3"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P3")}),

            new ROUTE({
              fromNode : new SFString("V4"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P4")}),

            new ROUTE({
              fromNode : new SFString("V5"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P5")}),

            new ROUTE({
              fromNode : new SFString("V6"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P6")}),

            new ROUTE({
              fromNode : new SFString("V7"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P7")}),

            new ROUTE({
              fromNode : new SFString("V8"),
              fromField : new SFString("enter"),
              toNode : new SFString("Script0"),
              toField : new SFString("P8")})])}))});
console.log(X3D0.toXMLNode());
