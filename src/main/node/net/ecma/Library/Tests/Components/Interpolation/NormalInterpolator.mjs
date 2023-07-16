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
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NormalInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var PointProperties = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var PointSet = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Sunrise X3D Editor")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Mon, 13 Apr 2015 02:16:11 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrise X3D Editor V1.0.4, https://create3000.github.io/sunrise/")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 28 Oct 2022 13:27:25 GMT")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Volumes/Home/Projekte/Library/Tests/Components/Interpolation/NormalInterpolator.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("NormalInterpolator"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("AngleGrid"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          value : new MFBool([true])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Grid"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          value : new MFBool([false])}))}))})])}),

            new TimeSensor({
              DEF : new SFString("_1"),
              cycleInterval : new SFTime(10),
              loop : new SFBool(true)}),

            new NormalInterpolator({
              DEF : new SFString("_2"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFVec3f([1,0,0,0,1,0,-1,0,0,0,-1,0,0,1,0,-1,0,0,0,-1,0,1,0,0,-1,0,0,0,-1,0,1,0,0,0,1,0,0,-1,0,1,0,0,0,1,0,-1,0,0,1,0,0,0,1,0,-1,0,0,0,-1,0])}),

            new Transform({
              DEF : new SFString("PointSet_1"),
              scale : new SFVec3f([3,3,3]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      pointProperties : new SFNode(
                        new PointProperties({
                          pointSizeScaleFactor : new SFFloat(20),
                          pointSizeMinValue : new SFFloat(20),
                          pointSizeMaxValue : new SFFloat(20)})),
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new PointSet({
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("_3"),
                          point : new MFVec3f([-0.983304,-0.181969,0,0.181969,-0.983304,0,0.983304,0.181969,0,-0.181969,0.983304,0])}))}))})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_point")})])}))});
console.log(X3D0.toXMLNode());
