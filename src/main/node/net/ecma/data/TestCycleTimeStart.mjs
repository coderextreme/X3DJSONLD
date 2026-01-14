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
var Viewpoint = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var BooleanFilter = require('./x3d.mjs');
var TimeTrigger = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interactive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("TestCycleTimeStart.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Andreas")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe D. Williams")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test design patterns for animation control.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("10 September 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:20:59 GMT")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("TestCycleTimeStart.x3d")}),

            new Viewpoint({
              description : new SFString("hello in there")}),

            new TimeSensor({
              DEF : new SFString("REDTIME1"),
              loop : new SFBool(true),
              stopTime : new SFTime(1757913659.298)}),

            new TimeSensor({
              DEF : new SFString("GREENTIME2"),
              cycleInterval : new SFTime(5),
              startTime : new SFTime(1757913659.298)}),

            new TimeSensor({
              DEF : new SFString("BLUETIME3"),
              cycleInterval : new SFTime(10)}),

            new BooleanFilter({
              DEF : new SFString("GREENFILTER")}),

            new TimeTrigger({
              DEF : new SFString("BLUETRIGGER")}),

            new Transform({
              DEF : new SFString("REDBALL"),
              translation : new SFVec3f([1.615999,0,0]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),

            new Transform({
              DEF : new SFString("GREENBALL"),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,1,0])}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),

            new Transform({
              DEF : new SFString("BLUEBALL"),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,1])}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),

            new PositionInterpolator({
              DEF : new SFString("REDINTERP1"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFVec3f([0,0,0,2,0,0,0,0,0,-2,0,0,0,0,0])}),

            new PositionInterpolator({
              DEF : new SFString("GREENINTERP2"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFVec3f([0,0,0,0,2,0,0,0,0,0,-2,0,0,0,0])}),

            new PositionInterpolator({
              DEF : new SFString("BLUEINTERP3"),
              key : new MFFloat([0,0.25,0.5,0.75,1]),
              keyValue : new MFVec3f([0,0,0,0,-2,0,0,0,0,0,2,0,0,0,0])}),

            new ROUTE({
              fromNode : new SFString("REDTIME1"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("REDTIME1"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("REDTIME1"),
              fromField : new SFString("stopTime_changed"),
              toNode : new SFString("GREENTIME2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("GREENTIME2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("GREENFILTER"),
              toField : new SFString("set_boolean")}),

            new ROUTE({
              fromNode : new SFString("GREENFILTER"),
              fromField : new SFString("inputFalse"),
              toNode : new SFString("BLUETRIGGER"),
              toField : new SFString("set_boolean")}),

            new ROUTE({
              fromNode : new SFString("BLUETRIGGER"),
              fromField : new SFString("triggerTime"),
              toNode : new SFString("BLUETIME3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("REDTIME1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("REDINTERP1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("REDINTERP1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("REDBALL"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("GREENTIME2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("GREENINTERP2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("GREENINTERP2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("GREENBALL"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("BLUETIME3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BLUEINTERP3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BLUEINTERP3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BLUEBALL"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
