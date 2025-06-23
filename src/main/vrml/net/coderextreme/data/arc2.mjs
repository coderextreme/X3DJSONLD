const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "arc2.x3d");
scene.addMetaData("creator", "Lost, Doug Sanden I think");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d");
scene.addMetaData("description", "a generic proto to connect two objects");
await browser .loadComponents (scene);
let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new X3D.SFVec3f([0,0,5]);
Viewpoint8.description = "Only Viewpoint";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new X3D.MFColor([0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "G1";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "DECLpoint_INSTANCE_node";
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.1;
geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material15;

appearance = Appearance14;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

let PositionInterpolator16 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator16.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator16.key = new X3D.MFFloat([0,1]);
PositionInterpolator16.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform11ZZZ.children[1] = PositionInterpolator16;

let Script17 = browser.currentScene.createNode("Script");
Script17.DEF = "DECLpoint_INSTANCE_MB1";
Script18.getField("translation").setValue("0 0 0");
Script17YYY.field = new X3D.MFNode();

Script19.getField("old").setValue("0 0 0");
Script17YYY.field = new X3D.MFNode();

Script20.getField("set_location")Script17YYY.field = new X3D.MFNode();

Script21.getField("keyValue").setValue("0 0 0 0 5 0");
Script17YYY.field = new X3D.MFNode();


Script17.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform11ZZZ.children[2] = Script17;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor22.cycleInterval = 3;
TimeSensor22.loop = True;
Transform11ZZZ.children[3] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE23.toField = "set_location";
Transform11ZZZ.children[4] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE24.toField = "set_fraction";
Transform11ZZZ.children[5] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE25.fromField = "keyValue";
ROUTE25.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE25.toField = "keyValue";
Transform11ZZZ.children[6] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "DECLpoint_INSTANCE_node";
ROUTE26.toField = "set_translation";
Transform11ZZZ.children[7] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "DECLpoint_INSTANCE_node";
ROUTE27.toField = "set_translation";
Transform11ZZZ.children[8] = ROUTE27;

Transform10YYY.children = new X3D.MFNode();

Transform10ZZZ.children[0] = Transform11;

browser.currentScene.children[2] = Transform10;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "G2";
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "DECLpoint_INSTANCE1000_node";
let Shape30 = browser.currentScene.createNode("Shape");
let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 0.1;
geometry = Sphere31;

let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material33;

appearance = Appearance32;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

let PositionInterpolator34 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator34.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator34.key = new X3D.MFFloat([0,1]);
PositionInterpolator34.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform29ZZZ.children[1] = PositionInterpolator34;

let Script35 = browser.currentScene.createNode("Script");
Script35.DEF = "DECLpoint_INSTANCE1000_MB1";
Script36.getField("translation").setValue("0 0 0");
Script35YYY.field = new X3D.MFNode();

Script37.getField("old").setValue("0 0 0");
Script35YYY.field = new X3D.MFNode();

Script38.getField("set_location")Script35YYY.field = new X3D.MFNode();

Script39.getField("keyValue").setValue("0 0 0 0 5 0");
Script35YYY.field = new X3D.MFNode();


Script35.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform29ZZZ.children[2] = Script35;

let TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor40.cycleInterval = 3;
TimeSensor40.loop = True;
Transform29ZZZ.children[3] = TimeSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE41.fromField = "cycleTime";
ROUTE41.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE41.toField = "set_location";
Transform29ZZZ.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE42.toField = "set_fraction";
Transform29ZZZ.children[5] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE43.fromField = "keyValue";
ROUTE43.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE43.toField = "keyValue";
Transform29ZZZ.children[6] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE44.fromField = "value_changed";
ROUTE44.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE44.toField = "set_translation";
Transform29ZZZ.children[7] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE45.fromField = "translation_changed";
ROUTE45.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE45.toField = "set_translation";
Transform29ZZZ.children[8] = ROUTE45;

Transform28YYY.children = new X3D.MFNode();

Transform28ZZZ.children[0] = Transform29;

browser.currentScene.children[3] = Transform28;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "transC1";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "rotscaleC1";
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
Material50.transparency = 0.5;
material = Material50;

appearance = Appearance49;

let Cylinder51 = browser.currentScene.createNode("Cylinder");
Cylinder51.radius = 0.05;
geometry = Cylinder51;

Transform47YYY.child = new X3D.undefined();

Transform47ZZZ.child[0] = Shape48;

Transform46YYY.children = new X3D.MFNode();

Transform46ZZZ.children[0] = Transform47;

browser.currentScene.children[4] = Transform46;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "DECLx3dconnector_connector1_S1";
Script53.getField("startnode")let Transform54 = browser.currentScene.createNode("Transform");
Transform54.USE = "G1";
field53YYY.children = new X3D.MFNode();

field53ZZZ.children[0] = Transform54;

Script52YYY.field = new X3D.MFNode();

Script55.getField("endnode")let Transform56 = browser.currentScene.createNode("Transform");
Transform56.USE = "G2";
field55YYY.children = new X3D.MFNode();

field55ZZZ.children[0] = Transform56;

Script52YYY.field = new X3D.MFNode();

Script57.getField("transC1")let Transform58 = browser.currentScene.createNode("Transform");
Transform58.USE = "transC1";
field57YYY.children = new X3D.MFNode();

field57ZZZ.children[0] = Transform58;

Script52YYY.field = new X3D.MFNode();

Script59.getField("rotscaleC1")let Transform60 = browser.currentScene.createNode("Transform");
Transform60.USE = "rotscaleC1";
field59YYY.children = new X3D.MFNode();

field59ZZZ.children[0] = Transform60;

Script52YYY.field = new X3D.MFNode();

Script61.getField("set_startpoint")Script52YYY.field = new X3D.MFNode();

Script62.getField("set_endpoint")Script52YYY.field = new X3D.MFNode();


Script52.setSourceCode(`ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }`)
browser.currentScene.children[5] = Script52;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "G1";
ROUTE63.fromField = "translation_changed";
ROUTE63.toNode = "DECLx3dconnector_connector1_S1";
ROUTE63.toField = "set_startpoint";
browser.currentScene.children[6] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "G2";
ROUTE64.fromField = "translation_changed";
ROUTE64.toNode = "DECLx3dconnector_connector1_S1";
ROUTE64.toField = "set_endpoint";
browser.currentScene.children[7] = ROUTE64;

}
main ();
