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
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
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
              content : new SFString("Thu, 12 Mar 2015 07:11:12 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 12 Mar 2015 07:11:34 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in CosmoWorlds, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new Transform({
                  DEF : new SFString("Fire_1"),
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
                      translation : new SFVec3f([0,8.27842e-10,0]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Fire"),
                              translation : new SFVec3f([0,-8.27842e-10,0]),
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
                                              url : new MFString(["torch.1.png"])}))})),
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
                                              url : new MFString(["torch.2.png"])}))})),
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
                                              url : new MFString(["torch.3.png"])}))})),
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
                                              url : new MFString(["torch.4.png"])}))})),
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
                                              url : new MFString(["torch.5.png"])}))})),
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
                                              url : new MFString(["torch.6.png"])}))})),
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
                                              url : new MFString(["torch.7.png"])}))})),
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

                    new Transform({
                      DEF : new SFString("VisibilitySensor"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_3"),
                          size : new SFVec3f([1,1,1])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_1"),
              toField : new SFString("set_enabled")}),

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
              toField : new SFString("set_whichChoice")})])}))});
console.log(X3D0.toXMLNode());
