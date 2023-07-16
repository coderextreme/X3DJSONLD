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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var GeoViewpoint = require('./x3d.mjs');
var SFVec3d = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var GeoElevationGrid = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SFDouble = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var GeoTransform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
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
              content : new SFString("Fri, 15 Apr 2016 06:14:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoTransform.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 16 Apr 2016 16:49:19 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("GeoTransform"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
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
                          value : new MFDouble([-8069103.5,-13976098,11294733])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.865087914247406,0.231799608004517,0.444850359505334,5.19891519167146])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-35164.6875,0,-9.22524860322294e-13])}))})),
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
                          reference : new SFString("http://titania.create3000.de")}))}))})])}),

            new Background({
              skyColor : new MFColor([0.1,0.1,0.8]),
              groundColor : new MFColor([0.1,0.1,0.8])}),

            new GeoViewpoint({
              description : new SFString("Initial GeoViewpoint"),
              position : new SFVec3d([35.0456768585212,-119.99999992177,13326935.0223425]),
              orientation : new SFRotation([1,9.51556969047435e-10,-1.67784993205101e-10,4.71398251875275]),
              centerOfRotation : new SFVec3d([180,0,-6342972.31424518])}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      diffuseColor : new SFColor([0.3,1,0.3])}))})),
              geometry : new SFNode(
                new GeoElevationGrid({
                  geoGridOrigin : new SFVec3d([-90,-180,0]),
                  xDimension : new SFInt32(21),
                  zDimension : new SFInt32(11),
                  xSpacing : new SFDouble(18),
                  zSpacing : new SFDouble(18),
                  yScale : new SFFloat(20),
                  height : new MFDouble([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0])}))}),

            new Shape({
              DEF : new SFString("california_northing_first"),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      diffuseColor : new SFColor([0.9,0,0])}))})),
              geometry : new SFNode(
                new GeoElevationGrid({
                  geoSystem : new MFString([", ","UTM, ","Z10, ","Nnorthing_first"]),
                  geoGridOrigin : new SFVec3d([3600000,0,0]),
                  xSpacing : new SFDouble(400000),
                  zSpacing : new SFDouble(500000),
                  yScale : new SFFloat(200),
                  height : new MFDouble([1000,1000,1000,1000])}))}),

            new GeoTransform({
              translation : new SFVec3f([0,100000,200000]),
              rotation : new SFRotation([0,1,0,0.5]),
              scale : new SFVec3f([1,2,3]),
              geoSystem : new MFString([", ","UTM, ","Z10, ","Neasting_first"]),
              geoCenter : new SFVec3d([0,3600000,0]),
              children : new MFNode([
                new Shape({
                  DEF : new SFString("california_easting_first"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0.9])}))})),
                  geometry : new SFNode(
                    new GeoElevationGrid({
                      geoSystem : new MFString([", ","UTM, ","Z10, ","Neasting_first"]),
                      geoGridOrigin : new SFVec3d([0,3600000,0]),
                      xSpacing : new SFDouble(400000),
                      zSpacing : new SFDouble(500000),
                      yScale : new SFFloat(200),
                      height : new MFDouble([1000,1000,1000,1000])}))})])})])}))});
console.log(X3D0.toXMLNode());
