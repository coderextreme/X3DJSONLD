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
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("localrotation.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("chained boxes")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("localrotation.x3d")}),

            new NavigationInfo({
              type : ["ANY","EXAMINE","FLY","LOOKAT"]}),

            new Viewpoint({
              description : new SFString("Tour Views"),
              position : new SFVec3f([0,0,20])}),

            new Transform({
              translation : new SFVec3f([-4,0,0]),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Box({}))})),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("TransformTargetParent"),
                  translation : new SFVec3f([4,0,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({}))})),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("TransformTargetChild"),
                      translation : new SFVec3f([4,0,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Box({}))}))})])})])}),

            new ProximitySensor({
              DEF : new SFString("ActivateSensor"),
              size : new SFVec3f([1000000,1000000,1000000])}),

            new TimeSensor({
              DEF : new SFString("Clock")}),

            new ROUTE({
              fromNode : new SFString("ActivateSensor"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Clock"),
              toField : new SFString("set_startTime")}),

            new OrientationInterpolator({
              DEF : new SFString("Rotater"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,1,0,0,0,1,1.57])}),

            new ROUTE({
              fromNode : new SFString("Clock"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rotater"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Rotater"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TransformTargetParent"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rotater"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TransformTargetChild"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
