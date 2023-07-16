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
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var BooleanFilter = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("EventUtilities"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("PointingDeviceSensor"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("created"),
              content : new SFString("Fri, 09 Dec 2022 15:26:53 GMT")}),

            new meta({
              name : new SFString("comment"),
              content : new SFString("Rise and Shine")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/InlineGlobal.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 29 Jan 2023 23:15:47 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              headlight : new SFBool(false)}),

            new Viewpoint({
              position : new SFVec3f([5.65094,8.33655,10.783]),
              orientation : new SFRotation([-0.76859137417185,0.61112546586771,0.1891902865281,0.76580931764699])}),

            new Transform({
              DEF : new SFString("Floor"),
              scale : new SFVec3f([100,0.1,100]),
              children : new MFNode([
                new Shape({
                  castShadow : new SFBool(false),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([0.266667,0.266667,0.266667])}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Transform({
              translation : new SFVec3f([-3,1,0]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("_1")}),

                new BooleanFilter({
                  DEF : new SFString("_2")}),

                new Inline({
                  DEF : new SFString("_3"),
                  url : new MFString(["BoxWithLight.x3d"])})])}),

            new Transform({
              translation : new SFVec3f([3,1,0]),
              children : new MFNode([
                new TouchSensor({
                  DEF : new SFString("_4")}),

                new BooleanFilter({
                  DEF : new SFString("_5")}),

                new Inline({
                  DEF : new SFString("_6"),
                  url : new MFString(["BoxWithLight.x3d"])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_2"),
              toField : new SFString("set_boolean")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("inputNegate"),
              toNode : new SFString("_3"),
              toField : new SFString("set_global")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_5"),
              toField : new SFString("set_boolean")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("inputNegate"),
              toNode : new SFString("_6"),
              toField : new SFString("set_global")})])}))});
console.log(X3D0.toXMLNode());
