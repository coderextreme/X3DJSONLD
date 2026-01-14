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
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var BooleanSequencer = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("WinterAndSpringHumanoidTimings.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example animation timings, manually translated from tool outputs and export.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Katy Schildmeyer")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carol McDonald")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joe Williams")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("2 July 2023")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("9 July 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:21:02 GMT")}),

            new meta({
              name : new SFString("hint"),
              content : new SFString("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Cinema 4D https://www.maxon.net/en/cinema-4d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("WinterAndSpringHumanoidTimings.x3d")}),

            new Viewpoint({
              DEF : new SFString("EntryView1"),
              description : new SFString("Hello characters 1"),
              position : new SFVec3f([0,2,40])}),

            new Viewpoint({
              DEF : new SFString("EntryView2"),
              description : new SFString("Hello characters 2"),
              position : new SFVec3f([-15,10,30]),
              orientation : new SFRotation([0,1,0,-0.643501]),
              centerOfRotation : new SFVec3f([0,10,10])}),

            new Transform({
              DEF : new SFString("TextRoot"),
              translation : new SFVec3f([9.8557,0.95,3.5]),
              child : new SFNode(
                new Shape({
                  DEF : new SFString("ModelDescriptionText"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.960784,0.894118,0])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["This scene tests","","experimental approaches","","for human animation"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          family : new MFString(["SANS"]),
                          style : new SFString("BOLD"),
                          size : new SFFloat(0.8),
                          justify : new MFString(["MIDDLE","MIDDLE"])}))}))}))}),

            new Transform({
              DEF : new SFString("Root4"),
              translation : new SFVec3f([11.3657,0.475,3.377131])}),

            new Transform({
              DEF : new SFString("Root5"),
              translation : new SFVec3f([10.55646,0.475,3.391616])}),

            new Transform({
              DEF : new SFString("Root6"),
              translation : new SFVec3f([9.167682,0.475,3.332752])}),

            new PositionInterpolator({
              DEF : new SFString("Gramps_HumanoidRoot_TranslationInterpolator"),
              key : new MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFVec3f([6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8,16.8558,0.95,15,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5]),
              metadata : new MFNode([
                new MetadataString({
                  name : new SFString("poses"),
                  value : new MFString(["Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"])})])}),

            new PositionInterpolator({
              DEF : new SFString("Leif_HumanoidRoot_TranslationInterpolator"),
              key : new MFFloat([0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFVec3f([-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699]),
              metadata : new MFNode([
                new MetadataString({
                  name : new SFString("poses"),
                  value : new MFString(["Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"])})])}),

            new PositionInterpolator({
              DEF : new SFString("Lily_HumanoidRoot_TranslationInterpolator"),
              key : new MFFloat([0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFVec3f([-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499]),
              metadata : new MFNode([
                new MetadataString({
                  name : new SFString("poses"),
                  value : new MFString(["Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"])})])}),

            new PositionInterpolator({
              DEF : new SFString("Tufani_HumanoidRoot_TranslationInterpolator"),
              key : new MFFloat([0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFVec3f([-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699]),
              metadata : new MFNode([
                new MetadataString({
                  name : new SFString("poses"),
                  value : new MFString(["Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"])})])}),

            new Background({
              DEF : new SFString("Background3Black")}),

            new Background({
              DEF : new SFString("Background4SkyBlueGreenGrass"),
              skyColor : new MFColor([0,0.71,0.886]),
              groundAngle : new MFFloat([1.57]),
              groundColor : new MFColor([0.356863,0.639216,0,0.721569,1,0.501961])}),

            new Background({
              DEF : new SFString("Background5LightGrey"),
              skyColor : new MFColor([0.827,0.827,0.827])}),

            new Background({
              DEF : new SFString("Background6DarkGrey"),
              skyColor : new MFColor([0.6,0.2,0.2])}),

            new TimeSensor({
              DEF : new SFString("Clock10Seconds"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new TimeSensor({
              DEF : new SFString("Clock100Seconds"),
              enabled : new SFBool(false),
              cycleInterval : new SFTime(100)}),

            new BooleanSequencer({
              DEF : new SFString("Background3Sequencer"),
              key : new MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFBool([true,true,true,false,false,false,false,false,false,false,false])}),

            new BooleanSequencer({
              DEF : new SFString("Background4Sequencer"),
              key : new MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFBool([false,false,false,true,true,false,false,false,false,false,false])}),

            new BooleanSequencer({
              DEF : new SFString("Background5Sequencer"),
              key : new MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFBool([false,false,false,false,false,true,true,true,false,false,false])}),

            new BooleanSequencer({
              DEF : new SFString("Background6Sequencer"),
              key : new MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]),
              keyValue : new MFBool([false,false,false,false,false,false,false,false,true,true,true])}),

            new ROUTE({
              fromNode : new SFString("Background3Sequencer"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Background3Black"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("Background4Sequencer"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Background4SkyBlueGreenGrass"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("Background5Sequencer"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Background5LightGrey"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("Background6Sequencer"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Background6DarkGrey"),
              toField : new SFString("set_bind")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background3Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background4Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background5Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background6Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background3Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background4Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background5Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Background6Sequencer"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Gramps_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Leif_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Lily_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock10Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Tufani_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Gramps_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Leif_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Lily_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Clock100Seconds"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Tufani_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Gramps_HumanoidRoot_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TextRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Leif_HumanoidRoot_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Root4"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Lily_HumanoidRoot_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Root5"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Tufani_HumanoidRoot_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Root6"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
