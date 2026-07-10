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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("personal.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://someAddress/somePath/personal.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("John's Portfolio")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Tour Views"),
              position : new SFVec3f([0,0,12])}),

            new Switch({
              DEF : new SFString("SceneSwitcher"),
              whichChoice : new SFInt32(0),
              /*<Inline url='\"../data/myextrusion.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/>*/
              /*<Inline url='\"../data/ballx_ite.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/>*/
              /*<Inline url='\"../data/flower.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/>*/
              /*<Inline url='\"../data/flower3.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/>*/
              /*<Inline url='\"../data/flowers.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/>*/
              /*<Inline url='\"../data/flowers2.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/>*/
              /*<Inline url='\"../data/flowers4.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/>*/
              /*<Inline url='\"../data/flowers7.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>*/
              children : new MFNode([
                new Inline({
                  url : new MFString(["../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"])})])}),
          /*<Script DEF=\"Choice0\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 4 0\">*/
          /*<TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Ball Prism\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice1\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 3 0\">*/
          /*<TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Floating Extrusion\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice2\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 2 0\">*/
          /*<TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flower\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice3\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 1 0\">*/
          /*<TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flower 3\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice4\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]>*/
          /*</Script>*/
          /*<Transform>*/
          /*<TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flowers\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice5\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 -1 0\">*/
          /*<TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flowers 2\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice6\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 -2 0\">*/
          /*<TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flowers 4\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice7\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 -3 0\">*/
          /*<TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Flowers 7\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/
          /*<Script DEF=\"Choice8\">*/
          /*<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>*/
          /*<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>*/
          /*<![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]>*/
          /*</Script>*/
          /*<Transform translation=\"0 -4 0\">*/
          /*<TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"1 1 1\"/>*/
          /*</Appearance>*/
          /*<Text string='\"Force\"'>*/
          /*<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>*/
          /*</Text>*/
          /*</Shape>*/
          /*<Shape>*/
          /*<Appearance>*/
          /*<Material diffuseColor=\"0 0 1\"/>*/
          /*</Appearance>*/
          /*<IndexedFaceSet coordIndex='0 1 2 3 -1'>*/
          /*<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>*/
          /*</IndexedFaceSet>*/
          /*</Shape>*/
          /*</Transform>*/
          /*<ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/>*/
          /*<ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>*/])}))});
console.log(X3D0.toXMLNode());
