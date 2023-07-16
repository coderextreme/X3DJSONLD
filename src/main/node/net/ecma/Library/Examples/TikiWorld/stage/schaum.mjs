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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
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
              content : new SFString("Fri, 13 Nov 2015 10:12:48 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 13 Nov 2015 10:12:48 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Switch({
              DEF : new SFString("_1"),
              whichChoice : new SFInt32(9),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.1.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("imageIndexedFaceSet"),
                      solid : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.2.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.3.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.4.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.5.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.6.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.7.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.8.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.9.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["schaum.10.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      USE : new SFString("imageIndexedFaceSet")}))})])}),

            new Transform({
              DEF : new SFString("SwitchAnimProto"),
              translation : new SFVec3f([194.603,-200.333,-268.553]),
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
                      value : new SFString("10")}),

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
              DEF : new SFString("Visibility"),
              children : new MFNode([
                new VisibilitySensor({
                  DEF : new SFString("_2"),
                  size : new SFVec3f([1,1,1])})])}),

            new ROUTE({
              fromNode : new SFString("_animScript1"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("animTime"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("animTime"),
              fromField : new SFString("time"),
              toNode : new SFString("_animScript1"),
              toField : new SFString("set_time")})])}))});
console.log(X3D0.toXMLNode());
