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
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var GeoViewpoint = require('./x3d.mjs');
var SFVec3d = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var GeoElevationGrid = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFDouble = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var GeoProximitySensor = require('./x3d.mjs');
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
              content : new SFString("Mon, 13 Oct 2014 00:37:06 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoProximitySensor.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 16 Apr 2016 16:49:18 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("GeoProximitySensor"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de")}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([18311186,0.212975323200226,67.55078125])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.577349568034159,0.57734956282642,0.577351676705725,2.09439298330876])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-21384.685546875,0,-2.6100881438812e-12])}))}))})])}),

            new NavigationInfo({}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new GeoViewpoint({
              description : new SFString("GeoViewpoint"),
              position : new SFVec3d([0.00021186068633906,6.66400681047296e-7,11933049.8535792]),
              orientation : new SFRotation([-1,-1.03254873842571e-8,1.03254445992368e-8,1.57079629047246]),
              centerOfRotation : new SFVec3d([180,0,-6356752.31424518])}),

            new Transform({
              DEF : new SFString("GeoElevationGrid"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["../images/earth.png"])}))})),
                  geometry : new SFNode(
                    new GeoElevationGrid({
                      geoGridOrigin : new SFVec3d([-90,180,0]),
                      xDimension : new SFInt32(361),
                      zDimension : new SFInt32(181),
                      creaseAngle : new SFDouble(3.14159)}))})])}),

            new Transform({
              DEF : new SFString("Axes"),
              scale : new SFVec3f([10000000,10000000,10000000]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,1,2]),
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,1,0,0,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1])}))}))})])}),

            new Script({
              DEF : new SFString("DebugScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3D,
                  name : new SFString("set_hitGeoCoord"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),
ecmascript:eval (0

, function set_hitGeoCoord (value)
{
	print (value);
})}),

            new GeoProximitySensor({
              DEF : new SFString("_1"),
              size : new SFVec3f([100000000,100000000,100000000])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("geoCoord_changed"),
              toNode : new SFString("DebugScript"),
              toField : new SFString("set_hitGeoCoord")})])}))});
console.log(X3D0.toXMLNode());
