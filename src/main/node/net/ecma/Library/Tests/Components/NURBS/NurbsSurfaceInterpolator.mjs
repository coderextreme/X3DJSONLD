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
var MetadataSet = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NurbsPatchSurface = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var NurbsSurfaceInterpolator = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Disk2D = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.2"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Wed, 16 Jan 2019 14:37:37 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.3.10, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSurfaceInterpolator.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 19 Jan 2019 23:43:54 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Rectangle2D"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Page"),
                      DEF : new SFString("Page"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeView"),
                          DEF : new SFString("activeView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([1])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("multiView"),
                          DEF : new SFString("multiView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("selectGeometry"),
                          DEF : new SFString("selectGeometry"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de")}))}))})])}),

            new Viewpoint({
              position : new SFVec3f([0,0,2.63585])}),

            new Transform({
              DEF : new SFString("NurbsRectangle2D"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["../images/lena.jpg"]),
                          repeatS : new SFBool(false),
                          repeatT : new SFBool(false)}))})),
                  geometry : new SFNode(
                    new NurbsPatchSurface({
                      solid : new SFBool(false),
                      uTessellation : new SFInt32(20),
                      vTessellation : new SFInt32(20),
                      uOrder : new SFInt32(2),
                      vOrder : new SFInt32(2),
                      uDimension : new SFInt32(3),
                      vDimension : new SFInt32(3),
                      controlPoint : new SFNode(
                        new Coordinate({
                          DEF : new SFString("_1"),
                          point : new MFVec3f([-1,-1,0,0,-1,0,1,-1,0,-1,0,0,0,0,1,1,0,0,-1,1,0,0,1,0,1,1,0])}))}))}),

                new TouchSensor({
                  DEF : new SFString("_2")})])}),

            new NurbsSurfaceInterpolator({
              DEF : new SFString("_3"),
              uOrder : new SFInt32(2),
              vOrder : new SFInt32(2),
              uDimension : new SFInt32(3),
              vDimension : new SFInt32(3),
              controlPoint : new SFNode(
                new Coordinate({
                  USE : new SFString("_1")}))}),

            new Script({
              DEF : new SFString("NewScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_normal"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),
ecmascript:eval (0

var zAxis = new SFVec3f (0, 0, 1);

, function set_normal (value, time)
{
	rotation_changed = new SFRotation (zAxis, value);
})}),

            new Transform({
              DEF : new SFString("Disk2D"),
              translation : new SFVec3f([-0.937116,0.209022,0.0497365]),
              rotation : new SFRotation([-0.0792636934389926,-0.996853683798385,0,0.670687123541612]),
              scaleOrientation : new SFRotation([-0.999999999999994,0,0,0.122489331563433]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Disk2D({
                      innerRadius : new SFFloat(0.13),
                      outerRadius : new SFFloat(0.187)}))})])}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("hitTexCoord_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("NewScript"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Disk2D"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("normal_changed"),
              toNode : new SFString("NewScript"),
              toField : new SFString("set_normal")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("Disk2D"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
