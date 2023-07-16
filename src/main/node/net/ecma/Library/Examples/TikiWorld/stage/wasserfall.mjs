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
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
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
              content : new SFString("Fri, 13 Nov 2015 10:12:49 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 13 Nov 2015 10:12:49 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("SwitchAnimProto"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("animTime"),
                  loop : new SFBool(true)}),

                new Script({
                  DEF : new SFString("_animScript1"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichChoice_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_time"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fps"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("12")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("max"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("9")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("lastTime"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("dt"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.0833333")}),
                  ]),vrmlscript:
, function initialize()
{
	dt = 1/12;
}

, function set_time(value, time)
{
	if (time - lastTime > dt){
		if (whichChoice_changed == max) whichChoice_changed = 0;
		else whichChoice_changed ++;
		lastTime = time;
	}
})})])}),

            new Transform({
              DEF : new SFString("Wasserfall"),
              translation : new SFVec3f([-193.876,252.561,306.987]),
              rotation : new SFRotation([0,1,0,3.14159]),
              scale : new SFVec3f([0.277399,0.512499,0.36079]),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("_1"),
                      whichChoice : new SFInt32(0),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.1.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("wasserfallIndexedFaceSet"),
                              coordIndex : new MFInt32([0,11,27,28,-1,30,10,3,29,-1,11,7,31,27,-1,32,6,10,30,-1,7,13,33,31,-1,34,12,6,32,-1,13,5,35,33,-1,36,4,12,34,-1,5,15,37,35,-1,38,14,4,36,-1,15,9,39,37,-1,40,8,14,38,-1,9,17,41,39,-1,17,1,42,41,-1,43,16,8,40,-1,44,2,16,43,-1,27,46,45,28,-1,46,18,19,45,-1,18,48,47,19,-1,48,30,29,47,-1,31,49,46,27,-1,49,20,18,46,-1,20,50,48,18,-1,50,32,30,48,-1,33,51,49,31,-1,51,21,20,49,-1,21,52,50,20,-1,52,34,32,50,-1,35,53,51,33,-1,53,22,21,51,-1,22,54,52,21,-1,54,36,34,52,-1,37,55,53,35,-1,55,23,22,53,-1,23,56,54,22,-1,56,38,36,54,-1,39,57,55,37,-1,57,24,23,55,-1,24,58,56,23,-1,58,40,38,56,-1,41,59,57,39,-1,59,25,24,57,-1,42,60,59,41,-1,60,26,25,59,-1,25,61,58,24,-1,61,43,40,58,-1,26,62,61,25,-1,62,44,43,61,-1]),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  point : new MFVec2f([0.019436,0.980299,0,0.00023728,1,0.00023728,0.994235,0.996359,1,0.498298,0,0.498298,1,0.747329,0,0.747329,1,0.249268,0,0.249268,1,0.885691,0,0.885691,1,0.622814,0,0.622814,1,0.373783,0,0.373783,1,0.124753,0,0.124753,0.494236,0.885691,0.494236,0.996359,0.494235,0.747329,0.494236,0.622814,0.494235,0.498298,0.494235,0.373783,0.494235,0.249268,0.494235,0.124753,0.494235,0.00023728,0.244236,0.885691,0.244236,0.996359,0.744235,0.996359,0.744235,0.885691,0.244235,0.747329,0.744234,0.747329,0.244236,0.622814,0.744235,0.622814,0.244235,0.498298,0.744234,0.498298,0.244235,0.373783,0.744234,0.373783,0.244235,0.249268,0.744234,0.249268,0.244235,0.124753,0.244235,0.00023728,0.744234,0.124753,0.744234,0.00023728,0.369236,0.996359,0.369236,0.885691,0.619235,0.996359,0.619235,0.885691,0.369235,0.747329,0.619235,0.747329,0.369235,0.622814,0.619235,0.622814,0.369235,0.498298,0.619235,0.498298,0.369235,0.373783,0.619234,0.373783,0.369235,0.249268,0.619234,0.249268,0.369235,0.124753,0.369235,0.00023728,0.619234,0.124753,0.619234,0.00023728])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-94.9602,96.7755,81.6446,-98.8474,-100,101.703,101.153,-100,101.703,99.9999,100,73.2315,101.153,0,100.027,-98.8474,0,100.027,101.153,50,90.3797,-98.8474,50,90.3797,101.153,-50,101.703,-98.8474,-50,101.703,101.153,77.7802,77.5166,-98.8473,77.7802,77.5166,101.153,25,96.8112,-98.8474,25,96.8112,101.153,-25,101.703,-98.8474,-25,101.703,101.153,-75,101.703,-98.8474,-75,101.703,-0.0000534058,77.7802,115.676,0,100,100,-0.000144958,50,128.54,-0.0000839233,25,134.971,-0.000144958,0,138.187,-0.000175476,-25,139.863,-0.000175476,-50,139.863,-0.000175476,-75,139.863,-0.000175476,-100,139.863,-50.0002,77.7802,104.781,-50.0001,100,89.1047,49.9999,100,89.1047,49.9998,77.7802,104.781,-50.0003,50,117.644,49.9997,50,117.644,-50.0002,25,124.076,49.9998,25,124.076,-50.0003,0,127.291,49.9997,0,127.291,-50.0003,-25,128.968,49.9997,-25,128.968,-50.0003,-50,128.968,49.9997,-50,128.968,-50.0003,-75,128.968,-50.0003,-100,128.968,49.9997,-75,128.968,49.9997,-100,128.968,-25.0001,100,97.4697,-25.0001,77.7802,113.146,24.9999,100,97.4697,24.9999,77.7802,113.146,-25.0002,50,126.009,24.9998,50,126.009,-25.0002,25,132.441,24.9998,25,132.441,-25.0002,0,135.656,24.9998,0,135.656,-25.0003,-25,137.333,24.9997,-25,137.333,-25.0003,-50,137.333,24.9997,-50,137.333,-25.0003,-75,137.333,-25.0003,-100,137.333,24.9997,-75,137.333,24.9997,-100,137.333])}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.2.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.3.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.4.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.5.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.6.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.7.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.8.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.9.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["falls.10.png"])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("wasserfallIndexedFaceSet")}))})])})])})])}),

            new Transform({
              DEF : new SFString("wasserfallVisibility"),
              children : new MFNode([
                new VisibilitySensor({
                  DEF : new SFString("_2"),
                  size : new SFVec3f([55.48,102.5,24.04]),
                  center : new SFVec3f([-194.197,252.561,268.546])})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("animTime"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("animTime"),
              fromField : new SFString("time"),
              toNode : new SFString("_animScript1"),
              toField : new SFString("set_time")}),

            new ROUTE({
              fromNode : new SFString("_animScript1"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")})])}))});
console.log(X3D0.toXMLNode());
