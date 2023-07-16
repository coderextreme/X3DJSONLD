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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:06 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:06 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Slider"),
              url : new MFString(["Slider_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_MFFLOAT,
                  name : new SFString("keyValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("planeSensor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Switch({
              whichChoice : new SFInt32(1),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Fire_1"),
                  translation : new SFVec3f([0,0.678885,0]),
                  scale : new SFVec3f([1.35777,1.35777,1.35777]),
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("_1"),
                      loop : new SFBool(true)}),

                    new Script({
                      DEF : new SFString("_player"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichChoice_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_time"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("maxChoice"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("6")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("count"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("fps"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("12")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("last"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      ]),vrmlscript:
, function set_time(value, time)
{
	if (time - last > 1 / fps){
		last = time;
		if(++count > maxChoice) count = 0;
		whichChoice_changed = count;
	}
}

, function isActive(value, time)
{
	whichChoice_changed = -1;
})}),

                    new Transform({
                      DEF : new SFString("Fire"),
                      children : new MFNode([
                        new Switch({
                          DEF : new SFString("_2"),
                          whichChoice : new SFInt32(6),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["flame.1.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      DEF : new SFString("_3"),
                                      translation : new SFVec2f([0.03,0.03]),
                                      scale : new SFVec2f([0.972768,0.972768])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
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
                                      url : new MFString(["flame.2.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("_3")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
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
                                      url : new MFString(["flame.3.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("_3")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
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
                                      url : new MFString(["flame.4.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("_3")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
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
                                      url : new MFString(["flame.5.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("_3")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
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
                                      url : new MFString(["flame.6.png"]),
                                      repeatS : new SFBool(false),
                                      repeatT : new SFBool(false)})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      USE : new SFString("_3")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))}),

                            new Transform({
                              translation : new SFVec3f([-0.0734722,0,0]),
                              scale : new SFVec3f([0.853056,1,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["flame.7.png"]),
                                          repeatS : new SFBool(false),
                                          repeatT : new SFBool(false)})),
                                      textureTransform : new SFNode(
                                        new TextureTransform({
                                          USE : new SFString("_3")}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      coordIndex : new MFInt32([0,1,2,3,-1]),
                                      texCoord : new SFNode(
                                        new TextureCoordinate({
                                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])})])})])}),

                new Transform({})])}),

            new PointLight({
              DEF : new SFString("Light1"),
              color : new SFColor([1,0.8,0]),
              intensity : new SFFloat(0.9),
              attenuation : new SFVec3f([0.1,0,0.01]),
              location : new SFVec3f([0,0.497334,0.00961055])}),

            new Sound({
              DEF : new SFString("Sound1"),
              spatialize : new SFBool(false),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("Sound1clip"),
                  url : new MFString(["egypt.mid"])}))}),

            new TimeSensor({
              DEF : new SFString("enterWorldTimeSensor"),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("enterWorldScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("firstTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("triggerIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),vrmlscript:, function triggerIn(value, time) {

         // fire off a single round                                     
         startTime = value;                                             
         firstTime = FALSE;                                             
       })}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_player"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("time"),
              toNode : new SFString("_player"),
              toField : new SFString("set_time")}),

            new ROUTE({
              fromNode : new SFString("_player"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Sound1clip"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("enterWorldScript"),
              fromField : new SFString("firstTime"),
              toNode : new SFString("enterWorldTimeSensor"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("enterWorldTimeSensor"),
              fromField : new SFString("time"),
              toNode : new SFString("enterWorldScript"),
              toField : new SFString("triggerIn")})])}))});
console.log(X3D0.toXMLNode());
