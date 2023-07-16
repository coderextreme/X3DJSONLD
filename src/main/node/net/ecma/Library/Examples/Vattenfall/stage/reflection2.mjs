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
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("ReflectiveTextureTransform"),
              url : new MFString(["ReflectiveTextureTransform_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("distance"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("textureTransform"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in CosmoWorldsPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("reflect"),
              translation : new SFVec3f([0.0899906,13.5733,0.140636]),
              scale : new SFVec3f([12.7869,23.5669,3.17457]),
              center : new SFVec3f([1.44509,0.080182,0.0304624]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["street-ref.jpg"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          DEF : new SFString("_1"),
                          center : new SFVec2f([-0.5,-0.5])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      texCoordIndex : new MFInt32([11,12,16,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,10,16,13,-1,10,11,16,-1,12,14,16,-1,14,15,16,-1,11,10,9,-1,10,8,9,-1,6,7,8,-1,7,9,8,-1,20,18,17,-1,20,19,18,-1]),
                      coordIndex : new MFInt32([10,12,13,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,11,13,14,-1,11,10,13,-1,12,15,13,-1,15,16,13,-1,10,11,8,-1,11,9,8,-1,6,7,9,-1,7,8,9,-1,20,18,17,-1,20,19,18,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.25601,0,0.25601,0.648441,0,0.648441,0,0,0.25601,0.998373,0,0.998373,0.995929,0.702952,0.995929,0.998373,0.770796,0.701656,0.770527,0.998373,0.515267,0.701656,0.515267,0.998373,0.316074,0.998373,0.316074,0.701656,0.258103,0.998373,0.258103,0.810909,0.316074,0.81091,0.990453,0.0212353,0.195997,0.0212353,0.195997,0.755931,0.990453,0.755931])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0.5,-0.339636,0,0.5,0.205706,0,-0.5,0.205706,0,-0.5,-0.339636,0,0.5,0.5,0,-0.5,0.5,0,3.39019,0.25155,0,3.39019,0.5,0,2.50975,0.5,0,2.5108,0.25046,0,1.51268,0.5,0,1.51268,0.25046,0,0.734612,0.5,0,0.734612,0.342343,0,0.734612,0.25046,0,0.508174,0.5,0,0.508174,0.342342,0,3.3688,-0.321777,0.0609247,0.738588,-0.321777,0.0606856,0.738588,0.211568,0.0606856,3.3688,0.211568,0.0609247])}))}))})])}),

            new Transform({
              DEF : new SFString("ps_handle"),
              scale : new SFVec3f([1020.62,1020.62,1020.62]),
              children : new MFNode([
                new Switch({
                  whichChoice : new SFInt32(1),
                  children : new MFNode([
                    new Transform({}),

                    new Inline({
                      url : new MFString(["cube.x3d"]),
                      bboxSize : new SFVec3f([1,1,1])})])})])}),

            new Transform({
              DEF : new SFString("ps"),
              children : new MFNode([
                new ProximitySensor({
                  DEF : new SFString("_2"),
                  size : new SFVec3f([1020.62,1020.62,1020.62])})])}),

            new Transform({
              DEF : new SFString("ReflectiveTextureTransform"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("ReflectiveTextureTransform"),
                  DEF : new SFString("_3"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("translation"),
                      value : new SFString("0.0899906 13.5733 0.140636")}),

                    new fieldValue({
                      name : new SFString("distance"),
                      value : new SFString("3")}),

                    new fieldValue({
                      name : new SFString("textureTransform"),
                      children : new MFNode([
                        new TextureTransform({
                          USE : new SFString("_1")})])})])})])}),

            new ROUTE({
              fromNode : new SFString("ps_handle"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("ps_handle"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_size")}),

            new ROUTE({
              fromNode : new SFString("reflect"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_position")})])}))});
console.log(X3D0.toXMLNode());
